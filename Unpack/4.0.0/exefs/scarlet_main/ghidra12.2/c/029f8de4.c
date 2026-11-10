/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f8de4; name: FUN_029f8de4
 */


void FUN_029f8de4(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *__src;
  void *pvVar4;
  int iVar5;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  
  if (0x7ffffffe < param_2) {
    local_58 = 0;
    local_68 = 0;
    puStack_60 = PTR_DAT_047d1b38;
    FUN_01f9d9b0(0x4648a379,"C:/projects/ppp/include/havok\\Common/Base/Container/Array/hkArray.inl"
                 ,0x5e,"Invalid requestedCapacity",&local_68);
  }
  puVar2 = PTR_PTR_047d1a50;
  pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x30);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    __src = (void *)*param_1;
    pvVar4 = pvVar3;
    if (uVar1 != 1) {
      iVar5 = -(uVar1 & 0xfffffffe);
      do {
        memcpy(pvVar4,__src,0x30);
        memcpy((void *)((long)pvVar4 + 0x30),(void *)((long)__src + 0x30),0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x60);
        __src = (void *)((long)__src + 0x60);
        iVar5 = iVar5 + 2;
      } while (iVar5 != 0);
    }
    if ((uVar1 & 1) != 0) {
      memcpy(pvVar4,__src,0x30);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = pvVar3;
  return;
}


