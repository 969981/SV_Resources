/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322b2c8; name: FUN_0322b2c8
 */


long FUN_0322b2c8(long param_1,undefined4 param_2)

{
  size_t sVar1;
  long *plVar2;
  char acStack_2758 [10024];
  
  FUN_031c68c0(acStack_2758,0x2728,0x2728,&DAT_03be652f,param_2);
  plVar2 = *(long **)(param_1 + 8);
  sVar1 = strlen(acStack_2758);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2758,(long)(int)sVar1);
  return param_1;
}


