/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a4114; name: FUN_007a4114
 */


undefined8 FUN_007a4114(long param_1)

{
  undefined *local_58;
  undefined1 local_4f;
  ushort local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_2c;
  int local_20 [4];
  
  if (3 < *(uint *)(param_1 + 0x10)) {
    local_58 = PTR_DAT_047d0aa8 + 0x10;
    FUN_007a31cc(local_20,&local_58,*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = local_4f;
    *(uint *)(param_1 + 0x1c) = (uint)local_4e;
    if ((*(int *)(param_1 + 0x18) + (uint)local_4e <= *(uint *)(param_1 + 0x10)) &&
       (0x25 < *(uint *)(param_1 + 0x10))) {
      local_4c = 0;
      local_48 = 0;
      local_58 = PTR_DAT_047d0ae8 + 0x10;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      FUN_007a4220(local_20,&local_58,*(undefined8 *)(param_1 + 8));
      if (local_20[0] == 0) {
        *(undefined4 *)(param_1 + 0x24) = local_4c;
        *(undefined8 *)(param_1 + 0x28) = local_48;
        *(undefined2 *)(param_1 + 0x30) = (undefined2)local_40;
        *(undefined2 *)(param_1 + 0x32) = local_40._2_2_;
        *(undefined8 *)(param_1 + 0x38) = local_38;
        *(undefined1 *)(param_1 + 0x41) = local_30._1_1_;
        *(undefined1 *)(param_1 + 0x40) = (undefined1)local_30;
        *(undefined4 *)(param_1 + 0x44) = (undefined4)local_2c;
        *(undefined4 *)(param_1 + 0x48) = local_2c._4_4_;
        return 1;
      }
    }
  }
  return 0;
}


