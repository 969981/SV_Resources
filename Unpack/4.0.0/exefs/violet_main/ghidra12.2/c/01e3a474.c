/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3a474; name: FUN_01e3a474
 */


void FUN_01e3a474(long *param_1,long *param_2)

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
      uVar2 = FUN_01e3a4ec(puVar3);
      if ((uVar2 & 1) != 0) goto LAB_01e3a4b4;
      puVar3 = puVar3 + 1;
    } while (puVar1 != puVar3);
    puVar3 = puVar1;
LAB_01e3a4b4:
    if (puVar3 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar3 + 0xa8))();
      *(undefined **)(lVar4 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar4 + 0xb0) = 0;
    }
  }
  return;
}


