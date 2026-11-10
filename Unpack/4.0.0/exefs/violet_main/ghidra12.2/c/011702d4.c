/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011702d4; name: FUN_011702d4
 */


void FUN_011702d4(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *__dest;
  void *__src;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  
  if (0x7ffffffe < param_2) {
    local_68 = 0;
    local_78 = 0;
    puStack_70 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x4648a379,"C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl"
                 ,0x5e,"Invalid requestedCapacity",&local_78);
  }
  puVar3 = PTR_PTR_047d1a50;
  __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 6);
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    __src = (void *)*param_1;
    memcpy(__dest,__src,0x34);
    iVar6 = iVar5 + -1;
    *(undefined8 *)((long)__dest + 0x38) = *(undefined8 *)((long)__src + 0x38);
    *(undefined8 *)((long)__src + 0x38) = 0;
    if (iVar6 != 0) {
      puVar7 = (undefined8 *)((long)__src + 0x78);
      pvVar1 = __dest;
      do {
        memcpy((void *)((long)pvVar1 + 0x40),puVar7 + -7,0x34);
        *(undefined8 *)((long)pvVar1 + 0x78) = *puVar7;
        iVar6 = iVar6 + -1;
        *puVar7 = 0;
        puVar7 = puVar7 + 8;
        pvVar1 = (void *)((long)pvVar1 + 0x40);
      } while (iVar6 != 0);
    }
    if ((*(ulong *)((long)__src + 0x38) & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)((long)__src + 0x38) - 1,0);
    }
    puVar2 = PTR_DAT_047d1a08;
    iVar5 = iVar5 + -1;
    if (iVar5 != 0) {
      puVar4 = (ulong *)((long)__src + 0x78);
      do {
        if ((*puVar4 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar4 - 1,0);
        }
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + 8;
      } while (iVar5 != 0);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar3[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = __dest;
  return;
}


