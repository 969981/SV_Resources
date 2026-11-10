/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c53564; name: FUN_00c53564
 */


void FUN_00c53564(long param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar3 = PTR_DAT_047e0cb0;
  puVar7 = *(undefined4 **)(param_1 + 0x88);
  puVar2 = *(undefined4 **)(param_1 + 0x90);
  if (puVar7 != puVar2) {
    local_50 = *(undefined8 *)(puVar7 + 1);
    uVar5 = *puVar7;
    local_48 = puVar7[3];
    uStack_44 = puVar7[4];
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    while( true ) {
      (**(code **)puVar3)(uVar4,uVar5,&local_50,0xf);
      puVar1 = puVar7 + 5;
      if (puVar1 == puVar2) break;
      local_50 = *(undefined8 *)(puVar7 + 6);
      local_48 = puVar7[8];
      uStack_44 = puVar7[9];
      uVar5 = *puVar1;
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      puVar7 = puVar1;
    }
  }
  iVar6 = *(int *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if (iVar6 != 0) {
      FUN_00c59d74(param_2,*(undefined4 *)(param_1 + 200),iVar6);
      return;
    }
  }
  else if (iVar6 == 0) {
    if (*(long *)(param_2 + 0xb0) != 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = 0;
      iVar6 = 0;
LAB_00c535e0:
                    /* WARNING: Could not recover jumptable at 0x00c535f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_047e0ca8)(*(undefined4 *)(param_1 + 0xc4),uVar4,1,uVar5,iVar6);
      return;
    }
  }
  else if (*(long *)(param_2 + 0xb0) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 200);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    goto LAB_00c535e0;
  }
  return;
}


