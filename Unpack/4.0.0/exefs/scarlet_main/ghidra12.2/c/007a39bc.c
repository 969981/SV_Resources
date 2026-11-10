/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a39bc; name: FUN_007a39bc
 */


undefined8 FUN_007a39bc(long param_1)

{
  int local_30 [4];
  undefined *local_20;
  undefined1 local_17;
  ushort local_16;
  undefined4 local_14;
  
  if (3 < *(uint *)(param_1 + 0x10)) {
    local_20 = PTR_DAT_047d0aa8 + 0x10;
    FUN_007a31cc(local_30,&local_20,*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = local_17;
    *(uint *)(param_1 + 0x1c) = (uint)local_16;
    if ((*(int *)(param_1 + 0x18) + (uint)local_16 <= *(uint *)(param_1 + 0x10)) &&
       (7 < *(uint *)(param_1 + 0x10))) {
      local_20 = PTR_DAT_047d0ac8 + 0x10;
      FUN_007a3a84(local_30,&local_20,*(undefined8 *)(param_1 + 8));
      if (local_30[0] == 0) {
        *(undefined4 *)(param_1 + 0x24) = local_14;
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


