/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078fb00; name: FUN_0078fb00
 */


void FUN_0078fb00(undefined2 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  undefined1 uVar8;
  undefined4 local_2c;
  undefined8 local_28;
  
  memset(param_1,0xff,0x450);
  *param_1 = 0x20;
  *(undefined1 *)((long)param_1 + 3) = 1;
  uVar3 = FUN_00791cec();
  *(undefined4 *)(param_1 + 4) = 0x4e55b9db;
  param_1[2] = uVar3;
  *(undefined8 *)(param_1 + 8) = 0xd030000061401ff;
  *(undefined8 *)(param_1 + 0xc) = 0x10000ffffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x12] = 0x301;
  *(undefined1 *)(param_1 + 0x13) = 4;
  *(undefined4 *)(param_1 + 0x50) = 0xf54d;
  local_28 = nn::oe::GetDesiredLanguage();
  local_2c = 0;
  uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
  uVar8 = 0;
  if ((uVar5 & 1) == 0) {
    local_2c = 1;
    uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
    uVar8 = 1;
    if ((uVar5 & 1) == 0) {
      uVar8 = 2;
      local_2c = 2;
      uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
      if ((uVar5 & 1) == 0) {
        uVar8 = 3;
        local_2c = 3;
        uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
        if ((uVar5 & 1) == 0) {
          uVar8 = 4;
          local_2c = 4;
          uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
          if ((uVar5 & 1) == 0) {
            uVar8 = 5;
            local_2c = 5;
            uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
            if ((uVar5 & 1) == 0) {
              uVar8 = 6;
              local_2c = 6;
              uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
              if ((uVar5 & 1) == 0) {
                uVar8 = 7;
                local_2c = 7;
                uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
                if ((uVar5 & 1) == 0) {
                  uVar8 = 8;
                  local_2c = 8;
                  uVar5 = nn::settings::operator==((Language *)&local_2c,(LanguageCode *)&local_28);
                  if ((uVar5 & 1) == 0) {
                    uVar8 = 9;
                    local_2c = 9;
                    uVar5 = nn::settings::operator==
                                      ((Language *)&local_2c,(LanguageCode *)&local_28);
                    if ((uVar5 & 1) == 0) {
                      uVar8 = 10;
                      local_2c = 10;
                      uVar5 = nn::settings::operator==
                                        ((Language *)&local_2c,(LanguageCode *)&local_28);
                      if ((uVar5 & 1) == 0) {
                        uVar8 = 0xb;
                        local_2c = 0xb;
                        uVar5 = nn::settings::operator==
                                          ((Language *)&local_2c,(LanguageCode *)&local_28);
                        if ((uVar5 & 1) == 0) {
                          uVar8 = 0xc;
                          local_2c = 0xc;
                          uVar5 = nn::settings::operator==
                                            ((Language *)&local_2c,(LanguageCode *)&local_28);
                          if ((uVar5 & 1) == 0) {
                            uVar8 = 0xd;
                            local_2c = 0xd;
                            uVar5 = nn::settings::operator==
                                              ((Language *)&local_2c,(LanguageCode *)&local_28);
                            if ((uVar5 & 1) == 0) {
                              uVar8 = 0xe;
                              local_2c = 0xe;
                              uVar5 = nn::settings::operator==
                                                ((Language *)&local_2c,(LanguageCode *)&local_28);
                              if ((uVar5 & 1) == 0) {
                                local_2c = 0xf;
                                uVar5 = nn::settings::operator==
                                                  ((Language *)&local_2c,(LanguageCode *)&local_28);
                                uVar8 = 0xf;
                                if ((uVar5 & 1) == 0) {
                                  uVar8 = 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x9b) = uVar8;
  uVar4 = FUN_00793930();
  *(undefined4 *)(param_1 + 0x4e) = uVar4;
  puVar1 = PTR_DAT_047d0978;
  cVar6 = *PTR_DAT_047d0978;
  if (cVar6 != '\0') {
    lVar2 = 0;
    do {
      lVar7 = lVar2;
      *(char *)((long)param_1 + lVar7 + 0x27) = cVar6;
      if (lVar7 == 0x12) break;
      cVar6 = puVar1[lVar7 + 1];
      lVar2 = lVar7 + 1;
    } while (cVar6 != '\0');
    *(undefined1 *)((long)param_1 + lVar7 + 0x28) = 0;
  }
  return;
}


