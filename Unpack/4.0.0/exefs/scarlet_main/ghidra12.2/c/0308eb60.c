/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0308eb60; name: FUN_0308eb60
 */


void FUN_0308eb60(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  void *__src;
  void *__dest;
  ulong uVar6;
  int iVar7;
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
  local_68 = uVar5 * 0x30;
  pvVar4 = (void *)(**(code **)PTR_DAT_047d1a08)
                             (*(undefined1 *)(param_2 + 8),&local_68,*(undefined4 *)(param_2 + 0xc))
  ;
  iVar7 = *(int *)(param_1 + 1);
  if (0 < iVar7) {
    __src = (void *)*param_1;
    __dest = pvVar4;
    do {
      memcpy(__dest,__src,0x24);
      *(undefined4 *)((long)__dest + 0x24) = *(undefined4 *)((long)__src + 0x24);
      puVar1 = (undefined1 *)((long)__src + 0x28);
      iVar7 = iVar7 + -1;
      __src = (void *)((long)__src + 0x30);
      *(undefined1 *)((long)__dest + 0x28) = *puVar1;
      __dest = (void *)((long)__dest + 0x30);
    } while (iVar7 != 0);
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
    (**(code **)(puVar3 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar6;
  *param_1 = pvVar4;
  return;
}


