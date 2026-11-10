/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012595d8; name: FUN_012595d8
 */


ulong FUN_012595d8(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = (uint)((ulong)param_2 >> 0x20);
  if ((char)param_2 != '\0') {
    piVar2 = (int *)*param_1;
    if ((0x16 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[0xb], uVar5 != 0)) {
      puVar3 = (uint *)((long)piVar2 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      if (uVar1 < *puVar3) {
        puVar3 = puVar3 + (ulong)uVar1 + 1;
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
        piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 5) ||
           (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar5 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)(*(char *)((long)piVar2 + uVar5) != '\0') << 8;
        }
        uVar4 = 1;
        goto LAB_01259670;
      }
    }
  }
  uVar4 = 0;
  uVar5 = 0;
LAB_01259670:
  return uVar5 | uVar4;
}


