/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01970eb4; name: FUN_01970eb4
 */


void FUN_01970eb4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  void *__src;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar6 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar6 * 2;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_78);
    }
    uVar4 = 0x7ffffffe;
  }
  puVar3 = PTR_PTR_047d1a50;
  __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar4 * 0x40,&local_78);
  iVar8 = *(int *)(param_1 + 1);
  if (0 < iVar8) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x34);
    iVar9 = iVar8 + -1;
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__src + 0x38) = 0;
    if (iVar9 != 0) {
      puVar7 = (undefined8 *)((long)__src + 0x78);
      pvVar2 = __dest;
      do {
        memcpy((void *)((long)pvVar2 + 0x40),puVar7 + -7,0x34);
        iVar9 = iVar9 + -1;
        *(undefined8 *)((long)pvVar2 + 0x78) = *puVar7;
        *puVar7 = 0;
        puVar7 = puVar7 + 8;
        pvVar2 = (void *)((long)pvVar2 + 0x40);
      } while (iVar9 != 0);
    }
    if ((*(ulong *)((long)__src + 0x38) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)((long)__src + 0x38) - 1,0);
    }
    iVar8 = iVar8 + -1;
    if (iVar8 != 0) {
      puVar5 = (ulong *)((long)__src + 0x78);
      do {
        if ((*puVar5 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar5 - 1,0);
        }
        iVar8 = iVar8 + -1;
        puVar5 = puVar5 + 8;
      } while (iVar8 != 0);
    }
  }
  iVar8 = (int)uVar4;
  uVar1 = uVar4 * 0x40 + 0x40;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 0x40;
    iVar9 = iVar8 + 1 + (int)(local_78 + uVar4 * -0x40 >> 6);
    if (local_78 < uVar1) {
      iVar9 = iVar8 + 1;
    }
    iVar8 = iVar9;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar6 << 6);
  }
  *(int *)((long)param_1 + 0xc) = iVar8;
  *param_1 = __dest;
  return;
}


