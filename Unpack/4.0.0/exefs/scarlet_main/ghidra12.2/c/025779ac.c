/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025779ac; name: FUN_025779ac
 */


ulong FUN_025779ac(undefined8 param_1,long param_2)

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
  uVar1 = FUN_02579e78(param_2 + 8);
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
LAB_02577ab0:
      FUN_02578288(plVar7,&local_50,&local_44);
      return uVar1;
    }
    **(ulong **)(param_2 + 0xf8) = uVar1;
  }
  else {
    pvVar2 = *(void **)(param_2 + 0xf8);
    uVar5 = *(long *)(param_2 + 0x100) - (long)pvVar2 >> 4;
    if (*(float *)((long)pvVar2 + (lVar3 + -1) * 0x10 + 8) <= fVar8) {
      if (uVar5 < uVar6) goto LAB_02577ab0;
      *(ulong *)((long)pvVar2 + lVar3 * 0x10) = uVar1;
      lVar3 = *plVar7 + lVar3 * 0x10;
      goto LAB_02577ae8;
    }
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      FUN_0103e51c(plVar7,uVar6 - uVar5);
      pvVar2 = (void *)*plVar7;
    }
    if (*(float *)((long)pvVar2 + 8) <= fVar8) {
      lVar4 = FUN_021c5dd4(param_1,param_2,lVar3 + -1,1);
      pvVar2 = (void *)(*(long *)(param_2 + 0xf8) + lVar4 * 0x10);
      memmove((void *)((long)pvVar2 + 0x10),pvVar2,(lVar3 - lVar4) * 0x10);
      *(ulong *)(*(long *)(param_2 + 0xf8) + lVar4 * 0x10) = uVar1;
      lVar3 = *(long *)(param_2 + 0xf8) + lVar4 * 0x10;
      goto LAB_02577ae8;
    }
    memmove((void *)((long)pvVar2 + 0x10),pvVar2,lVar3 << 4);
    *(ulong *)*plVar7 = uVar1;
  }
  lVar3 = *plVar7;
LAB_02577ae8:
  *(float *)(lVar3 + 8) = fVar8;
  return uVar1;
}


