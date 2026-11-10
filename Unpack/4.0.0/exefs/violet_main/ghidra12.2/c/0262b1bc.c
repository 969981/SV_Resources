/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0262b1bc; name: FUN_0262b1bc
 */


ulong FUN_0262b1bc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  ulong local_50;
  float local_44;
  
  fVar8 = (float)param_1;
  local_44 = fVar8;
  uVar1 = FUN_0262b378(param_2 + 8);
  plVar7 = (long *)(param_2 + 0xc0);
  lVar3 = *plVar7;
  lVar4 = *(long *)(param_2 + 200) - lVar3 >> 3;
  uVar6 = lVar4 * -0x5555555555555555;
  local_50 = uVar1;
  if (uVar6 <= uVar1) {
    uVar5 = uVar1 + 1;
    lVar4 = uVar5 + lVar4 * 0x5555555555555555;
    if (uVar5 < uVar6 || lVar4 == 0) {
      if (uVar5 < uVar6) {
        *(ulong *)(param_2 + 200) = lVar3 + uVar5 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar7,lVar4);
      lVar3 = *plVar7;
    }
  }
  *(float *)(lVar3 + uVar1 * 0x18 + 0x10) = fVar8;
  lVar3 = *(long *)(param_2 + 0x130);
  uVar6 = lVar3 + 1;
  plVar7 = (long *)(param_2 + 0xf8);
  *(ulong *)(param_2 + 0x130) = uVar6;
  if (lVar3 == 0) {
    if (*(long *)(param_2 + 0x100) - (long)*(ulong **)(param_2 + 0xf8) >> 4 == 0) {
LAB_0262b2c0:
      FUN_02618ca0(plVar7,&local_50,&local_44);
      return uVar1;
    }
    **(ulong **)(param_2 + 0xf8) = uVar1;
  }
  else {
    pvVar2 = *(void **)(param_2 + 0xf8);
    uVar5 = *(long *)(param_2 + 0x100) - (long)pvVar2 >> 4;
    if (*(float *)((long)pvVar2 + (lVar3 + -1) * 0x10 + 8) <= fVar8) {
      if (uVar5 < uVar6) goto LAB_0262b2c0;
      *(ulong *)((long)pvVar2 + lVar3 * 0x10) = uVar1;
      lVar3 = *plVar7 + lVar3 * 0x10;
      goto LAB_0262b2f8;
    }
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      FUN_0103e51c(plVar7,uVar6 - uVar5);
      pvVar2 = (void *)*plVar7;
    }
    if (*(float *)((long)pvVar2 + 8) <= fVar8) {
      lVar4 = FUN_0225a9d0(param_1,param_2,lVar3 + -1,1);
      pvVar2 = (void *)(*(long *)(param_2 + 0xf8) + lVar4 * 0x10);
      memmove((void *)((long)pvVar2 + 0x10),pvVar2,(lVar3 - lVar4) * 0x10);
      *(ulong *)(*(long *)(param_2 + 0xf8) + lVar4 * 0x10) = uVar1;
      lVar3 = *(long *)(param_2 + 0xf8) + lVar4 * 0x10;
      goto LAB_0262b2f8;
    }
    memmove((void *)((long)pvVar2 + 0x10),pvVar2,lVar3 << 4);
    *(ulong *)*plVar7 = uVar1;
  }
  lVar3 = *plVar7;
LAB_0262b2f8:
  *(float *)(lVar3 + 8) = fVar8;
  return uVar1;
}


