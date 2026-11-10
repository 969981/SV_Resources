/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109e650; name: FUN_0109e650
 */


short * FUN_0109e650(undefined8 param_1,long param_2,short *param_3)

{
  short sVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  ushort uVar9;
  byte local_44 [4];
  
  if (*param_3 == 0x10) {
    uVar9 = param_3[1];
    uVar5 = (ulong)uVar9;
    if ((uVar5 != 0) && (uVar9 != 1)) {
      if ((ushort)(uVar9 - 1) < 4) {
        sVar1 = param_3[3];
        uVar2 = (ushort)(uVar9 - 1) - 1;
        uVar3 = FUN_0109e33c(param_3);
        uVar4 = FUN_02173618(param_1,uVar3,sVar1);
        if (uVar2 * 2 <= uVar4) {
          uVar4 = 0;
        }
        local_44[0] = 0;
        local_44[1] = 0;
        local_44[2] = 0;
        local_44[3] = 0;
        if (uVar2 != 0) {
          sVar1 = *param_3;
          uVar6 = 1;
          uVar5 = 0;
          do {
            uVar7 = uVar5 + 1;
            if (sVar1 == 0x10) {
              uVar9 = param_3[1];
              if (uVar9 == 0) {
                uVar8 = 0;
              }
              else {
                if (uVar9 - 1 <= (uint)uVar7) goto LAB_0109e81c;
                uVar8 = param_3[(int)uVar5 + 4];
                uVar9 = uVar8 >> 8;
              }
            }
            else {
LAB_0109e81c:
              uVar8 = 0;
              uVar9 = 0;
            }
            local_44[uVar6 - 1] = (byte)uVar8;
            local_44[uVar6] = (byte)uVar9;
            uVar6 = uVar6 + 2;
            uVar5 = uVar7;
            if (uVar2 == uVar7) {
              if (sVar1 == 0x10) {
                param_3 = param_3 + (ulong)(ushort)param_3[1] + 2;
              }
              uVar5 = 0;
              do {
                if (uVar5 == uVar4) {
                  uVar6 = (uint)local_44[uVar4];
                  if (local_44[uVar4] != 0) {
                    do {
                      if (*(char *)(param_2 + 0x54) != '\0') {
                        uVar9 = *(ushort *)(param_2 + 0x52);
                        uVar7 = (ulong)uVar9;
                        sVar1 = *param_3;
                        if (uVar9 + 1 < (uint)*(ushort *)(param_2 + 0x50)) {
                          *(ushort *)(param_2 + 0x52) = uVar9 + 1;
                          *(short *)(*(long *)(param_2 + 0x30) + uVar7 * 2) = sVar1;
                          uVar7 = (ulong)*(ushort *)(param_2 + 0x52);
                        }
                        else {
                          if ((sVar1 != 0) || (uVar9 + 1 != (uint)*(ushort *)(param_2 + 0x50)))
                          goto LAB_0109e7b0;
                          *(ushort *)(param_2 + 0x52) = uVar9 + 1;
                        }
                        *(undefined2 *)(*(long *)(param_2 + 0x30) + uVar7 * 2) = 0;
                      }
LAB_0109e7b0:
                      param_3 = param_3 + 1;
                      uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                  }
                }
                else if (uVar5 < 4) {
                  param_3 = param_3 + local_44[uVar5];
                }
                uVar5 = uVar5 + 1;
                if (uVar5 == uVar2 * 2) {
                  return param_3;
                }
              } while( true );
            }
          } while( true );
        }
        if (*param_3 != 0x10) {
          return param_3;
        }
        uVar5 = (ulong)(ushort)param_3[1];
      }
      param_3 = param_3 + uVar5 + 2;
    }
  }
  return param_3;
}


