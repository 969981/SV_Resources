/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0309c338; name: FUN_0309c338
 */


void FUN_0309c338(long param_1,long param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  
  if (*param_4 != *param_3) {
    puVar3 = (undefined4 *)(*(long *)(param_2 + 0xd0) + (long)*param_4 * 0x10);
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0xd0) + (long)*param_3 * 0x10);
    uVar6 = puVar3[1];
    iVar18 = *(int *)(param_2 + 0x20);
    lVar16 = (long)iVar18;
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar3 + 2);
    *(undefined1 *)(*(long *)(param_2 + 0x100) + *param_3 + lVar16) =
         *(undefined1 *)(*(long *)(param_2 + 0x100) + *param_4 + lVar16);
    iVar11 = *(int *)(param_2 + 0x50);
    memcpy((void *)(*(long *)(param_2 + 0x140) + (long)(iVar11 * *param_3) * 4),
           (void *)(*(long *)(param_2 + 0x140) + (long)(iVar11 * *param_4) * 4),(long)iVar11 << 2);
    uVar2 = *param_3 + iVar18;
    piVar5 = (int *)(*(long *)(param_2 + 0xd0) + (long)*param_3 * 0x10);
    if (0 < (short)piVar5[2]) {
      iVar18 = 0;
      plVar1 = (long *)(param_2 + 0xc0);
      do {
        iVar11 = iVar18 + *piVar5;
        iVar7 = *(int *)(param_2 + 0x30);
        if (iVar11 < iVar7) {
          lVar15 = *(long *)(param_2 + 0x28);
          iVar14 = iVar11;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar14 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar11 * 4);
          }
          plVar10 = plVar1;
          if (iVar14 != -1) goto LAB_0309c454;
        }
        else {
          plVar10 = (long *)(param_2 + 0xe0);
          iVar14 = iVar11 - iVar7;
LAB_0309c454:
          iVar11 = iVar14;
          lVar15 = *plVar10;
        }
        puVar17 = (uint *)(lVar15 + (long)iVar11 * 0x14 + 8);
        uVar8 = *puVar17;
        if (uVar8 != 0xffffffff) {
          if ((*(byte *)(lVar15 + (long)iVar11 * 0x14 + 0x10) >> 6 & 1) == 0) {
            uVar12 = (ulong)uVar8 & 0x3fffff;
            if ((int)uVar12 < iVar7) {
              plVar10 = plVar1;
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar12 = (ulong)*(uint *)(*(long *)(param_2 + 0x70) + uVar12 * 4);
              }
            }
            else {
              uVar12 = (ulong)(uint)((int)uVar12 - iVar7);
              plVar10 = (long *)(param_2 + 0xe0);
            }
            *(uint *)(*plVar10 + (long)(int)uVar12 * 0x14 + 0xc) = uVar2;
          }
          else {
            lVar15 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar8 >> 0xe) & 0x3ff00));
            if (*(char *)(lVar15 + 0x30) == '\x01') {
              lVar15 = *(long *)(lVar15 + 0x20);
            }
            else {
              lVar15 = FUN_0307d71c();
              uVar8 = *puVar17;
            }
            uVar8 = uVar8 & 0x3fffff;
            uVar9 = uVar8 - *(int *)(lVar15 + 0x30);
            if ((int)uVar8 < *(int *)(lVar15 + 0x30)) {
              if (*(int *)(lVar15 + 0x78) != 0) {
                uVar8 = *(uint *)(*(long *)(lVar15 + 0x70) + (ulong)uVar8 * 4);
              }
              plVar10 = (long *)(lVar15 + 0xc0);
              uVar9 = uVar8;
            }
            else {
              plVar10 = (long *)(lVar15 + 0xe0);
            }
            lVar15 = *plVar10 + (long)(int)uVar9 * 0x14;
            *(uint *)(lVar15 + 0xc) = *(uint *)(lVar15 + 0xc) & 0xffc00000 | uVar2;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < (short)piVar5[2]);
    }
    if (0 < *(short *)((long)piVar5 + 10)) {
      iVar18 = 0;
      plVar1 = (long *)(param_2 + 0xc0);
      do {
        iVar11 = iVar18 + piVar5[1];
        iVar7 = *(int *)(param_2 + 0x30);
        if (iVar11 < iVar7) {
          lVar15 = *(long *)(param_2 + 0x28);
          iVar14 = iVar11;
          if (*(int *)(param_2 + 0x78) != 0) {
            iVar14 = *(int *)(*(long *)(param_2 + 0x70) + (long)iVar11 * 4);
          }
          plVar10 = plVar1;
          if (iVar14 != -1) goto LAB_0309c5ac;
        }
        else {
          plVar10 = (long *)(param_2 + 0xe0);
          iVar14 = iVar11 - iVar7;
LAB_0309c5ac:
          iVar11 = iVar14;
          lVar15 = *plVar10;
        }
        puVar17 = (uint *)(lVar15 + (long)iVar11 * 0x14 + 8);
        uVar8 = *puVar17;
        if (uVar8 != 0xffffffff) {
          if ((*(byte *)(lVar15 + (long)iVar11 * 0x14 + 0x10) >> 6 & 1) == 0) {
            uVar12 = (ulong)uVar8 & 0x3fffff;
            if ((int)uVar12 < iVar7) {
              plVar10 = plVar1;
              if (*(int *)(param_2 + 0x78) != 0) {
                uVar12 = (ulong)*(uint *)(*(long *)(param_2 + 0x70) + uVar12 * 4);
              }
            }
            else {
              uVar12 = (ulong)(uint)((int)uVar12 - iVar7);
              plVar10 = (long *)(param_2 + 0xe0);
            }
            *(uint *)(*plVar10 + (long)(int)uVar12 * 0x14 + 0xc) = uVar2;
          }
          else {
            lVar15 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)(uVar8 >> 0xe) & 0x3ff00));
            if (*(char *)(lVar15 + 0x30) == '\x01') {
              lVar15 = *(long *)(lVar15 + 0x20);
            }
            else {
              lVar15 = FUN_0307d71c();
              uVar8 = *puVar17;
            }
            uVar8 = uVar8 & 0x3fffff;
            uVar9 = uVar8 - *(int *)(lVar15 + 0x30);
            if ((int)uVar8 < *(int *)(lVar15 + 0x30)) {
              if (*(int *)(lVar15 + 0x78) != 0) {
                uVar8 = *(uint *)(*(long *)(lVar15 + 0x70) + (ulong)uVar8 * 4);
              }
              plVar10 = (long *)(lVar15 + 0xc0);
              uVar9 = uVar8;
            }
            else {
              plVar10 = (long *)(lVar15 + 0xe0);
            }
            lVar15 = *plVar10 + (long)(int)uVar9 * 0x14;
            *(uint *)(lVar15 + 0xc) = *(uint *)(lVar15 + 0xc) & 0xffc00000 | uVar2;
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < *(short *)((long)piVar5 + 10));
    }
    if (*(int *)(param_2 + 0x108) == 0) {
      bVar13 = 1;
    }
    else {
      bVar13 = *(byte *)(*(long *)(param_2 + 0x100) + *param_4 + lVar16) | 1;
    }
    *(byte *)(*(long *)(param_2 + 0x100) + *param_4 + lVar16) = bVar13;
  }
  return;
}


