/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02502d5c; name: FUN_02502d5c
 */


void FUN_02502d5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_LAB_047df210;
  if (DAT_0484f1f8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  uVar2 = FUN_024c9574(param_2);
  FUN_02503f0c(param_1,puVar1,0,uVar2);
  return;
}


