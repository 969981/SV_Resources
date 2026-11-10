/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03087658; name: FUN_03087658
 */


void FUN_03087658(long param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  int local_70 [2];
  uint local_68 [2];
  
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar3) = 0xffffffff;
      lVar11 = *(long *)(param_1 + 0x50) + lVar3;
      lVar3 = lVar3 + 8;
      *(undefined4 *)(lVar11 + 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x58));
  }
  lVar3 = *(long *)(param_2 + 0x38) + (long)*(int *)(param_1 + 0x94) * 0x100;
  iVar2 = *(int *)(lVar3 + 0xb8);
  if (iVar2 != 0) {
    lVar3 = *(long *)(lVar3 + 0xb0);
    lVar5 = lVar3 + (long)iVar2 * 8;
    lVar11 = *(long *)(param_2 + 0x48);
    do {
      lVar12 = *(long *)(*(long *)(lVar11 + (long)*(int *)(lVar3 + 4) * 0x18) + 0x20);
      if (*(int *)(lVar12 + 0x18) == *(int *)(param_1 + 0x90)) {
        if (0 < (int)*(uint *)(param_2 + 0x40)) {
          lVar7 = 0;
          lVar4 = 0;
          piVar9 = (int *)(*(long *)(param_2 + 0x38) + 0x1c);
          do {
            if ((*piVar9 == *(int *)(lVar12 + 0x1c)) && (*(long *)(piVar9 + -5) != 0)) {
              if ((int)lVar7 != 1) {
                lVar4 = *(long *)(*(long *)(param_2 + 0x38) + (lVar4 >> 0x18) + 8);
                if (lVar4 == 0) {
                  lVar4 = 0;
                }
                else if (*(char *)(lVar4 + 0x30) == '\x01') {
                  lVar4 = *(long *)(lVar4 + 0x20);
                }
                else {
                  lVar4 = FUN_0307da18();
                }
                if (*(int *)(lVar12 + 0x48) != 0) {
                  puVar13 = *(uint **)(lVar12 + 0x40);
                  puVar1 = puVar13 + (long)*(int *)(lVar12 + 0x48) * 2;
                  do {
                    if (*(int *)(lVar4 + 0x48) != 0) {
                      iVar2 = *(int *)(*(long *)(lVar4 + 0x40) + (long)(int)puVar13[1] * 4);
                      if (iVar2 != -1) {
                        uVar6 = *(ulong *)(*(long *)(lVar4 + 0x50) + (long)iVar2 * 8);
                        uVar8 = uVar6 >> 0x20;
                        if (0 < (int)(uVar6 >> 0x20)) {
                          puVar10 = (uint *)(*(long *)(lVar4 + 0x60) +
                                             ((long)(int)uVar6 * 2 +
                                             (long)*(int *)(lVar4 + 0x30) * -2) * 4 + 4);
                          do {
                            if (((*(byte *)((long)puVar10 + -2) >> 6 & 1) != 0) &&
                               (*puVar10 == (*puVar13 | *(int *)(param_1 + 0x94) << 0x16))) {
                              local_70[0] = (int)uVar6;
                              local_68[0] = puVar13[1];
                              FUN_030a933c(lVar4,local_68,local_70);
                              break;
                            }
                            uVar6 = (ulong)((int)uVar6 + 1);
                            puVar10 = puVar10 + 2;
                            uVar8 = uVar8 - 1;
                          } while (uVar8 != 0);
                        }
                      }
                    }
                    puVar13 = puVar13 + 2;
                  } while (puVar13 != puVar1);
                }
              }
              break;
            }
            lVar7 = lVar7 + -1;
            lVar4 = lVar4 + 0x100000000;
            piVar9 = piVar9 + 0x40;
          } while (-lVar7 != (ulong)*(uint *)(param_2 + 0x40));
        }
      }
      else if ((*(int *)(lVar12 + 0x1c) == *(int *)(param_1 + 0x90)) &&
              (0 < (int)*(uint *)(param_2 + 0x40))) {
        lVar7 = 0;
        lVar4 = 0;
        piVar9 = (int *)(*(long *)(param_2 + 0x38) + 0x1c);
        do {
          if ((*piVar9 == *(int *)(lVar12 + 0x18)) && (*(long *)(piVar9 + -5) != 0)) {
            if ((int)lVar7 != 1) {
              lVar4 = *(long *)(*(long *)(param_2 + 0x38) + (lVar4 >> 0x18) + 8);
              if (lVar4 == 0) {
                lVar4 = 0;
              }
              else if (*(char *)(lVar4 + 0x30) == '\x01') {
                lVar4 = *(long *)(lVar4 + 0x20);
              }
              else {
                lVar4 = FUN_0307da18();
              }
              if (*(int *)(lVar12 + 0x48) != 0) {
                puVar13 = *(uint **)(lVar12 + 0x40);
                puVar1 = puVar13 + (long)*(int *)(lVar12 + 0x48) * 2;
                do {
                  if (*(int *)(lVar4 + 0x48) != 0) {
                    iVar2 = *(int *)(*(long *)(lVar4 + 0x40) + (long)(int)*puVar13 * 4);
                    if (iVar2 != -1) {
                      uVar6 = *(ulong *)(*(long *)(lVar4 + 0x50) + (long)iVar2 * 8);
                      uVar8 = uVar6 >> 0x20;
                      if (0 < (int)(uVar6 >> 0x20)) {
                        puVar10 = (uint *)(*(long *)(lVar4 + 0x60) +
                                           ((long)(int)uVar6 * 2 + (long)*(int *)(lVar4 + 0x30) * -2
                                           ) * 4 + 4);
                        do {
                          if (((*(byte *)((long)puVar10 + -2) >> 6 & 1) != 0) &&
                             (*puVar10 == (puVar13[1] | *(int *)(param_1 + 0x94) << 0x16))) {
                            local_70[0] = (int)uVar6;
                            local_68[0] = *puVar13;
                            FUN_030a933c(lVar4,local_68,local_70);
                            break;
                          }
                          uVar6 = (ulong)((int)uVar6 + 1);
                          puVar10 = puVar10 + 2;
                          uVar8 = uVar8 - 1;
                        } while (uVar8 != 0);
                      }
                    }
                  }
                  puVar13 = puVar13 + 2;
                } while (puVar13 != puVar1);
              }
            }
            break;
          }
          lVar7 = lVar7 + -1;
          lVar4 = lVar4 + 0x100000000;
          piVar9 = piVar9 + 0x40;
        } while (-lVar7 != (ulong)*(uint *)(param_2 + 0x40));
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != lVar5);
  }
  return;
}


