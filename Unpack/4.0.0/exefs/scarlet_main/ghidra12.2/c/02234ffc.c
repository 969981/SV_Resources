/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02234ffc; name: FUN_02234ffc
 */


void FUN_02234ffc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar3 != puVar1) {
    lVar4 = *param_1;
    do {
      uVar2 = FUN_02235074(puVar3);
      if ((uVar2 & 1) != 0) goto LAB_0223503c;
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    puVar3 = puVar1;
LAB_0223503c:
    if (puVar3 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar3 + 0xa8))();
      *(undefined **)(lVar4 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar4 + 0xb0) = 0;
    }
  }
  return;
}


