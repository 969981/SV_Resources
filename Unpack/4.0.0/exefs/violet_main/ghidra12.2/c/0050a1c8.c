/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050a1c8; name: FUN_0050a1c8
 */


void FUN_0050a1c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined4 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  undefined ***__src;
  undefined4 uVar3;
  uint uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long *plVar12;
  ulong *__n;
  long *plVar13;
  ulong __n_00;
  undefined **ppuVar14;
  void *__dest;
  ulong uVar15;
  undefined ***local_c8;
  undefined6 *local_c0;
  undefined **local_b8 [4];
  undefined **local_98;
  ulong *local_90;
  void *local_88;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  byte local_70;
  byte bStack_6f;
  undefined6 uStack_6e;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined **local_60;
  ulong local_58;
  undefined *local_48;
  
  plVar12 = (long *)(param_1 + 0x28);
  plVar13 = (long *)*plVar12;
  if (plVar13 == (long *)0x0) {
LAB_0050a234:
    plVar12 = *(long **)(param_1 + 0x18);
    puVar5 = *(ulong **)(param_4 + 0x30);
  }
  else {
    plVar10 = plVar12;
    do {
      if ((ulong)plVar13[4] >= param_4) {
        plVar10 = plVar13;
      }
      plVar13 = (long *)plVar13[(ulong)plVar13[4] < param_4];
    } while (plVar13 != (long *)0x0);
    if ((plVar10 == plVar12) || (param_4 < (ulong)plVar10[4])) goto LAB_0050a234;
    plVar12 = (long *)plVar10[5];
    puVar5 = *(ulong **)(param_4 + 0x30);
  }
  if (puVar5 != (ulong *)0x0) {
    local_98 = (undefined **)PTR_LAB_047cd728;
    local_80 = (undefined6)param_4;
    uStack_7a = (undefined2)(param_4 >> 0x30);
    if (*puVar5 != 0xffffffffffffffff) {
      local_c8 = &local_98;
      local_c0 = &local_80;
      local_70 = (byte)&local_c8;
      bStack_6f = (byte)((ulong)&local_c8 >> 8);
      uStack_6e = (undefined6)((ulong)&local_c8 >> 0x10);
      std::__call_once(puVar5,&local_70,(_func_void_void_ptr *)&LAB_005114c0);
    }
  }
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(param_4 + 0x38) * 4)) {
  case 1:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar4 = FUN_004f4f3c();
    }
    else {
      uVar4 = FUN_004f4d98(param_3,param_2,param_4);
    }
    pcVar11 = *(code **)(*plVar12 + 0x18);
    goto LAB_0050a538;
  case 2:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_004f52b4();
    }
    else {
      uVar6 = FUN_004f5110(param_3,param_2,param_4);
    }
    pcVar11 = *(code **)(*plVar12 + 0x28);
    goto LAB_0050a4fc;
  case 3:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar4 = FUN_004f562c();
    }
    else {
      uVar4 = FUN_004f5488(param_3,param_2,param_4);
    }
    pcVar11 = *(code **)(*plVar12 + 0x20);
    goto LAB_0050a538;
  case 4:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_004f59a4();
    }
    else {
      uVar6 = FUN_004f5800(param_3,param_2,param_4);
    }
    pcVar11 = *(code **)(*plVar12 + 0x30);
LAB_0050a4fc:
    (*pcVar11)(plVar12,uVar6,param_6);
    break;
  case 5:
    if (*(int *)(param_4 + 0x3c) == 3) {
      FUN_004f609c();
    }
    else {
      FUN_004f5ef8(param_3,param_2,param_4);
    }
    (**(code **)(*plVar12 + 0x40))(plVar12,param_6);
    break;
  case 6:
    if (*(int *)(param_4 + 0x3c) == 3) {
      FUN_004f5d1c();
    }
    else {
      FUN_004f5b78(param_3,param_2,param_4);
    }
    (**(code **)(*plVar12 + 0x38))(plVar12,param_6);
    break;
  case 7:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar4 = FUN_004f6420();
    }
    else {
      uVar4 = FUN_004f6278(param_3,param_2,param_4);
    }
    uVar4 = uVar4 & 1;
    pcVar11 = *(code **)(*plVar12 + 0x10);
