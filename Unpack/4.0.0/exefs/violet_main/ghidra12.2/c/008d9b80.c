/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008d9b80; name: FUN_008d9b80
 */


void FUN_008d9b80(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d2580;
  if (*(long *)(PTR_DAT_047d2580 + 0x250) != 0) {
    FUN_00e5c0b4(PTR_DAT_047d2580 + 0x168,param_1);
    FUN_00e5c070(puVar1 + 0x120,param_1);
    FUN_00e5c07c(puVar1,param_1);
    FUN_008d4350(*(undefined8 *)(puVar1 + 0x250));
    *(undefined8 *)(puVar1 + 0x250) = 0;
  }
  return;
}


