/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024c1aec; name: FUN_024c1aec
 */


undefined2 FUN_024c1aec(long *param_1,code *param_2,ulong param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *(long *)(lVar2 + ((long)param_3 >> 1) + -0x28));
    }
    uVar1 = (*param_2)();
  }
  return uVar1;
}


