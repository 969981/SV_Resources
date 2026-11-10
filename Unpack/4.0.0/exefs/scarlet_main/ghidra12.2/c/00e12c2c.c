/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e12c2c; name: FUN_00e12c2c
 */


void FUN_00e12c2c(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  param_1 = param_1 + 0x68;
  if (lVar1 != param_1) {
    FUN_00e12ca8(*(undefined8 *)(lVar1 + 0x10),param_2 & 1);
    lVar1 = *(long *)(lVar1 + 8);
    if (lVar1 != param_1) {
      FUN_00e12ca8(*(undefined8 *)(lVar1 + 0x10),param_2 & 1);
      for (lVar1 = *(long *)(lVar1 + 8); lVar1 != param_1; lVar1 = *(long *)(lVar1 + 8)) {
        FUN_00e12ca8(*(undefined8 *)(lVar1 + 0x10),param_2 & 1);
      }
    }
  }
  return;
}


