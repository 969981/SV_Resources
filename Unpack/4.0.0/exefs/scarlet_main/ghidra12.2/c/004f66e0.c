/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f66e0; name: FUN_004f66e0
 */


void FUN_004f66e0(ulong *param_1,long param_2,long param_3,long param_4,int param_5)

{
  void *__src;
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *__dest;
  ulong uVar4;
  ulong uVar5;
  long local_58;
  undefined *puStack_50;
  undefined ***local_48;
  undefined **local_40;
  long *plStack_38;
  
  puVar1 = *(ulong **)(param_4 + 0x30);
  if ((puVar1 != (ulong *)0x0) &&
     (puStack_50 = PTR_LAB_047cd728, local_58 = param_4, *puVar1 != 0xffffffffffffffff)) {
    local_40 = &puStack_50;
    plStack_38 = &local_58;
    local_48 = &local_40;
    std::__call_once(puVar1,&local_48,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    lVar2 = FUN_004f0a68(param_2,param_3,param_4);
    puVar1 = *(ulong **)(*(long *)(lVar2 + 0x10) + (long)param_5 * 8 + 8);
    if ((*puVar1 & 1) == 0) {
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      uVar3 = puVar1[2];
      goto LAB_004f67a4;
    }
    uVar3 = puVar1[1];
    __src = (void *)puVar1[2];
  }
  else {
    puVar1 = (ulong *)FUN_00523104(param_3 + (ulong)*(uint *)(param_2 + 0x28),
                                   *(undefined4 *)(param_4 + 0x44),param_5);
    if ((*puVar1 & 1) == 0) {
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      uVar3 = puVar1[2];
LAB_004f67a4:
      param_1[2] = uVar3;
      param_1[1] = uVar5;
      *param_1 = uVar4;
      return;
    }
    uVar3 = puVar1[1];
    __src = (void *)puVar1[2];
  }
  if (uVar3 < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar3 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar4 = uVar3 + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    param_1[1] = uVar3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar4 | 1;
  }
  memcpy(__dest,__src,uVar3 + 1);
  return;
}


