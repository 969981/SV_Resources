/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cfbcb0; name: FUN_01cfbcb0
 */


void FUN_01cfbcb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  undefined8 local_8;
  
  puVar1 = PTR_LAB_047d7088;
  if (DAT_0482cc78 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_8 = param_3;
  FUN_01cffeb4(auStack_30,param_2,puVar1,0,&local_8);
  FUN_01cfff20(param_1,auStack_30);
  FUN_01cfff78(auStack_30);
  return;
}


