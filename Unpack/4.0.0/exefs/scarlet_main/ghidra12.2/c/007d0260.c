/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d0260; name: FUN_007d0260
 */


void FUN_007d0260(long *param_1)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1290;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x13),(Result *)local_18);
  param_1[0x15] = 0;
  return;
}


