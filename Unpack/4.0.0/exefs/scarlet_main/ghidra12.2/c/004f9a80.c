/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f9a80; name: FUN_004f9a80
 */


uint FUN_004f9a80(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  long *plVar5;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  undefined1 *puStack_28;
  undefined ***local_18;
  
  puStack_28 = (undefined1 *)&local_40;
  lVar4 = *(long *)(param_2 + 0x58);
  local_40 = param_2;
  if ((lVar4 == 0) ||
     ((*(int *)(lVar4 + 0x18) == 1 && (*(char *)(**(long **)(lVar4 + 0x20) + 0x41) != '\0')))) {
    if (*(char *)(param_2 + 0x43) == '\0') {
      plVar5 = (long *)(*(long *)(param_2 + 0x50) + 0x28);
    }
    else if (*(long *)(param_2 + 0x60) == 0) {
      plVar5 = (long *)(*(long *)(param_2 + 0x28) + 0x80);
    }
    else {
      plVar5 = (long *)(*(long *)(param_2 + 0x60) + 0x50);
    }
    uVar2 = (int)((ulong)(param_2 - *plVar5) >> 3) * 0x286bca1b;
    uVar2 = *(uint *)(*(long *)(param_1 + 8) +
                     (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2));
    puVar3 = *(ulong **)(param_2 + 0x30);
    if ((puVar3 != (ulong *)0x0) && (puStack_38 = PTR_LAB_047cd728, *puVar3 != 0xffffffffffffffff))
    {
      local_30 = &puStack_38;
      local_18 = &local_30;
      puStack_28 = (undefined1 *)&local_40;
      std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    iVar1 = *(int *)(param_2 + 0x38);
  }
  else {
    puVar3 = *(ulong **)(param_2 + 0x30);
    uVar2 = *(uint *)(*(long *)(param_1 + 8) +
                     (long)(*(int *)(*(long *)(param_2 + 0x50) + 0x68) +
                           (int)((ulong)(lVar4 - *(long *)(*(long *)(lVar4 + 0x10) + 0x30)) >> 4) *
                           -0x55555555) * 4);
    if ((puVar3 != (ulong *)0x0) && (puStack_38 = PTR_LAB_047cd728, *puVar3 != 0xffffffffffffffff))
    {
      local_30 = &puStack_38;
      local_18 = &local_30;
      std::__call_once(puVar3,&local_18,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    iVar1 = *(int *)(param_2 + 0x38);
  }
  if ((iVar1 == 0xc) || (iVar1 == 9)) {
    return uVar2 & 1;
  }
  return 0;
}


