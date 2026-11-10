/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029047b8; name: FUN_029047b8
 */


undefined8 FUN_029047b8(long param_1,int param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) ||
     (plVar2 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30)),
     plVar2 == (long *)0x0)) {
    return 0;
  }
  uVar1 = (**(code **)(*plVar2 + 0x650))();
                    /* WARNING: Could not recover jumptable at 0x02904800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x30))(*(long **)(param_1 + 0x58),uVar1);
  return uVar3;
}


