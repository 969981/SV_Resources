/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0269854c; name: FUN_0269854c
 */


void FUN_0269854c(double param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_20 = (float)param_1;
  puVar1 = PTR_LAB_047e0808;
  if (DAT_048590c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_1c = param_5;
  uStack_18 = param_4;
  local_14 = param_3;
  FUN_026996fc(param_2,puVar1,0,&local_14,&uStack_18,&local_1c,&local_20);
  return;
}


