/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a7948; name: FUN_029a7948
 */


void FUN_029a7948(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = PTR_FUN_047d9428;
  puVar4 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  if (puVar4 != puVar1) {
    lVar5 = *param_1;
    do {
      uVar3 = FUN_029a79ac(puVar4);
      if ((uVar3 & 1) != 0) {
        (**(code **)(*(long *)*puVar4 + 0xa8))();
        *(undefined **)(lVar5 + 0xa8) = puVar2;
        *(undefined8 *)(lVar5 + 0xb0) = 0;
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
  }
  return;
}


