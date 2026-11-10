/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b8d00; name: FUN_011b8d00
 */


int FUN_011b8d00(ushort *param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = 0;
  do {
    uVar3 = *param_2;
    *param_1 = uVar3;
    if (uVar3 == 0) {
      return iVar6;
    }
    if (uVar3 == 0x10) {
      puVar10 = param_2 + 1;
      uVar3 = *puVar10;
      uVar1 = uVar3 + 2;
      bVar5 = param_3 < uVar1;
      param_3 = param_3 - uVar1;
      if (bVar5 || param_3 == 0) {
        *param_1 = 0;
        return iVar6;
      }
      uVar8 = uVar3 + 1;
      uVar2 = uVar8 & 7;
      puVar7 = param_1 + 1;
      *puVar7 = uVar3;
      if (uVar2 != 0) {
        lVar4 = 0;
        do {
          lVar9 = lVar4;
          uVar8 = uVar8 - 1;
          uVar2 = uVar2 - 1;
          *(undefined2 *)((long)param_1 + lVar9 + 4) = *(undefined2 *)((long)param_2 + lVar9 + 4);
          lVar4 = lVar9 + 2;
        } while (uVar2 != 0);
        param_1 = (ushort *)((long)param_1 + lVar9 + 4);
        param_2 = (ushort *)((long)param_2 + lVar9 + 2);
        puVar10 = param_2 + 1;
        puVar7 = param_1;
      }
      if (6 < uVar3) {
        do {
          puVar7[1] = param_2[2];
          puVar7[2] = puVar10[2];
          puVar7[3] = puVar10[3];
          puVar7[4] = puVar10[4];
          puVar7[5] = puVar10[5];
          puVar7[6] = puVar10[6];
          param_2 = puVar10 + 7;
          puVar7[7] = *param_2;
          puVar10 = puVar10 + 8;
          uVar8 = uVar8 - 8;
          puVar7 = puVar7 + 8;
          *puVar7 = *puVar10;
          param_1 = puVar7;
        } while (uVar8 != 0);
      }
      param_2 = puVar10;
      iVar6 = uVar1 + iVar6;
    }
    else {
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 1;
      param_3 = param_3 - 1;
    }
  } while (param_3 != 0);
  if (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    param_1[-1] = 0;
  }
  return iVar6;
}


