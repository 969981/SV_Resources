/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030930f4; name: FUN_030930f4
 */


void FUN_030930f4(long param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  byte bVar9;
  short sVar10;
  int iVar11;
  
  iVar8 = *param_2;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x168) + (long)iVar8 * 4);
  uVar7 = (ulong)uVar2;
  if (uVar2 != 0xffffffff) {
    if (-1 < (int)uVar2) {
      do {
        bVar9 = 0;
        if (*(int *)(param_1 + 0x108) != 0) {
          bVar9 = *(byte *)(*(long *)(param_1 + 0x100) + uVar7);
        }
        *(byte *)(*(long *)(param_1 + 0x100) + uVar7) = bVar9 | 1;
        lVar1 = *(long *)(param_1 + 0xd0) + (uVar7 - (long)*(int *)(param_1 + 0x20)) * 0x10;
        iVar8 = *(int *)(param_1 + 0x164) + (int)*(short *)(lVar1 + 8);
        *(int *)(param_1 + 0x164) = iVar8;
        sVar10 = *(short *)(lVar1 + 10);
        if (0 < sVar10) {
          iVar11 = 0;
          do {
            iVar3 = iVar11 + *(int *)(lVar1 + 4);
            if (iVar3 < *(int *)(param_1 + 0x30)) {
              iVar4 = iVar3;
              if (*(int *)(param_1 + 0x78) != 0) {
                iVar4 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar3 * 4);
              }
              plVar5 = (long *)(param_1 + 0xc0);
              lVar6 = *(long *)(param_1 + 0x28);
              if (iVar4 != -1) goto LAB_030931bc;
            }
            else {
              plVar5 = (long *)(param_1 + 0xe0);
              iVar4 = (iVar11 - *(int *)(param_1 + 0x30)) + *(int *)(lVar1 + 4);
LAB_030931bc:
              iVar3 = iVar4;
              lVar6 = *plVar5;
            }
            if ((*(byte *)(lVar6 + (long)iVar3 * 0x14 + 0x10) >> 3 & 1) == 0) {
              iVar8 = iVar8 + 1;
              *(int *)(param_1 + 0x164) = iVar8;
              sVar10 = *(short *)(lVar1 + 10);
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < sVar10);
        }
        *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x168) + uVar7 * 4) = 0xfffffffd;
        uVar7 = uVar7 + 1;
        if ((long)*(int *)(param_1 + 0x170) <= (long)uVar7) {
          iVar8 = *param_2;
          break;
        }
        iVar8 = *param_2;
      } while (*(int *)(*(long *)(param_1 + 0x168) + uVar7 * 4) == iVar8);
    }
    bVar9 = 0;
    if (*(int *)(param_1 + 0x108) != 0) {
      bVar9 = *(byte *)(*(long *)(param_1 + 0x100) + (long)iVar8) & 0xfe;
    }
    *(byte *)(*(long *)(param_1 + 0x100) + (long)iVar8) = bVar9;
    *(undefined4 *)(*(long *)(param_1 + 0x168) + (long)*param_2 * 4) = 0xffffffff;
  }
  return;
}


