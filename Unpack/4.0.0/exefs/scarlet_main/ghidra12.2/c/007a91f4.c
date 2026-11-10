/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a91f4; name: FUN_007a91f4
 */


void FUN_007a91f4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0be0;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0xc);
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1 + 0x12,local_38);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  FUN_00796584(param_1 + 0x15);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_2;
  return;
}


