/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297abcc; name: FUN_0297abcc
 */


void FUN_0297abcc(long *param_1)

{
  FUN_00f13ad8(param_1[9]);
                    /* WARNING: Could not recover jumptable at 0x0297abf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e0))(param_1);
  return;
}


