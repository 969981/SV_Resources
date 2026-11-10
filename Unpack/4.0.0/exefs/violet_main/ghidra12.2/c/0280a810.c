/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0280a810; name: FUN_0280a810
 */


long FUN_0280a810(long *param_1)

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
    pcVar2 = "gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
          [lVar4 + 0x27] == 'T') {
        if (lVar4 == 0x4d) break;
        if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
            [lVar4 + 0x28] == ' ') {
          if (lVar4 == 0x4c) break;
          if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x4b) break;
            if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x4e) {
                pcVar2 = 
                "gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]";
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
                         + lVar4 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x4e);
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


