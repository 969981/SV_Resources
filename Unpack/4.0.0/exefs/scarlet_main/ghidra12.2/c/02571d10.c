/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02571d10; name: FUN_02571d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02571d10(long *param_1,code *param_2,ulong param_3)

{
  long lVar1;
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x10), lVar1 != 0)) {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar1 + ((long)param_3 >> 1) + -0x28));
    }
    (*param_2)(0,_DAT_03cabe50,0);
  }
  return;
}


