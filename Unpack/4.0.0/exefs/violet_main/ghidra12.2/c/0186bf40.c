/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186bf40; name: FUN_0186bf40
 */


void FUN_0186bf40(double param_1,double param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_1c = (float)param_1;
  local_24 = (float)param_2;
  puVar1 = PTR_LAB_047d6a78;
  if (DAT_0481b9c0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_20 = param_6;
  local_18 = param_5;
  uStack_14 = param_4;
  FUN_0186bfa4(param_3,puVar1,0,&uStack_14,&local_18,&local_1c,&local_20,&local_24);
  return;
}


