/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94464; name: FUN_01e94464
 */


void FUN_01e94464(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar5 = 0;
    pcVar3 = "gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]"
          [lVar5 + 0x27] == 'T') {
        if (lVar5 == 0x3d) break;
        if ("static const char *boost::detail::ctti<gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]"
            [lVar5 + 0x28] == ' ') {
          if (lVar5 == 0x3c) break;
          if ("static const char *boost::detail::ctti<gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]"
              [lVar5 + 0x29] == '=') {
            if (lVar5 == 0x3b) break;
            if ("static const char *boost::detail::ctti<gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]"
                [lVar5 + 0x2a] == ' ') {
              if (lVar5 == 0x3e) {
                pcVar3 = "gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]";
              }
              else {
                pcVar3 = "static const char *boost::detail::ctti<gflnet::npln::NplnResult>::n() [T = gflnet::npln::NplnResult]"
                         + lVar5 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x3e);
    cVar4 = *pcVar1;
    if (cVar4 != '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar3 != cVar4) break;
        cVar4 = *pcVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar4 != '\0');
    }
    if (*pcVar3 == cVar4) {
      puVar2 = (undefined8 *)FUN_01e94580(param_2 + 8);
      if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(param_1 + 4) = *puVar2;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


