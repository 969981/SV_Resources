/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6ade8; name: FUN_01f6ade8
 */


void FUN_01f6ade8(long *param_1)

{
  *(undefined4 *)(param_1 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x01f6adf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}


