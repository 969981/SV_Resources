/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017bd010; name: FUN_017bd010
 */


void FUN_017bd010(long *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  uint uVar7;
  uint uVar8;
  undefined2 auStack_131 [128];
  void *local_18;
  
  if ((param_2 != 0) && (uVar5 = *(ulong *)(param_2 + 0x40), uVar5 != 0)) {
    if (uVar5 == 1) {
      uVar6 = 0;
      uVar8 = 0xffffffff;
    }
    else {
      uVar6 = 0;
      uVar7 = 0xffffffff;
      do {
        pcVar1 = (char *)(*(long *)(param_2 + 0x38) + uVar6);
        uVar8 = (uint)uVar6;
        if (*pcVar1 != '_') {
          uVar8 = uVar7;
        }
        if (pcVar1[1] == '_') {
          uVar8 = (uint)uVar6 + 1;
        }
        uVar6 = uVar6 + 2;
        uVar7 = uVar8;
      } while ((uVar5 & 0xfffffffffffffffe) != uVar6);
    }
    uVar7 = uVar8;
    if (((uVar5 & 1) != 0) &&
       (uVar7 = (uint)uVar6, *(char *)(*(long *)(param_2 + 0x38) + uVar6) != '_')) {
      uVar7 = uVar8;
    }
    if (-1 < (int)uVar7) {
      __dest = (void *)((long)auStack_131 +
                       (0x101 - ((long)(int)(uVar7 + 4) + 0xfU & 0xfffffffffffffff0)));
      local_18 = __dest;
      memcpy(__dest,*(void **)(param_2 + 0x38),(ulong)uVar7);
      *(undefined1 *)((long)__dest + (ulong)uVar7) = 0x5f;
      *(undefined2 *)((long)__dest + (long)(int)uVar7 + 1) = 0x3030;
      *(undefined1 *)((long)__dest + (long)(int)uVar7 + 3) = 0;
      FUN_00cf9768(param_1,&local_18);
      return;
    }
  }
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar3 != 0))
  {
    local_18 = (void *)FUN_00d44228();
    puVar2 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_18);
    FUN_00100190(PTR_LAB_047d9240,puVar2,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar4 = *(long **)PTR_DAT_047d8c30;
  *param_1 = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  return;
}


