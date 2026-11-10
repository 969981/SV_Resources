/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080c090; name: FUN_0080c090
 */


void FUN_0080c090(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulong local_58;
  ulong local_50;
  uint auStack_48 [4];
  undefined4 local_38;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  
  FUN_018dd530(&local_38);
  local_38 = 1;
  nn::util::TinyMt::Initialize(auStack_48,param_2);
  uVar1 = nn::util::TinyMt::GenerateRandomU32();
  lVar2 = nn::util::TinyMt::GenerateRandomU32();
  local_50 = uVar1 & 0xffffffff | lVar2 << 0x20;
  uVar1 = nn::util::TinyMt::GenerateRandomU32();
  lVar2 = nn::util::TinyMt::GenerateRandomU32();
  local_58 = uVar1 & 0xffffffff | lVar2 << 0x20;
  memcpy(&local_68,&local_50,8);
  memcpy(&local_60,&local_58,8);
  local_34 = *(byte *)(param_1 + 0x238) ^ local_68;
  local_33 = *(byte *)(param_1 + 0x239) ^ local_67;
  local_32 = *(byte *)(param_1 + 0x23a) ^ local_66;
  local_31 = *(byte *)(param_1 + 0x23b) ^ local_65;
  local_30 = *(byte *)(param_1 + 0x23c) ^ local_64;
  local_2f = *(byte *)(param_1 + 0x23d) ^ local_63;
  local_2e = *(byte *)(param_1 + 0x23e) ^ local_62;
  local_2d = *(byte *)(param_1 + 0x23f) ^ local_61;
  local_2c = *(byte *)(param_1 + 0x240) ^ local_60;
  local_2b = *(byte *)(param_1 + 0x241) ^ local_5f;
  local_2a = *(byte *)(param_1 + 0x242) ^ local_5e;
  local_29 = *(byte *)(param_1 + 0x243) ^ local_5d;
  local_28 = *(byte *)(param_1 + 0x244) ^ local_5c;
  local_27 = *(byte *)(param_1 + 0x245) ^ local_5b;
  local_26 = *(byte *)(param_1 + 0x246) ^ local_5a;
  local_25 = *(byte *)(param_1 + 0x247) ^ local_59;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    FUN_007cde64(*(long *)PTR_DAT_047d0a08,&local_38);
  }
  return;
}


