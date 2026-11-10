/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f0f820; name: FUN_01f0f820
 */


long FUN_01f0f820(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  
  lVar4 = 0;
  if (param_1 != (long *)0x0) {
    if ((long *)*param_1 == (long *)0x0) {
      pcVar1 = (char *)FUN_01e92280("void>::n() [T = void]");
    }
    else {
      pcVar1 = (char *)(**(code **)(*(long *)*param_1 + 0x10))();
    }
    lVar4 = 0;
    pcVar2 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
          [lVar4 + 0x27] == 'T') {
        if (lVar4 == 0x3f) break;
        if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
            [lVar4 + 0x28] == ' ') {
          if (lVar4 == 0x3e) break;
          if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x3d) break;
            if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x40) {
                pcVar2 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                         + lVar4 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x40);
    cVar3 = *pcVar1;
    if (cVar3 != '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar2 != cVar3) break;
        cVar3 = *pcVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar3 != '\0');
    }
    if (*pcVar2 == cVar3) {
      lVar4 = *param_1 + 8;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}


