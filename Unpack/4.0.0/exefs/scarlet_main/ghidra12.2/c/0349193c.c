/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349193c; name: FUN_0349193c
 */


void FUN_0349193c(long param_1,uint *param_2,undefined8 param_3,uint *param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(param_5[1],*(long **)(param_1 + 8),*param_5);
  }
  uVar7 = *param_2;
  if (uVar7 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      lVar9 = *(long *)(param_1 + 0x18);
      do {
        *param_4 = *(uint *)(lVar9 + 0x28);
        if (*(char *)(lVar9 + 0x10) != '\0') {
          (**(code **)(**(long **)(lVar9 + 8) + 0x10))(param_5[1],*(long **)(lVar9 + 8),*param_5);
        }
        bVar3 = (byte)param_2[2];
        if (bVar3 == 0xff) {
          if (*(int *)(lVar9 + 0x20) != 0) {
            lVar10 = *(long *)(lVar9 + 0x18);
            do {
              *(undefined1 *)(param_4 + 2) = *(undefined1 *)(lVar10 + 0x28);
              FUN_03491c20(lVar10,param_2 + 4,param_3,param_4 + 4,param_5);
              lVar10 = lVar10 + 0x30;
            } while (lVar10 != *(long *)(lVar9 + 0x18) + (ulong)*(uint *)(lVar9 + 0x20) * 0x30);
          }
        }
        else {
          uVar7 = *(uint *)(lVar9 + 0x20);
          if (uVar7 != 0) {
            lVar10 = *(long *)(lVar9 + 0x18);
            iVar8 = 0;
            do {
              iVar1 = iVar8 + (uVar7 >> 1);
              bVar4 = *(byte *)(lVar10 + (long)iVar1 * 0x30 + 0x28);
              if (bVar4 == bVar3) {
                *(byte *)(param_4 + 2) = bVar3;
                FUN_03491c20(lVar10 + (long)iVar1 * 0x30,param_2 + 4,param_3,param_4 + 4,param_5);
                break;
              }
              if (bVar4 < bVar3) {
                iVar8 = iVar1 + 1;
              }
              uVar7 = uVar7 - (bVar4 < bVar3) >> 1;
            } while (uVar7 != 0);
          }
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x20);
    if (uVar6 != 0) {
      lVar9 = *(long *)(param_1 + 0x18);
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar6 >> 1);
        lVar10 = (long)iVar1;
        uVar2 = *(uint *)(lVar9 + (long)iVar1 * 0x30 + 0x28);
        if (uVar2 == uVar7) {
          *param_4 = uVar7;
          if (*(char *)(lVar9 + lVar10 * 0x30 + 0x10) != '\0') {
            plVar5 = *(long **)(lVar9 + lVar10 * 0x30 + 8);
            (**(code **)(*plVar5 + 0x10))(param_5[1],plVar5,*param_5);
          }
          bVar3 = (byte)param_2[2];
          if (bVar3 == 0xff) {
            lVar9 = lVar9 + lVar10 * 0x30;
            puVar11 = (uint *)(lVar9 + 0x20);
            if (*puVar11 == 0) {
              return;
            }
            plVar5 = (long *)(lVar9 + 0x18);
            lVar9 = *plVar5;
            do {
              *(undefined1 *)(param_4 + 2) = *(undefined1 *)(lVar9 + 0x28);
              FUN_03491c20(lVar9,param_2 + 4,param_3,param_4 + 4,param_5);
              lVar9 = lVar9 + 0x30;
            } while (lVar9 != *plVar5 + (ulong)*puVar11 * 0x30);
            return;
          }
          uVar7 = *(uint *)(lVar9 + lVar10 * 0x30 + 0x20);
          if (uVar7 == 0) {
            return;
          }
          lVar9 = *(long *)(lVar9 + lVar10 * 0x30 + 0x18);
          iVar8 = 0;
          do {
            iVar1 = iVar8 + (uVar7 >> 1);
            bVar4 = *(byte *)(lVar9 + (long)iVar1 * 0x30 + 0x28);
            if (bVar4 == bVar3) {
              *(byte *)(param_4 + 2) = bVar3;
              FUN_03491c20(lVar9 + (long)iVar1 * 0x30,param_2 + 4,param_3,param_4 + 4,param_5);
              return;
            }
            if (bVar4 < bVar3) {
              iVar8 = iVar1 + 1;
            }
            uVar7 = uVar7 - (bVar4 < bVar3) >> 1;
          } while (uVar7 != 0);
          return;
        }
        if (uVar2 < uVar7) {
          iVar8 = iVar1 + 1;
        }
        uVar6 = uVar6 - (uVar2 < uVar7) >> 1;
      } while (uVar6 != 0);
    }
  }
  return;
}


