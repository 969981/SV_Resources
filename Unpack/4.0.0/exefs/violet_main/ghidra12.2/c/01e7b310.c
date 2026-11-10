/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e7b310; name: FUN_01e7b310
 */


void FUN_01e7b310(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar5 = 0;
    pcVar3 = "nn::Result>::n() [T = nn::Result]";
    do {
      if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar5 + 0x27]
          == 'T') {
        if (lVar5 == 0x21) break;
        if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"[lVar5 + 0x28]
            == ' ') {
          if (lVar5 == 0x20) break;
          if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
              [lVar5 + 0x29] == '=') {
            if (lVar5 == 0x1f) break;
            if ("static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
                [lVar5 + 0x2a] == ' ') {
              if (lVar5 == 0x22) {
                pcVar3 = "nn::Result>::n() [T = nn::Result]";
              }
              else {
                pcVar3 = "static const char *boost::detail::ctti<nn::Result>::n() [T = nn::Result]"
                         + lVar5 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x22);
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
      puVar2 = (undefined4 *)FUN_01e7b4e0(param_2 + 8);
      *(undefined4 *)(param_1 + 4) = *puVar2;
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


