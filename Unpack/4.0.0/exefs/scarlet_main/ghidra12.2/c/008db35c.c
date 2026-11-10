/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008db35c; name: FUN_008db35c
 */


void FUN_008db35c(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (0x20 < *(uint *)(param_2 + 4)) {
    uVar10 = *(uint *)(param_2 + 0x14);
    *(ulong *)(param_1 + 0xe8) = (ulong)*(uint *)(param_2 + 4);
    uVar8 = FUN_008ee7d8(param_2 + (ulong)uVar10);
    *(undefined8 *)(param_1 + 0x98) = uVar8;
    if (*(long *)(param_1 + 0x18) == 0) {
      FUN_008ee814(uVar8,*(undefined8 *)(param_1 + 0x10));
      lVar14 = *(long *)(param_1 + 0x98);
      uVar5 = *(ushort *)(lVar14 + 0xdc);
      uVar10 = (uint)uVar5;
      *(uint *)(param_1 + 0x80) = uVar10;
    }
    else {
      FUN_008ee8b0();
      lVar14 = *(long *)(param_1 + 0x98);
      uVar5 = *(ushort *)(lVar14 + 0xdc);
      uVar10 = (uint)uVar5;
      *(uint *)(param_1 + 0x80) = uVar10;
    }
    if (uVar10 == 0) {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    else {
      lVar13 = (ulong)uVar5 * 0x90 + 0x20;
      plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x458) + 0x10))
                                 (*(long **)(param_1 + 0x458),lVar13,0x80);
      *(long *)(param_1 + 0x460) = *(long *)(param_1 + 0x460) + lVar13;
      iVar6 = *(int *)(param_1 + 0x80);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 1;
      *(long **)(param_1 + 0x88) = plVar9;
      puVar3 = PTR_DAT_047d25d0;
      if (iVar6 == 0) {
        *(long **)(param_1 + 0x90) = plVar9;
      }
      else {
        uVar12 = (long)iVar6 * 0x90 - 0x90;
        uVar10 = ((uint)(uVar12 / 0x90) & 0x1ffffff) + 1;
        plVar11 = plVar9;
        if ((uVar10 & 3) != 0) {
          lVar13 = -((ulong)uVar10 & 3);
          puVar2 = PTR_DAT_047d25d0 + 0x10;
          do {
            *plVar11 = (long)puVar2;
            bVar7 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            *(undefined1 *)(plVar11 + 1) = 0;
            plVar11[6] = 0;
            plVar11[7] = 0;
            plVar11 = plVar11 + 0x12;
          } while (bVar7);
        }
        if (0x1af < uVar12) {
          puVar3 = puVar3 + 0x10;
          do {
            *plVar11 = (long)puVar3;
            *(undefined1 *)(plVar11 + 1) = 0;
            plVar11[0x12] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x13) = 0;
            plVar11[0x24] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x25) = 0;
            plVar11[0x36] = (long)puVar3;
            *(undefined1 *)(plVar11 + 0x37) = 0;
            plVar11[6] = 0;
            plVar11[7] = 0;
            plVar11[0x18] = 0;
            plVar11[0x19] = 0;
            plVar11[0x2a] = 0;
            plVar11[0x2b] = 0;
            plVar11[0x3c] = 0;
            plVar11[0x3d] = 0;
            plVar11 = plVar11 + 0x48;
          } while (plVar11 != plVar9 + (long)iVar6 * 0x12);
        }
        *(long **)(param_1 + 0x90) = plVar9;
        if (0 < *(int *)(param_1 + 0x80)) {
          lVar13 = *(long *)(param_1 + 0xb8);
          FUN_008dc980(plVar9,*(undefined8 *)(lVar14 + 0x28),lVar13);
          if (1 < *(int *)(param_1 + 0x80)) {
            lVar15 = 1;
            lVar16 = 0x90;
            lVar17 = 0x78;
            do {
              puVar1 = (uint *)(lVar13 + 8);
              lVar4 = lVar13 + (ulong)*puVar1;
              lVar13 = 0;
              if (*puVar1 != 0) {
                lVar13 = lVar4;
              }
              FUN_008dc980(*(long *)(param_1 + 0x90) + lVar16,*(long *)(lVar14 + 0x28) + lVar17,
                           lVar13);
              lVar15 = lVar15 + 1;
              lVar16 = lVar16 + 0x90;
              lVar17 = lVar17 + 0x78;
            } while (lVar15 < *(int *)(param_1 + 0x80));
          }
        }
      }
    }
  }
  return;
}


