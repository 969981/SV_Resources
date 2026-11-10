/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01209bf4; name: FUN_01209bf4
 */


void FUN_01209bf4(long param_1)

{
  if (*(long **)(param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x20))();
  }
  if (*(long **)(param_1 + 0x138) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x20))();
  }
  if (*(long **)(param_1 + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x20))();
  }
  if (*(long **)(param_1 + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  }
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  }
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x20))();
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
  }
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x20))();
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01209d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


