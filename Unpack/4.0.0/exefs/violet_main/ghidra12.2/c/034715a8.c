/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034715a8; name: FUN_034715a8
 */


void FUN_034715a8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1 + 0xe0;
  bVar3 = *(int *)(param_1 + 0x110) != 0;
  lVar4 = lVar1;
  if (bVar3) {
    lVar4 = param_1 + 0x100;
  }
  lVar2 = 0xe8;
  if (bVar3) {
    lVar2 = 0x108;
  }
  puVar5 = *(undefined8 **)(param_1 + lVar2);
  if ((undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8) != puVar5) {
    do {
      puVar6 = puVar5 + 1;
      (**(code **)(*(long *)*puVar5 + 0xb8))((long *)*puVar5,param_2,param_3,param_4);
      if ((lVar1 != lVar4) &&
         (puVar6 == (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8))) {
        puVar6 = *(undefined8 **)(param_1 + 0xe8);
        lVar4 = lVar1;
      }
      puVar5 = puVar6;
    } while ((undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8) != puVar6);
  }
  return;
}


