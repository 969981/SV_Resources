/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03159f60; name: FUN_03159f60
 */


void FUN_03159f60(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  void *__dest;
  void *__src;
  undefined *puVar5;
  int iVar6;
  void *pvVar7;
  
  puVar5 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0xa0);
  puVar1 = PTR_PTR_047d1a50;
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    pvVar7 = (void *)*param_1;
    __dest = pvVar2;
    __src = pvVar7;
    iVar6 = iVar3;
    do {
      memcpy(__dest,__src,0x90);
      FUN_01339774((long)__src + 0x90,puVar1);
      *(undefined8 *)((long)__dest + 0x90) = *(undefined8 *)((long)__src + 0x90);
      *(undefined4 *)((long)__dest + 0x98) = *(undefined4 *)((long)__src + 0x98);
      *(undefined4 *)((long)__dest + 0x9c) = *(undefined4 *)((long)__src + 0x9c);
      iVar6 = iVar6 + -1;
      *(undefined8 *)((long)__src + 0x90) = 0;
      *(undefined8 *)((long)__src + 0x98) = 0;
      puVar5 = PTR_PTR_047d1a50;
      __dest = (void *)((long)__dest + 0xa0);
      __src = (void *)((long)__src + 0xa0);
    } while (iVar6 != 0);
    puVar4 = (uint *)((long)pvVar7 + 0x9c);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar4 + -3),(ulong)*puVar4 << 2);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      iVar3 = iVar3 + -1;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + 0x28;
    } while (iVar3 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = pvVar2;
  return;
}


