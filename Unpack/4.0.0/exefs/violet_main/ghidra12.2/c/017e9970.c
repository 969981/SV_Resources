/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e9970; name: FUN_017e9970
 */


void FUN_017e9970(long *param_1,undefined8 param_2)

{
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  FUN_017e99c0(&local_40);
  *(undefined8 *)(local_40 + 0xd8) = param_2;
  *param_1 = local_40;
  param_1[1] = lStack_38;
  param_1[2] = local_30;
  param_1[3] = lStack_28;
  return;
}


