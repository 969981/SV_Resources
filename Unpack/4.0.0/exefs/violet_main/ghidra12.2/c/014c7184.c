/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c7184; name: FUN_014c7184
 */


void FUN_014c7184(long param_1,uint param_2,long param_3,long *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  
  if (param_3 != 0) {
    lVar6 = *(long *)(param_3 + 0x88);
    uVar7 = 0;
    if (lVar6 != 0) {
      plVar9 = *(long **)(lVar6 + 0x210);
      if (plVar9 != *(long **)(lVar6 + 0x218)) {
        iVar10 = 0;
        do {
          plVar3 = (long *)PTR_DAT_047d8b70;
          if (*plVar9 != 0) {
            plVar3 = (long *)(*plVar9 + 0x30);
          }
          if (*plVar3 == *param_4) {
            uVar7 = FUN_00e388b8(param_3,iVar10,*(undefined8 *)(param_1 + 0x40));
            uVar7 = uVar7 & 0xffff;
            goto LAB_014c7214;
          }
          plVar9 = plVar9 + 1;
          iVar10 = iVar10 + 1;
        } while (*(long **)(lVar6 + 0x218) != plVar9);
      }
      uVar7 = 0;
    }
LAB_014c7214:
    if (param_2 < *(uint *)(param_1 + 0x58)) {
      uVar8 = (ulong)param_2;
      lVar13 = *(long *)(param_1 + 0x40);
      lVar6 = uVar8 * 2 + (ulong)param_2;
      *(ulong *)(*(long *)(param_1 + 0x60) + lVar6 * 8 + 8) =
           (ulong)(uint)(param_5 << 0x12) & 0x1c0000 | uVar7 | 0x20000;
      lVar11 = *(long *)(param_1 + 0x60);
      lVar6 = *(long *)(lVar11 + lVar6 * 8);
      if (*(char *)(lVar6 + 0x54) != '\0') {
        uVar12 = (uint)*(ushort *)(lVar6 + 0x50);
        if (*(ushort *)(lVar6 + 0x50) == 0) {
          iVar10 = 0;
        }
        else {
          puVar16 = *(ushort **)(lVar13 + 0x30);
          iVar10 = 0;
          puVar14 = *(ushort **)(lVar6 + 0x30);
          do {
            uVar4 = *puVar16;
            *puVar14 = uVar4;
            if (uVar4 == 0) goto LAB_014c7388;
            if (uVar4 == 0x10) {
              puVar18 = puVar16 + 1;
              uVar4 = *puVar18;
              uVar1 = uVar4 + 2;
              bVar5 = uVar12 < uVar1;
              uVar12 = uVar12 - uVar1;
              if (bVar5 || uVar12 == 0) {
                *puVar14 = 0;
                goto LAB_014c7388;
              }
              uVar17 = uVar4 + 1;
              uVar2 = uVar17 & 7;
              puVar15 = puVar14 + 1;
              *puVar15 = uVar4;
              if (uVar2 != 0) {
                lVar11 = 0;
                do {
                  lVar13 = lVar11;
                  uVar17 = uVar17 - 1;
                  uVar2 = uVar2 - 1;
                  *(undefined2 *)((long)puVar14 + lVar13 + 4) =
                       *(undefined2 *)((long)puVar16 + lVar13 + 4);
                  lVar11 = lVar13 + 2;
                } while (uVar2 != 0);
                puVar14 = (ushort *)((long)puVar14 + lVar13 + 4);
                puVar16 = (ushort *)((long)puVar16 + lVar13 + 2);
                puVar18 = puVar16 + 1;
                puVar15 = puVar14;
              }
              if (6 < uVar4) {
                do {
                  puVar15[1] = puVar16[2];
                  puVar15[2] = puVar18[2];
                  puVar15[3] = puVar18[3];
                  puVar15[4] = puVar18[4];
                  puVar15[5] = puVar18[5];
                  puVar15[6] = puVar18[6];
                  puVar16 = puVar18 + 7;
                  puVar15[7] = *puVar16;
                  puVar18 = puVar18 + 8;
                  uVar17 = uVar17 - 8;
                  puVar15 = puVar15 + 8;
                  *puVar15 = *puVar18;
                  puVar14 = puVar15;
                } while (uVar17 != 0);
              }
              puVar16 = puVar18;
              iVar10 = uVar1 + iVar10;
            }
            else {
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
              iVar10 = iVar10 + 1;
              uVar12 = uVar12 - 1;
            }
          } while (uVar12 != 0);
          if (iVar10 != 0) {
            iVar10 = iVar10 + -1;
            puVar14[-1] = 0;
          }
        }
LAB_014c7388:
        *(short *)(lVar6 + 0x52) = (short)iVar10;
        lVar11 = *(long *)(param_1 + 0x60);
      }
      *(undefined2 *)(lVar11 + uVar8 * 0x18 + 0x10) = 0;
      lVar6 = *(long *)(param_1 + 0x60) + uVar8 * 0x18;
      *(ushort *)(lVar6 + 0x12) = *(ushort *)(lVar6 + 0x12) & 0xfffe;
    }
  }
  return;
}


