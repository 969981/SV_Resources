/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5a3d8; name: FUN_00c5a3d8
 */


void FUN_00c5a3d8(long param_1,char *param_2,long param_3,char *param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_047e0be8;
  lVar5 = 0;
  if (*param_2 != '\0') {
    lVar5 = *(long *)(param_2 + 8);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x378);
  uVar2 = *(undefined4 *)(param_1 + 0x2f0);
  uVar7 = *(undefined8 *)(param_1 + 0x2f8);
  lVar4 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar5 + 0x20));
  lVar5 = 0;
  if (*param_4 != '\0') {
    lVar5 = *(long *)(param_4 + 8);
  }
  lVar5 = (**(code **)puVar3)(*(undefined8 *)(lVar5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00c5a4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1f08)
            (uVar6,uVar1,uVar2,uVar7,lVar4 + param_3,lVar5 + param_5,param_6,param_7);
  return;
}


