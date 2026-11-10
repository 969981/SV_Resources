/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a2df8; name: FUN_034a2df8
 */


void FUN_034a2df8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  void *__dest;
  long *plVar4;
  long *plVar5;
  void *__src;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  if (*(int *)(param_1 + 0x310) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1b0) >> 6 & 1) != 0) {
    return;
  }
  __dest = (void *)(param_1 + 0x300);
  local_68 = 0;
  uStack_60 = 0x100000000;
  uStack_70 = 0;
  local_58 = 0x100;
  local_80 = *(undefined8 *)(param_1 + 0x28);
  local_78 = __dest;
  (**(code **)(**(long **)(param_1 + 0x188) + 0x118))(*(long **)(param_1 + 0x188),&local_80,0,0);
  uVar2 = *(uint *)(param_1 + 0x310);
  uVar7 = *(uint *)(param_1 + 0x314);
  if (uVar2 < uVar7) {
LAB_034a2ef8:
    if (uVar2 < uVar7) {
      uVar7 = *(uint *)(param_1 + 0x310);
      iVar1 = uVar7 + 1;
      *(int *)(param_1 + 0x310) = iVar1;
      if (*(long *)(param_1 + 0x308) == 0) goto LAB_034a2f24;
      *(undefined **)(*(long *)(param_1 + 0x308) + (ulong)uVar7 * 8) = PTR_DAT_047e7110;
    }
  }
  else {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    if (uVar7 < 2) {
LAB_034a2ef0:
      *(void **)(param_1 + 0x308) = __dest;
      *(uint *)(param_1 + 0x314) = uVar7;
      goto LAB_034a2ef8;
    }
    __src = *(void **)(param_1 + 0x308);
    if (__dest == __src) {
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar7 << 3,1);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__src,((ulong)uVar2 & 0x1fffffff) << 3);
        goto LAB_034a2ef0;
      }
    }
    else {
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar7 << 3,1);
      if (__dest != (void *)0x0) goto LAB_034a2ef0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x310);
LAB_034a2f24:
  puVar3 = PTR_DAT_047e7260;
  if (iVar1 != 0) {
    plVar8 = *(long **)(param_1 + 0x308);
    do {
      lVar6 = *plVar8;
      iVar1 = *(int *)(lVar6 + 8);
      plVar4 = (long *)FUN_034a9e5c(lVar6,*(undefined8 *)(param_1 + 0x2c0),
                                    *(undefined4 *)(param_1 + 0x2c8));
      if (plVar4 != (long *)0x0) {
        if ((iVar1 == 0) &&
           (plVar5 = (long *)FUN_034e8bc4(puVar3,*(undefined8 *)(lVar6 + 0x20)),
           plVar5 != (long *)0x0)) {
          *plVar5 = lVar6;
        }
        *plVar4 = param_1;
        *(short *)(lVar6 + 0x28) = *(short *)(lVar6 + 0x28) + 1;
      }
      if ((*(byte *)(param_1 + 0x2be) >> 2 & 1) != 0) {
        *(short *)(*plVar8 + 0x2a) = *(short *)(*plVar8 + 0x2a) + 1;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != (long *)(*(long *)(param_1 + 0x308) + (ulong)*(uint *)(param_1 + 0x310) * 8))
    ;
  }
  return;
}


