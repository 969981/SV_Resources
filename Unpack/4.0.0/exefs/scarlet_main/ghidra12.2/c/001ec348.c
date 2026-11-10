/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ec348; name: FUN_001ec348
 */


ulong FUN_001ec348(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(code **)PTR_DAT_047cb9d0 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)PTR_DAT_047cb9d0)(param_1 + 7 + param_2);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = param_1 + 7 + lVar1 & -param_1;
      *(long *)(uVar2 - 8) = lVar1;
    }
  }
  return uVar2;
}


