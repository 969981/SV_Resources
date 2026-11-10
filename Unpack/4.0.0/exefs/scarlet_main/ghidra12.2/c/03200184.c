/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03200184; name: FUN_03200184
 */


void FUN_03200184(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  void *__dest;
  long *__src;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  puVar8 = PTR_DAT_047d1a08;
  uVar4 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_68 = uVar4 * 0x38;
  pvVar3 = (void *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_68,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar9 = *(int *)(param_1 + 1);
  if (0 < iVar9) {
    plVar5 = (long *)*param_1;
    puVar1 = PTR_DAT_047e5a20 + 0x10;
    __dest = pvVar3;
    __src = plVar5;
    iVar10 = iVar9;
    do {
      memcpy(__dest,__src,0x38);
      *(undefined1 *)(__src + 1) = 0;
      __dest = (void *)((long)__dest + 0x38);
      iVar10 = iVar10 + -1;
      *(undefined4 *)((long)__src + 10) = 0;
      __src[2] = 0;
      *__src = (long)puVar1;
      puVar6 = PTR_PTR_047d1a50;
      puVar8 = PTR_DAT_047d1a08;
      __src = __src + 7;
    } while (iVar10 != 0);
    do {
      (**(code **)(*plVar5 + 8))(plVar5);
      iVar9 = iVar9 + -1;
      plVar5 = plVar5 + 7;
    } while (iVar9 != 0);
  }
  uVar2 = uVar4 * 0x38 + 0x38;
  uVar7 = uVar4;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x38;
    uVar7 = uVar4 + 1;
    if (uVar2 <= local_68) {
      uVar7 = (local_68 + uVar4 * -0x38) / 0x38 + uVar7;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar7;
  *param_1 = pvVar3;
  return;
}


