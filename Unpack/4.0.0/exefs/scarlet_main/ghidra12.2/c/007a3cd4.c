/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3cd4; name: FUN_007a3cd4
 */


undefined8 FUN_007a3cd4(long param_1)

{
  undefined *local_48;
  undefined1 local_3f;
  ushort local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  int local_20 [4];
  
  if (3 < *(uint *)(param_1 + 0x10)) {
    local_48 = PTR_DAT_047d0aa8 + 0x10;
    FUN_007a31cc(local_20,&local_48,*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = local_3f;
    *(uint *)(param_1 + 0x1c) = (uint)local_3e;
    if ((*(int *)(param_1 + 0x18) + (uint)local_3e <= *(uint *)(param_1 + 0x10)) &&
       (0x15 < *(uint *)(param_1 + 0x10))) {
      local_48 = PTR_DAT_047d0ad8 + 0x10;
      FUN_007a3da4(local_20,&local_48,*(undefined8 *)(param_1 + 8));
      if (local_20[0] == 0) {
        *(undefined8 *)(param_1 + 0x28) = local_38;
        *(undefined8 *)(param_1 + 0x30) = uStack_30;
        *(undefined2 *)(param_1 + 0x38) = local_28;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


