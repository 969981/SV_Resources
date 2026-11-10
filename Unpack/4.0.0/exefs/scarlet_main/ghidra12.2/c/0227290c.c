/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0227290c; name: FUN_0227290c
 */


void FUN_0227290c(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar4 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  if (puVar4 != puVar2) {
    lVar1 = *param_1;
    uVar5 = *(undefined8 *)param_1[1];
    do {
      uVar3 = FUN_02272994(puVar4,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_02272958;
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    puVar4 = puVar2;
LAB_02272958:
    if (puVar4 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar4 + 0xa8))();
      *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
  }
  return;
}


