/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078effc; name: FUN_0078effc
 */


void FUN_0078effc(void)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_047d0928 != 0) {
    *(undefined8 *)PTR_DAT_047d0928 = 0;
  }
  puVar1 = PTR_DAT_047d0930;
  lVar2 = *(long *)PTR_DAT_047d0930;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


