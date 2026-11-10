/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049a7f0; name: FUN_0049a7f0
 */


void FUN_0049a7f0(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  if (param_2 == (char *)0x0) {
    FUN_0049a850(param_1,0,0,param_3);
    return;
  }
  sVar1 = strlen(param_2);
  FUN_0049a850(param_1,param_2,sVar1,param_3);
  return;
}


