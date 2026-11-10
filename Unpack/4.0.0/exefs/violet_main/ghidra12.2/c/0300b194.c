/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300b194; name: FUN_0300b194
 */


/* WARNING: Removing unreachable block (ram,0x0300b224) */

void FUN_0300b194(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  void *__src;
  void *pvVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_68;
  
  plVar6 = (long *)PTR_PTR_047d1a50;
  uVar9 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar9 * 2;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar4 * 0x28,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar7 = pvVar3;
    if (uVar2 == 1) {
    }
    else {
      iVar5 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar7,__src,0x28);
        memcpy((void *)((long)pvVar7 + 0x28),(void *)((long)__src + 0x28),0x28);
        pvVar7 = (void *)((long)pvVar7 + 0x50);
        __src = (void *)((long)__src + 0x50);
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
      plVar6 = (long *)PTR_PTR_047d1a50;
      if ((uVar2 & 1) == 0) goto LAB_0300b284;
    }
    memcpy(pvVar7,__src,0x28);
  }
LAB_0300b284:
  uVar1 = uVar4 * 0x28 + 0x28;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x28;
    uVar8 = uVar4 + 1 + (local_68 + uVar4 * -0x28) / 0x28;
    if (local_68 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar6 + 0x20))(plVar6,*param_1,uVar9 * 0x28);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = pvVar3;
  return;
}


