/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0b958; name: FUN_01a0b958
 */


void FUN_01a0b958(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar1 != lVar2) {
    if (*(long *)(lVar1 + 200) != 0) {
      FUN_01898184();
    }
    if (lVar1 + 0xd0 != lVar2) {
      if (*(long *)(lVar1 + 0x198) != 0) {
        FUN_01898184();
      }
      for (lVar1 = lVar1 + 0x1a0; lVar1 != lVar2; lVar1 = lVar1 + 0xd0) {
        if (*(long *)(lVar1 + 200) != 0) {
          FUN_01898184();
        }
      }
    }
  }
  lVar1 = *(long *)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x90);
  if (lVar1 != lVar2) {
    if (*(long *)(lVar1 + 0xb8) != 0) {
      FUN_01898184();
    }
    if (lVar1 + 0xc0 != lVar2) {
      if (*(long *)(lVar1 + 0x178) != 0) {
        FUN_01898184();
      }
      for (lVar1 = lVar1 + 0x180; lVar1 != lVar2; lVar1 = lVar1 + 0xc0) {
        if (*(long *)(lVar1 + 0xb8) != 0) {
          FUN_01898184();
        }
      }
    }
  }
  return;
}


