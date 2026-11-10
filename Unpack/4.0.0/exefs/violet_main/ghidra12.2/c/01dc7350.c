/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc7350; name: FUN_01dc7350
 */


int FUN_01dc7350(undefined8 param_1,int param_2,undefined4 param_3,uint *param_4,int *param_5,
                int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  uVar6 = 6;
  if (param_2 != 0) {
    uVar6 = 1;
  }
  iVar7 = *param_6;
  if (iVar7 < 1) {
    iVar9 = 0;
  }
  else {
    uVar4 = 0;
    if (uVar6 != 0) {
      uVar4 = *param_4 / uVar6;
    }
    iVar11 = 0;
    iVar9 = 0;
    iVar12 = -1;
    iVar10 = -1;
    iVar14 = -1;
    iVar13 = -1;
    iVar3 = *param_4 - uVar4 * uVar6;
    iVar8 = *param_5;
    do {
      if (0 < iVar8) {
        iVar7 = 0;
        do {
          lVar5 = FUN_010f26f8(param_1,param_2,param_3,iVar3 + (iVar11 + uVar4) * uVar6 + iVar7);
          iVar1 = iVar11;
          if (iVar13 != -1) {
            iVar1 = iVar13;
          }
          iVar8 = iVar7;
          if (iVar10 <= iVar7 && iVar10 != -1) {
            iVar8 = iVar10;
          }
          iVar2 = iVar7;
          if (iVar7 <= iVar12) {
            iVar2 = iVar12;
          }
          if (lVar5 != 0) {
            iVar10 = iVar8;
          }
          iVar8 = *param_5;
          iVar7 = iVar7 + 1;
          if (lVar5 != 0) {
            iVar9 = iVar9 + 1;
            iVar12 = iVar2;
            iVar14 = iVar11;
            iVar13 = iVar1;
          }
        } while (iVar7 < iVar8);
        iVar7 = *param_6;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar7);
    if (iVar9 != 0) {
      *param_4 = iVar10 + iVar3 + (iVar13 + uVar4) * uVar6;
      *param_5 = (iVar12 - iVar10) + 1;
      *param_6 = (iVar14 - iVar13) + 1;
    }
  }
  return iVar9;
}


