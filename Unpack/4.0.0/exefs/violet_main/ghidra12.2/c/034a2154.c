/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a2154; name: FUN_034a2154
 */


undefined8 FUN_034a2154(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  void *__dest;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined4 *puVar9;
  void *__src;
  long lVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  undefined8 local_48;
  
  lVar10 = *(long *)(param_1 + 0x188);
  plVar11 = (long *)(param_1 + 0x18);
  lVar8 = *(long *)(lVar10 + 0x90);
  if (lVar8 != 0) {
    if (*(long *)(lVar8 + 0x10) == 0) {
      *(long **)(lVar8 + 0x10) = plVar11;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
      *(long *)(param_1 + 0x60) = *(long *)(lVar8 + 0x10);
      *(long **)(lVar8 + 0x10) = plVar11;
    }
    lVar10 = *(long *)(param_1 + 0x188);
  }
  local_48 = (**(code **)(*plVar11 + 0x28))(plVar11);
  uVar4 = (**(code **)(*plVar11 + 0x30))(plVar11);
  if (lVar10 != 0) {
    FUN_034af64c(lVar10,plVar11,&local_48,uVar4 & 1);
    FUN_034be3a4(plVar11,lVar10);
  }
  FUN_0346dff0(plVar11);
  uVar5 = FUN_034cce5c(plVar11);
  *(undefined8 *)(param_1 + 400) = uVar5;
  if ((*(byte *)(param_1 + 0x1b0) >> 6 & 1) != 0) goto LAB_034a2338;
  uVar2 = *(uint *)(param_1 + 0x310);
  uVar4 = *(uint *)(param_1 + 0x314);
  if (uVar2 < uVar4) {
LAB_034a229c:
    if (uVar4 <= uVar2) goto LAB_034a22c4;
    uVar4 = *(uint *)(param_1 + 0x310);
    iVar1 = uVar4 + 1;
    *(int *)(param_1 + 0x310) = iVar1;
    if (*(long *)(param_1 + 0x308) != 0) {
      *(undefined **)(*(long *)(param_1 + 0x308) + (ulong)uVar4 * 8) = PTR_DAT_047e7110;
      goto LAB_034a22c4;
    }
  }
  else {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar4 = iVar1 + uVar4;
    __dest = (void *)(param_1 + 0x300);
    if (uVar4 < 2) {
LAB_034a2294:
      *(void **)(param_1 + 0x308) = __dest;
      *(uint *)(param_1 + 0x314) = uVar4;
      goto LAB_034a229c;
    }
    __src = *(void **)(param_1 + 0x308);
    if (__dest == __src) {
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar4 << 3,1);
      if (__dest != (void *)0x0) {
        memcpy(__dest,__src,((ulong)uVar2 & 0x1fffffff) << 3);
        goto LAB_034a2294;
      }
    }
    else {
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar4 << 3,1);
      if (__dest != (void *)0x0) goto LAB_034a2294;
    }
LAB_034a22c4:
    iVar1 = *(int *)(param_1 + 0x310);
  }
  puVar3 = PTR_DAT_047e7260;
  if (iVar1 != 0) {
    plVar11 = *(long **)(param_1 + 0x308);
    do {
      lVar8 = *plVar11;
      iVar1 = *(int *)(lVar8 + 8);
      plVar6 = (long *)FUN_034a9e5c(lVar8,*(undefined8 *)(param_1 + 0x2c0),
                                    *(undefined4 *)(param_1 + 0x2c8));
      if (plVar6 != (long *)0x0) {
        if ((iVar1 == 0) &&
           (plVar7 = (long *)FUN_034e8bc4(puVar3,*(undefined8 *)(lVar8 + 0x20)),
           plVar7 != (long *)0x0)) {
          *plVar7 = lVar8;
        }
        *plVar6 = param_1;
        *(short *)(lVar8 + 0x28) = *(short *)(lVar8 + 0x28) + 1;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != (long *)(*(long *)(param_1 + 0x308) + (ulong)*(uint *)(param_1 + 0x310) * 8)
            );
  }
LAB_034a2338:
  if (*(int *)(param_1 + 0x228) == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = FUN_034b40b8(*(undefined8 *)PTR_DAT_047e6f38,*(int *)(param_1 + 0x228),param_1,
                         param_1 + 8);
    if ((int)uVar5 == 1) {
      puVar9 = *(undefined4 **)(param_1 + 0x248);
      if (*(long *)(puVar9 + 4) == 0) {
        auVar12 = FUN_03468d28(*(undefined8 *)PTR_DAT_047e70e8,*puVar9,param_1 + 0x1e8);
        *(undefined1 (*) [12])(param_1 + 0x2e0) = auVar12;
      }
      else {
        *(undefined4 *)(param_1 + 0x2e8) = puVar9[2];
        *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(puVar9 + 4);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


