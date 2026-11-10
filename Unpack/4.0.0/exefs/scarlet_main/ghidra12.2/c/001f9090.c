/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9090; name: FUN_001f9090
 */


void FUN_001f9090(long *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = param_2 ^ param_2 >> 0xc ^ param_2 >> 0x14;
  for (plVar2 = *(long **)(*param_1 +
                          (ulong)((int)param_1[3] - 1U & (uVar1 ^ uVar1 >> 4 ^ uVar1 >> 7)) * 8);
      (plVar2 != (long *)0x0 && (*(uint *)(plVar2 + 1) != param_2)); plVar2 = (long *)*plVar2) {
  }
  return;
}


