/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03152ffc; name: FUN_03152ffc
 */


void FUN_03152ffc(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  void *__dest;
  uint *puVar4;
  void *__src;
  int iVar5;
  void *pvVar6;
  int iVar7;
  
  puVar1 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 6);
  puVar2 = PTR_PTR_047d1a50;
  iVar5 = *(int *)(param_1 + 1);
  if (0 < iVar5) {
    pvVar6 = (void *)*param_1;
    __dest = pvVar3;
    __src = pvVar6;
    iVar7 = iVar5;
    do {
      memcpy(__dest,__src,0x30);
      FUN_030da6d0((long)__src + 0x30,puVar2);
      *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
      *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
      *(undefined4 *)((long)__dest + 0x3c) = *(undefined4 *)((long)__src + 0x3c);
      iVar7 = iVar7 + -1;
      *(undefined8 *)((long)__src + 0x30) = 0;
      *(undefined8 *)((long)__src + 0x38) = 0;
      __dest = (void *)((long)__dest + 0x40);
      __src = (void *)((long)__src + 0x40);
    } while (iVar7 != 0);
    puVar4 = (uint *)((long)pvVar6 + 0x3c);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar4 + -3),(ulong)*puVar4 << 2);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      iVar5 = iVar5 + -1;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + 0x10;
    } while (iVar5 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar1[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = pvVar3;
  return;
}


