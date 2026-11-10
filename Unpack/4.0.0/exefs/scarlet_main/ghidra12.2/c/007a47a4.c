/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a47a4; name: FUN_007a47a4
 */


undefined8 FUN_007a47a4(long param_1)

{
  undefined *local_50;
  undefined1 local_47;
  ushort local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 auStack_41 [17];
  int local_30 [4];
  
  if (3 < *(uint *)(param_1 + 0x10)) {
    local_50 = PTR_DAT_047d0aa8 + 0x10;
    FUN_007a31cc(local_30,&local_50,*(undefined8 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x14) = local_47;
    *(uint *)(param_1 + 0x1c) = (uint)local_46;
    if ((*(int *)(param_1 + 0x18) + (uint)local_46 <= *(uint *)(param_1 + 0x10)) &&
       (0x16 < *(uint *)(param_1 + 0x10))) {
      local_50 = PTR_DAT_047d0b08 + 0x10;
      FUN_007a48a0(local_30,&local_50,*(undefined8 *)(param_1 + 8));
      if (local_30[0] == 0) {
        *(undefined1 *)(param_1 + 0x24) = local_44;
        *(undefined1 *)(param_1 + 0x25) = local_43;
        *(undefined1 *)(param_1 + 0x26) = local_42;
        memcpy((void *)(param_1 + 0x27),auStack_41,0x10);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


