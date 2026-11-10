/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278ca04; name: FUN_0278ca04
 */


undefined8 FUN_0278ca04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_d0 [128];
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar1 = FUN_001dc370(param_1,param_2,local_d0 + 0x80);
  }
  return uVar1;
}


