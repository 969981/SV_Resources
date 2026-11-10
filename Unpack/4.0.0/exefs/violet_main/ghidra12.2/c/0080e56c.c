/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080e56c; name: FUN_0080e56c
 */


void FUN_0080e56c(long *param_1)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1818;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0078ca60(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x12) = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x94),(Result *)local_18);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}


