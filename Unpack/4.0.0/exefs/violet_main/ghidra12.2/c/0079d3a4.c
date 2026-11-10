/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079d3a4; name: FUN_0079d3a4
 */


void FUN_0079d3a4(long *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  int local_48;
  int iStack_44;
  
  FUN_007a3ae8(auStack_60,param_1 + 0x52,0x4d8,param_1);
  FUN_007a3b8c(auStack_60);
  FUN_007a4c48(auStack_78,param_1 + 0x188,0x4d8);
  FUN_007a4c58(auStack_78,local_58,iStack_44 + local_48,0x41);
  (**(code **)(*param_1 + 0x140))(param_1,auStack_78,param_2,0);
  return;
}


