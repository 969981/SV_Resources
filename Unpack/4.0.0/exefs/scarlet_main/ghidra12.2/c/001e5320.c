/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


