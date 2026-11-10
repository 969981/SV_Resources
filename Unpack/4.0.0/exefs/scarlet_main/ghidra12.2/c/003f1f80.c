/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f1f80; name: FUN_003f1f80
 */


undefined8 FUN_003f1f80(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  if (param_1 == param_2) {
    lVar2 = FUN_003eb9a0(param_1,(int)param_1[1] + 1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  else {
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar2 = FUN_003eb9a0(param_1,(int)param_2[1] + 1);
    if (lVar2 == 0) {
      return 0;
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  puVar3 = (uint *)*param_1;
  if ((int)param_2[1] < 1) {
    uVar5 = 0;
  }
  else {
    lVar6 = *param_2;
    lVar2 = 0;
    uVar5 = 0;
    puVar4 = puVar3;
    do {
      uVar1 = *(uint *)(lVar6 + lVar2 * 4);
      lVar2 = lVar2 + 1;
      puVar3 = puVar4 + 1;
      *puVar4 = uVar5 | uVar1 << 1;
      uVar5 = uVar1 >> 0x1f;
      puVar4 = puVar3;
    } while ((int)lVar2 < (int)param_2[1]);
  }
  *puVar3 = uVar5;
  *(uint *)(param_1 + 1) = (int)param_1[1] + uVar5;
  return 1;
}


