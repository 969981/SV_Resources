/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019f8908; name: FUN_019f8908
 */


void FUN_019f8908(double param_1,double param_2,double param_3,undefined8 param_4)

{
  undefined *puVar1;
  float local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = (float)param_1;
  fStack_18 = (float)param_2;
  local_1c = (float)param_3;
  puVar1 = PTR_LAB_047d83d0;
  if (DAT_048337e0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_019f8960(param_4,puVar1,0,&local_14,&fStack_18,&local_1c);
  return;
}


