/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef8d20; name: FUN_00ef8d20
 */


void FUN_00ef8d20(long param_1)

{
  FUN_00ef8d88(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x28) = &PTR_LAB_045a0398;
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x20))();
  }
  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_045a0398;
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ef8d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
  return;
}


