/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811020; name: FUN_00811020
 */


void FUN_00811020(void)

{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = PTR_DAT_047d0dd8;
  fVar2 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,7);
  *(short *)(PTR_DAT_047d0868 + 0x414) = (short)(int)fVar2;
  FUN_00807e34(*(undefined8 *)puVar1,7);
  return;
}


