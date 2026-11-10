/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322b1e0; name: FUN_0322b1e0
 */


long FUN_0322b1e0(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 8);
  if (param_2 == (char *)0x0) {
    param_2 = "(null)";
    pcVar3 = *(code **)(*plVar4 + 0x28);
    lVar2 = 6;
  }
  else {
    sVar1 = strlen(param_2);
    lVar2 = (long)(int)sVar1;
    pcVar3 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar3)(plVar4,param_2,lVar2);
  return param_1;
}


