/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f434a4; name: FUN_00f434a4
 */


ulong FUN_00f434a4(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x78);
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  if (puVar4 == puVar1) {
LAB_00f43520:
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if ((param_3 < uVar3) ||
         (lVar2 = (**(code **)(*(long *)*puVar4 + 200))((long *)*puVar4,param_2,param_3 - uVar3),
         lVar2 == 0)) goto LAB_00f43520;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + lVar2;
      uVar3 = lVar2 + uVar3;
    } while (puVar1 != puVar4);
  }
  return uVar3;
}


