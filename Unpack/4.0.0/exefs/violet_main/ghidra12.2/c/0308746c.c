/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308746c; name: FUN_0308746c
 */


void FUN_0308746c(long param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined2 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int iVar17;
  int iVar18;
  uint local_70 [2];
  uint local_68 [2];
  
  iVar4 = *(int *)(param_1 + 0x94);
  lVar9 = *(long *)(param_2 + 0x38) + (long)iVar4 * 0x100;
  iVar17 = *(int *)(lVar9 + 0xb8);
  if (iVar17 != 0) {
    iVar5 = *(int *)(param_1 + 0x90);
    piVar12 = *(int **)(lVar9 + 0xb0);
    piVar1 = piVar12 + (long)iVar17 * 2;
    lVar9 = *(long *)(param_2 + 0x48);
    do {
      iVar17 = *piVar12;
      lVar13 = *(long *)(*(long *)(lVar9 + (long)piVar12[1] * 0x18) + 0x20);
      if (*(int *)(lVar13 + 0x18) == iVar5) {
        bVar7 = iVar17 != -1;
        lVar11 = (long)iVar4;
        iVar18 = iVar17;
        iVar17 = iVar4;
        if (bVar7) {
LAB_03087534:
          lVar10 = *(long *)(param_2 + 0x38);
          lVar11 = *(long *)(lVar10 + lVar11 * 0x100 + 8);
          if (lVar11 == 0) {
            uVar15 = 0;
          }
          else if (*(char *)(lVar11 + 0x30) == '\x01') {
            uVar15 = *(undefined8 *)(lVar11 + 0x20);
          }
          else {
            uVar15 = FUN_0307da18();
            lVar10 = *(long *)(param_2 + 0x38);
          }
          lVar11 = *(long *)(lVar10 + (long)iVar18 * 0x100 + 8);
          if (lVar11 == 0) {
            uVar16 = 0;
          }
          else if (*(char *)(lVar11 + 0x30) == '\x01') {
            uVar16 = *(undefined8 *)(lVar11 + 0x20);
          }
          else {
            uVar16 = FUN_0307da18();
          }
          if (*(int *)(lVar13 + 0x48) != 0) {
            puVar14 = *(uint **)(lVar13 + 0x40);
            puVar2 = puVar14 + (long)*(int *)(lVar13 + 0x48) * 2;
            do {
              local_68[0] = *puVar14;
              uVar3 = puVar14[1];
              uVar6 = local_68[0] | iVar17 << 0x16;
              puVar8 = (undefined2 *)FUN_030a90fc(uVar15,local_68);
              *puVar8 = 0xffff;
              *(uint *)(puVar8 + 2) = uVar3 | iVar18 << 0x16;
              *(undefined1 *)(puVar8 + 1) = 0x40;
              local_70[0] = puVar14[1];
              puVar8 = (undefined2 *)FUN_030a90fc(uVar16,local_70);
              puVar14 = puVar14 + 2;
              *puVar8 = 0xffff;
              *(uint *)(puVar8 + 2) = uVar6;
              *(undefined1 *)(puVar8 + 1) = 0x40;
            } while (puVar14 != puVar2);
          }
        }
      }
      else if ((iVar17 != -1) && (*(int *)(lVar13 + 0x1c) == iVar5)) {
        lVar11 = (long)iVar17;
        iVar18 = iVar4;
        goto LAB_03087534;
      }
      piVar12 = piVar12 + 2;
    } while (piVar12 != piVar1);
  }
  return;
}


