/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c1ee4; name: FUN_031c1ee4
 */


void FUN_031c1ee4(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  undefined8 local_48;
  
  uVar8 = ((long)param_2 + 0xfbfU & 0xfffffffffffff07f) / 0xfc0;
  iVar7 = (int)uVar8;
  if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) < *(int *)(param_1 + 0x40) + iVar7) {
    FUN_031c25b4(param_1 + 0x38,PTR_PTR_047d1a50);
  }
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < *(int *)(param_1 + 0x50) + iVar7) {
    FUN_031c25b4(param_1 + 0x48,PTR_PTR_047d1a50);
  }
  puVar3 = PTR_PTR_047d1a50;
  puVar2 = PTR_DAT_047d1a08;
  if (0 < iVar7) {
    do {
      local_48 = 0xfc0;
      uVar4 = (**(code **)puVar2)(0,&local_48,0x40);
      iVar7 = *(int *)(param_1 + 0x40);
      lVar5 = (long)iVar7;
      if ((int)(*(uint *)(param_1 + 0x44) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(param_1 + 0x38,puVar3,lVar5 + 1);
        iVar7 = *(int *)(param_1 + 0x40);
      }
      *(undefined8 *)(*(long *)(param_1 + 0x38) + (long)iVar7 * 8) = uVar4;
      iVar7 = *(int *)(param_1 + 0x50);
      lVar6 = (long)iVar7;
      *(int *)(param_1 + 0x40) = (int)(lVar5 + 1);
      if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) <= iVar7) {
        FUN_031c25b4(param_1 + 0x48,puVar3,lVar6 + 1);
        iVar7 = *(int *)(param_1 + 0x50);
      }
      uVar1 = (int)uVar8 - 1;
      uVar8 = (ulong)uVar1;
      *(undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar7 * 8) = uVar4;
      *(int *)(param_1 + 0x50) = (int)(lVar6 + 1);
    } while (uVar1 != 0);
  }
  return;
}


