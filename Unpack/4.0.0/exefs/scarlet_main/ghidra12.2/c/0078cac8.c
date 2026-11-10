/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078cac8; name: FUN_0078cac8
 */


void FUN_0078cac8(undefined4 *param_1)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_018ff39c(param_1 + 1,local_28);
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


