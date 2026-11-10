/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a4634; name: FUN_007a4634
 */


void FUN_007a4634(long param_1)

{
  undefined *local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined2 local_46;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 auStack_41 [17];
  undefined1 auStack_30 [16];
  undefined1 auStack_14 [4];
  
  local_50 = PTR_DAT_047d0aa8 + 0x10;
  local_48 = 1;
  local_47 = *(undefined1 *)(param_1 + 0x14);
  local_46 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
  FUN_007a30a4(auStack_30,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  local_50 = PTR_DAT_047d0b08 + 0x10;
  local_44 = *(undefined1 *)(param_1 + 0x24);
  local_43 = *(undefined1 *)(param_1 + 0x25);
  local_42 = *(undefined1 *)(param_1 + 0x26);
  memcpy(auStack_41,(void *)(param_1 + 0x27),0x10);
  FUN_007a46e8(auStack_30,&local_50,*(undefined8 *)(param_1 + 8),auStack_14,
               *(undefined4 *)(param_1 + 0x10));
  return;
}


