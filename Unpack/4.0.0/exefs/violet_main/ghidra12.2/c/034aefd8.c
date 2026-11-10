/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034aefd8; name: FUN_034aefd8
 */


uint FUN_034aefd8(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  long local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    return 0;
  }
  if (*(int *)(*(long *)(param_1 + 0xd0) + (ulong)param_2 * 8 + 4) != 0) {
    uVar8 = (ulong)(param_2 + 0x1d);
    if (((*(ulong **)(param_1 + 0x40) != (ulong *)0x0) &&
        ((**(ulong **)(param_1 + 0x40) >> (uVar8 & 0x3f) & 1) != 0)) ||
       (uVar2 = (**(code **)(*(long *)(param_1 + 0x20) + 0x20))((long *)(param_1 + 0x20),uVar8),
       (uVar2 & 1) != 0)) {
      local_58 = 0;
      local_50 = 0;
      local_48 = 0xff;
      local_40 = 0xff;
      local_38 = 0;
      local_60 = param_3;
      fVar9 = (float)FUN_034a9a38(param_1,uVar8,&local_60);
      return (int)fVar9;
    }
  }
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 == (long *)0x0) {
LAB_034af0dc:
    lVar6 = *(long *)(param_1 + 0x70);
    if (lVar6 == 0) {
      uVar3 = 0;
      if (*(long *)(param_1 + 0xd0) != 0) {
        uVar3 = (uint)*(byte *)(*(long *)(param_1 + 0xd0) + 0x24);
      }
      goto LAB_034af0e8;
    }
  }
  else {
    plVar4 = (long *)*plVar5;
    uVar3 = *(uint *)(plVar5 + 1);
    if ((uVar3 == 0) || (*plVar4 == param_3)) {
      plVar5 = plVar4;
    }
    else {
      lVar6 = (ulong)uVar3 * 0x10;
      plVar7 = plVar4;
      do {
        lVar6 = lVar6 + -0x10;
        if (lVar6 == 0) goto LAB_034af0dc;
        plVar5 = plVar7 + 2;
        plVar1 = plVar7 + 2;
        plVar7 = plVar5;
      } while (*plVar1 != param_3);
    }
    if (plVar5 == plVar4 + (ulong)uVar3 * 2) goto LAB_034af0dc;
    lVar6 = plVar5[1];
  }
  uVar3 = (uint)*(byte *)(lVar6 + 0x20);
LAB_034af0e8:
  return uVar3 >> (ulong)(param_2 & 0x1f) & 1;
}


