/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00888fbc; name: FUN_00888fbc
 */


void FUN_00888fbc(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = param_3 << 0x30 | CONCAT44(param_4,param_2) & 0xffffffffffff;
    do {
      while (*(ulong *)(lVar1 + 0x30) <= uVar2) {
        if (uVar2 <= *(ulong *)(lVar1 + 0x30)) {
          return;
        }
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
  }
  return;
}


