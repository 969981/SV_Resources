/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fbda4; name: FUN_028fbda4
 */


undefined8 FUN_028fbda4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0xb8) != 0) && ((*(byte *)(*(long *)(param_1 + 0xb8) + 0x1e8) & 1) != 0))
  {
    lVar2 = *(long *)(param_1 + 0x200);
    lVar3 = *(long *)(param_1 + 0x208);
    if (lVar2 != lVar3) {
      while (uVar1 = FUN_028fc240(lVar2), (uVar1 & 1) != 0) {
        lVar2 = lVar2 + 0x80;
        if (lVar3 == lVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}


