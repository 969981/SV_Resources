/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021ebc58; name: FUN_021ebc58
 */


void FUN_021ebc58(long *param_1,long *param_2)

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
      uVar3 = FUN_021ebce0(puVar4,uVar5);
      if ((uVar3 & 1) != 0) goto LAB_021ebca4;
      puVar4 = puVar4 + 1;
    } while (puVar2 != puVar4);
    puVar4 = puVar2;
LAB_021ebca4:
    if (puVar4 != (undefined8 *)param_2[1]) {
      (**(code **)(*(long *)*puVar4 + 0xa8))();
      *(undefined **)(lVar1 + 0xa8) = PTR_FUN_047d9428;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
    }
  }
  return;
}


