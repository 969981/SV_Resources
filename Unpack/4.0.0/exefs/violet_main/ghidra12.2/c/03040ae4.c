/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03040ae4; name: FUN_03040ae4
 */


void FUN_03040ae4(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  void *pvVar3;
  void *__src;
  void *pvVar4;
  int iVar5;
  
  puVar2 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
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


