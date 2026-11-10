/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289a0e4; name: FUN_0289a0e4
 */


void FUN_0289a0e4(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_019bde54();
  local_30 = *(long *)(param_1 + 0x28);
  local_38 = local_30;
  if (*(long *)(param_1 + 0x30) != 0) {
    local_38 = local_30 + *(long *)(param_1 + 0x30) * 0x20;
  }
  local_58 = 0;
  uStack_50 = 0;
  FUN_00c43ef0(&local_58,param_2);
  local_48 = *(undefined8 *)(param_2 + 0x10);
  local_40 = *(undefined1 *)(param_2 + 0x18);
  FUN_0289a190(&local_28,&local_30,&local_38,&local_58);
  FUN_019b7290(&local_58);
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar1 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30) * 0x20;
  }
  if (local_28 != lVar1) {
    FUN_0289a248(auStack_60,param_1 + 8);
  }
  return;
}


