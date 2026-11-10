/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01753510; name: FUN_01753510
 */


ulong FUN_01753510(long param_1)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong local_58;
  undefined4 local_44;
  
  local_44 = 0xbf800000;
  uVar1 = FUN_017536d0(param_1 + 8);
  plVar7 = (long *)(param_1 + 0xc0);
  lVar3 = *plVar7;
  lVar4 = *(long *)(param_1 + 200) - lVar3 >> 3;
  uVar6 = lVar4 * -0x5555555555555555;
  local_58 = uVar1;
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
  *(undefined4 *)(lVar3 + uVar1 * 0x18 + 0x10) = 0xbf800000;
  lVar3 = *(long *)(param_1 + 0x130);
  uVar6 = lVar3 + 1;
  plVar7 = (long *)(param_1 + 0xf8);
  *(ulong *)(param_1 + 0x130) = uVar6;
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x100) - (long)*(ulong **)(param_1 + 0xf8) >> 4 == 0) {
LAB_0175364c:
      FUN_01677604(plVar7,&local_58,&local_44);
      return uVar1;
    }
    **(ulong **)(param_1 + 0xf8) = uVar1;
  }
  else {
    pvVar2 = *(void **)(param_1 + 0xf8);
    uVar5 = *(long *)(param_1 + 0x100) - (long)pvVar2 >> 4;
    if (*(float *)((long)pvVar2 + (lVar3 + -1) * 0x10 + 8) <= -1.0) {
      if (uVar5 < uVar6) goto LAB_0175364c;
      *(ulong *)((long)pvVar2 + lVar3 * 0x10) = uVar1;
      lVar3 = *plVar7 + lVar3 * 0x10;
      goto LAB_01753608;
    }
    if (uVar5 <= uVar6 && uVar6 - uVar5 != 0) {
      FUN_0103e51c(plVar7,uVar6 - uVar5);
      pvVar2 = (void *)*plVar7;
    }
    if (*(float *)((long)pvVar2 + 8) <= -1.0) {
      lVar4 = FUN_01984d1c(0xbf800000,param_1,lVar3 + -1,1);
      pvVar2 = (void *)(*(long *)(param_1 + 0xf8) + lVar4 * 0x10);
      memmove((void *)((long)pvVar2 + 0x10),pvVar2,(lVar3 - lVar4) * 0x10);
      *(ulong *)(*(long *)(param_1 + 0xf8) + lVar4 * 0x10) = uVar1;
      lVar3 = *(long *)(param_1 + 0xf8) + lVar4 * 0x10;
      goto LAB_01753608;
    }
    memmove((void *)((long)pvVar2 + 0x10),pvVar2,lVar3 << 4);
    *(ulong *)*plVar7 = uVar1;
  }
  lVar3 = *plVar7;
LAB_01753608:
  *(undefined4 *)(lVar3 + 8) = 0xbf800000;
  return uVar1;
}


