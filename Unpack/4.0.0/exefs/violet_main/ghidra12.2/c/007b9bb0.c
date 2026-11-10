/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b9bb0; name: FUN_007b9bb0
 */


void FUN_007b9bb0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 void *param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 local_178 [4];
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined1 auStack_140 [64];
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_d0 [34];
  undefined4 local_48 [2];
  
  if (*(char *)(param_2 + 0x230) == '\0') {
    local_d0[0] = 0x10408;
  }
  else {
    if (*(int *)(param_2 + 0x234) != 0) {
      FUN_007976d8(local_d0);
      local_100 = 0;
      local_f8 = 0;
      local_148 = PTR_DAT_047d0a58 + 0x10;
      memset(auStack_140,0,0x40);
      local_148 = PTR_DAT_047d0a60 + 0x10;
      FUN_007976e0(local_d0,&local_148,param_2 + 0x238,0x10);
      FUN_0079790c(local_d0,auStack_168,param_3,param_4);
      memcpy(param_5,auStack_168,(ulong)param_6);
      local_178[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_178 | 4),(Result *)local_48);
      puVar1 = local_178;
      goto LAB_007b9cb4;
    }
    local_d0[0] = 0;
  }
  local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_148);
  puVar1 = local_d0;
LAB_007b9cb4:
  FUN_00cbd7c0(param_1,puVar1);
  return;
}


