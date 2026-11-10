/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ffc0e4; name: FUN_02ffc0e4
 */


void FUN_02ffc0e4(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  ulong local_68;
  
  puVar3 = PTR_DAT_047d1a08;
  uVar5 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  local_68 = uVar5 * 0x40;
  pvVar4 = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_68,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    __src = (void *)*param_1;
    pvVar6 = pvVar4;
    if (uVar2 != 1) {
      iVar8 = -(uVar2 & 0xfffffffe);
      do {
        memcpy(pvVar6,__src,0x38);
        memcpy((void *)((long)pvVar6 + 0x40),(void *)((long)__src + 0x40),0x38);
        pvVar6 = (void *)((long)pvVar6 + 0x80);
        __src = (void *)((long)__src + 0x80);
        iVar8 = iVar8 + 2;
      } while (iVar8 != 0);
    }
    if ((uVar2 & 1) != 0) {
      memcpy(pvVar6,__src,0x38);
    }
  }
  uVar1 = uVar5 * 0x40 + 0x40;
  uVar7 = uVar5;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar7 = uVar5 + 1 + (local_68 + uVar5 * -0x40 >> 6);
    if (local_68 < uVar1) {
      uVar7 = uVar5 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar3 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = pvVar4;
  return;
}


