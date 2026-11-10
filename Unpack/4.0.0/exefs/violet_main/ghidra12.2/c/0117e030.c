/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


