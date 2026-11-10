/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea62f0; name: FUN_01ea62f0
 */


undefined4 FUN_01ea62f0(long param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  
  plVar2 = *(long **)(param_1 + 0x88);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    lVar3 = plVar2[2];
    cVar1 = *(char *)(*plVar2 + lVar3);
    plVar2[2] = lVar3 + 1;
    if (cVar1 == -0x78) {
      uVar4 = *(undefined4 *)(*plVar2 + lVar3 + 1);
      plVar2[2] = lVar3 + 5;
    }
  }
  return uVar4;
}


