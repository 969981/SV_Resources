/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00531114; name: FUN_00531114
 */


void FUN_00531114(long param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar1 = *(undefined1 *)(lVar2 + param_2);
  *(undefined1 *)(lVar2 + param_2) = *(undefined1 *)(lVar2 + param_3);
  *(undefined1 *)(lVar2 + param_3) = uVar1;
  return;
}


