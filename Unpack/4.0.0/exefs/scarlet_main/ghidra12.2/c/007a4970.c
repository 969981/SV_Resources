/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a4970; name: FUN_007a4970
 */


void FUN_007a4970(long param_1)

{
  undefined *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  undefined2 local_2a;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_60 = PTR_DAT_047d0aa8 + 0x10;
  local_58 = 1;
  local_57 = *(undefined1 *)(param_1 + 0x14);
  local_56 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007a30a4(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_60 = PTR_DAT_047d0ae8 + 0x10;
  local_54 = *(undefined4 *)(param_1 + 0x24);
  local_50 = *(undefined8 *)(param_1 + 0x28);
  local_48 = *(undefined4 *)(param_1 + 0x30);
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(undefined2 *)(param_1 + 0x40);
  local_34 = *(undefined8 *)(param_1 + 0x44);
  FUN_007a4018(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_60 = PTR_DAT_047d0b18 + 0x10;
  local_34 = 0;
  local_2c = *(undefined1 *)(param_1 + 0x58);
  local_2a = *(undefined2 *)(param_1 + 0x5a);
  FUN_007a4a80(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


