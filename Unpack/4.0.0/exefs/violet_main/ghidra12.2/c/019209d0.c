/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019209d0; name: FUN_019209d0
 */


void FUN_019209d0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  
  if (param_2 < 0xb) {
    if (*(char *)(param_1 + 0x54) == '\0') {
      return;
    }
    uVar7 = (uint)*(ushort *)(param_1 + 0x50);
    if (*(ushort *)(param_1 + 0x50) == 0) goto LAB_01920c40;
    iVar6 = 0;
    puVar10 = (ushort *)(&PTR_DAT_04550ca8)[param_2];
    puVar8 = *(ushort **)(param_1 + 0x30);
    do {
      uVar3 = *puVar10;
      *puVar8 = uVar3;
      if (uVar3 == 0) goto LAB_01920c38;
      if (uVar3 == 0x10) {
        puVar13 = puVar10 + 1;
        uVar3 = *puVar13;
        uVar1 = uVar3 + 2;
        bVar5 = uVar7 < uVar1;
        uVar7 = uVar7 - uVar1;
        if (bVar5 || uVar7 == 0) goto LAB_01920c34;
        uVar11 = uVar3 + 1;
        uVar2 = uVar11 & 7;
        puVar9 = puVar8 + 1;
        *puVar9 = uVar3;
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            lVar12 = lVar4;
            uVar11 = uVar11 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4)
            ;
            lVar4 = lVar12 + 2;
          } while (uVar2 != 0);
          puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
          puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
          puVar13 = puVar10 + 1;
          puVar9 = puVar8;
        }
        if (6 < uVar3) {
          do {
            puVar9[1] = puVar10[2];
            puVar9[2] = puVar13[2];
            puVar9[3] = puVar13[3];
            puVar9[4] = puVar13[4];
            puVar9[5] = puVar13[5];
            puVar9[6] = puVar13[6];
            puVar10 = puVar13 + 7;
            puVar9[7] = *puVar10;
            puVar13 = puVar13 + 8;
            uVar11 = uVar11 - 8;
            puVar9 = puVar9 + 8;
            *puVar9 = *puVar13;
            puVar8 = puVar9;
          } while (uVar11 != 0);
        }
        puVar10 = puVar13;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 - 1;
      }
    } while (uVar7 != 0);
  }
  else {
    if (*(char *)(param_1 + 0x54) == '\0') {
      return;
    }
    uVar7 = (uint)*(ushort *)(param_1 + 0x50);
    if (*(ushort *)(param_1 + 0x50) == 0) {
LAB_01920c40:
      iVar6 = 0;
      goto LAB_01920c38;
    }
    puVar8 = *(ushort **)(param_1 + 0x30);
    iVar6 = 0;
    puVar10 = &DAT_03d31534;
    do {
      uVar3 = *puVar10;
      *puVar8 = uVar3;
      if (uVar3 == 0) goto LAB_01920c38;
      if (uVar3 == 0x10) {
        puVar13 = puVar10 + 1;
        uVar3 = *puVar13;
        uVar1 = uVar3 + 2;
        bVar5 = uVar7 < uVar1;
        uVar7 = uVar7 - uVar1;
        if (bVar5 || uVar7 == 0) goto LAB_01920c34;
        uVar11 = uVar3 + 1;
        uVar2 = uVar11 & 7;
        puVar9 = puVar8 + 1;
        *puVar9 = uVar3;
        if (uVar2 != 0) {
          lVar4 = 0;
          do {
            lVar12 = lVar4;
            uVar11 = uVar11 - 1;
            uVar2 = uVar2 - 1;
            *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4)
            ;
            lVar4 = lVar12 + 2;
          } while (uVar2 != 0);
          puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
          puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
          puVar13 = puVar10 + 1;
          puVar9 = puVar8;
        }
        if (6 < uVar3) {
          do {
            puVar9[1] = puVar10[2];
            puVar9[2] = puVar13[2];
            puVar9[3] = puVar13[3];
            puVar9[4] = puVar13[4];
            puVar9[5] = puVar13[5];
            puVar9[6] = puVar13[6];
            puVar10 = puVar13 + 7;
            puVar9[7] = *puVar10;
            puVar13 = puVar13 + 8;
            uVar11 = uVar11 - 8;
            puVar9 = puVar9 + 8;
            *puVar9 = *puVar13;
            puVar8 = puVar9;
          } while (uVar11 != 0);
        }
        puVar10 = puVar13;
        iVar6 = uVar1 + iVar6;
      }
      else {
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + 1;
        uVar7 = uVar7 - 1;
      }
    } while (uVar7 != 0);
  }
  if (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    puVar8[-1] = 0;
  }
LAB_01920c38:
  *(short *)(param_1 + 0x52) = (short)iVar6;
  return;
LAB_01920c34:
  *puVar8 = 0;
  goto LAB_01920c38;
}


