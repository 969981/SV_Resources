/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0192f468; name: FUN_0192f468
 */


void FUN_0192f468(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x170) + 0x30));
  plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x30),param_2);
                    /* WARNING: Could not recover jumptable at 0x0192f4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x760))(plVar2,uVar1);
  return;
}


