/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f3420; name: FUN_022f3420
 */


undefined8 FUN_022f3420(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  cVar1 = FUN_022f2914();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    local_28 = FUN_022f2914(param_1,param_2);
    uVar2 = FUN_022f32e8(param_1,&local_28);
  }
  return uVar2;
}


