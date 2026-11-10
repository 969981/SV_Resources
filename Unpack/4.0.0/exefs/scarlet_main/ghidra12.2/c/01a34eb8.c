/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a34eb8; name: FUN_01a34eb8
 */


undefined8 FUN_01a34eb8(undefined8 param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 != (uint *)0x0) && (*param_2 != 0)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_01a34f40((long)param_2 + lVar2 + (ulong)param_2[uVar3 + 1] + 4,param_1);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 4;
    } while (uVar3 < *param_2);
  }
  return 1;
}


