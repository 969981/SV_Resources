/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc25e8; name: FUN_01bc25e8
 */


void FUN_01bc25e8(undefined8 param_1,double param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_28;
  float local_24;
  undefined8 local_20 [2];
  
  puVar1 = PTR_LAB_047d55e8;
  if (DAT_0480ef88 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_24 = (float)param_2;
  local_28 = param_4;
  local_20[0] = param_1;
  FUN_01bc49dc(param_3,puVar1,0,local_20,&local_24,&local_28);
  return;
}


