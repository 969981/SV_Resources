/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db94b4; name: FUN_00db94b4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00db94b4(long param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    uVar4 = (uint)*(ulong *)(param_1 + 0x10);
    if (((*(ulong *)(param_1 + 0x10) & 1) != 0) &&
       (plVar3 = *(long **)(param_1 + 0x18), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined8 *)(param_1 + 8),param_2,0);
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 1 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0x38), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0xdc));
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 2 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0x58), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0xdc));
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 3 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0x78), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0xdc));
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 4 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0x98), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0xdc));
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 5 & 1) != 0) && (plVar3 = *(long **)(param_1 + 0xb8), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00db9634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x30))
                (plVar3,*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0xdc));
      return;
    }
  }
  else if (*(int *)(param_1 + 0xdc) == 1) {
    uVar4 = (uint)*(ulong *)(param_1 + 0x10);
    if (((*(ulong *)(param_1 + 0x10) & 1) != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      FUN_00db9848(*(long *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),param_2,1);
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x10);
    }
    if (((uVar4 >> 3 & 1) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x78) + 0x40);
      pcVar1 = (code *)&LAB_02e4cbc0;
      if (*(int *)(param_1 + 0xdc) != 0) {
        pcVar1 = FUN_02e4cbd0;
      }
      if (plVar3 != (long *)0x0) {
        lVar12 = (long)*(int *)(*(long *)(param_1 + 8) + 0x194);
        do {
          plVar13 = *(long **)(plVar3[6] + lVar12 * 0x68 + 0x30);
          if (plVar13 != (long *)0x0) {
LAB_00db971c:
            if (*(char *)plVar13[7] != '\0') {
              piVar5 = *(int **)(param_2 + 0x1c8);
              if ((((piVar5 != (int *)0x0) && (4 < *(ushort *)((long)piVar5 - (long)*piVar5))) &&
                  (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar7 != 0)) &&
                 (*(char *)((long)piVar5 + uVar7) != '\0')) {
                if ((*(long *)(param_2 + 0x228) != 0) &&
                   (uVar7 = *(ulong *)(param_2 + 0x1d8), uVar7 != 0)) {
                  uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
                  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
                  uVar6 = plVar13[6];
                  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar8 < 2) {
                    uVar9 = uVar7 - 1 & uVar6;
                  }
                  else if (uVar6 < uVar7) {
                    uVar9 = uVar6;
                  }
                  else {
                    uVar9 = 0;
                    if (uVar7 != 0) {
                      uVar9 = uVar6 / uVar7;
                    }
                    uVar9 = uVar6 - uVar9 * uVar7;
                  }
                  puVar10 = *(undefined8 **)(*(long *)(param_2 + 0x1d0) + uVar9 * 8);
                  if ((puVar10 != (undefined8 *)0x0) &&
                     (plVar11 = (long *)*puVar10, plVar11 != (long *)0x0)) {
                    if (uVar8 < 2) {
                      do {
                        if (plVar11[1] == uVar6) {
                          if (plVar11[2] == uVar6) goto LAB_00db96dc;
                        }
                        else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
                        plVar11 = (long *)*plVar11;
                      } while (plVar11 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar8 = plVar11[1];
                        if (uVar8 == uVar6) {
                          if (plVar11[2] == uVar6) goto LAB_00db96dc;
                        }
                        else {
                          if (uVar7 <= uVar8) {
                            uVar2 = 0;
                            if (uVar7 != 0) {
                              uVar2 = uVar8 / uVar7;
                            }
                            uVar8 = uVar8 - uVar2 * uVar7;
                          }
                          if (uVar8 != uVar9) break;
                        }
                        plVar11 = (long *)*plVar11;
                      } while (plVar11 != (long *)0x0);
                    }
                  }
                }
                goto LAB_00db9714;
              }
              goto LAB_00db96e8;
            }
            goto LAB_00db9714;
          }
LAB_00db968c:
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return;
    }
  }
  return;
LAB_00db96dc:
  if (plVar11[7] == uVar6) {
LAB_00db96e8:
    uVar14 = 0;
    if (0.0 < *(float *)((long)plVar13 + 0x54)) {
      uVar14 = (undefined4)plVar13[0xb];
    }
    (*pcVar1)(uVar14,plVar13[0xc]);
    *(uint *)(plVar3[lVar12 + 0xd] + 0x158) = *(uint *)(plVar3[lVar12 + 0xd] + 0x158) | 0x20;
  }
LAB_00db9714:
  plVar13 = (long *)*plVar13;
  if (plVar13 == (long *)0x0) goto LAB_00db968c;
  goto LAB_00db971c;
}


