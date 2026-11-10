/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0185fcac; name: FUN_0185fcac
 */


uint FUN_0185fcac(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  float local_38;
  float fStack_34;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  fStack_34 = (float)param_3;
  local_38 = (float)param_4;
  puVar1 = PTR_FUN_047d80e0;
  if (DAT_04832500 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_30[0] = param_2;
  local_20[0] = param_1;
  uVar2 = FUN_0185fd0c(param_5,puVar1,0,local_20,local_30,&fStack_34,&local_38);
  return uVar2 & 1;
}


