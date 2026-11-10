/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008aa5c0; name: FUN_008aa5c0
 */


void FUN_008aa5c0(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float local_38 [2];
  undefined1 auStack_18 [8];
  
  uVar2 = FUN_008b5240(param_2,*param_1);
  *(undefined8 *)((long)param_1 + 0xcc) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = uVar2;
  lVar3 = param_1[0xb];
  uVar4 = (uint)*(byte *)(lVar3 + 8);
  if (((*(byte *)(lVar3 + 8) & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x30))) {
    uVar2 = FUN_008ac590(param_1,param_2,0);
    lVar3 = param_1[0xb];
    *(undefined4 *)((long)param_1 + 0xcc) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 1 & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x40))) {
    uVar2 = FUN_008ac590(param_1,param_2,1);
    lVar3 = param_1[0xb];
    *(undefined4 *)(param_1 + 0x1a) = uVar2;
    uVar4 = (uint)*(byte *)(lVar3 + 8);
  }
  if (((uVar4 >> 2 & 1) != 0) && (0.0 < *(float *)(lVar3 + 0x58))) {
    uVar2 = FUN_008ac590(param_1,param_2,2);
    lVar3 = param_1[0xb];
    *(undefined4 *)((long)param_1 + 0xd4) = uVar2;
  }
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38) + (ulong)*(uint *)(param_1 + 0x1b);
  if (((lVar3 != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
     ((*(byte *)(lVar3 + 8) >> 5 & 1) != 0)) {
    fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*param_1 + 0x5a));
    *(float *)(lVar1 + 0xdc) = (fVar5 / 255.0) / 255.0;
  }
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,auStack_18);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,local_38);
  fVar5 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  if ((*(byte *)(*param_1 + 0x5b) & 3) != 0) {
    if ((*(byte *)(*param_1 + 0x5b) & 3) == 2) {
      local_38[0] = fVar5 + local_38[0];
    }
    else {
      local_38[0] = local_38[0] - fVar5;
    }
  }
  FUN_00892a80(param_2,lVar1,local_38,auStack_18,1,&DAT_03d0f984);
  return;
}


