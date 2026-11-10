/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0247a57c; name: FUN_0247a57c
 */


void FUN_0247a57c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = &LAB_0247bc54;
  if (DAT_0484c198 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_0247bef4(auStack_30,param_2,puVar1,0);
  FUN_0247bf70(param_1,auStack_30);
  FUN_0247a914(auStack_30);
  return;
}


