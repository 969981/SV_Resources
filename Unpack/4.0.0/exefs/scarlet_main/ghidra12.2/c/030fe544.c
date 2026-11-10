/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fe544; name: FUN_030fe544
 */


/* WARNING: Removing unreachable block (ram,0x030fe5d4) */

void FUN_030fe544(undefined8 *param_1,ulong param_2)

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
                             (PTR_PTR_047d1a50,uVar4 * 0x50,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar7 = pvVar3;
    if (uVar2 == 1) {
    }
    else {
      iVar5 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar7,__src,0x50);
        memcpy((void *)((long)pvVar7 + 0x50),(void *)((long)__src + 0x50),0x50);
        pvVar7 = (void *)((long)pvVar7 + 0xa0);
        __src = (void *)((long)__src + 0xa0);
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
      plVar6 = (long *)PTR_PTR_047d1a50;
      if ((uVar2 & 1) == 0) goto LAB_030fe634;
    }
    memcpy(pvVar7,__src,0x50);
  }
LAB_030fe634:
  uVar1 = uVar4 * 0x50 + 0x50;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x50;
    uVar8 = uVar4 + 1 + (local_68 + uVar4 * -0x50) / 0x50;
    if (local_68 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar6 + 0x20))(plVar6,*param_1,uVar9 * 0x50);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = pvVar3;
  return;
}


