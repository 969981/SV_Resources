/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079c0f0; name: FUN_0079c0f0
 */


undefined8 FUN_0079c0f0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_170 [17];
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 auStack_c0 [64];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  local_170[0] = 0;
  FUN_007935cc(local_170);
  local_18 = local_170[0];
  uVar1 = FUN_0078a34c(param_2);
  if ((uVar1 & 1) == 0) {
    local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20);
    FUN_0078a244(local_170,param_2,&local_c8);
    FUN_007938b0(&local_18,(ulong)local_c8 & 0xffffffff);
    return local_18;
  }
  local_40 = 0;
  uStack_38 = 0;
  FUN_0078a390(local_170,param_2,&local_40);
  memcpy(auStack_30,&local_40,0x10);
  memset(auStack_50,0,0x10);
  local_80 = 0;
  local_78 = 0;
  local_c8 = PTR_DAT_047d0a58 + 0x10;
  memset(auStack_c0,0,0x40);
  local_c8 = PTR_DAT_047d0a60 + 0x10;
  FUN_007976d8(local_170);
  FUN_007976e0(local_170,&local_c8,auStack_50,0x10);
  FUN_0079790c(local_170,auStack_e8,auStack_30,0x10);
  memcpy(&local_18,auStack_e8,8);
  return local_18;
}


