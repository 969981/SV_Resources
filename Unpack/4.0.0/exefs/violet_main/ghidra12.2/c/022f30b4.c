/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f30b4; name: FUN_022f30b4
 */


bool FUN_022f30b4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_18;
  
  cVar1 = FUN_022f2914();
  if (cVar1 != '\0') {
    local_18 = FUN_022f2914(param_1,param_2);
    FUN_01a70f38(param_1,&local_18,param_3);
  }
  return cVar1 != '\0';
}


