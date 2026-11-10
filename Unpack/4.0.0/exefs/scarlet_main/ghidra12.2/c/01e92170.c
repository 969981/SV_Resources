/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e92170; name: FUN_01e92170
 */


long FUN_01e92170(long *param_1)

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
    pcVar2 = "nn::Result>::n() [T = nn::Result]";
    do {
      if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar4 + 0x27]
          == 'T') {
        if (lVar4 == 0x21) break;
        if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar4 + 0x28]
            == ' ') {
          if (lVar4 == 0x20) break;
          if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x1f) break;
            if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x22) {
                pcVar2 = "nn::Result>::n() [T = nn::Result]";
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
                         + lVar4 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x22);
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


