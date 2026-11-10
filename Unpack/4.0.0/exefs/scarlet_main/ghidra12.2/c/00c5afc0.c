/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c5afc0; name: FUN_00c5afc0
 */


void FUN_00c5afc0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)PTR_DAT_047d28d8)(**(undefined8 **)(param_1 + 8),*param_4,*param_5);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_008f1398(param_3);
                    /* WARNING: Could not recover jumptable at 0x00c5b034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d28e0)(uVar3,uVar1,param_2,uVar2);
  return;
}


