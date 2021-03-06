#ifndef STATUSDEF_H
#define STATUSDEF_H

enum class FileStatus
{
  UPLOADING = 0,
  READY = 1,
  INIT = 99
};

enum class TaskStatus
{
  REGISTERING = 0,
  READY_FOR_META_EXTRACT = 1,
  META_EXTRACTING = 2,
  READY_FOR_EXECUTE = 3,
  EXECUTING = 4,
  DONE_EXECUTE = 5,
  CONCATING = 6,
  DONE_CONCAT = 7,
  DL_RESULT = 8,
  INIT = 99
};

#endif