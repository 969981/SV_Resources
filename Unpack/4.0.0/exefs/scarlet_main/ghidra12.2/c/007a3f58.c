/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3f58; name: FUN_007a3f58
 */


void FUN_007a3f58(long param_1)

{
  undefined *local_60;
  undefined1 local_58;
  undefined1 local_57;
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
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
  local_48 = *(undefined2 *)(param_1 + 0x30);
  local_46 = *(undefined2 *)(param_1 + 0x32);
  local_38 = *(undefined1 *)(param_1 + 0x40);
  local_40 = *(undefined8 *)(param_1 + 0x38);
  local_37 = *(undefined1 *)(param_1 + 0x41);
  local_34 = *(undefined4 *)(param_1 + 0x44);
  uStack_30 = *(undefined4 *)(param_1 + 0x48);
  FUN_007a4018(auStack_28,&local_60,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


