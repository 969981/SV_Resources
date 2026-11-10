/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ad214; name: FUN_034ad214
 */


uint FUN_034ad214(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  float fVar9;
  long local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xd0) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(byte *)(*(long *)(param_1 + 0xd0) + 0x24) >> 4 & 1;
  }
  if (((*(long *)(param_1 + 0x40) != 0) &&
      ((*(byte *)(*(long *)(param_1 + 0x40) + 4) >> 1 & 1) != 0)) ||
     (uVar3 = (**(code **)(*(long *)(param_1 + 0x20) + 0x20))((long *)(param_1 + 0x20),0x21),
     (uVar3 & 1) != 0)) {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0xff;
    local_40 = 0xff;
    local_38 = 0;
    local_60 = param_2;
    fVar9 = (float)FUN_034a9a38(param_1,0x21,&local_60);
    return (int)fVar9;
  }
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 != (long *)0x0) {
    plVar4 = (long *)*plVar5;
    uVar2 = *(uint *)(plVar5 + 1);
    if ((uVar2 == 0) || (*plVar4 == param_2)) {
      plVar5 = plVar4;
    }
    else {
      lVar6 = (ulong)uVar2 * 0x10;
      plVar7 = plVar4;
      do {
        lVar6 = lVar6 + -0x10;
        if (lVar6 == 0) goto LAB_034ad308;
        plVar5 = plVar7 + 2;
        plVar1 = plVar7 + 2;
        plVar7 = plVar5;
      } while (*plVar1 != param_2);
    }
    if (plVar5 != plVar4 + (ulong)uVar2 * 2) {
      lVar6 = plVar5[1];
      goto LAB_034ad310;
    }
  }
LAB_034ad308:
  lVar6 = *(long *)(param_1 + 0x70);
  if (lVar6 == 0) {
    return uVar8;
  }
LAB_034ad310:
  return *(byte *)(lVar6 + 0x20) >> 4 & 1;
}


