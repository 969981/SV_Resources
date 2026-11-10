/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216bf5c; name: FUN_0216bf5c
 */


void FUN_0216bf5c(long param_1,uint param_2)

{
  long lVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x248)) &&
     (*(char *)(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48 + 8) != '\0')) {
    FUN_0216bc68(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48);
    FUN_02169b64();
    lVar1 = FUN_0216bc68(*(long *)(param_1 + 0x228) + (ulong)param_2 * 0x48);
    *(undefined4 *)(lVar1 + 0x20) = 0;
  }
  return;
}


