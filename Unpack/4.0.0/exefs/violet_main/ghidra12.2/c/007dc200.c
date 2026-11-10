/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dc200; name: FUN_007dc200
 */


void FUN_007dc200(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_18 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1390;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x6c),(Result *)local_18);
  return;
}


