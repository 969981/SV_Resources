/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ba7838; name: FUN_01ba7838
 */


void FUN_01ba7838(char *param_1,long param_2,void *param_3)

{
  void *__dest;
  
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    __dest = (void *)(*(long *)(param_1 + 8) + param_2);
    memcpy(__dest,param_3,0x34);
    FUN_01ba788c((long)__dest + 0x38,(long)param_3 + 0x38);
  }
  return;
}


