/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017da624; name: FUN_017da624
 */


bool FUN_017da624(long param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  
  uVar3 = FUN_017da764();
  if ((uVar3 & 1) == 0) {
    return false;
  }
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar5 < 7) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((ulong)puVar5[3] != 0) {
      uVar4 = *(uint *)((long)param_2 + (ulong)puVar5[3]);
    }
    if ((8 < *puVar5) && ((ulong)puVar5[4] != 0)) {
      uVar6 = *(uint *)((long)param_2 + (ulong)puVar5[4]);
      goto LAB_017da678;
    }
  }
  uVar6 = 0;
LAB_017da678:
  puVar1 = (undefined8 *)0x0;
  if (uVar4 < 5) {
    puVar1 = (undefined8 *)
             (*(long *)(*(long *)(param_1 + 0x50) + 0x30) + (ulong)uVar4 * 0x38 + 0x28);
  }
  uVar4 = (uint)*(byte *)(puVar1 + 6);
  if (*(byte *)(puVar1 + 6) != 0) {
    uVar4 = (**(code **)(*(long *)*puVar1 + 0x208))();
    uVar4 = uVar4 & 1;
    if (1 < *(byte *)(puVar1 + 6)) {
      uVar2 = (**(code **)(*(long *)puVar1[1] + 0x208))();
      uVar4 = uVar4 + (uVar2 & 1);
      if (2 < *(byte *)(puVar1 + 6)) {
        uVar2 = (**(code **)(*(long *)puVar1[2] + 0x208))();
        uVar4 = uVar4 + (uVar2 & 1);
        if (3 < *(byte *)(puVar1 + 6)) {
          uVar3 = 3;
          do {
            uVar2 = (**(code **)(*(long *)puVar1[uVar3] + 0x208))();
            uVar4 = uVar4 + (uVar2 & 1);
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(byte *)(puVar1 + 6));
        }
      }
    }
    uVar4 = uVar4 & 0xff;
  }
  return uVar6 == uVar4;
}


