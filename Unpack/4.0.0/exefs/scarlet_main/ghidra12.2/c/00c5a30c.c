/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5a30c; name: FUN_00c5a30c
 */


void FUN_00c5a30c(long param_1,char *param_2,char *param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_DAT_047e0be8;
  lVar1 = 0;
  if (*param_2 != '\0') {
    lVar1 = *(long *)(param_2 + 8);
  }
  lVar5 = 0;
  if (*param_3 != '\0') {
    lVar5 = *(long *)(param_3 + 8);
  }
  if (lVar1 != 0 && lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x20);
    if (*(long *)(lVar1 + 0x20) != 0 && lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = (**(code **)PTR_DAT_047e0be8)(*(long *)(lVar1 + 0x20));
      uVar4 = (**(code **)puVar2)(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00c5a3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_047e1f30)(uVar6,uVar3,uVar4,param_4,param_5);
      return;
    }
  }
  return;
}


