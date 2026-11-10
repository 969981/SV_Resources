/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4b28; name: FUN_007a4b28
 */


undefined8 FUN_007a4b28(long param_1)

{
  ulong uVar1;
  int local_58 [4];
  undefined *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined2 local_20;
  undefined8 local_1c;
  undefined1 local_14;
  undefined2 local_12;
  
  uVar1 = FUN_007a4114();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (0x28 < *(uint *)(param_1 + 0x10)) {
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_48 = PTR_DAT_047d0b18 + 0x10;
    local_1c = 0;
    local_14 = 0;
    local_12 = 0;
    FUN_007a4bd4(local_58,&local_48,*(undefined8 *)(param_1 + 8));
    if (local_58[0] == 0) {
      *(undefined1 *)(param_1 + 0x58) = local_14;
      *(undefined2 *)(param_1 + 0x5a) = local_12;
      return 1;
    }
  }
  return 0;
}


