/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1f8bc; name: FUN_02f1f8bc
 */


void FUN_02f1f8bc(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long local_48;
  
  iVar1 = (int)param_3[1];
  iVar2 = iVar1 * 0x20;
  if (*(int *)(param_2 + 0x624) < iVar1 * 0x20) {
    if (*(long *)(param_2 + 0x628) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(param_2 + 0x628),0);
      *(undefined4 *)(param_2 + 0x624) = 0;
      *(undefined8 *)(param_2 + 0x628) = 0;
    }
    local_48 = (long)(iVar2 + 0x30);
    uVar4 = (**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    *(undefined8 *)(param_2 + 0x628) = uVar4;
    *(int *)(param_2 + 0x624) = iVar2;
  }
  *(int *)(param_2 + 0x620) = iVar2;
  puVar3 = PTR_DAT_047d1a08;
  if (*(int *)(param_2 + 0x634) < iVar2) {
    if (*(long *)(param_2 + 0x638) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(param_2 + 0x638),0);
      *(undefined4 *)(param_2 + 0x634) = 0;
      *(undefined8 *)(param_2 + 0x638) = 0;
    }
    local_48 = (long)(iVar2 + 0x30);
    lVar5 = (**(code **)puVar3)(0,&local_48,0);
    *(long *)(param_2 + 0x638) = lVar5;
    *(int *)(param_2 + 0x634) = iVar2;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x638);
  }
  puVar7 = (undefined8 *)(lVar5 + 0x3fU & 0xffffffffffffffc0);
  *(int *)(param_2 + 0x630) = iVar2;
  puVar6 = (undefined8 *)(*(long *)(param_2 + 0x628) + 0x3fU & 0xffffffffffffffc0);
  *(int *)(param_2 + 0x640) = iVar1;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  FUN_02f1fa18(param_1,param_2 + 0x530,*(undefined8 *)(param_2 + 0x150),*param_3 + 4,iVar1 + -1,
               (ulong)puVar6 | 0x20,(ulong)puVar7 | 0x20);
  return;
}


