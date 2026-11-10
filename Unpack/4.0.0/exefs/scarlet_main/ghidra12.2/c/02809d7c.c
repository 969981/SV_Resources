/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02809d7c; name: FUN_02809d7c
 */


void FUN_02809d7c(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
    lVar5 = 0;
    pcVar3 = "gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]";
    do {
      if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
          [lVar5 + 0x27] == 'T') {
        if (lVar5 == 0x4d) break;
        if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
            [lVar5 + 0x28] == ' ') {
          if (lVar5 == 0x4c) break;
          if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
              [lVar5 + 0x29] == '=') {
            if (lVar5 == 0x4b) break;
            if ("static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
                [lVar5 + 0x2a] == ' ') {
              if (lVar5 == 0x4e) {
                pcVar3 = 
                "gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]";
              }
              else {
                pcVar3 = "static const char *boost::detail::ctti<gflnet::p2p::session::NotMatched>::n() [T = gflnet::p2p::session::NotMatched]"
                         + lVar5 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x4e);
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
      FUN_0280a7d0(param_2 + 8);
      uVar2 = 1;
      goto LAB_02809e54;
    }
  }
  uVar2 = 0;
LAB_02809e54:
  *param_1 = uVar2;
  return;
}


