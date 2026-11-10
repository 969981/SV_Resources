/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b1c34; name: FUN_008b1c34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b1c34(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 auStack_180 [64];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [56];
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  
  local_48 = 0;
  local_70 = 0xff;
  local_4c = 0xff;
  local_88 = 0;
  local_a8 = 0;
  local_a0 = (undefined1 *)0x0;
  local_80 = 0x3f800000;
  local_6c = 0;
  local_7c = 0x3f8000003f800000;
  local_74 = 0x3f800000;
  local_68 = 0;
  local_50 = 0x3f800000;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_60 = 0x3f80000000000000;
  uStack_58 = 0x3f8000003f800000;
  FUN_008b1d8c(param_1,auStack_f0,param_2);
  uStack_118 = DAT_03cab628;
  local_120 = DAT_03cab620;
  uStack_108 = _UNK_03cabe68;
  uStack_110 = _DAT_03cabe60;
  local_98 = &local_120;
  uStack_f8 = _UNK_03caa5b8;
  local_100 = _DAT_03caa5b0;
  if ((*(byte *)(param_1 + 0x114) >> 3 & 1) != 0) {
    local_140 = *(undefined4 *)(param_1 + 300);
    uStack_13c = *(undefined4 *)(param_1 + 0x130);
    local_138 = *(undefined8 *)(param_1 + 0x11c);
    uStack_130 = *(undefined8 *)(param_1 + 0x124);
    local_128 = *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0xf8);
    local_b8 = &local_140;
  }
  local_a0 = auStack_f0;
  FUN_008b1a2c(param_1,&local_b8);
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) {
    puVar2 = (undefined1 *)(param_2 + 0x10);
  }
  else {
    FUN_008a8858(param_1,auStack_180);
    uVar1 = FUN_008a71dc(param_1);
    puVar2 = auStack_180;
    if ((uVar1 & 1) != 0) {
      local_70 = 0xff;
      puVar2 = auStack_180;
    }
  }
  FUN_00884754(*(undefined8 *)(param_1 + 0x148),puVar2,&local_b8,
               *(ushort *)(param_1 + 0x114) >> 0xb & 1,*(ushort *)(param_1 + 0x114) >> 0xc & 1,
               param_3 & 1);
  return;
}


