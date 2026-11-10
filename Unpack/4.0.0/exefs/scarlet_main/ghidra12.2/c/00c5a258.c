/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5a258; name: FUN_00c5a258
 */


void FUN_00c5a258(long param_1,char *param_2,long param_3,char *param_4,long param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_047e0be8;
  lVar4 = 0;
  if (*param_2 != '\0') {
    lVar4 = *(long *)(param_2 + 8);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x378);
  lVar3 = (**(code **)PTR_DAT_047e0be8)(*(undefined8 *)(lVar4 + 0x20));
  lVar4 = 0;
  if (*param_4 != '\0') {
    lVar4 = *(long *)(param_4 + 8);
  }
  lVar4 = (**(code **)puVar2)(*(undefined8 *)(lVar4 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00c5a308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047e1f00)(uVar5,uVar1,lVar3 + param_3,lVar4 + param_5,param_6,param_7);
  return;
}


