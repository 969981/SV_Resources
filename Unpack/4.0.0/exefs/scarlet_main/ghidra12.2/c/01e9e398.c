/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9e398; name: FUN_01e9e398
 */


void FUN_01e9e398(long param_1,ushort *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  
  iVar7 = 0;
  puVar9 = (ushort *)(param_1 + 0x50);
  uVar8 = 0xd;
  do {
    uVar3 = *puVar9;
    *param_2 = uVar3;
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 == 0x10) {
      puVar12 = puVar9 + 1;
      uVar3 = *puVar12;
      uVar1 = uVar3 + 2;
      bVar5 = uVar8 < uVar1;
      uVar8 = uVar8 - uVar1;
      if (bVar5 || uVar8 == 0) {
        *param_2 = 0;
        return;
      }
      uVar10 = uVar3 + 1;
      uVar2 = uVar10 & 7;
      puVar6 = param_2 + 1;
      *puVar6 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar11 = lVar4;
          uVar10 = uVar10 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)param_2 + lVar11 + 4) = *(undefined2 *)((long)puVar9 + lVar11 + 4);
          lVar4 = lVar11 + 2;
        } while (uVar2 != 0);
        param_2 = (ushort *)((long)param_2 + lVar11 + 4);
        puVar9 = (ushort *)((long)puVar9 + lVar11 + 2);
        puVar12 = puVar9 + 1;
        puVar6 = param_2;
      }
      if (6 < uVar3) {
        do {
          puVar6[1] = puVar9[2];
          puVar6[2] = puVar12[2];
          puVar6[3] = puVar12[3];
          puVar6[4] = puVar12[4];
          puVar6[5] = puVar12[5];
          puVar6[6] = puVar12[6];
          puVar9 = puVar12 + 7;
          puVar6[7] = *puVar9;
          puVar12 = puVar12 + 8;
          uVar10 = uVar10 - 8;
          puVar6 = puVar6 + 8;
          *puVar6 = *puVar12;
          param_2 = puVar6;
        } while (uVar10 != 0);
      }
      puVar9 = puVar12;
      iVar7 = uVar1 + iVar7;
    }
    else {
      param_2 = param_2 + 1;
      puVar9 = puVar9 + 1;
      iVar7 = iVar7 + 1;
      uVar8 = uVar8 - 1;
    }
  } while (uVar8 != 0);
  if (iVar7 != 0) {
    param_2[-1] = 0;
  }
  return;
}


