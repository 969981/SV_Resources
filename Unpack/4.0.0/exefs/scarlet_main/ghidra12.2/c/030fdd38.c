/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fdd38; name: FUN_030fdd38
 */


void FUN_030fdd38(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  void *__dest;
  uint *puVar7;
  void *__src;
  ulong uVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  ulong local_68;
  
  plVar11 = (long *)PTR_PTR_047d1a50;
  uVar5 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar4 = uVar5 * 2;
  if (uVar4 <= param_2) {
    uVar4 = param_2;
  }
  if (0x7ffffffe < uVar4) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar4 = 0x7ffffffe;
  }
  pvVar3 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar4 * 0x40,&local_68);
  puVar2 = PTR_PTR_047d1a50;
  iVar9 = (int)param_1[1];
  if (0 < iVar9) {
    pvVar6 = (void *)*param_1;
    __dest = pvVar3;
    __src = pvVar6;
    iVar10 = iVar9;
    do {
      memcpy(__dest,__src,0x30);
      FUN_030da6d0((long)__src + 0x30,puVar2);
      *(undefined8 *)((long)__dest + 0x30) = *(undefined8 *)((long)__src + 0x30);
      *(undefined4 *)((long)__dest + 0x38) = *(undefined4 *)((long)__src + 0x38);
      *(undefined4 *)((long)__dest + 0x3c) = *(undefined4 *)((long)__src + 0x3c);
      iVar10 = iVar10 + -1;
      *(undefined8 *)((long)__src + 0x30) = 0;
      *(undefined8 *)((long)__src + 0x38) = 0;
      plVar11 = (long *)PTR_PTR_047d1a50;
      __dest = (void *)((long)__dest + 0x40);
      __src = (void *)((long)__src + 0x40);
    } while (iVar10 != 0);
    puVar7 = (uint *)((long)pvVar6 + 0x3c);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar7 + -3),(ulong)*puVar7 << 2);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      iVar9 = iVar9 + -1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 0x10;
    } while (iVar9 != 0);
  }
  uVar1 = uVar4 * 0x40 + 0x40;
  uVar8 = uVar4;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x40;
    uVar8 = uVar4 + 1 + (local_68 + uVar4 * -0x40 >> 6);
    if (local_68 < uVar1) {
      uVar8 = uVar4 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,*param_1,uVar5 << 6);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar8;
  *param_1 = (long)pvVar3;
  return;
}


