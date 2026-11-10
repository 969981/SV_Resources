/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f63504; name: FUN_01f63504
 */


void FUN_01f63504(long param_1,long param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN_00c43ef0(&local_40);
  local_30 = *(undefined8 *)(param_2 + 0x10);
  local_28 = *(undefined1 *)(param_2 + 0x18);
  FUN_0289a0e4(param_1 + 0x90,&local_40);
  FUN_019b7290(&local_40);
  return;
}


