/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350e1b4; name: FUN_0350e1b4
 */


undefined8 FUN_0350e1b4(long param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    return 0x11;
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,*param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0350e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2);
  return uVar2;
}


