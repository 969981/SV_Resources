/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d97c8; name: FUN_001d97c8
 */


void FUN_001d97c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    FUN_001d4730(param_1 + 0x220);
    FUN_001d4730(param_1 + 0x230);
    lVar2 = *(long *)(param_1 + 0x290);
    lVar1 = *(long *)(param_1 + 0x288);
    while (lVar2 != 0) {
      FUN_001ec308(*(undefined8 *)(lVar1 + lVar2 * 8 + -8));
      lVar2 = *(long *)(param_1 + 0x290) + -1;
      lVar1 = *(long *)(param_1 + 0x288);
      *(long *)(param_1 + 0x290) = lVar2;
    }
    FUN_001ec308();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}


