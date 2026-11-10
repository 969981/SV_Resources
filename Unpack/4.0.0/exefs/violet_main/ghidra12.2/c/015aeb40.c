/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015aeb40; name: FUN_015aeb40
 */


void FUN_015aeb40(long *param_1)

{
  memset(param_1 + 8,0,0x3e90);
  FUN_015aeb80(param_1);
                    /* WARNING: Could not recover jumptable at 0x015aeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


