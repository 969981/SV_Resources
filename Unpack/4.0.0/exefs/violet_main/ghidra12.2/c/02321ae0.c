/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02321ae0; name: FUN_02321ae0
 */


void FUN_02321ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 local_40 [2];
  undefined8 auStack_30 [2];
  undefined8 local_20 [2];
  
  puVar1 = PTR_FUN_047de590;
  if (DAT_04847720 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_40[0] = param_3;
  auStack_30[0] = param_2;
  local_20[0] = param_1;
  FUN_023278f4(param_4,puVar1,0,local_20,auStack_30,local_40);
  return;
}


