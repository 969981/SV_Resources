/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a2628; name: FUN_014a2628
 */


void FUN_014a2628(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00eeb618(param_1 + 0x30);
  plVar2 = (long *)*param_3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x38);
  *(long **)(param_1 + 0x38) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))();
  }
  plVar2 = (long *)*param_4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  *(long **)(param_1 + 0x40) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))();
  }
  FUN_014a3760(param_1);
  FUN_014a476c(param_1);
  return;
}


