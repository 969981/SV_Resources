/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221c884; name: FUN_0221c884
 */


void FUN_0221c884(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 == param_3) {
    return;
  }
  lVar2 = *(long *)(param_1 + 8);
  if ((long)param_2 + ((long)param_3 - (long)param_2) != lVar2) {
    lVar4 = (long)param_3 - (long)param_2 >> 3;
    puVar3 = param_2;
    do {
      FUN_0221c8f8(puVar3);
      uVar1 = puVar3[lVar4];
      puVar3[lVar4] = 0;
      param_2 = puVar3 + 1;
      *puVar3 = uVar1;
      puVar3 = param_2;
    } while ((undefined8 *)(lVar2 + lVar4 * -8) != param_2);
  }
  FUN_0221c3c8(param_1,param_2);
  return;
}


