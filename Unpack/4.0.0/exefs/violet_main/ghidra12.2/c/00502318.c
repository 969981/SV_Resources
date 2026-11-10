/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00502318; name: FUN_00502318
 */


long * FUN_00502318(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long local_38;
  undefined *puStack_30;
  undefined ***local_28;
  undefined **local_20;
  long *plStack_18;
  
  puVar2 = *(ulong **)(param_2 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_30 = PTR_LAB_047cd728, local_38 = param_2, *puVar2 != 0xffffffffffffffff)) {
    local_20 = &puStack_30;
    plStack_18 = &local_38;
    local_28 = &local_20;
    std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)&LAB_005036e0);
  }
  uVar4 = *(uint *)(param_2 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar4 * 4)) {
  case 1:
  case 8:
    if ((DAT_047f50e8 & 1) != 0) {
      return &DAT_047f50e0;
    }
    plVar6 = &DAT_047f50e0;
    iVar1 = __cxa_guard_acquire(&DAT_047f50e8);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb58;
    break;
  case 2:
    if ((DAT_047f5108 & 1) != 0) {
      return &DAT_047f5100;
    }
    plVar6 = &DAT_047f5100;
    iVar1 = __cxa_guard_acquire(&DAT_047f5108);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb10;
    break;
  case 3:
    if ((DAT_047f50f8 & 1) != 0) {
      return &DAT_047f50f0;
    }
    plVar6 = &DAT_047f50f0;
    iVar1 = __cxa_guard_acquire(&DAT_047f50f8);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb18;
    break;
  case 4:
    if ((DAT_047f5118 & 1) != 0) {
      return &DAT_047f5110;
    }
    plVar6 = &DAT_047f5110;
    iVar1 = __cxa_guard_acquire(&DAT_047f5118);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb20;
    break;
  case 5:
    if ((DAT_047f5138 & 1) != 0) {
      return &DAT_047f5130;
    }
    plVar6 = &DAT_047f5130;
    iVar1 = __cxa_guard_acquire(&DAT_047f5138);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb28;
    break;
  case 6:
    if ((DAT_047f5128 & 1) != 0) {
      return &DAT_047f5120;
    }
    plVar6 = &DAT_047f5120;
    iVar1 = __cxa_guard_acquire(&DAT_047f5128);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb30;
    break;
  case 7:
    if ((DAT_047f5148 & 1) != 0) {
      return &DAT_047f5140;
    }
    plVar6 = &DAT_047f5140;
    iVar1 = __cxa_guard_acquire(&DAT_047f5148);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb38;
    break;
  case 9:
    if ((DAT_047f5158 & 1) != 0) {
      return &DAT_047f5150;
    }
    plVar6 = &DAT_047f5150;
    iVar1 = __cxa_guard_acquire(&DAT_047f5158);
    if (iVar1 == 0) {
      return plVar6;
    }
    puVar5 = PTR_DAT_047cdb40;
    break;
  case 10:
    puVar2 = *(ulong **)(param_2 + 0x30);
    if (puVar2 != (ulong *)0x0) {
      puStack_30 = PTR_LAB_047cd728;
      local_38 = param_2;
      if (*puVar2 != 0xffffffffffffffff) {
        local_20 = &puStack_30;
        plStack_18 = &local_38;
        local_28 = &local_20;
        std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)&LAB_005036e0);
      }
      uVar4 = *(uint *)(param_2 + 0x38);
    }
    if ((uVar4 == 0xb) && (uVar3 = FUN_004a64c0(param_2), (uVar3 & 1) != 0)) {
      if ((DAT_047f5168 & 1) != 0) {
        return &DAT_047f5160;
      }
      plVar6 = &DAT_047f5160;
      iVar1 = __cxa_guard_acquire(&DAT_047f5168);
      if (iVar1 == 0) {
        return plVar6;
      }
      puVar5 = PTR_DAT_047cdb48;
    }
    else {
      if ((DAT_047f5178 & 1) != 0) {
        return &DAT_047f5170;
      }
      plVar6 = &DAT_047f5170;
      iVar1 = __cxa_guard_acquire(&DAT_047f5178);
      if (iVar1 == 0) {
        return plVar6;
      }
      puVar5 = PTR_DAT_047cdb50;
    }
    break;
  default:
    return (long *)0x0;
  }
  *plVar6 = (long)(puVar5 + 0x10);
  __cxa_guard_release(plVar6 + 1);
  return plVar6;
}


