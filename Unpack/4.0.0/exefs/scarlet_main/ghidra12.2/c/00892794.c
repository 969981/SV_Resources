/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892794; name: FUN_00892794
 */


void FUN_00892794(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00896e98();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00896e98(plVar1);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


