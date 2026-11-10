/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c1d04; name: FUN_031c1d04
 */


undefined8 FUN_031c1d04(long *param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long local_60;
  undefined8 local_58;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar9 = param_3 - param_2;
  iVar10 = (int)(uVar9 >> 2);
  if (0 < iVar10) {
    local_60 = 0;
    local_58 = 0x8000000000000000;
    uVar8 = uVar9 >> 2 & 0xffffffff;
    FUN_02e9b320(&local_60,PTR_PTR_047d1a50 + 0x20,uVar8);
    if ((int)local_58 != iVar10) {
      local_58 = local_58 & 0xffffffff00000000;
    }
    uVar4 = local_58;
    uVar9 = uVar9 >> 2 & 1;
    if (uVar8 == 1) {
      lVar5 = 0;
      iVar10 = 0;
    }
    else {
      lVar5 = 0;
      iVar10 = 0;
      do {
        piVar1 = (int *)(local_60 + lVar5 * 4);
        *piVar1 = iVar10;
        piVar2 = (int *)(param_2 + lVar5 * 4);
        lVar5 = lVar5 + 2;
        iVar10 = *piVar2 + iVar10;
        piVar1[1] = iVar10;
        iVar10 = piVar2[1] + iVar10;
      } while (uVar8 - uVar9 != lVar5);
    }
    if (uVar9 != 0) {
      *(int *)(local_60 + lVar5 * 4) = iVar10;
    }
    if (0 < (int)param_1[2]) {
      lVar6 = *param_1;
      lVar5 = 0;
      do {
        lVar7 = (long)*(int *)(lVar6 + lVar5 * 4);
        iVar10 = *(int *)(local_60 + lVar7 * 4);
        *(int *)(local_60 + lVar7 * 4) = iVar10 + 1;
        *(int *)(param_4 + (long)iVar10 * 4) = (int)lVar5;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_1[2]);
    }
    uVar9 = (ulong)local_58._4_4_;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    if ((-1 < (long)uVar4) && (local_60 != 0)) {
      (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,local_60,uVar9 << 2);
    }
  }
  return 0;
}


