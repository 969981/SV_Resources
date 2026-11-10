/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b759d0; name: FUN_02b759d0
 */


void FUN_02b759d0(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  if (0 < (int)param_3) {
    lVar2 = (ulong)param_3 + 1;
    plVar1 = (long *)(param_1 + (ulong)param_3 * 0x230);
    do {
      plVar1 = plVar1 + -0x46;
      (**(code **)(*plVar1 + 8))(plVar1);
      lVar2 = lVar2 + -1;
    } while (1 < lVar2);
  }
  return;
}


