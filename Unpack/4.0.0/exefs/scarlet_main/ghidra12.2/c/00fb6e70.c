/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb6e70; name: FUN_00fb6e70
 */


int FUN_00fb6e70(byte *param_1,ulong param_2,long param_3,uint param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  int iVar12;
  ulong uVar13;
  undefined *local_68;
  long lStack_60;
  ulong local_58;
  
  uVar13 = param_2 & 0xffffffff;
  cVar5 = (char)param_1;
  lVar6 = std::string::find(cVar5,param_2);
  if (lVar6 == -1) {
    return 0;
  }
  iVar12 = 0;
LAB_00fb6ebc:
  if ((param_4 & 1) != 0) {
    do {
      bVar2 = *param_1;
      uVar8 = lVar6 + 1;
      uVar10 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar10 = *(ulong *)(param_1 + 8);
      }
      if (uVar10 <= uVar8) {
        local_68 = &DAT_04546a28;
        lStack_60 = lVar6;
        local_58 = uVar10;
        FUN_00fb9b60(&local_68);
        std::exception::~exception((exception *)&local_68);
        bVar2 = *param_1;
      }
      if ((bVar2 & 1) == 0) {
        bVar3 = param_1[lVar6 + 2];
        if (bVar3 != param_1[lVar6 + 1]) goto code_r0x00fb6f38;
      }
      else {
        pbVar11 = *(byte **)(param_1 + 0x10);
        bVar3 = pbVar11[uVar8];
        if (bVar3 != pbVar11[lVar6]) {
          uVar10 = *(ulong *)(param_1 + 8);
          goto LAB_00fb705c;
        }
      }
      lVar6 = std::string::find(cVar5,uVar13);
      if (lVar6 == -1) {
        return iVar12;
      }
    } while( true );
  }
  do {
    bVar2 = *param_1;
    uVar9 = (ulong)(bVar2 >> 1);
    uVar10 = *(ulong *)(param_1 + 8);
    uVar8 = lVar6 + 1;
    uVar1 = uVar9;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 <= uVar8) {
      return iVar12 + 1;
    }
    if ((bVar2 & 1) == 0) {
      bVar3 = param_1[lVar6 + 2];
      if (bVar3 != param_1[lVar6 + 1]) goto LAB_00fb6f3c;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x10);
      bVar3 = pbVar11[uVar8];
      if (bVar3 != pbVar11[lVar6]) goto LAB_00fb705c;
    }
    lVar6 = std::string::find(cVar5,uVar13);
    if (lVar6 == -1) {
      return iVar12;
    }
  } while( true );
code_r0x00fb6f38:
  uVar9 = (ulong)(bVar2 >> 1);
LAB_00fb6f3c:
  pbVar7 = param_1 + uVar8 + 1;
  uVar10 = uVar9;
  pbVar11 = param_1 + 1;
LAB_00fb6f4c:
  if ((pbVar7 != pbVar11 + uVar10) && (-1 < (char)bVar3)) {
    uVar4 = *(ushort *)(*(long *)(param_3 + 0x10) + (ulong)bVar3 * 2);
    while ((((uVar4 >> 0xb & 1) != 0 && (pbVar7 = pbVar7 + 1, pbVar11 + uVar10 != pbVar7)) &&
           (-1 < (char)*pbVar7))) {
      uVar4 = *(ushort *)(*(long *)(param_3 + 0x10) + (ulong)*pbVar7 * 2);
    }
  }
  iVar12 = iVar12 + 1;
  lVar6 = std::string::find(cVar5,uVar13);
  if (lVar6 == -1) {
    return iVar12;
  }
  goto LAB_00fb6ebc;
LAB_00fb705c:
  pbVar7 = pbVar11 + uVar8;
  goto LAB_00fb6f4c;
}


