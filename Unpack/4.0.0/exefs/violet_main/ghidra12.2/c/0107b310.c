/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0107b310; name: FUN_0107b310
 */


void FUN_0107b310(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  iVar4 = *(int *)(param_1 + 0x80) + 1;
  *(int *)(param_1 + 0x80) = iVar4;
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
  uVar1 = *(ushort *)(lVar9 + 0x70);
  uVar5 = (ulong)uVar1;
  if ((uVar5 != 0xee) && (uVar6 = *(ulong *)(lVar9 + 0x10), uVar6 != 0)) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
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
    plVar10 = *(long **)(*(long *)(lVar9 + 8) + uVar7 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar5) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0107b3d0;
          }
          else if ((plVar10[1] & uVar6 - 1) != uVar7) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar5) {
            if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0107b3d0;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar2 * uVar6;
            }
            if (uVar8 != uVar7) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_0107b408;
LAB_0107b3d0:
  plVar10 = plVar10 + 3;
  do {
    plVar3 = (long *)FUN_0107b5d8(param_1,param_2,param_3,param_4 & 1,plVar10);
    if (plVar3 == (long *)0x0) break;
    if (*(char *)((long)plVar3 + 0x44) == '\0') {
      plVar3 = (long *)FUN_0107ba54(plVar10[1],*(undefined2 *)((long)plVar10 + 0x14));
    }
    plVar10 = plVar3;
  } while (plVar3 != (long *)0x0);
  iVar4 = *(int *)(param_1 + 0x80);
LAB_0107b408:
  *(int *)(param_1 + 0x80) = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
    uVar1 = *(ushort *)(lVar9 + 0x70);
    uVar5 = (ulong)uVar1;
    if ((uVar5 != 0xee) && (uVar6 = *(ulong *)(lVar9 + 0x10), uVar6 != 0)) {
      uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
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
      plVar10 = *(long **)(*(long *)(lVar9 + 8) + uVar7 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if (plVar10[1] == uVar5) {
              if (*(ushort *)(plVar10 + 2) == uVar1) goto LAB_0107b4a8;
            }
            else if ((plVar10[1] & uVar6 - 1) != uVar7) {
              return;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar10[1];
            if (uVar8 == uVar5) {
              if (*(ushort *)(plVar10 + 2) == uVar1) {
LAB_0107b4a8:
                plVar10 = plVar10 + 3;
                do {
                  *(undefined2 *)((long)plVar10 + 0x3c) = 0;
                  plVar10 = (long *)FUN_0107ba54(plVar10[1],*(undefined2 *)((long)plVar10 + 0x14));
                } while (plVar10 != (long *)0x0);
                return;
              }
            }
            else {
              if (uVar6 <= uVar8) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar8 / uVar6;
                }
                uVar8 = uVar8 - uVar2 * uVar6;
              }
              if (uVar8 != uVar7) {
                return;
              }
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != (long *)0x0);
        }
      }
    }
  }
  return;
}


