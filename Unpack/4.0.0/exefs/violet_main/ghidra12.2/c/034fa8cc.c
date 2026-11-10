/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034fa8cc; name: FUN_034fa8cc
 */


undefined8 FUN_034fa8cc(long *param_1,uint param_2)

{
  int iVar1;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (((*(uint *)((long)param_1 + 0x24) <= param_2) ||
      (iVar1 = (**(code **)(*param_1 + 0x128))(), iVar1 != 1)) ||
     (iVar1 = (**(code **)(*(long *)param_1[0xb] + 0x80))((long *)param_1[0xb],local_34,0,&local_30)
     , iVar1 != 1)) {
    return 2;
  }
  *(int *)(param_1 + 0xe) = local_30;
  *(int *)((long)param_1 + 0x74) = local_34 - local_30;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((long)param_1 + 0x54);
  (**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],&local_30);
  if (*(short *)((long)param_1 + 0x54) == 1) {
    local_2c = 0;
    uStack_28 = 0;
  }
  else {
    local_2c = (undefined4)param_1[0xf];
    uStack_28 = *(undefined4 *)((long)param_1 + 0x7c);
  }
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],&local_30);
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xbe;
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 699) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  return 1;
}


