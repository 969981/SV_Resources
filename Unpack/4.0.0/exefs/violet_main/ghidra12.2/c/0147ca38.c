/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0147ca38; name: FUN_0147ca38
 */


void FUN_0147ca38(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__dest;
  ulong uVar5;
  void *__src;
  ulong *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  ulong local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
      local_68 = 0;
      local_78 = 0;
      puStack_70 = PTR_DAT_047d1b38;
      FUN_01f9d9b0(0x4648a379,
                   "C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity",&local_78);
    }
    uVar5 = 0x7ffffffe;
  }
  puVar4 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
  local_78 = uVar5 * 0x40;
  __dest = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_78,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x34);
    iVar9 = iVar7 + -1;
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__src + 0x38) = 0;
    if (iVar9 != 0) {
      puVar8 = (undefined8 *)((long)__src + 0x78);
      pvVar2 = __dest;
      do {
        memcpy((void *)((long)pvVar2 + 0x40),puVar8 + -7,0x34);
        iVar9 = iVar9 + -1;
        *(undefined8 *)((long)pvVar2 + 0x78) = *puVar8;
        *puVar8 = 0;
        puVar8 = puVar8 + 8;
        pvVar2 = (void *)((long)pvVar2 + 0x40);
      } while (iVar9 != 0);
    }
    if ((*(ulong *)((long)__src + 0x38) & 1) != 0) {
      (**(code **)(puVar3 + 8))(0,*(ulong *)((long)__src + 0x38) - 1,0);
    }
    iVar7 = iVar7 + -1;
    if (iVar7 != 0) {
      puVar6 = (ulong *)((long)__src + 0x78);
      do {
        if ((*puVar6 & 1) != 0) {
          (**(code **)(puVar3 + 8))(0,*puVar6 - 1,0);
        }
        iVar7 = iVar7 + -1;
        puVar6 = puVar6 + 8;
      } while (iVar7 != 0);
    }
  }
  uVar1 = uVar5 * 0x40 + 0x40;
  uVar10 = uVar5;
  if (uVar1 <= local_78) {
    local_78 = local_78 - 0x40;
    uVar10 = uVar5 + 1 + (local_78 + uVar5 * -0x40 >> 6);
    if (local_78 < uVar1) {
      uVar10 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar10;
  *param_1 = __dest;
  return;
}


