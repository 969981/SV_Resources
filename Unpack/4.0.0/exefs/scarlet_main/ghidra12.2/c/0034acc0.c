/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


