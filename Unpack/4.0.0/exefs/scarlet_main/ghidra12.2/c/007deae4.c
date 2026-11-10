/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007deae4; name: FUN_007deae4
 */


void FUN_007deae4(long *param_1,long param_2)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_00792e30();
  *param_1 = (long)(PTR_DAT_047d13f0 + 0x10);
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  FUN_007e5190(param_1 + 0xd);
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0((long)param_1 + 0xb4,local_30);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}


