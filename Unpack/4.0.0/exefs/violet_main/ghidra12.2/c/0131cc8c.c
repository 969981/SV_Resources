/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131cc8c; name: FUN_0131cc8c
 */


void FUN_0131cc8c(long *param_1,long param_2,short param_3,short param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  long lVar14;
  ushort *puVar15;
  
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x54) != '\0') {
    **(undefined2 **)(lVar6 + 0x30) = 0;
    *(undefined2 *)(lVar6 + 0x52) = 0;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x54) != '\0') {
      uVar3 = *(ushort *)(lVar6 + 0x52);
      uVar8 = (ulong)uVar3;
      if (uVar3 + 1 < (uint)*(ushort *)(lVar6 + 0x50)) {
        *(ushort *)(lVar6 + 0x52) = uVar3 + 1;
        *(short *)(*(long *)(lVar6 + 0x30) + uVar8 * 2) = param_3 + 0x11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x52);
      }
      else {
        if (((short)(param_3 + 0x11) != 0) || (uVar3 + 1 != (uint)*(ushort *)(lVar6 + 0x50)))
        goto LAB_0131cce4;
        *(ushort *)(lVar6 + 0x52) = uVar3 + 1;
      }
      *(undefined2 *)(*(long *)(lVar6 + 0x30) + uVar8 * 2) = 0;
    }
  }
LAB_0131cce4:
  lVar6 = *param_1;
  if (*(char *)(lVar6 + 0x54) != '\0') {
    uVar9 = (uint)*(ushort *)(lVar6 + 0x50) - (uint)*(ushort *)(lVar6 + 0x52);
    if (uVar9 == 0) {
      iVar7 = 0;
    }
    else {
      puVar11 = (ushort *)(*(long *)(lVar6 + 0x30) + (ulong)*(ushort *)(lVar6 + 0x52) * 2);
      puVar12 = *(ushort **)(param_2 + 0x30);
      iVar7 = 0;
      do {
        uVar3 = *puVar12;
        *puVar11 = uVar3;
        if (uVar3 == 0) goto LAB_0131ce28;
        if (uVar3 == 0x10) {
          puVar15 = puVar12 + 1;
          uVar3 = *puVar15;
          uVar1 = uVar3 + 2;
          bVar5 = uVar9 < uVar1;
          uVar9 = uVar9 - uVar1;
          if (bVar5 || uVar9 == 0) {
            *puVar11 = 0;
            goto LAB_0131ce28;
          }
          uVar13 = uVar3 + 1;
          uVar2 = uVar13 & 7;
          puVar10 = puVar11 + 1;
          *puVar10 = uVar3;
          if (uVar2 != 0) {
            lVar4 = 0;
            do {
              lVar14 = lVar4;
              uVar13 = uVar13 - 1;
              uVar2 = uVar2 - 1;
              *(undefined2 *)((long)puVar11 + lVar14 + 4) =
                   *(undefined2 *)((long)puVar12 + lVar14 + 4);
              lVar4 = lVar14 + 2;
            } while (uVar2 != 0);
            puVar11 = (ushort *)((long)puVar11 + lVar14 + 4);
            puVar12 = (ushort *)((long)puVar12 + lVar14 + 2);
            puVar15 = puVar12 + 1;
            puVar10 = puVar11;
          }
          if (6 < uVar3) {
            do {
              puVar10[1] = puVar12[2];
              puVar10[2] = puVar15[2];
              puVar10[3] = puVar15[3];
              puVar10[4] = puVar15[4];
              puVar10[5] = puVar15[5];
              puVar10[6] = puVar15[6];
              puVar12 = puVar15 + 7;
              puVar10[7] = *puVar12;
              puVar15 = puVar15 + 8;
              uVar13 = uVar13 - 8;
              puVar10 = puVar10 + 8;
              *puVar10 = *puVar15;
              puVar11 = puVar10;
            } while (uVar13 != 0);
          }
          puVar12 = puVar15;
          iVar7 = uVar1 + iVar7;
        }
        else {
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          iVar7 = iVar7 + 1;
          uVar9 = uVar9 - 1;
        }
      } while (uVar9 != 0);
      if (iVar7 != 0) {
        iVar7 = iVar7 + -1;
        puVar11[-1] = 0;
      }
    }
LAB_0131ce28:
    *(short *)(lVar6 + 0x52) = *(short *)(lVar6 + 0x52) + (short)iVar7;
    lVar6 = *param_1;
    if (*(char *)(lVar6 + 0x54) != '\0') {
      uVar3 = *(ushort *)(lVar6 + 0x52);
      uVar8 = (ulong)uVar3;
      if (uVar3 + 1 < (uint)*(ushort *)(lVar6 + 0x50)) {
        *(ushort *)(lVar6 + 0x52) = uVar3 + 1;
        *(short *)(*(long *)(lVar6 + 0x30) + uVar8 * 2) = param_4 + 0x11;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x52);
      }
      else {
        if ((short)(param_4 + 0x11) != 0) {
          return;
        }
        if (uVar3 + 1 != (uint)*(ushort *)(lVar6 + 0x50)) {
          return;
        }
        *(ushort *)(lVar6 + 0x52) = uVar3 + 1;
      }
      *(undefined2 *)(*(long *)(lVar6 + 0x30) + uVar8 * 2) = 0;
    }
  }
  return;
}


