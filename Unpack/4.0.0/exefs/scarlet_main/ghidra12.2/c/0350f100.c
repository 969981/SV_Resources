/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350f100; name: FUN_0350f100
 */


void FUN_0350f100(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xa8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,PTR_PTR_047e71e0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


