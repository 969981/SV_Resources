/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007de84c; name: FUN_007de84c
 */


void FUN_007de84c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_007de240(param_2);
  lVar4 = *(long *)(param_1 + 0x68);
  while (lVar1 = lVar4, lVar1 != param_1 + 0x60) {
    lVar4 = *(long *)(lVar1 + 8);
    if ((*(char *)(lVar1 + 0x31) == '\0') && (lVar3 = FUN_007de240(lVar1 + 0x10), lVar3 == lVar2)) {
      *(undefined1 *)(lVar1 + 0x31) = 1;
    }
  }
  return;
}


