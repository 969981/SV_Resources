/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02944108; name: FUN_02944108
 */


undefined8 FUN_02944108(long param_1,uint param_2,undefined8 param_3)

{
  char *pcVar1;
  
  if ((param_2 < 5) && (pcVar1 = (char *)(param_1 + (ulong)param_2 * 8), *pcVar1 == '\0')) {
    *(undefined8 *)pcVar1 = param_3;
    return 1;
  }
  return 0;
}


