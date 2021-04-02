# Nemesis
**Nemesis**はAWS ECRのコンテナ上で動作する**並列STARS解析環境**です。ネイティブ実行バイナリのSTARSを搭載したコンテナクラスタ上で解析を並列で実行し、長期にわたる実験データであっても解析結果を高速で得ることが可能です。このシステムはAWS上での動作を想定しており、AWS ECR, AWS S3, AWS Lambda, AWS DynamoDBを用いています。いずれもクラウド上で拡張可能な資源であり、システム全体を通して高トラフィックに耐えうる構成となっています。このリポジトリ内の各フォルダの内容は以下の通りです。

- nemesis-executor : ECRコンテナのソースファイルです。C++で記述されており、Dockerコンテナの構成ファイルを含みます。
- nemesis-facade : ECRコンテナを操作するAPI, その実体のLambda関数のソースファイルです。Javascript（Node.js）で記述されており、AWS SAM CLIによるローカル実行環境が構築されています。
- nemesis-front : ウェブブラウザ上で動作するNemesisのWebクライアントです。React.jsを用いて構築しています。S3に対する解析対象ファイルのアップロード、nemesis-facadeを用いた解析の実行や結果の確認、解析結果のファイルのダウンロードが行えます。