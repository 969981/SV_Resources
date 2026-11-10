/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3530; name: FUN_007a3530
 */


void FUN_007a3530(long param_1)

{
  undefined *local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_58 = PTR_DAT_047d0aa8 + 0x10;
  local_50 = 1;
  local_4f = *(undefined1 *)(param_1 + 0x14);
  local_4e = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007a30a4(auStack_28,&local_58,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_58 = PTR_DAT_047d0ab8 + 0x10;
  local_4c = *(undefined4 *)(param_1 + 0x24);
  local_48 = *(undefined2 *)(param_1 + 0x28);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  local_30 = *(undefined1 *)(param_1 + 0x40);
  local_2e = *(undefined2 *)(param_1 + 0x42);
  local_2c = *(undefined1 *)(param_1 + 0x44);
  FUN_007a35e0(auStack_28,&local_58,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


