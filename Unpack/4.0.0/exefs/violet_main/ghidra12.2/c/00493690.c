/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00493690; name: FUN_00493690
 */


undefined8 FUN_00493690(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *__s2;
  undefined **ppuVar7;
  
  lVar3 = FUN_0049b0f0(param_2);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar1 = FUN_0047e430(lVar3);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar4 = FUN_0047e450(lVar3,iVar1);
          __s2 = *(char **)(lVar4 + 8);
          lVar4 = *param_1;
          if (lVar4 == 0) {
            lVar4 = FUN_003e5060();
            *param_1 = lVar4;
            if (lVar4 == 0) goto LAB_004936c4;
          }
          iVar2 = strcmp("unused",__s2);
          if (iVar2 == 0) {
            ppuVar7 = &PTR_s_Unused_044c17e0;
            puVar5 = &DAT_044c17d8;
          }
          else {
            iVar2 = strcmp("keyCompromise",__s2);
            if (iVar2 == 0) {
              ppuVar7 = &PTR_s_Key_Compromise_044c17f8;
              puVar5 = &DAT_044c17f0;
            }
            else {
              iVar2 = strcmp("CACompromise",__s2);
              if (iVar2 == 0) {
                ppuVar7 = &PTR_s_CA_Compromise_044c1810;
                puVar5 = &DAT_044c1808;
              }
              else {
                iVar2 = strcmp("affiliationChanged",__s2);
                if (iVar2 == 0) {
                  puVar5 = &DAT_044c1820;
                }
                else {
                  iVar2 = strcmp("superseded",__s2);
                  if (iVar2 == 0) {
                    puVar5 = &DAT_044c1838;
                  }
                  else {
                    iVar2 = strcmp("cessationOfOperation",__s2);
                    if (iVar2 == 0) {
                      puVar5 = &DAT_044c1850;
                    }
                    else {
                      iVar2 = strcmp("certificateHold",__s2);
                      if (iVar2 == 0) {
                        puVar5 = &DAT_044c1868;
                      }
                      else {
                        iVar2 = strcmp("privilegeWithdrawn",__s2);
                        if (iVar2 == 0) {
                          puVar5 = &DAT_044c1880;
                        }
                        else {
                          iVar2 = strcmp("AACompromise",__s2);
                          if (iVar2 != 0) goto LAB_004936c4;
                          puVar5 = &DAT_044c1898;
                        }
                      }
                    }
                  }
                }
                ppuVar7 = (undefined **)(puVar5 + 2);
              }
            }
          }
          iVar2 = FUN_003e3690(lVar4,*puVar5,1);
          if ((iVar2 == 0) || (*ppuVar7 == (undefined *)0x0)) goto LAB_004936c4;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_0047e430(lVar3);
        } while (iVar1 < iVar2);
      }
      uVar6 = 1;
    }
    else {
LAB_004936c4:
      uVar6 = 0;
    }
    FUN_0047e3b0(lVar3,PTR_LAB_047cd418);
  }
  return uVar6;
}