LAB_0050a538:
    (*pcVar11)(plVar12,uVar4,param_6);
    break;
  case 8:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar3 = FUN_004f6fe8();
    }
    else {
      uVar3 = FUN_004f6c40(param_3,param_2,param_4);
    }
    uVar6 = FUN_004a86e0(param_4);
    puVar8 = (undefined8 *)FUN_004a5400(uVar6,uVar3);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)(*plVar12 + 0x58))(plVar12,uVar3,*puVar8,param_6);
      return;
    }
    local_c8 = local_b8;
    lVar9 = FUN_00533400(uVar3,local_b8);
    __src = local_c8;
    __n_00 = lVar9 - (long)local_b8;
    local_c0 = (undefined6 *)__n_00;
    if (0xffffffffffffffef < __n_00) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n_00 < 0x17) {
      local_70 = (byte)((int)__n_00 << 1);
      ppuVar14 = (undefined **)((ulong)&local_70 | 1);
      if (__n_00 != 0) goto LAB_0050a664;
    }
    else {
      uVar15 = __n_00 + 0x10 & 0xfffffffffffffff0;
      ppuVar14 = (undefined **)FUN_0049e770(PTR_FUN_047cba38,uVar15);
      local_70 = (byte)uVar15 | 1;
      bStack_6f = (byte)(uVar15 >> 8);
      uStack_6e = (undefined6)(uVar15 >> 0x10);
      local_68 = (undefined2)__n_00;
      uStack_66 = (undefined6)(__n_00 >> 0x10);
      local_60 = ppuVar14;
LAB_0050a664:
      memcpy(ppuVar14,__src,__n_00);
    }
    *(undefined1 *)((long)ppuVar14 + __n_00) = 0;
                    /* try { // try from 0050a680 to 0050a693 has its CatchHandler @ 0050a868 */
    (**(code **)(*plVar12 + 0x58))(plVar12,uVar3,&local_70,param_6);
    if ((local_70 & 1) == 0) {
      return;
    }
    ppuVar14 = local_60;
    goto LAB_0050a808;
  case 9:
    local_c8 = (undefined ***)0x0;
    local_c0 = (undefined6 *)0x0;
    local_b8[0] = (undefined **)0x0;
    if (*(int *)(param_4 + 0x3c) == 3) {
                    /* try { // try from 0050a420 to 0050a437 has its CatchHandler @ 0050a87c */
      pbVar7 = (byte *)FUN_004f6830(param_3,param_2,param_4,param_5,&local_c8);
    }
    else {
                    /* try { // try from 0050a560 to 0050a573 has its CatchHandler @ 0050a87c */
      pbVar7 = (byte *)FUN_004f6604(param_3,param_2,param_4,&local_c8);
    }
    local_70 = 0;
    bStack_6f = 0;
    uStack_6e = 0;
    local_68 = 0;
    uStack_66 = 0;
    local_60 = (undefined **)0x0;
    puVar5 = *(ulong **)(param_1 + 0x10);
    if (0 < (long)puVar5) {
      bVar1 = *pbVar7;
      if ((bVar1 & 1) == 0) {
        if (puVar5 < (ulong *)(ulong)(bVar1 >> 1)) {
          __n = (ulong *)(ulong)(bVar1 >> 1);
          pbVar7 = pbVar7 + 1;
LAB_0050a60c:
          if (puVar5 <= __n) {
            __n = puVar5;
          }
          if ((ulong *)0xffffffffffffffef < __n) {
                    /* try { // try from 0050a820 to 0050a827 has its CatchHandler @ 0050a828 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < (ulong *)0x17) {
            local_98 = (undefined **)CONCAT71(local_98._1_7_,(char)((int)__n << 1));
            __dest = (void *)((ulong)&local_98 | 1);
            if (__n != (ulong *)0x0) goto LAB_0050a6cc;
          }
          else {
            __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(__n + 2) & 0xfffffffffffffff0);
            local_98 = (undefined **)((ulong)(__n + 2) & 0xfffffffffffffff0 | 1);
            local_90 = __n;
            local_88 = __dest;
LAB_0050a6cc:
            memcpy(__dest,pbVar7,(size_t)__n);
          }
          *(undefined1 *)((long)__dest + (long)__n) = 0;
                    /* try { // try from 0050a6e0 to 0050a6f3 has its CatchHandler @ 0050a82c */
          pbVar7 = (byte *)FUN_0021d540(&local_98,"...<truncated>...",0x11);
          ppuVar14 = *(undefined ***)(pbVar7 + 0x10);
          bVar1 = *pbVar7;
          bVar2 = pbVar7[1];
          uStack_78 = (undefined6)((ulong)*(undefined8 *)(pbVar7 + 8) >> 0x10);
          local_80 = (undefined6)*(undefined8 *)(pbVar7 + 2);
          uStack_7a = (undefined2)((ulong)*(undefined8 *)(pbVar7 + 2) >> 0x30);
          pbVar7[0] = 0;
          pbVar7[1] = 0;
          pbVar7[2] = 0;
          pbVar7[3] = 0;
          pbVar7[4] = 0;
          pbVar7[5] = 0;
          pbVar7[6] = 0;
          pbVar7[7] = 0;
          pbVar7[8] = 0;
          pbVar7[9] = 0;
          pbVar7[10] = 0;
          pbVar7[0xb] = 0;
          pbVar7[0xc] = 0;
          pbVar7[0xd] = 0;
          pbVar7[0xe] = 0;
          pbVar7[0xf] = 0;
          pbVar7[0x10] = 0;
          pbVar7[0x11] = 0;
          pbVar7[0x12] = 0;
          pbVar7[0x13] = 0;
          pbVar7[0x14] = 0;
          pbVar7[0x15] = 0;
          pbVar7[0x16] = 0;
          pbVar7[0x17] = 0;
          if ((local_70 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_60);
          }
          uStack_66 = uStack_78;
          uStack_6e = local_80;
          local_68 = uStack_7a;
          local_70 = bVar1;
          bStack_6f = bVar2;
          local_60 = ppuVar14;
          if (((ulong)local_98 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_88);
          }
          pbVar7 = &local_70;
        }
      }
      else if (puVar5 < *(ulong **)(pbVar7 + 8)) {
        __n = *(ulong **)(pbVar7 + 8);
        pbVar7 = *(byte **)(pbVar7 + 0x10);
        goto LAB_0050a60c;
      }
    }
    puVar5 = *(ulong **)(param_4 + 0x30);
    if ((puVar5 != (ulong *)0x0) &&
       (local_48 = PTR_LAB_047cd728, local_58 = param_4, *puVar5 != 0xffffffffffffffff)) {
      local_98 = &local_48;
      local_90 = &local_58;
      local_80 = SUB86(&local_98,0);
      uStack_7a = (undefined2)((ulong)&local_98 >> 0x30);
                    /* try { // try from 0050a798 to 0050a7e3 has its CatchHandler @ 0050a88c */
      std::__call_once(puVar5,&local_80,(_func_void_void_ptr *)&LAB_005114c0);
    }
    if (*(int *)(param_4 + 0x38) == 9) {
      (**(code **)(*plVar12 + 0x48))(plVar12,pbVar7,param_6);
    }
    else {
      (**(code **)(*plVar12 + 0x50))(plVar12,pbVar7,param_6);
    }
    if ((local_70 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
    }
    if (((ulong)local_c8 & 1) == 0) {
      return;
    }
    ppuVar14 = local_b8[0];
LAB_0050a808:
    FUN_0049e790(PTR_LAB_047cba48,ppuVar14);
    break;
  case 10:
    if (*(int *)(param_4 + 0x3c) == 3) {
      uVar6 = FUN_004f7c80();
    }
    else {
      uVar6 = FUN_004f72a0(param_3,param_2,param_4,0);
    }
    FUN_0050892c(param_1,uVar6,param_6);
  }
  return;
}


