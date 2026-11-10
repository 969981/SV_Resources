/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0089e3a8; name: FUN_0089e3a8
 */


void FUN_0089e3a8(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_00e965dc(lVar1,0);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  if ((param_2 & 1) != 0) {
    for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != param_1 + 0x48; lVar1 = *(long *)(lVar1 + 8)) {
      FUN_0089e3a8(*(undefined8 *)(lVar1 + 0x10),1);
    }
  }
  return;
}


