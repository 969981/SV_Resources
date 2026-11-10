/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


