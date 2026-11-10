/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e94688; name: FUN_01e94688
 */


void FUN_01e94688(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  undefined1 auStack_30 [16];
  
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    pcVar1 = (char *)(**(code **)(**(long **)(param_2 + 8) + 0x10))();
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
      lVar4 = FUN_01e947c0(param_2 + 8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_00cbd7c0(auStack_30,lVar4);
      *param_1 = 0;
      FUN_00cbd7c0(param_1 + 4,auStack_30);
      *param_1 = 1;
      return;
    }
  }
  *param_1 = 0;
  return;
}


