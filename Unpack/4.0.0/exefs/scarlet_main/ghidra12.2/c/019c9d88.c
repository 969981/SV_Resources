/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c9d88; name: FUN_019c9d88
 */


void FUN_019c9d88(long param_1,uint param_2,long param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    uVar5 = (ulong)param_2;
    lVar6 = uVar5 * 2 + (ulong)param_2;
    *(ulong *)(*(long *)(param_1 + 0x60) + lVar6 * 8 + 8) =
         (ulong)(uint)(param_5 << 0x12) & 0x1c0000 | (ulong)(param_4 & 3);
    lVar8 = *(long *)(param_1 + 0x60);
    lVar6 = *(long *)(lVar8 + lVar6 * 8);
    if (*(char *)(lVar6 + 0x54) != '\0') {
      uVar9 = (uint)*(ushort *)(lVar6 + 0x50);
      if (*(ushort *)(lVar6 + 0x50) == 0) {
        iVar7 = 0;
      }
      else {
        puVar12 = *(ushort **)(param_3 + 0x30);
        iVar7 = 0;
        puVar10 = *(ushort **)(lVar6 + 0x30);
        do {
          uVar3 = *puVar12;
          *puVar10 = uVar3;
          if (uVar3 == 0) goto LAB_019c9ef8;
          if (uVar3 == 0x10) {
            puVar15 = puVar12 + 1;
            uVar3 = *puVar15;
            uVar1 = uVar3 + 2;
            bVar4 = uVar9 < uVar1;
            uVar9 = uVar9 - uVar1;
            if (bVar4 || uVar9 == 0) {
              *puVar10 = 0;
              goto LAB_019c9ef8;
            }
            uVar13 = uVar3 + 1;
            uVar2 = uVar13 & 7;
            puVar11 = puVar10 + 1;
            *puVar11 = uVar3;
            if (uVar2 != 0) {
              lVar8 = 0;
              do {
                lVar14 = lVar8;
                uVar13 = uVar13 - 1;
                uVar2 = uVar2 - 1;
                *(undefined2 *)((long)puVar10 + lVar14 + 4) =
                     *(undefined2 *)((long)puVar12 + lVar14 + 4);
                lVar8 = lVar14 + 2;
              } while (uVar2 != 0);
              puVar10 = (ushort *)((long)puVar10 + lVar14 + 4);
              puVar12 = (ushort *)((long)puVar12 + lVar14 + 2);
              puVar15 = puVar12 + 1;
              puVar11 = puVar10;
            }
            if (6 < uVar3) {
              do {
                puVar11[1] = puVar12[2];
                puVar11[2] = puVar15[2];
                puVar11[3] = puVar15[3];
                puVar11[4] = puVar15[4];
                puVar11[5] = puVar15[5];
                puVar11[6] = puVar15[6];
                puVar12 = puVar15 + 7;
                puVar11[7] = *puVar12;
                puVar15 = puVar15 + 8;
                uVar13 = uVar13 - 8;
                puVar11 = puVar11 + 8;
                *puVar11 = *puVar15;
                puVar10 = puVar11;
              } while (uVar13 != 0);
            }
            puVar12 = puVar15;
            iVar7 = uVar1 + iVar7;
          }
          else {
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
            iVar7 = iVar7 + 1;
            uVar9 = uVar9 - 1;
          }
        } while (uVar9 != 0);
        if (iVar7 != 0) {
          iVar7 = iVar7 + -1;
          puVar10[-1] = 0;
        }
      }
LAB_019c9ef8:
      *(short *)(lVar6 + 0x52) = (short)iVar7;
      lVar8 = *(long *)(param_1 + 0x60);
    }
    *(undefined2 *)(lVar8 + uVar5 * 0x18 + 0x10) = 0;
    lVar6 = *(long *)(param_1 + 0x60) + uVar5 * 0x18;
    *(ushort *)(lVar6 + 0x12) = *(ushort *)(lVar6 + 0x12) & 0xfffe;
  }
  return;
}


