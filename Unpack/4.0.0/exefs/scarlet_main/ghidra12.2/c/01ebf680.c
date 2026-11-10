/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebf680; name: FUN_01ebf680
 */


void FUN_01ebf680(uint *param_1,long param_2,long *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint local_18 [2];
  
  FUN_01ebf754(local_18);
  if (local_18[0] == 0) {
    lVar4 = param_3[2];
    cVar2 = *(char *)(*param_3 + lVar4);
    param_3[2] = lVar4 + 1;
    bVar3 = cVar2 != -0x78;
    if (!bVar3) {
      uVar1 = *(undefined4 *)(*param_3 + lVar4 + 1);
      param_3[2] = lVar4 + 5;
      *(undefined4 *)(param_2 + 8) = uVar1;
    }
    *param_1 = (uint)bVar3;
  }
  else {
    *param_1 = local_18[0];
  }
  return;
}


