/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0117e030; name: FUN_0117e030
 */


int FUN_0117e030(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_007ec544();
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x34) + (uint)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) * -2 +
            -0x2a;
  }
  return iVar1;
}


