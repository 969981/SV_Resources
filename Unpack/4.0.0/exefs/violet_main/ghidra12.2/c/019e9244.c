/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e9244; name: FUN_019e9244
 */


void FUN_019e9244(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  code *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_28 [2];
  
  local_48 = 0;
  local_28[0] = 0x3e;
  if ((param_6 & 1) == 0) {
    local_28[0] = 0x3a;
  }
  local_8c = 0xffffffffffffffff;
  local_84 = 0xffffffffffffffff;
  local_7c = 0xffffffffffffffff;
  local_74 = 0xffffffffffffffff;
  local_ac = 4;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_68 = (code *)0x0;
  puStack_60 = (undefined4 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_b0 = FUN_019e9320();
  local_a8 = 0;
  if (*param_1 != 0) {
    local_a8 = *(undefined8 *)(*param_1 + 0x30);
  }
  local_a0 = 0;
  if (*param_2 != 0) {
    local_a0 = *(undefined8 *)(*param_2 + 0x30);
  }
  local_58 = 0;
  if (*param_3 != 0) {
    local_58 = *(undefined8 *)(*param_3 + 0x30);
  }
  puStack_60 = local_28;
  local_68 = FUN_01aac150;
  local_98 = param_5;
  uStack_94 = param_4;
  FUN_019e9360(&local_b0);
  return;
}


