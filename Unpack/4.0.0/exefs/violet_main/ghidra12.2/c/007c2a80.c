/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c2a80; name: FUN_007c2a80
 */


void FUN_007c2a80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  
  lVar1 = param_1 + 0x70;
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) | 2;
  if (*(long *)(param_1 + 0x78) != lVar1) {
    uVar4 = *(uint *)(param_1 + 0x84);
    lVar3 = (long)(int)uVar4;
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
    if (param_2 == (undefined8 *)0x0 && param_3 == (undefined8 *)0x0) {
      do {
        while (puVar2[1] != 0) {
          (**(code **)*puVar2)();
          uVar4 = *(uint *)(param_1 + 0x84);
          lVar3 = (long)(int)uVar4;
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
          if (puVar2 == (undefined8 *)(lVar1 - lVar3)) goto LAB_007c2b8c;
        }
        puVar2 = (undefined8 *)
                 (*(long *)((long)puVar2 + (long)(int)uVar4 + 8) +
                 ((long)-((ulong)uVar4 << 0x20) >> 0x20));
      } while (puVar2 != (undefined8 *)(-(int)lVar3 + lVar1));
    }
    else {
      do {
        while ((puVar2[1] != 0 && param_2 <= puVar2) && puVar2 < param_3) {
          (**(code **)*puVar2)();
          uVar4 = *(uint *)(param_1 + 0x84);
          lVar3 = (long)(int)uVar4;
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) - lVar3);
          if (puVar2 == (undefined8 *)(lVar1 - lVar3)) goto LAB_007c2b8c;
        }
        puVar2 = (undefined8 *)
                 (*(long *)((long)puVar2 + (long)(int)uVar4 + 8) +
                 ((long)-((ulong)uVar4 << 0x20) >> 0x20));
      } while (puVar2 != (undefined8 *)(-(int)lVar3 + lVar1));
    }
  }
LAB_007c2b8c:
  *(ushort *)(param_1 + 0xd0) = *(ushort *)(param_1 + 0xd0) & 0xfffd;
  return;
}


