/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cee078; name: FUN_00cee078
 */


void FUN_00cee078(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *__dest;
  ulong uVar3;
  void *__src;
  ulong *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *puVar9;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar3 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar3 <= param_2) {
    uVar3 = param_2;
  }
  if (0x7ffffffe < uVar3) {
    if (0x7ffffffe < param_2) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_78);
    }
    uVar3 = 0x7ffffffe;
  }
  puVar7 = PTR_PTR_047d1a50;
  puVar9 = PTR_DAT_047d1a08;
  local_78 = uVar3 * 0x40;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_78,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x34);
    iVar8 = iVar5 + -1;
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__src + 0x38) = 0;
    if (iVar8 != 0) {
      puVar6 = (undefined8 *)((long)__src + 0x78);
      pvVar2 = __dest;
      do {
        memcpy((void *)((long)pvVar2 + 0x40),puVar6 + -7,0x34);
        *(undefined8 *)((long)pvVar2 + 0x78) = *puVar6;
        iVar8 = iVar8 + -1;
        *puVar6 = 0;
        puVar6 = puVar6 + 8;
        pvVar2 = (void *)((long)pvVar2 + 0x40);
      } while (iVar8 != 0);
    }
    if ((*(ulong *)((long)__src + 0x38) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)((long)__src + 0x38) - 1,0);
    }
    puVar7 = PTR_PTR_047d1a50;
    puVar9 = PTR_DAT_047d1a08;
    iVar5 = iVar5 + -1;
    if (iVar5 != 0) {
      puVar4 = (ulong *)((long)__src + 0x78);
      do {
        if ((*puVar4 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar4 - 1,0);
        }
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + 8;
      } while (iVar5 != 0);
    }
  }
  iVar5 = (int)uVar3;
  uVar1 = uVar3 * 0x40 + 0x40;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 0x40;
    iVar8 = iVar5 + 1 + (int)(local_78 + uVar3 * -0x40 >> 6);
    if (local_78 < uVar1) {
      iVar8 = iVar5 + 1;
    }
    iVar5 = iVar8;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar9 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = iVar5;
  *param_1 = __dest;
  return;
}


