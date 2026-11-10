/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004f2fb0; name: FUN_004f2fb0
 */


void FUN_004f2fb0(ulong *param_1,long param_2,long param_3,long param_4)

{
  void *__src;
  byte bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *__dest;
  ulong uVar5;
  ulong uVar6;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar2 = *(ulong **)(param_4 + 0x30);
  if ((puVar2 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_4, *puVar2 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    local_28 = &local_40;
    puStack_38 = (undefined1 *)&local_50;
    std::__call_once(puVar2,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (*(char *)(param_4 + 0x43) == '\0') {
    uVar4 = FUN_004f9a80(param_2 + 8,param_4);
    if ((uVar4 & 1) == 0) {
      puVar3 = (undefined8 *)FUN_004f0f58(param_2,param_3,param_4);
      puVar2 = (ulong *)*puVar3;
      if ((*puVar2 & 1) != 0) {
        uVar4 = puVar2[1];
        __src = (void *)puVar2[2];
        goto joined_r0x004f30bc;
      }
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      uVar4 = puVar2[2];
      goto LAB_004f3040;
    }
    puVar2 = (ulong *)FUN_004f0e1c(param_2,param_3,param_4);
    bVar1 = (byte)*puVar2;
  }
  else {
    puVar2 = (ulong *)FUN_00522fa0(param_3 + (ulong)*(uint *)(param_2 + 0x28),
                                   *(undefined4 *)(param_4 + 0x44),*(undefined8 *)(param_4 + 0x90));
    bVar1 = (byte)*puVar2;
  }
  if ((bVar1 & 1) != 0) {
    uVar4 = puVar2[1];
    __src = (void *)puVar2[2];
joined_r0x004f30bc:
    if (uVar4 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      param_1[1] = uVar4;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar5 | 1;
    }
    memcpy(__dest,__src,uVar4 + 1);
    return;
  }
  uVar6 = puVar2[1];
  uVar5 = *puVar2;
  uVar4 = puVar2[2];
LAB_004f3040:
  param_1[2] = uVar4;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  return;
}


