/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027a61e0; name: FUN_027a61e0
 */


long FUN_027a61e0(long *param_1)

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
    pcVar2 = 
    "gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
    ;
    do {
      if ("static const char *boost::detail::ctti<gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
          [lVar4 + 0x27] == 'T') {
        if (lVar4 == 0x5f) break;
        if ("static const char *boost::detail::ctti<gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
            [lVar4 + 0x28] == ' ') {
          if (lVar4 == 0x5e) break;
          if ("static const char *boost::detail::ctti<gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x5d) break;
            if ("static const char *boost::detail::ctti<gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x60) {
                pcVar2 = 
                "gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
                ;
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<gflnet::beacon::error::ContinueBeaconLoop>::n() [T = gflnet::beacon::error::ContinueBeaconLoop]"
                         + lVar4 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x60);
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


