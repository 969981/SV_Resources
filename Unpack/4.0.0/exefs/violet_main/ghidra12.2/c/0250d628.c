/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0250d628; name: FUN_0250d628
 */


void FUN_0250d628(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  float local_24;
  undefined8 local_20 [2];
  
  local_24 = (float)param_2;
  puVar1 = &LAB_02b9e118;
  if (DAT_0484f248 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_20[0] = param_1;
  FUN_0251798c(param_3,puVar1,0,local_20,&local_24);
  return;
}


