/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292c938; name: FUN_0292c938
 */


undefined8 FUN_0292c938(long param_1,uint param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar1 = *(ushort *)(param_1 + 0x70);
  uVar4 = (ulong)uVar1;
  if ((uVar4 != 0xee) && (uVar5 = *(ulong *)(param_1 + 0x10), uVar5 != 0)) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar4;
    }
    else {
      uVar7 = uVar4;
      if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0292c9e0;
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) {
            return 0;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (*(ushort *)(plVar8 + 2) == uVar1) {
LAB_0292c9e0:
LAB_0292c9e8:
              if (((char)plVar8[8] == '\x02') &&
                 (uVar3 = FUN_0107bb74(plVar8 + 3), param_4 == (uVar3 & 0xffff))) {
                if (*(uint *)((long)plVar8 + 0x4c) == (param_2 & 0xff)) {
                  *(uint *)((long)plVar8 + 0x4c) = param_3 & 0xff;
                }
                else if (*(uint *)((long)plVar8 + 0x4c) == (param_3 & 0xff)) {
                  *(uint *)((long)plVar8 + 0x4c) = param_2 & 0xff;
                }
              }
              uVar1 = *(ushort *)((long)plVar8 + 0x2c);
              uVar4 = (ulong)uVar1;
              if (uVar4 == 0xee) {
                return 0;
              }
              uVar5 = *(ulong *)(plVar8[4] + 0x10);
              if (uVar5 == 0) {
                return 0;
              }
              uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
              uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
              uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar6 < 2) {
                uVar7 = (int)uVar5 - 1 & uVar4;
              }
              else {
                uVar7 = uVar4;
                if (uVar5 <= uVar4) {
                  uVar7 = 0;
                  if (uVar5 != 0) {
                    uVar7 = uVar4 / uVar5;
                  }
                  uVar7 = uVar4 - uVar7 * uVar5;
                }
              }
              plVar8 = *(long **)(*(long *)(plVar8[4] + 8) + uVar7 * 8);
              if (plVar8 == (long *)0x0) {
                return 0;
              }
              plVar8 = (long *)*plVar8;
              if (plVar8 == (long *)0x0) {
                return 0;
              }
              if (uVar6 < 2) {
                do {
                  if (plVar8[1] == uVar4) {
                    if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0292c9e8;
                  }
                  else if ((plVar8[1] & uVar5 - 1) != uVar7) {
                    return 0;
                  }
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) {
                    return 0;
                  }
                } while( true );
              }
              do {
                uVar6 = plVar8[1];
                if (uVar6 == uVar4) {
                  if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0292c9e8;
                }
                else {
                  if (uVar5 <= uVar6) {
                    uVar2 = 0;
                    if (uVar5 != 0) {
                      uVar2 = uVar6 / uVar5;
                    }
                    uVar6 = uVar6 - uVar2 * uVar5;
                  }
                  if (uVar6 != uVar7) {
                    return 0;
                  }
                }
                plVar8 = (long *)*plVar8;
                if (plVar8 == (long *)0x0) {
                  return 0;
                }
              } while( true );
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return 0;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return 0;
}


