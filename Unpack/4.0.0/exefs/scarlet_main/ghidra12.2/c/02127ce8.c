/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02127ce8; name: FUN_02127ce8
 */


void FUN_02127ce8(long *param_1,long *param_2)

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
      uVar3 = FUN_02127d70(puVar4,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_02127d34;
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    puVar4 = puVar2;
LAB_02127d34:
    if (puVar4 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar4 + 0xa8))();
      *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
  }
  return;
}


