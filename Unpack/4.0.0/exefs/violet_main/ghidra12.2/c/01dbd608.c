/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbd608; name: FUN_01dbd608
 */


void FUN_01dbd608(long param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  long lVar12;
  ushort *puVar13;
  
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x45);
  iVar6 = 0;
  puVar8 = (ushort *)((long)param_2 + 6);
  puVar10 = (ushort *)(param_1 + 0x50);
  *(undefined1 *)((long)param_2 + 5) = *(undefined1 *)(param_1 + 0x47);
  uVar9 = 0xd;
  do {
    uVar3 = *puVar10;
    *puVar8 = uVar3;
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 == 0x10) {
      puVar13 = puVar10 + 1;
      uVar3 = *puVar13;
      uVar1 = uVar3 + 2;
      bVar5 = uVar9 < uVar1;
      uVar9 = uVar9 - uVar1;
      if (bVar5 || uVar9 == 0) {
        *puVar8 = 0;
        return;
      }
      uVar11 = uVar3 + 1;
      uVar2 = uVar11 & 7;
      puVar7 = puVar8 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar12 = lVar4;
          uVar11 = uVar11 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)puVar8 + lVar12 + 4) = *(undefined2 *)((long)puVar10 + lVar12 + 4);
          lVar4 = lVar12 + 2;
        } while (uVar2 != 0);
        puVar8 = (ushort *)((long)puVar8 + lVar12 + 4);
        puVar10 = (ushort *)((long)puVar10 + lVar12 + 2);
        puVar13 = puVar10 + 1;
        puVar7 = puVar8;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = puVar10[2];
          puVar7[2] = puVar13[2];
          puVar7[3] = puVar13[3];
          puVar7[4] = puVar13[4];
          puVar7[5] = puVar13[5];
          puVar7[6] = puVar13[6];
          puVar10 = puVar13 + 7;
          puVar7[7] = *puVar10;
          puVar13 = puVar13 + 8;
          uVar11 = uVar11 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar13;
          puVar8 = puVar7;
        } while (uVar11 != 0);
      }
      puVar10 = puVar13;
      iVar6 = uVar1 + iVar6;
    }
    else {
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
      iVar6 = iVar6 + 1;
      uVar9 = uVar9 - 1;
    }
  } while (uVar9 != 0);
  if (iVar6 != 0) {
    puVar8[-1] = 0;
  }
  return;
}


