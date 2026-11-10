/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322b340; name: FUN_0322b340
 */


void FUN_0322b340(long param_1,char *param_2)

{
  size_t sVar1;
  long *plVar2;
  char acStack_2768 [10024];
  
  vsnprintf(acStack_2768,0x2728,param_2,acStack_2768 + 0x2728);
  plVar2 = *(long **)(param_1 + 8);
  sVar1 = strlen(acStack_2768);
  (**(code **)(*plVar2 + 0x28))(plVar2,acStack_2768,(long)(int)sVar1);
  return;
}


