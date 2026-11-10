/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a5da0; name: FUN_007a5da0
 */


void FUN_007a5da0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d0ba0;
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x84),(Result *)local_18);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_047d0988 + 0x10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xc;
  param_1[0x16] = 0;
  param_1[0x14] = (long)puVar1;
  param_1[0x15] = 0;
  return;
}


