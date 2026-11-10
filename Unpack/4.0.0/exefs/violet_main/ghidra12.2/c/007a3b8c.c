/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a3b8c; name: FUN_007a3b8c
 */


void FUN_007a3b8c(long param_1)

{
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_30;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [4];
  
  local_50 = PTR_DAT_047d0aa8 + 0x10;
  local_48 = 1;
  local_47 = *(undefined1 *)(param_1 + 0x14);
  local_46 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007a30a4(auStack_28,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_50 = PTR_DAT_047d0ad8 + 0x10;
  local_40 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  local_30 = *(undefined2 *)(param_1 + 0x38);
  FUN_007a3c1c(auStack_28,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


