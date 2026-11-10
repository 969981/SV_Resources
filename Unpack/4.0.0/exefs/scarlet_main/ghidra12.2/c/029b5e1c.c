/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b5e1c; name: FUN_029b5e1c
 */


void FUN_029b5e1c(long param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(ulong *)(param_1 + 0x10);
  if (((*(ulong *)(param_1 + 0x10) & 1) != 0) && (*(long **)(param_1 + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  }
  if (((uVar1 >> 1 & 1) != 0) && (*(long **)(param_1 + 0x38) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x50))();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  }
  if (((uVar1 >> 2 & 1) != 0) && (*(long **)(param_1 + 0x58) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x50))();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  }
  if (((uVar1 >> 3 & 1) != 0) && (*(long **)(param_1 + 0x78) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x50))();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  }
  if (((uVar1 >> 4 & 1) != 0) && (*(long **)(param_1 + 0x98) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x10);
  }
  if (((uVar1 >> 5 & 1) == 0) || (*(long **)(param_1 + 0xb8) == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x029b5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x50))();
  return;
}


