/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b06734; name: FUN_02b06734
 */


void FUN_02b06734(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x52) != 0)) {
    lVar4 = FUN_02b055e0();
    iVar5 = 0;
    puVar6 = (ushort *)(lVar4 + 0x40);
    puVar8 = *(ushort **)(*param_1 + 0x30);
    uVar7 = 0x20;
    do {
      while( true ) {
        uVar2 = *puVar8;
        *puVar6 = uVar2;
        if (uVar2 == 0) {
          return;
        }
        if (uVar2 == 0x10) break;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_02b06860;
      }
      puVar11 = puVar8 + 1;
      uVar2 = *puVar11;
      uVar1 = uVar2 + 2;
      bVar3 = uVar7 < uVar1;
      uVar7 = uVar7 - uVar1;
      if (bVar3 || uVar7 == 0) {
        *puVar6 = 0;
        return;
      }
      uVar9 = uVar2 + 1;
      uVar13 = uVar9 & 7;
      puVar6[1] = uVar2;
      puVar12 = puVar6 + 1;
      if (uVar13 != 0) {
        lVar4 = 0;
        do {
          lVar10 = lVar4;
          uVar9 = uVar9 - 1;
          uVar13 = uVar13 - 1;
          *(undefined2 *)((long)puVar6 + lVar10 + 4) = *(undefined2 *)((long)puVar8 + lVar10 + 4);
          lVar4 = lVar10 + 2;
        } while (uVar13 != 0);
        puVar6 = (ushort *)((long)puVar6 + lVar10 + 4);
        puVar8 = (ushort *)((long)puVar8 + lVar10 + 2);
        puVar11 = puVar8 + 1;
        puVar12 = puVar6;
      }
      if (6 < uVar2) {
        puVar6 = puVar12;
        do {
          puVar6[1] = puVar8[2];
          puVar6[2] = puVar11[2];
          puVar6[3] = puVar11[3];
          puVar6[4] = puVar11[4];
          puVar6[5] = puVar11[5];
          puVar6[6] = puVar11[6];
          puVar8 = puVar11 + 7;
          puVar6[7] = *puVar8;
          puVar11 = puVar11 + 8;
          uVar9 = uVar9 - 8;
          puVar6 = puVar6 + 8;
          *puVar6 = *puVar11;
        } while (uVar9 != 0);
      }
      puVar8 = puVar11;
      iVar5 = uVar1 + iVar5;
    } while (uVar7 != 0);
LAB_02b06860:
    if (iVar5 != 0) {
      puVar6[-1] = 0;
    }
  }
  return;
}


