/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a36c4; name: FUN_007a36c4
 */


undefined8 FUN_007a36c4(long param_1)

{
  undefined *local_50;
  undefined1 local_47;
  ushort local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined2 local_26;
  undefined1 local_24;
  int local_20 [4];
  
  if (3 < *(uint *)(param_1 + 0x10)) {
    local_50 = PTR_DAT_047d0aa8 + 0x10;
    FUN_007a31cc(local_20,&local_50,*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = local_47;
    *(uint *)(param_1 + 0x1c) = (uint)local_46;
    if ((*(int *)(param_1 + 0x18) + (uint)local_46 <= *(uint *)(param_1 + 0x10)) &&
       (0x1d < *(uint *)(param_1 + 0x10))) {
      local_44 = 0;
      local_40 = 0;
      local_50 = PTR_DAT_047d0ab8 + 0x10;
      local_28 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_26 = 0;
      local_24 = 0;
      FUN_007a37c0(local_20,&local_50,*(undefined8 *)(param_1 + 8));
      if (local_20[0] == 0) {
        *(undefined4 *)(param_1 + 0x24) = local_44;
        *(undefined2 *)(param_1 + 0x28) = local_40;
        *(undefined8 *)(param_1 + 0x30) = local_38;
        *(undefined8 *)(param_1 + 0x38) = uStack_30;
        *(undefined1 *)(param_1 + 0x40) = local_28;
        *(undefined2 *)(param_1 + 0x42) = local_26;
        *(undefined1 *)(param_1 + 0x44) = local_24;
        return 1;
      }
    }
  }
  return 0;
}


