/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d9f4c; name: FUN_007d9f4c
 */


void FUN_007d9f4c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  FUN_00792e30();
  puVar1 = PTR_DAT_047d1310;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0((long)param_1 + 0x6c,local_38);
  *(undefined1 *)((long)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0((long)param_1 + 0x9c,local_38);
  return;
}


