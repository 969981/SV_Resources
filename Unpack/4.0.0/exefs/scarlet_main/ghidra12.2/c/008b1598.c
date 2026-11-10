/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b1598; name: FUN_008b1598
 */


void FUN_008b1598(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_88 [20];
  undefined8 local_74;
  undefined4 local_64;
  long local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_30;
  byte local_28;
  byte local_26;
  
  if (*(char *)(param_1 + 0x117) != '\0') {
    FUN_00889974(auStack_88);
    local_74 = 0;
    bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
    local_28 = bVar1 & 1;
    local_26 = bVar1 >> 6 & 1;
    local_64 = *(undefined4 *)(param_1 + 0x118);
    local_60 = *(long *)(param_1 + 0xf0);
    if (local_60 != 0) {
      FUN_00fe8c50(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),auStack_88);
      uStack_44 = *(undefined4 *)(param_1 + 0x100);
      local_48 = *(undefined4 *)(param_1 + 0x104);
      if ((*(byte *)(param_1 + 0x114) >> 6 & 1) == 0) {
        local_4c = 0x7f7fffff;
      }
      else {
        local_4c = *(undefined4 *)(param_1 + 0x50);
      }
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      local_30 = *(long *)(param_1 + 0x108);
    }
    FUN_00889a60(auStack_88,param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112)
                );
    thunk_FUN_00884284(auStack_88);
    return;
  }
  FUN_0088b138(auStack_88);
  local_74 = 0;
  bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
  local_28 = bVar1 & 1;
  local_26 = bVar1 >> 6 & 1;
  local_64 = *(undefined4 *)(param_1 + 0x118);
  local_60 = *(long *)(param_1 + 0xf0);
  if (local_60 != 0) {
    FUN_00fe8c50(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),auStack_88);
    uStack_44 = *(undefined4 *)(param_1 + 0x100);
    local_48 = *(undefined4 *)(param_1 + 0x104);
    if ((*(byte *)(param_1 + 0x114) >> 6 & 1) == 0) {
      local_4c = 0x7f7fffff;
    }
    else {
      local_4c = *(undefined4 *)(param_1 + 0x50);
    }
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    local_30 = *(long *)(param_1 + 0x108);
  }
  FUN_0088b1d8(auStack_88,param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112));
  thunk_FUN_00884284(auStack_88);
  return;
}


