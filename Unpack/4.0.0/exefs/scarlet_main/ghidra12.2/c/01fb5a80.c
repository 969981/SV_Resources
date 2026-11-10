/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb5a80; name: FUN_01fb5a80
 */


void FUN_01fb5a80(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  
  local_18[0] = 0x3e;
  local_48 = 0xffffffff;
  local_20 = 0;
  local_5c = 0xb;
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_88 = 1;
  uStack_68 = 2;
  local_64 = 0x700000003;
  local_40 = 0;
  uStack_28 = 0;
  local_80 = 0;
  if (*param_1 != 0) {
    local_80 = *(undefined8 *)(*param_1 + 0x30);
  }
  local_78 = 0;
  if (*param_2 != 0) {
    local_78 = *(undefined8 *)(*param_2 + 0x30);
  }
  local_30 = 0;
  if (*param_3 != 0) {
    local_30 = *(undefined8 *)(*param_3 + 0x30);
  }
  local_38 = local_18;
  local_70 = param_5;
  local_6c = param_4;
  FUN_019e9360(&local_88);
  return;
}


