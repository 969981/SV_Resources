/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f0f3cc; name: FUN_01f0f3cc
 */


ulong FUN_01f0f3cc(long param_1)

{
  char *pcVar1;
  uint *puVar2;
  char *pcVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_1 + 8) + 0x10))();
    lVar6 = 0;
    pcVar3 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
          [lVar6 + 0x27] == 'T') {
        if (lVar6 == 0x3f) break;
        if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
            [lVar6 + 0x28] == ' ') {
          if (lVar6 == 0x3e) break;
          if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
              [lVar6 + 0x29] == '=') {
            if (lVar6 == 0x3d) break;
            if ("static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                [lVar6 + 0x2a] == ' ') {
              if (lVar6 == 0x40) {
                pcVar3 = "gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]";
              }
              else {
                pcVar3 = "static const char *boost::detail::ctti<gflnet::env::RequestError>::n() [T = gflnet::env::RequestError]"
                         + lVar6 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
    cVar5 = *pcVar1;
    if (cVar5 != '\0') {
      do {
        pcVar1 = pcVar1 + 1;
        if (*pcVar3 != cVar5) break;
        cVar5 = *pcVar1;
        pcVar3 = pcVar3 + 1;
      } while (cVar5 != '\0');
    }
    if (*pcVar3 == cVar5) {
      puVar2 = (uint *)FUN_01f0f6c0(param_1 + 8);
      uVar7 = (ulong)*puVar2 << 0x20;
      uVar4 = 1;
      goto LAB_01f0f4ac;
    }
  }
  uVar4 = 0;
  uVar7 = 0;
LAB_01f0f4ac:
  return uVar7 | uVar4;
}


