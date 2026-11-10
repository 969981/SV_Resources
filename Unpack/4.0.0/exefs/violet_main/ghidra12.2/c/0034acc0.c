/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034acc0; name: FUN_0034acc0
 */


void FUN_0034acc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    FUN_0038db00(puVar1);
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = puVar1 + 5;
    puVar1[7] = 0;
  }
  DAT_047ef570 = puVar1;
  return;
}


