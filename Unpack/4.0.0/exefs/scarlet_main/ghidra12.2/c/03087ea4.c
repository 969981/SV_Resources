/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03087ea4; name: FUN_03087ea4
 */


void FUN_03087ea4(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  int local_68 [2];
  uint local_48 [2];
  
  iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x60);
  lVar10 = *(long *)(param_2 + 0x38) + (long)iVar2 * 0x100;
  iVar3 = *(int *)(lVar10 + 0xd8);
  if (iVar3 != 0) {
    piVar9 = *(int **)(lVar10 + 0xd0);
    piVar1 = piVar9 + (long)iVar3 * 4;
    iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 0x5c);
    uVar4 = iVar2 << 0x16;
    do {
      lVar10 = *(long *)(piVar9 + 2);
      if (*(int *)(lVar10 + 0x18) == iVar3) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x38) + (long)*piVar9 * 0x100 + 0x10);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else if (*(char *)(lVar5 + 0x30) == '\x01') {
          lVar5 = *(long *)(lVar5 + 0x20);
        }
        else {
          lVar5 = FUN_00e0e904();
        }
        if (*(int *)(lVar10 + 0x38) != 0) {
          puVar11 = *(uint **)(lVar10 + 0x30);
          puVar12 = puVar11 + (long)*(int *)(lVar10 + 0x38) * 5;
          do {
            if (*(int *)(lVar5 + 0x78) != 0) {
              iVar2 = *(int *)(*(long *)(lVar5 + 0x70) + (long)(int)puVar11[1] * 4);
              if (iVar2 != -1) {
                uVar6 = *(ulong *)(*(long *)(lVar5 + 0x80) + (long)iVar2 * 8);
                uVar7 = uVar6 >> 0x20;
                if (0 < (int)(uVar6 >> 0x20)) {
                  puVar8 = (uint *)(*(long *)(lVar5 + 0x90) +
                                    ((long)(int)uVar6 * 2 + (long)*(int *)(lVar5 + 0x30) * -2) * 4 +
                                   4);
                  do {
                    if (((*(byte *)((long)puVar8 + -2) >> 6 & 1) != 0) &&
                       (*puVar8 == (*puVar11 | uVar4))) {
                      local_68[0] = (int)uVar6;
                      local_48[0] = puVar11[1];
                      FUN_03060610(lVar5,local_48,local_68);
                      break;
                    }
                    uVar6 = (ulong)((int)uVar6 + 1);
                    puVar8 = puVar8 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
              }
            }
            puVar11 = puVar11 + 5;
          } while (puVar11 != puVar12);
        }
      }
      else if (*(int *)(lVar10 + 0x1c) == iVar3) {
        lVar5 = *(long *)(*(long *)(param_2 + 0x38) + (long)*piVar9 * 0x100 + 0x10);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else if (*(char *)(lVar5 + 0x30) == '\x01') {
          lVar5 = *(long *)(lVar5 + 0x20);
        }
        else {
          lVar5 = FUN_00e0e904();
        }
        if (*(int *)(lVar10 + 0x38) != 0) {
          puVar11 = *(uint **)(lVar10 + 0x30);
          puVar12 = puVar11 + (long)*(int *)(lVar10 + 0x38) * 5;
          do {
            if (*(int *)(lVar5 + 0x78) != 0) {
              iVar2 = *(int *)(*(long *)(lVar5 + 0x70) + (long)(int)*puVar11 * 4);
              if (iVar2 != -1) {
                uVar6 = *(ulong *)(*(long *)(lVar5 + 0x80) + (long)iVar2 * 8);
                uVar7 = uVar6 >> 0x20;
                if (0 < (int)(uVar6 >> 0x20)) {
                  puVar8 = (uint *)(*(long *)(lVar5 + 0x90) +
                                    ((long)(int)uVar6 * 2 + (long)*(int *)(lVar5 + 0x30) * -2) * 4 +
                                   4);
                  do {
                    if (((*(byte *)((long)puVar8 + -2) >> 6 & 1) != 0) &&
                       (*puVar8 == (puVar11[1] | uVar4))) {
                      local_68[0] = (int)uVar6;
                      local_48[0] = *puVar11;
                      FUN_03060610(lVar5,local_48,local_68);
                      break;
                    }
                    uVar6 = (ulong)((int)uVar6 + 1);
                    puVar8 = puVar8 + 2;
                    uVar7 = uVar7 - 1;
                  } while (uVar7 != 0);
                }
              }
            }
            puVar11 = puVar11 + 5;
          } while (puVar11 != puVar12);
        }
      }
      piVar9 = piVar9 + 4;
    } while (piVar9 != piVar1);
  }
  return;
}


