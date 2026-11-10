/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c6c24; name: FUN_030c6c24
 */


void FUN_030c6c24(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar8 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar8 * 2;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  pvVar4 = (void *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x10))
                             (PTR_PTR_047d1a50 + 0x20,uVar5 * 0x30,&local_68);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar6 = pvVar4;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar6,__src,0x30);
        memcpy((void *)((long)pvVar6 + 0x30),(void *)((long)__src + 0x30),0x30);
        pvVar6 = (void *)((long)pvVar6 + 0x60);
        __src = (void *)((long)__src + 0x60);
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      memcpy(pvVar6,__src,0x30);
    }
  }
  uVar1 = uVar5 * 0x30 + 0x30;
  uVar7 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x30;
    uVar7 = uVar5 + 1;
    if (uVar1 <= local_68) {
      uVar7 = uVar7 + (local_68 + uVar5 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)(puVar3 + 0x20) + 0x20))(puVar3 + 0x20,*param_1,uVar8 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = pvVar4;
  return;
}


