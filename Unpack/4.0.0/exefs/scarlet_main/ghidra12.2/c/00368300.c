/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368300; name: FUN_00368300
 */


bool FUN_00368300(long *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  void *__s1;
  
  if (*param_1 == 0) {
    if ((byte)param_1[1] < param_3) {
      return false;
    }
    __s1 = (void *)((long)param_1 + 9);
  }
  else {
    if ((ulong)param_1[1] < param_3) {
      return false;
    }
    __s1 = (void *)param_1[2];
  }
  iVar1 = memcmp(__s1,param_2,param_3);
  return iVar1 == 0;
}


