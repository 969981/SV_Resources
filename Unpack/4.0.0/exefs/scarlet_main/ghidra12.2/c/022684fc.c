/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022684fc; name: FUN_022684fc
 */


ulong FUN_022684fc(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong local_48;
  undefined4 local_24;
  
  local_24 = 0;
  uVar1 = FUN_022695cc(param_1 + 8);
  plVar7 = (long *)(param_1 + 0xc0);
  lVar3 = *plVar7;
  lVar4 = *(long *)(param_1 + 200) - lVar3 >> 3;
  uVar6 = lVar4 * -0x5555555555555555;
  local_48 = uVar1;
  if (uVar6 <= uVar1) {
    uVar5 = uVar1 + 1;
    lVar4 = uVar5 + lVar4 * 0x5555555555555555;
    if (uVar5 < uVar6 || lVar4 == 0) {
      if (uVar5 < uVar6) {
        *(ulong *)(param_1 + 200) = lVar3 + uVar5 * 0x18;
      }
    }
    else {
      FUN_00e93f30(plVar7,lVar4);
      lVar3 = *plVar7;
    }
  }
  *(undefined4 *)(lVar3 + uVar1 * 0x18 + 0x10) = 0;
  lVar3 = *(long *)(param_1 + 0x130);
  uVar6 = lVar3 + 1;
  plVar7 = (long *)(param_1 + 0xf8);
  *(ulong *)(param_1 + 0x130) = uVar6;
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x100) - (long)*(ulong **)(param_1 + 0xf8) >> 4 == 0) {
LAB_022685f8:
      FUN_017fc5c4(plVar7,&local_48,&local_24);
      return uVar1;
    }
    **(ulong **)(param_1 + 0xf8) = uVar1;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xf8);
    uVar5 = *(long *)(param_1 + 0x100) - (long)pvVar2 >> 4;
    if (*(float *)((long)pvVar2 + (lVar3 + -1) * 0x10 + 8) <= 0.0) {
      if (uVar5 < uVar6) goto LAB_022685f8;
      *(ulong *)((long)pvVar2 + lVar3 * 0x10) = uVar1;
      lVar3 = *plVar7 + lVar3 * 0x10;
      goto LAB_02268630;
    }
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      FUN_0103e51c(plVar7,uVar6 - uVar5);
      pvVar2 = (void *)*plVar7;
    }
    if (*(float *)((long)pvVar2 + 8) <= 0.0) {
      lVar4 = FUN_0225a9d0(0,param_1,lVar3 + -1,1);
      pvVar2 = (void *)(*(long *)(param_1 + 0xf8) + lVar4 * 0x10);
      memmove((void *)((long)pvVar2 + 0x10),pvVar2,(lVar3 - lVar4) * 0x10);
      *(ulong *)(*(long *)(param_1 + 0xf8) + lVar4 * 0x10) = uVar1;
      lVar3 = *(long *)(param_1 + 0xf8) + lVar4 * 0x10;
      goto LAB_02268630;
    }
    memmove((void *)((long)pvVar2 + 0x10),pvVar2,lVar3 << 4);
    *(ulong *)*plVar7 = uVar1;
  }
  lVar3 = *plVar7;
LAB_02268630:
  *(undefined4 *)(lVar3 + 8) = 0;
  return uVar1;
}


