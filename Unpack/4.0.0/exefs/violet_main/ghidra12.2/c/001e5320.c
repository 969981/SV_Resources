/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e5320; name: FUN_001e5320
 */


undefined8 * FUN_001e5320(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined8 *)PTR_PTR_047cb9a0;
  ppuVar3 = &PTR_DAT_04484d90;
  do {
    iVar1 = FUN_001e0990(*puVar2,param_1);
    if (iVar1 != 0) {
      return puVar2;
    }
    puVar2 = (undefined8 *)*ppuVar3;
    ppuVar3 = ppuVar3 + 1;
  } while (puVar2 != (undefined8 *)0x0);
  return (undefined8 *)0x0;
}


