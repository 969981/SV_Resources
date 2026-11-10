/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e503a0; name: FUN_00e503a0
 */


void FUN_00e503a0(undefined1 *param_1,long param_2)

{
  if (*(long **)(param_2 + 0x10) == (long *)0x0) {
    *param_1 = *PTR_DAT_047dafa8;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e503b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 0x10) + 0x38))();
  return;
}


