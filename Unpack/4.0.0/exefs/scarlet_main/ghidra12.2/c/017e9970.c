/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


