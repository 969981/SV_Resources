/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292cc9c; name: FUN_0292cc9c
 */


ulong FUN_0292cc9c(long param_1,undefined2 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  *(undefined2 *)(param_1 + 0x70) = *param_2;
  plVar3 = *(long **)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x72) = param_2[1];
  if (plVar3 == (long *)0x0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 4;
    do {
      iVar1 = FUN_0292cd00(plVar3 + 3,(long)param_2 + uVar2);
      plVar3 = (long *)*plVar3;
      uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
    } while (plVar3 != (long *)0x0);
  }
  return uVar2;
}


