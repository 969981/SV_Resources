/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d550; name: FUN_0052d550
 */


void FUN_0052d550(long *param_1,long param_2)

{
  int iVar1;
  long local_60 [6];
  undefined8 local_30;
  undefined2 local_28;
  byte local_26;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  local_60[0] = param_2 + iVar1;
  local_60[1] = 0;
  local_28 = 0;
  local_26 = *PTR_DAT_047cdc48 & 1;
  local_30 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,param_2,local_60);
  return;
}


