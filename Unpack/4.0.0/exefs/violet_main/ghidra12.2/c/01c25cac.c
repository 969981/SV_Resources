/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c25cac; name: FUN_01c25cac
 */


void FUN_01c25cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_LAB_047d5d10;
  if (DAT_04812568 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c287ac(auStack_30,param_2,puVar1,0);
  FUN_01c28820(param_1,auStack_30);
  FUN_01c1e070(auStack_30);
  return;
}


