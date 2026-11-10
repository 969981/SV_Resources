/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03227bc4; name: FUN_03227bc4
 */


void FUN_03227bc4(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_2 + 0x28) = 0;
  plVar1 = (long *)(**(code **)(**(long **)(param_1 + 8) + 0x40))();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x58))();
    *(undefined8 *)(param_2 + 0x28) = uVar2;
  }
  return;
}


