/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030cb414; name: FUN_030cb414
 */


void FUN_030cb414(undefined8 *param_1,ulong param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong local_68;
  
  puVar3 = PTR_PTR_047d1a50;
  uVar7 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar7 * 2;
  if (uVar5 <= param_2) {
    uVar5 = param_2;
  }
  if (0x7ffffffe < uVar5) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar5 = 0x7ffffffe;
  }
  pvVar4 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar5 * 0x30,&local_68);
  iVar8 = *(int *)(param_1 + 1);
  if (0 < iVar8) {
    __src = (void *)*param_1;
    __dest = pvVar4;
    do {
      memcpy(__dest,__src,0x24);
      *(undefined4 *)((long)__dest + 0x24) = *(undefined4 *)((long)__src + 0x24);
      puVar1 = (undefined1 *)((long)__src + 0x28);
      iVar8 = iVar8 + -1;
      __src = (void *)((long)__src + 0x30);
      *(undefined1 *)((long)__dest + 0x28) = *puVar1;
      __dest = (void *)((long)__dest + 0x30);
    } while (iVar8 != 0);
  }
  uVar2 = uVar5 * 0x30 + 0x30;
  uVar6 = uVar5;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x30;
    uVar6 = uVar5 + 1;
    if (uVar2 <= local_68) {
      uVar6 = uVar6 + (local_68 + uVar5 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar3 + 0x20))(puVar3,*param_1,uVar7 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = pvVar4;
  return;
}


