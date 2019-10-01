#define LOG(LEVEL, VAR) Logger.getInstance().log(LEVEL, #VAR, VAR)

class Logger
{
public:
  Logger()
  {
    
  }

  ~Logger()
  {
    
  }

  void log(int level, char *message)
  {
    printf(message);
  }

  void log(int level, char *variable, char *value) {
    char message[128] = { 0 };
    snprintf(message, sizeof(message), "%s = %s\n", variable, value);
    log(level, message);
  }

  void log(int level, char *variable, int64_t value) {
    char message[128] = { 0 };
    snprintf(message, sizeof(message), "%s = %lld\n", variable, value);
    log(level, message);
  }

  void log(int level, char *variable, uint64_t value) {
    char message[128] = { 0 };
    snprintf(message, sizeof(message), "%s = %llu\n", variable, value);
    log(level, message);
  }

  void log(int level, char *variable, int8_t value) {
    log(level, variable, (int64_t) value);
  }

  void log(int level, char *variable, int16_t value) {
    log(level, variable, (int64_t) value);
  }

  void log(int level, char *variable, int32_t value) {
    log(level, variable, (int64_t) value);
  }

  void log(int level, char *variable, uint8_t value) {
    log(level, variable, (uint64_t) value);
  }

  void log(int level, char *variable, uint16_t value) {
    log(level, variable, (uint64_t) value);
  }

  void log(int level, char *variable, uint32_t value) {
    log(level, variable, (uint64_t) value);
  }

};
