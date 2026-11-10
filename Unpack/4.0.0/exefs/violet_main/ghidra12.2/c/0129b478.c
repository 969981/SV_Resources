/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0129b478; name: FUN_0129b478
 */


long * FUN_0129b478(long param_1,char param_2,int param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = *(ushort *)(param_1 + 0x70);
  uVar5 = (ulong)uVar1;
  if ((uVar5 != 0xee) && (uVar6 = *(ulong *)(param_1 + 0x10), uVar6 != 0)) {
    uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar7 = (int)uVar6 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar6 <= uVar5) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = uVar5 / uVar6;
        }
        uVar7 = uVar5 - uVar7 * uVar6;
      }
    }
    plVar4 = *(long **)(*(long *)(param_1 + 8) + uVar7 * 8);
    if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar4[1] == uVar5) {
            if (*(ushort *)(plVar4 + 2) == uVar1) goto LAB_0129b508;
          }
          else if ((plVar4[1] & uVar6 - 1) != uVar7) {
            return (long *)0x0;
          }
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        uVar3 = plVar4[1];
        if (uVar3 == uVar5) {
          if (*(ushort *)(plVar4 + 2) == uVar1) {
LAB_0129b508:
            if ((((*(char *)((long)plVar4 + 0x5c) != '\0') && ((char)plVar4[8] == param_2)) &&
                (*(int *)((long)plVar4 + 0x4c) == param_3)) &&
               (*(char *)((long)plVar4 + 0x59) == '\0')) {
              return plVar4 + 3;
            }
            uVar1 = *(ushort *)((long)plVar4 + 0x2c);
            uVar5 = (ulong)uVar1;
            if (uVar5 == 0xee) {
              return (long *)0x0;
            }
            uVar6 = *(ulong *)(plVar4[4] + 0x10);
            if (uVar6 == 0) {
              return (long *)0x0;
            }
            uVar3 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
            uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
            uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar3 < 2) {
              uVar7 = (int)uVar6 - 1 & uVar5;
            }
            else {
              uVar7 = uVar5;
              if (uVar6 <= uVar5) {
                uVar7 = 0;
                if (uVar6 != 0) {
                  uVar7 = uVar5 / uVar6;
                }
                uVar7 = uVar5 - uVar7 * uVar6;
              }
            }
            plVar4 = *(long **)(*(long *)(plVar4[4] + 8) + uVar7 * 8);
            if (plVar4 == (long *)0x0) {
              return (long *)0x0;
            }
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              return (long *)0x0;
            }
            if (uVar3 < 2) {
              do {
                if (plVar4[1] == uVar5) {
                  if (*(ushort *)(plVar4 + 2) == uVar1) goto LAB_0129b508;
                }
                else if ((plVar4[1] & uVar6 - 1) != uVar7) {
                  return (long *)0x0;
                }
                plVar4 = (long *)*plVar4;
                if (plVar4 == (long *)0x0) {
                  return (long *)0x0;
                }
              } while( true );
            }
            do {
              uVar3 = plVar4[1];
              if (uVar3 == uVar5) {
                if (*(ushort *)(plVar4 + 2) == uVar1) goto LAB_0129b508;
              }
              else {
                if (uVar6 <= uVar3) {
                  uVar2 = 0;
                  if (uVar6 != 0) {
                    uVar2 = uVar3 / uVar6;
                  }
                  uVar3 = uVar3 - uVar2 * uVar6;
                }
                if (uVar3 != uVar7) {
                  return (long *)0x0;
                }
              }
              plVar4 = (long *)*plVar4;
              if (plVar4 == (long *)0x0) {
                return (long *)0x0;
              }
            } while( true );
          }
        }
        else {
          if (uVar6 <= uVar3) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar3 / uVar6;
            }
            uVar3 = uVar3 - uVar2 * uVar6;
          }
          if (uVar3 != uVar7) {
            return (long *)0x0;
          }
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


