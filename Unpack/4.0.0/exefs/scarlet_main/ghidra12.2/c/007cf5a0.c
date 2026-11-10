/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cf5a0; name: FUN_007cf5a0
 */


void FUN_007cf5a0(long *param_1)

{
  undefined *puVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1230;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0xc);
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1 + 0x12,local_28);
  return;
}


