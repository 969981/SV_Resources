/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb91fc; name: FUN_02fb91fc
 */


void FUN_02fb91fc(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  ulong uVar6;
  void *__src;
  void *pvVar7;
  ulong uVar8;
  int iVar9;
  ulong local_68;
  
  puVar4 = PTR_PTR_047d1a50;
  puVar3 = PTR_DAT_047d1a08;
  uVar6 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  local_68 = uVar6 * 0x40;
  pvVar5 = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar7 = pvVar5;
    if (uVar2 != 1) {
      iVar9 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar7,__src,0x40);
        memcpy((void *)((long)pvVar7 + 0x40),(void *)((long)__src + 0x40),0x40);
        pvVar7 = (void *)((long)pvVar7 + 0x80);
        __src = (void *)((long)__src + 0x80);
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
    }
    if ((uVar2 & 1) != 0) {
      memcpy(pvVar7,__src,0x40);
    }
  }
  uVar1 = uVar6 * 0x40 + 0x40;
  uVar8 = uVar6;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar8 = uVar6 + 1 + (local_68 + uVar6 * -0x40 >> 6);
    if (local_68 < uVar1) {
      uVar8 = uVar6 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = pvVar5;
  return;
}


