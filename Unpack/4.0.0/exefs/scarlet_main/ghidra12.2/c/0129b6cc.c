/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0129b6cc; name: FUN_0129b6cc
 */


void FUN_0129b6cc(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar2 = *(ushort *)(param_1 + 0x70);
  uVar5 = (ulong)uVar2;
  if ((uVar5 != 0xee) && (uVar6 = *(ulong *)(param_1 + 0x10), uVar6 != 0)) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar7 < 2) {
      uVar9 = (int)uVar6 - 1 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar6 <= uVar5) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        uVar9 = uVar5 - uVar9 * uVar6;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 8) + uVar9 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar8[1] == uVar5) {
            if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b76c;
          }
          else if ((plVar8[1] & uVar6 - 1) != uVar9) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar5) {
            if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b76c;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  goto LAB_0129b78c;
LAB_0129b838:
  uVar1 = *(uint *)((long)plVar8 + 0x44);
joined_r0x0129b844:
  plVar10 = plVar8 + 3;
  if (uVar1 < *(uint *)(param_2 + 0x2c)) {
    lVar4 = FUN_0129e440(plVar10);
    if (param_2 == 0) {
      *(undefined2 *)(lVar4 + 0x14) = 0xee;
    }
    else {
      *(undefined2 *)(lVar4 + 0x14) = *(undefined2 *)(param_2 + 0x10);
      *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(lVar4 + 0x10);
    }
    *(short *)(param_2 + 0x14) = (short)plVar8[5];
    *(undefined2 *)((long)plVar10 + 0x12) = *(undefined2 *)(param_2 + 0x10);
    return;
  }
  uVar2 = *(ushort *)((long)plVar10 + 0x14);
  uVar5 = (ulong)uVar2;
  if (uVar5 != 0xee) {
    uVar6 = *(ulong *)(plVar8[4] + 0x10);
    if (uVar6 != 0) {
      uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar7 < 2) {
        uVar9 = (int)uVar6 - 1 & uVar5;
      }
      else {
        uVar9 = uVar5;
        if (uVar6 <= uVar5) {
          uVar9 = 0;
          if (uVar6 != 0) {
            uVar9 = uVar5 / uVar6;
          }
          uVar9 = uVar5 - uVar9 * uVar6;
        }
      }
      plVar8 = *(long **)(*(long *)(plVar8[4] + 8) + uVar9 * 8);
      if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
        if (uVar7 < 2) {
          do {
            if (plVar8[1] == uVar5) {
              if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b8d8;
            }
            else if ((plVar8[1] & uVar6 - 1) != uVar9) goto LAB_0129ba88;
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_0129ba88;
          } while( true );
        }
        do {
          uVar7 = plVar8[1];
          if (uVar7 == uVar5) {
            if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b8d8;
          }
          else {
            if (uVar6 <= uVar7) {
              uVar3 = 0;
              if (uVar6 != 0) {
                uVar3 = uVar7 / uVar6;
              }
              uVar7 = uVar7 - uVar3 * uVar6;
            }
            if (uVar7 != uVar9) break;
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) break;
        } while( true );
      }
    }
  }
  goto LAB_0129ba88;
LAB_0129b8d8:
  uVar1 = *(uint *)((long)plVar8 + 0x44);
  goto joined_r0x0129b844;
LAB_0129b76c:
  if (*(uint *)(param_2 + 0x2c) <= *(uint *)((long)plVar8 + 0x44)) {
    uVar2 = *(ushort *)((long)plVar8 + 0x2c);
    uVar5 = (ulong)uVar2;
    plVar10 = plVar8 + 3;
    if (uVar5 != 0xee) {
      uVar6 = *(ulong *)(plVar8[4] + 0x10);
      if (uVar6 != 0) {
        uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
        uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar7 < 2) {
          uVar9 = (int)uVar6 - 1 & uVar5;
        }
        else {
          uVar9 = uVar5;
          if (uVar6 <= uVar5) {
            uVar9 = 0;
            if (uVar6 != 0) {
              uVar9 = uVar5 / uVar6;
            }
            uVar9 = uVar5 - uVar9 * uVar6;
          }
        }
        plVar8 = *(long **)(*(long *)(plVar8[4] + 8) + uVar9 * 8);
        if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
          if (uVar7 < 2) {
            do {
              if (plVar8[1] == uVar5) {
                if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b838;
              }
              else if ((plVar8[1] & uVar6 - 1) != uVar9) break;
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
          else {
            do {
              uVar7 = plVar8[1];
              if (uVar7 == uVar5) {
                if (*(ushort *)(plVar8 + 2) == uVar2) goto LAB_0129b838;
              }
              else {
                if (uVar6 <= uVar7) {
                  uVar3 = 0;
                  if (uVar6 != 0) {
                    uVar3 = uVar7 / uVar6;
                  }
                  uVar7 = uVar7 - uVar3 * uVar6;
                }
                if (uVar7 != uVar9) break;
              }
              plVar8 = (long *)*plVar8;
            } while (plVar8 != (long *)0x0);
          }
LAB_0129ba88:
          if (param_2 == 0) {
            *(undefined2 *)((long)plVar10 + 0x14) = 0xee;
            return;
          }
        }
      }
    }
    *(undefined2 *)((long)plVar10 + 0x14) = *(undefined2 *)(param_2 + 0x10);
    *(short *)(param_2 + 0x12) = (short)plVar10[2];
    return;
  }
  *(short *)(param_2 + 0x14) = (short)plVar8[5];
  *(undefined2 *)((long)plVar8 + 0x2a) = *(undefined2 *)(param_2 + 0x10);
LAB_0129b78c:
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x10);
  return;
}


