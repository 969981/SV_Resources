/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017cf404; name: FUN_017cf404
 */


undefined4 FUN_017cf404(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 local_24;
  undefined8 local_8;
  
  local_8 = nn::oe::GetDesiredLanguage();
  local_24 = 0;
  uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
    local_24 = 1;
    uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
      local_24 = 2;
      uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
        local_24 = 3;
        uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
        if ((uVar1 & 1) == 0) {
          uVar2 = 4;
          local_24 = 4;
          uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
          if ((uVar1 & 1) == 0) {
            uVar2 = 5;
            local_24 = 5;
            uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
            if ((uVar1 & 1) == 0) {
              local_24 = 0xf;
              uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
              if ((uVar1 & 1) == 0) {
                uVar2 = 7;
                local_24 = 7;
                uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
                if ((uVar1 & 1) == 0) {
                  uVar2 = 8;
                  local_24 = 8;
                  uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24);
                  if ((uVar1 & 1) == 0) {
                    uVar2 = 9;
                    local_24 = 9;
                    uVar1 = nn::settings::operator==((LanguageCode *)&local_8,(Language *)&local_24)
                    ;
                    if ((uVar1 & 1) == 0) {
                      uVar2 = 10;
                      local_24 = 10;
                      uVar1 = nn::settings::operator==
                                        ((LanguageCode *)&local_8,(Language *)&local_24);
                      if ((uVar1 & 1) == 0) {
                        local_24 = 0x10;
                        uVar1 = nn::settings::operator==
                                          ((LanguageCode *)&local_8,(Language *)&local_24);
                        if ((uVar1 & 1) == 0) {
                          uVar2 = 0xc;
                          local_24 = 0xc;
                          uVar1 = nn::settings::operator==
                                            ((LanguageCode *)&local_8,(Language *)&local_24);
                          if ((uVar1 & 1) == 0) {
                            uVar2 = 0xd;
                            local_24 = 0xd;
                            uVar1 = nn::settings::operator==
                                              ((LanguageCode *)&local_8,(Language *)&local_24);
                            if ((uVar1 & 1) == 0) {
                              local_24 = 0xe;
                              uVar1 = nn::settings::operator==
                                                ((LanguageCode *)&local_8,(Language *)&local_24);
                              uVar2 = 0xe;
                              if ((uVar1 & 1) == 0) {
                                uVar2 = 1;
                              }
                            }
                          }
                        }
                        else {
                          uVar2 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
              else {
                uVar2 = 6;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}


