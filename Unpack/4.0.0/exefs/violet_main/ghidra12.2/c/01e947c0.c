/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e947c0; name: FUN_01e947c0
 */


long FUN_01e947c0(long *param_1)

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
    "nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
    ;
    do {
      if ("static const char *boost::detail::ctti<nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
          [lVar4 + 0x27] == 'T') {
        if (lVar4 == 0x137) break;
        if ("static const char *boost::detail::ctti<nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
            [lVar4 + 0x28] == ' ') {
          if (lVar4 == 0x136) break;
          if ("static const char *boost::detail::ctti<nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
              [lVar4 + 0x29] == '=') {
            if (lVar4 == 0x135) break;
            if ("static const char *boost::detail::ctti<nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
                [lVar4 + 0x2a] == ' ') {
              if (lVar4 == 0x138) {
                pcVar2 = 
                "nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
                ;
              }
              else {
                pcVar2 = "static const char *boost::detail::ctti<nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>>::n() [T = nn::pia::ResultConst<nn::pia::Result::HandlingType_Cleanup, nn::pia::Result::ViewerType_ShouldNotUse, nn::pia::Result::Description_SessionIsNotFound>]"
                         + lVar4 + 0x2b;
              }
              break;
            }
          }
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x138);
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


