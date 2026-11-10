/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004a64d0; name: FUN_004a64d0
 */


void FUN_004a64d0(ulong *param_1,undefined *param_2,ulong param_3)

{
  size_t __n;
  char *__src;
  undefined **__src_00;
  ulong *puVar1;
  long lVar2;
  void *__dest;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined **__n_00;
  ulong uVar6;
  ulong uVar7;
  undefined ***local_88 [2];
  undefined8 local_78;
  undefined **local_70;
  undefined **ppuStack_68;
  undefined *local_60 [5];
  undefined *local_38;
  undefined *local_28;
  
  puVar1 = *(ulong **)(param_2 + 0x30);
  if ((puVar1 != (ulong *)0x0) &&
     (local_28 = PTR_LAB_047cd728, local_38 = param_2, *puVar1 != 0xffffffffffffffff)) {
    local_70 = &local_28;
    ppuStack_68 = &local_38;
    local_88[0] = &local_70;
    std::__call_once(puVar1,local_88,(_func_void_void_ptr *)&LAB_004c0750);
  }
  uVar3 = *(uint *)(param_2 + 0x38);
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)uVar3 * 4)) {
  case 1:
    local_70 = local_60;
    lVar2 = FUN_00533400(*(undefined4 *)(param_2 + 0x90),local_60);
    __n_00 = (undefined **)(lVar2 - (long)local_60);
    __src_00 = local_70;
    goto joined_r0x004a65f4;
  case 2:
    local_70 = local_60;
    lVar2 = FUN_00533530(*(undefined8 *)(param_2 + 0x90),local_60);
    __n_00 = (undefined **)(lVar2 - (long)local_60);
    __src_00 = local_70;
    goto joined_r0x004a65f4;
  case 3:
    local_70 = local_60;
    lVar2 = FUN_00533270(*(undefined4 *)(param_2 + 0x90),local_60);
    __n_00 = (undefined **)(lVar2 - (long)local_60);
    __src_00 = local_70;
    goto joined_r0x004a65f4;
  case 4:
    local_70 = local_60;
    lVar2 = FUN_00533420(*(undefined8 *)(param_2 + 0x90),local_60);
    __n_00 = (undefined **)(lVar2 - (long)local_60);
    __src_00 = local_70;
joined_r0x004a65f4:
    local_70 = __src_00;
    ppuStack_68 = __n_00;
    if ((undefined **)0xffffffffffffffef < __n_00) {
LAB_004a68cc:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n_00 < (undefined **)0x17) {
      pvVar5 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)__n_00 << 1);
      if (__n_00 != (undefined **)0x0) goto LAB_004a66cc;
    }
    else {
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(__n_00 + 2) & 0xfffffffffffffff0);
      param_1[1] = (ulong)__n_00;
      param_1[2] = (ulong)pvVar5;
      *param_1 = (ulong)(__n_00 + 2) & 0xfffffffffffffff0 | 1;
LAB_004a66cc:
      memcpy(pvVar5,__src_00,(size_t)__n_00);
    }
    *(undefined1 *)((long)pvVar5 + (long)__n_00) = 0;
    break;
  case 5:
    FUN_00533550(param_1,*(undefined8 *)(param_2 + 0x90));
    break;
  case 6:
    FUN_005336b0(param_1,*(undefined4 *)(param_2 + 0x90));
    break;
  case 7:
    __src = "false";
    if (param_2[0x90] != '\0') {
      __src = "true";
    }
    __n = 4;
    if (param_2[0x90] == '\0') {
      __n = 5;
    }
    *(char *)param_1 = (char)((int)__n << 1);
    memcpy((void *)((long)param_1 + 1),__src,__n);
    *(undefined1 *)((long)param_1 + 1 + __n) = 0;
    break;
  case 8:
    puVar1 = *(ulong **)(param_2 + 0x30);
    if ((puVar1 != (ulong *)0x0) && (local_28 = param_2, *puVar1 != 0xffffffffffffffff)) {
      ppuStack_68 = &local_28;
      local_70 = (undefined **)PTR_LAB_047cd728;
      local_88[0] = &local_70;
      std::__call_once(puVar1,local_88,(_func_void_void_ptr *)&LAB_004c9500);
    }
    puVar1 = (ulong *)**(undefined8 **)(param_2 + 0x90);
    if ((*puVar1 & 1) != 0) {
      uVar4 = puVar1[1];
      pvVar5 = (void *)puVar1[2];
joined_r0x004a6884:
      if (uVar4 < 0x17) {
        __dest = (void *)((long)param_1 + 1);
        *(char *)param_1 = (char)((int)uVar4 << 1);
LAB_004a68b8:
        memcpy(__dest,pvVar5,uVar4 + 1);
        return;
      }
      if (uVar4 < 0xfffffffffffffff0) {
        uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
        param_1[1] = uVar4;
        param_1[2] = (ulong)__dest;
        *param_1 = uVar6 | 1;
        goto LAB_004a68b8;
      }
      goto LAB_004a68cc;
    }
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    uVar4 = puVar1[2];
    goto LAB_004a6654;
  case 9:
    if ((param_3 & 1) != 0) {
      FUN_00533030(local_88,*(undefined8 *)(param_2 + 0x90));
                    /* try { // try from 004a6754 to 004a676b has its CatchHandler @ 004a690c */
      puVar1 = (ulong *)FUN_00273ff4(local_88,0,&DAT_03c246d6,1);
      ppuStack_68 = (undefined **)puVar1[1];
      local_70 = (undefined **)*puVar1;
      local_60[0] = (undefined *)puVar1[2];
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
                    /* try { // try from 004a6784 to 004a6797 has its CatchHandler @ 004a68d4 */
      puVar1 = (ulong *)FUN_0021d540(&local_70,&DAT_03c246d6,1);
      uVar6 = puVar1[1];
      uVar4 = *puVar1;
      param_1[2] = puVar1[2];
      param_1[1] = uVar6;
      *param_1 = uVar4;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      if (((ulong)local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60[0]);
      }
      if (((ulong)local_88[0] & 1) == 0) {
        return;
      }
      FUN_0049e790(PTR_LAB_047cba48,local_78);
      return;
    }
    puVar1 = *(ulong **)(param_2 + 0x30);
    if (puVar1 != (ulong *)0x0) {
      local_28 = PTR_LAB_047cd728;
      local_38 = param_2;
      if (*puVar1 != 0xffffffffffffffff) {
        local_70 = &local_28;
        ppuStack_68 = &local_38;
        local_88[0] = &local_70;
        std::__call_once(puVar1,local_88,(_func_void_void_ptr *)&LAB_004c0750);
      }
      uVar3 = *(uint *)(param_2 + 0x38);
    }
    puVar1 = *(ulong **)(param_2 + 0x90);
    if (uVar3 == 0xc) {
      FUN_00533030(param_1);
      return;
    }
    if ((*puVar1 & 1) != 0) {
      uVar4 = puVar1[1];
      pvVar5 = (void *)puVar1[2];
      goto joined_r0x004a6884;
    }
    uVar7 = puVar1[1];
    uVar6 = *puVar1;
    uVar4 = puVar1[2];
LAB_004a6654:
    param_1[2] = uVar4;
    param_1[1] = uVar7;
    *param_1 = uVar6;
    break;
  default:
    *(undefined2 *)param_1 = 0;
  }
  return;
}


