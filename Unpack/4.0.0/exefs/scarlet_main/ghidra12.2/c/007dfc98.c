/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dfc98; name: FUN_007dfc98
 */


void FUN_007dfc98(void)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_047d11a0 != 0) {
    *(undefined8 *)PTR_DAT_047d11a0 = 0;
  }
  puVar1 = PTR_DAT_047d1430;
  lVar2 = *(long *)PTR_DAT_047d1430;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


