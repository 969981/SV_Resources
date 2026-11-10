/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb5c58; name: FUN_01fb5c58
 */


void FUN_01fb5c58(long *param_1,long *param_2)

{
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined1 *local_40;
  undefined4 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 local_18 [2];
  
  local_18[0] = 1;
  local_88 = 1;
  local_64 = 0xffffffffffffffff;
  local_5c = 0xffffffffffffffff;
  local_54 = 0xffffffffffffffff;
  local_4c = 0xffffffffffffffff;
  local_20 = 0;
  local_68 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_70 = 0x100000002;
  local_80 = 0;
  if (*param_1 != 0) {
    local_80 = *(undefined8 *)(*param_1 + 0x30);
  }
  local_78 = 0;
  if (*param_2 != 0) {
    local_78 = *(undefined8 *)(*param_2 + 0x30);
  }
  puStack_38 = local_18;
  local_40 = &LAB_01fb60f0;
  FUN_019e9360(&local_88);
  return;
}


