/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d78b58; name: FUN_01d78b58
 */


uint FUN_01d78b58(double param_1,double param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint uVar2;
  float local_1c;
  float fStack_18;
  undefined4 local_14;
  
  fStack_18 = (float)param_1;
  local_1c = (float)param_2;
  puVar1 = PTR_FUN_047d7f70;
  if (DAT_048321f0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_14 = param_4;
  uVar2 = FUN_01d7ad24(param_3,puVar1,0,&local_14,&fStack_18,&local_1c);
  return uVar2 & 1;
}


