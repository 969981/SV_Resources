/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00534960; name: FUN_00534960
 */


void FUN_00534960(long *param_1,undefined1 (*param_2) [16])

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  if (lVar3 != 0x7fffffffffffffff) {
    lVar2 = FUN_0038dd60(1);
    if ((-1000000 < lVar3) && (lVar1 = lVar3 / 1000000, lVar1 < lVar2)) {
      *(long *)*param_2 = lVar1;
      *(int *)(*param_2 + 8) = ((int)lVar3 + (int)lVar1 * -1000000) * 1000;
      *(undefined4 *)(*param_2 + 0xc) = 1;
      return;
    }
  }
  auVar4 = FUN_0038dd60(1);
  *param_2 = auVar4;
  return;
}


