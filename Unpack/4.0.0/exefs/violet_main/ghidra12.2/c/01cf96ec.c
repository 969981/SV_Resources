/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cf96ec; name: FUN_01cf96ec
 */


void FUN_01cf96ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_8 [8];
  
  puVar1 = PTR_FUN_047d7018;
  if (DAT_0482cc68 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01cfb10c(auStack_8,param_2,puVar1,0);
  FUN_01c305e0(param_1,auStack_8);
  FUN_01c0b508(auStack_8);
  return;
}


