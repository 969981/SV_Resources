/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079e2f8; name: FUN_0079e2f8
 */


void FUN_0079e2f8(long param_1)

{
  if (*(long **)(param_1 + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x28))();
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 0x28))();
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 0x28))();
  }
  if (*(long **)(param_1 + 0x1158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1158) + 0x28))();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    FUN_007a5e40();
  }
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x28))();
  }
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x28))();
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 0x28))();
  }
  if (*(long **)(param_1 + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x160) + 0x28))();
  }
  if (*(long **)(param_1 + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0x28))();
  }
  if (*(long **)(param_1 + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x150) + 0x28))();
  }
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x28))();
  }
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 0x28))();
  }
  if (*(long **)(param_1 + 0x138) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0079e410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x138) + 0x28))();
  return;
}


