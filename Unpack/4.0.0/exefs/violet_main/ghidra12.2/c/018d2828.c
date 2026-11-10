/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d2828; name: FUN_018d2828
 */


void FUN_018d2828(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  float local_24;
  undefined8 local_20 [2];
  
  local_24 = (float)param_2;
  puVar1 = &LAB_009552ac;
  if (DAT_0480be60 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_20[0] = param_1;
  FUN_018d2874(param_3,puVar1,0,local_20,&local_24);
  return;
}


