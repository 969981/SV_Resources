/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dcd15c; name: FUN_01dcd15c
 */


undefined8 FUN_01dcd15c(long *param_1,ushort param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((*param_1 != 0) && (lVar2 = *(long *)(*param_1 + 0x10), lVar2 != 0)) {
    lVar3 = *(long *)(lVar2 + 0x148);
    *(undefined8 *)(lVar2 + 0x1a8) = 0;
    if (lVar3 != *(long *)(lVar2 + 0x150)) {
      lVar1 = lVar2 + 0x180;
      FUN_013fcb68(lVar1,lVar3 + 8);
      if ((lVar3 + 0x10 != *(long *)(lVar2 + 0x150)) &&
         (FUN_013fcb68(lVar1,lVar3 + 0x18), lVar3 + 0x20 != *(long *)(lVar2 + 0x150))) {
        FUN_013fcb68(lVar1,lVar3 + 0x28);
        for (lVar3 = lVar3 + 0x30; lVar3 != *(long *)(lVar2 + 0x150); lVar3 = lVar3 + 0x10) {
          FUN_013fcb68(lVar1,lVar3 + 8);
        }
      }
      if ((ulong)param_2 < *(ulong *)(lVar2 + 0x1a8)) {
        return *(undefined8 *)(*(long *)(lVar2 + 0x1a0) + (ulong)param_2 * 8);
      }
    }
  }
  return 0;
}


