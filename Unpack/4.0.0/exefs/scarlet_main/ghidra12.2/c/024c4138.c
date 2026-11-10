/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c4138; name: FUN_024c4138
 */


undefined4 FUN_024c4138(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
     (((*(ulong *)(param_1 + 0x228) <= param_2 ||
       ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
         (param_2 & 0x3f) & 1) == 0)) &&
      (lVar1 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20, *(char *)(lVar1 + 0x10) == '\0')))) {
    return *(undefined4 *)(lVar1 + 0x14);
  }
  return 0;
}


