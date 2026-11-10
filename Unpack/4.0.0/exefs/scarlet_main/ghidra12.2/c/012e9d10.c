/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012e9d10; name: FUN_012e9d10
 */


void FUN_012e9d10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  if (*(long *)(param_1 + 0x1b0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1b0);
  }
  if (lVar1 != param_1) {
    lVar2 = lVar1;
    if (*(long *)(lVar1 + 0x1b0) != 0) {
      lVar2 = *(long *)(lVar1 + 0x1b0);
    }
    param_1 = lVar1;
    if (lVar2 != lVar1) {
      do {
        param_1 = lVar2;
        lVar2 = param_1;
        if (*(long *)(param_1 + 0x1b0) != 0) {
          lVar2 = *(long *)(param_1 + 0x1b0);
        }
      } while (lVar2 != param_1);
    }
  }
  if ((*(byte *)(param_1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_012e9e94(param_1 + 0x290);
  return;
}


