/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022d1724; name: FUN_022d1724
 */


void FUN_022d1724(double param_1,double param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_1c;
  float local_18;
  float local_14;
  
  local_14 = (float)param_1;
  local_18 = (float)param_2;
  puVar1 = PTR_FUN_047de100;
  if (DAT_048463d0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_4;
  FUN_022d5778(param_3,puVar1,0,&local_14,&local_18,&local_1c);
  return;
}


