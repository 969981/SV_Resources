/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02218a98; name: FUN_02218a98
 */


void FUN_02218a98(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined *puVar3;
  void *__dest;
  ulong uVar4;
  int iVar5;
  void *__src;
  int iVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong *local_80;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  puVar7 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
  local_78 = uVar4 * 0x40;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_78,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x34);
    iVar6 = iVar5 + -1;
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__src + 0x38) = 0;
    if (iVar6 != 0) {
      puVar8 = (undefined8 *)((long)__src + 0x78);
      pvVar2 = __dest;
      do {
        memcpy((void *)((long)pvVar2 + 0x40),puVar8 + -7,0x34);
        iVar6 = iVar6 + -1;
        *(undefined8 *)((long)pvVar2 + 0x78) = *puVar8;
        *puVar8 = 0;
        puVar8 = puVar8 + 8;
        pvVar2 = (void *)((long)pvVar2 + 0x40);
      } while (iVar6 != 0);
    }
    if ((*(ulong *)((long)__src + 0x38) & 1) != 0) {
      (**(code **)(puVar3 + 8))(0,*(ulong *)((long)__src + 0x38) - 1,0);
    }
    puVar7 = PTR_PTR_047d1a50;
    iVar5 = iVar5 + -1;
    if (iVar5 != 0) {
      local_80 = (ulong *)((long)__src + 0x78);
      do {
        if ((*local_80 & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,*local_80 - 1,0);
        }
        iVar5 = iVar5 + -1;
        local_80 = local_80 + 8;
      } while (iVar5 != 0);
    }
  }
  iVar5 = (int)uVar4;
  uVar1 = uVar4 * 0x40 + 0x40;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 0x40;
    iVar6 = iVar5 + 1 + (int)(local_78 + uVar4 * -0x40 >> 6);
    if (local_78 < uVar1) {
      iVar6 = iVar5 + 1;
    }
    iVar5 = iVar6;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = iVar5;
  *param_1 = __dest;
  return;
}


