/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0347af30; name: FUN_0347af30
 */


void FUN_0347af30(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  
  FUN_034a1dac();
  *param_1 = &PTR_LAB_047c24a0;
  param_1[2] = &PTR_LAB_047c2588;
  param_1[3] = &PTR_LAB_047c25a0;
  lVar3 = *(long *)(*(long *)(param_2 + 0x88) + 0x18);
  param_1[100] = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
  }
  *(undefined8 *)((long)param_1 + 0x36c) = 0;
  bVar2 = *(byte *)(param_1 + 0x6f);
  *(undefined4 *)((long)param_1 + 0x374) = 0;
  *(byte *)(param_1 + 0x6f) = bVar2 & 0xf0;
  *(byte *)(param_1 + 0x6f) = bVar2 & 0x80 | (*(byte *)(param_2 + 0x290) >> 1 & 1) << 4;
  (**(code **)(*(long *)param_1[0x48] + 0x10))();
  *(undefined4 *)((long)param_1 + 0x2d4) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x20);
  if (param_1[0x46] == 0) {
    param_1[0x46] = **(undefined8 **)(param_2 + 0x88);
    **(undefined8 **)(param_2 + 0x88) = 0;
  }
  if (param_1[0x47] == 0) {
    param_1[0x47] = *(undefined8 *)(*(long *)(param_2 + 0x88) + 8);
    *(undefined8 *)(*(long *)(param_2 + 0x88) + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  memcpy(param_1 + 0x65,(void *)(param_2 + 0x38),0x44);
  uVar1 = *(uint *)(param_2 + 0x7c);
  *(uint *)((long)param_1 + 0x36c) = uVar1;
  iVar4 = *(int *)(param_1 + 0x65);
  if (iVar4 != 0) {
    uVar5 = (ulong)(iVar4 - 1);
    do {
      if (((uint)uVar5 < 0x20) && ((uVar1 >> (uVar5 & 0x3f) & 1) != 0)) {
        return;
      }
      *(uint *)(param_1 + 0x65) = (uint)uVar5;
      uVar5 = uVar5 - 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


