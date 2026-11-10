/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0315ab10; name: FUN_0315ab10
 */


void FUN_0315ab10(undefined8 *param_1,ulong param_2)

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
  pvVar2 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x60);
  puVar1 = PTR_PTR_047d1a50;
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    pvVar7 = (void *)*param_1;
    __dest = pvVar2;
    __src = pvVar7;
    iVar6 = iVar3;
    do {
      memcpy(__dest,__src,0x50);
      FUN_01339774((long)__src + 0x50,puVar1);
      *(undefined8 *)((long)__dest + 0x50) = *(undefined8 *)((long)__src + 0x50);
      *(undefined4 *)((long)__dest + 0x58) = *(undefined4 *)((long)__src + 0x58);
      *(undefined4 *)((long)__dest + 0x5c) = *(undefined4 *)((long)__src + 0x5c);
      iVar6 = iVar6 + -1;
      *(undefined8 *)((long)__src + 0x50) = 0;
      *(undefined8 *)((long)__src + 0x58) = 0;
      puVar5 = PTR_PTR_047d1a50;
      __dest = (void *)((long)__dest + 0x60);
      __src = (void *)((long)__src + 0x60);
    } while (iVar6 != 0);
    puVar4 = (uint *)((long)pvVar7 + 0x5c);
    do {
      puVar4[-1] = 0;
      if ((-1 < (int)*puVar4) && (*(long *)(puVar4 + -3) != 0)) {
        (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*(long *)(puVar4 + -3),(ulong)*puVar4 << 2);
      }
      puVar4[-3] = 0;
      puVar4[-2] = 0;
      iVar3 = iVar3 + -1;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + 0x18;
    } while (iVar3 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = pvVar2;
  return;
}


