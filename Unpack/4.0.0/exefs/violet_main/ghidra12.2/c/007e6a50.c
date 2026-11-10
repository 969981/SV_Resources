/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e6a50; name: FUN_007e6a50
 */


void FUN_007e6a50(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x28) = 0;
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = (ulong)*(ushort *)(param_1 + 0xa6);
    if (*(ushort *)(param_1 + 0xa6) != 0) {
      uVar6 = 0;
      puVar4 = puVar3;
      lVar2 = 0;
      do {
        lVar5 = *(long *)((long)puVar4 + lVar2 + 8);
        puVar3 = puVar4;
        if (lVar5 != 0) {
          FUN_007bfae0(lVar5);
          FUN_007bfaa0(lVar5);
          *(undefined8 *)((long)puVar4 + lVar2 + 8) = 0;
          uVar1 = (ulong)*(ushort *)(param_1 + 0xa6);
          puVar3 = *(undefined8 **)(param_1 + 0x38);
        }
        uVar6 = uVar6 + 1;
        *(undefined2 *)((long)puVar4 + lVar2 + 0x10) = 0;
        puVar4 = puVar3;
        lVar2 = lVar2 + 0x28;
      } while (uVar6 < uVar1);
      if (puVar3 == (undefined8 *)0x0) goto LAB_007e6b54;
    }
    uVar1 = FUN_007bfae0(puVar3);
    if (0x27 < uVar1) {
      uVar6 = 0;
      puVar4 = puVar3;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 5;
      } while (uVar6 < uVar1 / 0x28);
    }
    FUN_007bfaa0(puVar3);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
LAB_007e6b54:
  lVar2 = *(long *)(param_1 + 0xb0);
  if (lVar2 != 0) {
    FUN_007bfae0(lVar2);
    FUN_007bfaa0(lVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}


