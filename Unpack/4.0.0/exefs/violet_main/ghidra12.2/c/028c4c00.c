/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c4c00; name: FUN_028c4c00
 */


void FUN_028c4c00(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  unkuint9 Var3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong local_38;
  
  if ((param_2 < *(ulong *)(param_1 + 0x40)) &&
     ((*(ulong *)(*(long *)(param_1 + 0x38) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) != 0)) {
    return;
  }
  uVar7 = *(long *)(param_1 + 0xa8) - 1;
  if (uVar7 == param_2) {
    do {
      *(ulong *)(param_1 + 0xa8) = uVar7;
      if ((uVar7 == 0) || (uVar7 = uVar7 - 1, *(ulong *)(param_1 + 0x40) <= uVar7)) break;
    } while ((*(ulong *)(*(long *)(param_1 + 0x38) + (uVar7 >> 3 & 0x1ffffffffffffff8)) >>
              (uVar7 & 0x3f) & 1) != 0);
  }
  plVar11 = (long *)(param_1 + 0x70);
  puVar5 = (ulong *)*plVar11;
  lVar6 = *(long *)(param_1 + 0x78) - (long)puVar5;
  local_38 = param_2;
  if (lVar6 != 0) {
    if (lVar6 != 8) {
      uVar7 = lVar6 >> 3;
      if (lVar6 == -8) {
        *(ulong **)(param_1 + 0x78) = puVar5;
LAB_028c4c8c:
        uVar9 = (ulong)((float)uVar7 * 0.5);
        uVar10 = uVar9;
        uVar8 = uVar7;
        uVar1 = uVar7 - uVar9;
        if (puVar5[uVar9] <= param_2) {
          uVar10 = 0;
          uVar8 = uVar9;
          uVar1 = uVar9;
        }
        if (2 < uVar1) {
          uVar9 = uVar10 + (long)((float)uVar1 * 0.5);
          uVar2 = uVar9;
          uVar4 = uVar8 - uVar9;
          if (puVar5[uVar9] <= param_2) {
            uVar2 = uVar10;
            uVar8 = uVar9;
            uVar4 = (long)((float)uVar1 * 0.5);
          }
          uVar10 = uVar2;
          if (2 < uVar4) {
            uVar1 = uVar2 + (long)((float)uVar4 * 0.5);
            uVar10 = uVar1;
            uVar9 = uVar8 - uVar1;
            if (puVar5[uVar1] <= param_2) {
              uVar10 = uVar2;
              uVar8 = uVar1;
              uVar9 = (long)((float)uVar4 * 0.5);
            }
            if (2 < uVar9) {
              uVar1 = uVar10 + (long)((float)uVar9 * 0.5);
              uVar2 = uVar1;
              uVar4 = uVar8 - uVar1;
              if (puVar5[uVar1] <= param_2) {
                uVar2 = uVar10;
                uVar8 = uVar1;
                uVar4 = (long)((float)uVar9 * 0.5);
              }
              uVar10 = uVar2;
              if (2 < uVar4) {
                uVar10 = uVar2 + (long)((float)uVar4 * 0.5);
                uVar1 = uVar10;
                uVar9 = uVar8 - uVar10;
                if (puVar5[uVar10] <= param_2) {
                  uVar1 = uVar2;
                  uVar8 = uVar10;
                  uVar9 = (long)((float)uVar4 * 0.5);
                }
                uVar10 = uVar1;
                if (2 < uVar9) {
                  uVar2 = uVar1 + (long)((float)uVar9 * 0.5);
                  uVar10 = uVar2;
                  uVar4 = uVar8 - uVar2;
                  if (puVar5[uVar2] <= param_2) {
                    uVar10 = uVar1;
                    uVar8 = uVar2;
                    uVar4 = (long)((float)uVar9 * 0.5);
                  }
                  if (2 < uVar4) {
                    uVar1 = uVar10 + (long)((float)uVar4 * 0.5);
                    uVar2 = uVar1;
                    uVar9 = uVar8 - uVar1;
                    if (puVar5[uVar1] <= param_2) {
                      uVar2 = uVar10;
                      uVar8 = uVar1;
                      uVar9 = (long)((float)uVar4 * 0.5);
                    }
                    while (uVar10 = uVar2, 2 < uVar9) {
                      Var3 = (unkuint9)uVar9;
                      uVar1 = uVar10 + (long)((float)(unkint9)Var3 * 0.5);
                      uVar2 = uVar1;
                      uVar9 = uVar8 - uVar1;
                      if (puVar5[uVar1] <= param_2) {
                        uVar2 = uVar10;
                        uVar8 = uVar1;
                        uVar9 = (long)((float)(unkint9)Var3 * 0.5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar10 <= uVar8 && uVar8 < uVar7) {
          while (puVar5[uVar8] <= param_2) {
            uVar8 = uVar8 - 1;
            if ((uVar8 < uVar10) || (uVar7 <= uVar8)) goto LAB_028c4e10;
          }
          uVar8 = uVar8 + 1;
        }
LAB_028c4e10:
        if (uVar8 != uVar7) {
          if (uVar8 < uVar7 && uVar10 <= uVar8) {
            uVar10 = uVar8;
          }
          if (uVar10 + 1 < uVar7 + 1) {
            memmove(puVar5 + uVar10 + 1,puVar5 + uVar10,(uVar7 - uVar10) * 8);
          }
          uVar7 = uVar10;
        }
      }
      else {
        FUN_00c6e61c(plVar11,1);
        if (2 < uVar7) {
          puVar5 = (ulong *)*plVar11;
          goto LAB_028c4c8c;
        }
      }
      *(ulong *)(*plVar11 + uVar7 * 8) = param_2;
      goto LAB_028c4e4c;
    }
    if (*puVar5 <= param_2) {
      FUN_00c6e61c(plVar11,1);
      ((undefined8 *)*plVar11)[1] = *(undefined8 *)*plVar11;
      *(ulong *)*plVar11 = param_2;
      goto LAB_028c4e4c;
    }
  }
  FUN_0103bd9c(plVar11,&local_38);
LAB_028c4e4c:
  if (*(ulong *)(param_1 + 0x40) <= param_2) {
    FUN_00d7684c((long *)(param_1 + 0x38),param_2 + 1,0);
  }
  lVar6 = *(long *)(param_1 + 0x38);
  uVar7 = param_2 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar6 + uVar7) = *(ulong *)(lVar6 + uVar7) | 1L << (param_2 & 0x3f);
  return;
}


