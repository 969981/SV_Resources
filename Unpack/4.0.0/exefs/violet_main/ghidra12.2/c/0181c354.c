/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181c354; name: FUN_0181c354
 */


void FUN_0181c354(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined *puVar1;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  
  local_14 = (float)param_1;
  fStack_18 = (float)param_2;
  local_1c = (float)param_3;
  local_20 = (float)param_4;
  puVar1 = PTR_LAB_047df900;
  if (DAT_04852088 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0181c3b8(param_5,puVar1,0,&local_14,&fStack_18,&local_1c,&local_20);
  return;
}


