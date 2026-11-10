/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087d080; name: FUN_0087d080
 */


undefined4 FUN_0087d080(uint *param_1,uint *param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar4 = 0x80260201;
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    if (param_3 < 2) {
      if (param_4 == 0) {
        return 0x80260200;
      }
      uVar4 = 0x80260202;
      uVar5 = *param_2;
      if (((uVar5 - 0x40 < 0xc1) && ((uVar5 & 0x3f) == 0)) &&
         (*param_1 = uVar5, param_2[1] == 48000)) {
        param_1[1] = 48000;
        if (param_2[2] < 0xd) {
          param_1[2] = param_2[2];
          uVar5 = param_2[3];
          if ((uVar5 != 0) && (uVar5 <= param_2[2])) {
            param_1[3] = uVar5;
            uVar5 = param_2[4];
            if ((param_2[3] <= uVar5) && ((uVar5 & 3) == 0)) {
              param_1[4] = uVar5;
              param_1[5] = param_2[5];
              uVar1 = param_2[5];
              uVar2 = param_2[3];
              uVar5 = 0;
              param_1[0xe] = 0;
              param_1[0xf] = 0;
              param_1[0x10] = 0;
              param_1[0x11] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[0xc] = 0;
              param_1[0xd] = 0;
              param_1[6] = 0;
              param_1[7] = 0;
              param_1[8] = 0;
              param_1[9] = 0;
              if (uVar1 != 0) {
                uVar8 = 0;
                uVar6 = 0;
                uVar9 = uVar1;
                do {
                  uVar7 = uVar6;
                  if ((uVar8 != 3) && ((uVar9 & 1) != 0)) {
                    iVar3 = 1 << (ulong)(uVar8 & 0x1f);
                    if (iVar3 < 0x200) {
                      uVar5 = 0;
                      switch(iVar3) {
                      case 1:
                        break;
                      case 2:
                        uVar5 = 1;
                        break;
                      default:
                        goto switchD_0087d1c8_caseD_3;
                      case 4:
                        uVar5 = 2;
                        break;
                      case 0x10:
                        uVar5 = 6;
                        break;
                      case 0x20:
                        uVar5 = 7;
                      }
                    }
                    else if (iVar3 < 0x4000) {
                      if (iVar3 == 0x200) {
                        uVar5 = 4;
                      }
                      else if (iVar3 == 0x400) {
                        uVar5 = 5;
                      }
                      else {
                        if (iVar3 != 0x1000) {
                          return 0x80260202;
                        }
                        uVar5 = 8;
                      }
                    }
                    else if (iVar3 == 0x4000) {
                      uVar5 = 9;
                    }
                    else if (iVar3 == 0x8000) {
                      uVar5 = 10;
                    }
                    else {
                      if (iVar3 != 0x20000) {
                        return 0x80260202;
                      }
                      uVar5 = 0xb;
                    }
                    uVar7 = (ulong)((int)uVar6 + 1);
                    param_1[uVar6 + 6] = uVar5;
                  }
                  uVar9 = uVar9 >> 1;
                  uVar5 = (uint)uVar7;
                } while ((uVar9 != 0) && (uVar8 = uVar8 + 1, uVar6 = uVar7, uVar5 < 0xc));
                if ((uVar1 >> 3 & 1) != 0) {
                  uVar5 = uVar5 + 1;
                  param_1[uVar7 + 6] = 3;
                }
              }
              if (uVar5 == uVar2) {
                *(char *)(param_1 + 0x14) = (char)param_2[6];
                iVar3 = FUN_0087d400(param_1,param_3,param_4);
                uVar4 = 0;
                if (iVar3 != 0) {
                  uVar4 = 0x80800005;
                }
                return uVar4;
              }
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x80260205;
    }
  }
switchD_0087d1c8_caseD_3:
  return uVar4;
}


