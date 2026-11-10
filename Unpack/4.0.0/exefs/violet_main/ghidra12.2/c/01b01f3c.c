/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b01f3c; name: FUN_01b01f3c
 */


void FUN_01b01f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_FUN_047d3e18;
  if (DAT_04802a80 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_01b027c8(param_2);
  FUN_01b0301c(param_1,puVar1,0,uVar2);
  return;
}


