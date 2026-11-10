/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da0d0; name: FUN_001da0d0
 */


undefined8 FUN_001da0d0(time_t param_1,void *param_2)

{
  tm *__src;
  undefined8 uVar1;
  time_t local_8;
  
  local_8 = param_1;
  __src = gmtime(&local_8);
  if (__src == (tm *)0x0) {
    uVar1 = 0x2b;
  }
  else {
    memcpy(param_2,__src,0x38);
    uVar1 = 0;
  }
  return uVar1;
}


