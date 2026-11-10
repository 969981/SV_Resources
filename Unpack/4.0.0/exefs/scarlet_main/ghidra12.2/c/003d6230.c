/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d6230; name: FUN_003d6230
 */


undefined8 FUN_003d6230(long param_1,int param_2)

{
  long lVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = *(undefined2 **)(*(long *)(param_1 + 0x550) + 0x198);
  if (puVar2 == (undefined2 *)0x0) {
    lVar3 = 0x1a;
    puVar2 = &DAT_03cdd182;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x550) + 0x1a0);
    if (lVar3 == 0) {
      return 0;
    }
  }
  while (((lVar1 = FUN_003d62c0(*puVar2), lVar1 == 0 || (*(int *)(lVar1 + 0x14) != 0x198)) ||
         (*(int *)(lVar1 + 0x20) == 0 || *(int *)(lVar1 + 0x20) != param_2))) {
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    if (lVar3 == 0) {
      return 0;
    }
  }
  return 1;
}


