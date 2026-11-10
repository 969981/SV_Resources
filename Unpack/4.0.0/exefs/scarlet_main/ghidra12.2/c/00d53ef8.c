/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d53ef8; name: FUN_00d53ef8
 */


void FUN_00d53ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = (long *)FUN_00d53f4c();
  if ((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x28))(), (uVar2 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00d53f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
  return;
}


