/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c92c; name: FUN_0298c92c
 */


void FUN_0298c92c(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3);
                    /* WARNING: Could not recover jumptable at 0x0298c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x3b0))(plVar2,uVar1);
  return;
}


