/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00505148; name: FUN_00505148
 */


void FUN_00505148(long *param_1,long *param_2)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  void *pvVar16;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  ulong *puVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  byte local_d0 [16];
  undefined8 local_c0;
  byte local_b8 [16];
  undefined8 local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *local_68;
  
  (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_2 + 0x98))(param_2);
  (**(code **)(*param_1 + 0x98))(param_1);
  if (extraout_x1 == 0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1);
    if (puVar6 == (undefined8 *)0x0) {
      local_a0 = 0x6e776f6e6b6e750e;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
    }
    else {
      puVar17 = (ulong *)*puVar6;
      if ((*puVar17 & 1) == 0) {
        uStack_98 = puVar17[1];
        local_a0 = *puVar17;
        local_90 = (void *)puVar17[2];
      }
      else {
        uVar20 = puVar17[1];
        pvVar1 = (void *)puVar17[2];
        if (uVar20 < 0x17) {
          pvVar16 = (void *)((ulong)&local_a0 | 1);
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar20 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar20) goto LAB_00505a64;
          uVar13 = uVar20 + 0x10 & 0xfffffffffffffff0;
          pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
          local_a0 = uVar13 | 1;
          uStack_98 = uVar20;
          local_90 = pvVar16;
        }
        memcpy(pvVar16,pvVar1,uVar20 + 1);
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
    }
  }
  (**(code **)(*param_2 + 0x98))(param_2);
  if (extraout_x1_00 == 0) {
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x98))(param_2);
    if (puVar6 == (undefined8 *)0x0) {
      local_a0 = 0x6e776f6e6b6e750e;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
    }
    else {
      puVar17 = (ulong *)*puVar6;
      if ((*puVar17 & 1) == 0) {
        uStack_98 = puVar17[1];
        local_a0 = *puVar17;
        local_90 = (void *)puVar17[2];
      }
      else {
        uVar20 = puVar17[1];
        pvVar1 = (void *)puVar17[2];
        if (uVar20 < 0x17) {
          pvVar16 = (void *)((ulong)&local_a0 | 1);
          local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar20 << 1));
        }
        else {
          if (0xffffffffffffffef < uVar20) {
LAB_00505a64:
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar13 = uVar20 + 0x10 & 0xfffffffffffffff0;
          pvVar16 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar13);
          local_a0 = uVar13 | 1;
          uStack_98 = uVar20;
          local_90 = pvVar16;
        }
        memcpy(pvVar16,pvVar1,uVar20 + 1);
      }
      if ((local_a0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
    }
  }
  lVar7 = FUN_004f9064(extraout_x1);
  lVar8 = thunk_FUN_005021d8();
  lVar9 = FUN_004f9064(extraout_x1_00);
  lVar10 = thunk_FUN_005021d8();
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
                    /* try { // try from 005052d8 to 0050531b has its CatchHandler @ 00505a8c */
  FUN_004f4acc(extraout_x1,param_1,&local_a0);
  puVar2 = PTR_DAT_047cd750;
  if (uStack_98 != local_a0) {
    uVar20 = 0;
    do {
      lVar18 = *(long *)(local_a0 + uVar20 * 8);
      if (*(int *)(lVar18 + 0x3c) == 3) {
        if ((lVar7 != lVar8) != (lVar9 == lVar10)) {
          puVar17 = *(ulong **)(lVar18 + 0x30);
          if ((puVar17 != (ulong *)0x0) &&
             (puStack_80 = PTR_LAB_047cd728, local_88 = lVar18, *puVar17 != 0xffffffffffffffff)) {
            local_70 = &puStack_80;
            local_68 = &local_88;
            local_78 = &local_70;
                    /* try { // try from 005053fc to 0050541f has its CatchHandler @ 00505ab4 */
            std::__call_once(puVar17,&local_78,(_func_void_void_ptr *)&LAB_00506f10);
          }
          if ((*(int *)(lVar18 + 0x38) == 0xb) && (uVar13 = FUN_004a64c0(lVar18), (uVar13 & 1) != 0)
             ) {
                    /* try { // try from 00505424 to 00505433 has its CatchHandler @ 00505a80 */
            uVar11 = FUN_004f92d8(extraout_x1,param_1,lVar18);
                    /* try { // try from 00505438 to 0050545b has its CatchHandler @ 00505a88 */
            plVar14 = (long *)FUN_004f9248(extraout_x1_00,param_2,lVar18);
            uVar13 = FUN_004fdddc();
            if (((uVar13 & 1) != 0) && (uVar13 = FUN_004fdddc(uVar11), (uVar13 & 1) != 0)) {
                    /* try { // try from 0050538c to 00505397 has its CatchHandler @ 00505a88 */
              (**(code **)(*plVar14 + 0x40))(plVar14,uVar11);
              goto switchD_00505794_default;
            }
          }
        }
                    /* try { // try from 00505460 to 0050546f has its CatchHandler @ 00505a90 */
        iVar3 = FUN_004f48a0(extraout_x1,param_1,lVar18);
        if (0 < iVar3) {
          iVar19 = 0;
          do {
            puVar17 = *(ulong **)(lVar18 + 0x30);
            if ((puVar17 != (ulong *)0x0) &&
               (puStack_80 = PTR_LAB_047cd728, local_88 = lVar18, *puVar17 != 0xffffffffffffffff)) {
              local_70 = &puStack_80;
              local_68 = &local_88;
              local_78 = &local_70;
                    /* try { // try from 005054c8 to 0050554b has its CatchHandler @ 00505abc */
              std::__call_once(puVar17,&local_78,(_func_void_void_ptr *)&LAB_00506f10);
            }
            switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar18 + 0x38) * 4)) {
            case 1:
              uVar4 = FUN_004f4f3c(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f4fec(extraout_x1_00,param_2,lVar18,uVar4);
              break;
            case 2:
              uVar11 = FUN_004f52b4(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f5364(extraout_x1_00,param_2,lVar18,uVar11);
              break;
            case 3:
                    /* try { // try from 00505598 to 005056b3 has its CatchHandler @ 00505abc */
              uVar4 = FUN_004f562c(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f56dc(extraout_x1_00,param_2,lVar18,uVar4);
              break;
            case 4:
              uVar11 = FUN_004f59a4(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f5a54(extraout_x1_00,param_2,lVar18,uVar11);
              break;
            case 5:
              FUN_004f609c(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f614c(extraout_x1_00,param_2,lVar18);
              break;
            case 6:
              FUN_004f5d1c(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f5dcc(extraout_x1_00,param_2,lVar18);
              break;
            case 7:
              uVar5 = FUN_004f6420(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f64dc(extraout_x1_00,param_2,lVar18,uVar5 & 1);
              break;
            case 8:
              uVar11 = FUN_004f6f24(extraout_x1,param_1,lVar18,iVar19);
              FUN_004f7098(extraout_x1_00,param_2,lVar18,uVar11);
              break;
            case 9:
              FUN_004f66e0(local_b8,extraout_x1,param_1,lVar18,iVar19);
                    /* try { // try from 005056b4 to 005056c7 has its CatchHandler @ 00505a94 */
              FUN_004f68e4(extraout_x1_00,param_2,lVar18,local_b8);
              if ((local_b8[0] & 1) != 0) {
                FUN_0049e790(PTR_LAB_047cba48,local_a8);
              }
              break;
            case 10:
                    /* try { // try from 00505550 to 00505593 has its CatchHandler @ 00505ab8 */
              plVar14 = (long *)FUN_004f7c80(extraout_x1,param_1,lVar18,iVar19);
              if (extraout_x1 == extraout_x1_00) {
                    /* try { // try from 005056ec to 0050571f has its CatchHandler @ 00505ab8 */
                (**(code **)(*plVar14 + 0x98))(plVar14);
                uVar11 = FUN_004f9064(extraout_x1_01);
                plVar15 = (long *)FUN_004f7ed4(extraout_x1,param_2,lVar18,uVar11);
                (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
              }
              else {
                plVar15 = (long *)FUN_004f7ed4(extraout_x1_00,param_2,lVar18,0);
                (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
              }
            }
            iVar19 = iVar19 + 1;
          } while (iVar3 != iVar19);
        }
      }
      else {
        puVar17 = *(ulong **)(lVar18 + 0x30);
        if ((puVar17 != (ulong *)0x0) &&
           (puStack_80 = PTR_LAB_047cd728, local_88 = lVar18, *puVar17 != 0xffffffffffffffff)) {
          local_70 = &puStack_80;
          local_68 = &local_88;
          local_78 = &local_70;
                    /* try { // try from 0050575c to 005057df has its CatchHandler @ 00505ab4 */
          std::__call_once(puVar17,&local_78,(_func_void_void_ptr *)&LAB_00506f10);
        }
        switch(*(undefined4 *)(puVar2 + (ulong)*(uint *)(lVar18 + 0x38) * 4)) {
        case 1:
          uVar4 = FUN_004f4d98(extraout_x1,param_1,lVar18);
          FUN_004f4e44(extraout_x1_00,param_2,lVar18,uVar4);
          break;
        case 2:
          uVar11 = FUN_004f5110(extraout_x1,param_1,lVar18);
          FUN_004f51bc(extraout_x1_00,param_2,lVar18,uVar11);
          break;
        case 3:
                    /* try { // try from 0050582c to 0050592b has its CatchHandler @ 00505ab4 */
          uVar4 = FUN_004f5488(extraout_x1,param_1,lVar18);
          FUN_004f5534(extraout_x1_00,param_2,lVar18,uVar4);
          break;
        case 4:
          uVar11 = FUN_004f5800(extraout_x1,param_1,lVar18);
          FUN_004f58ac(extraout_x1_00,param_2,lVar18,uVar11);
          break;
        case 5:
          FUN_004f5ef8(extraout_x1,param_1,lVar18);
          FUN_004f5fa4(extraout_x1_00,param_2,lVar18);
          break;
        case 6:
          FUN_004f5b78(extraout_x1,param_1,lVar18);
          FUN_004f5c24(extraout_x1_00,param_2,lVar18);
          break;
        case 7:
          uVar5 = FUN_004f6278(extraout_x1,param_1,lVar18);
          FUN_004f6324(extraout_x1_00,param_2,lVar18,uVar5 & 1);
          break;
        case 8:
          uVar11 = FUN_004f6b7c(extraout_x1,param_1,lVar18);
          FUN_004f6cfc(extraout_x1_00,param_2,lVar18,uVar11);
          break;
        case 9:
          FUN_004f2fb0(local_d0,extraout_x1,param_1,lVar18);
                    /* try { // try from 0050592c to 0050593f has its CatchHandler @ 00505a6c */
          FUN_004f3c00(extraout_x1_00,param_2,lVar18,local_d0);
          if ((local_d0[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_c0);
          }
          break;
        case 10:
                    /* try { // try from 005057e4 to 00505827 has its CatchHandler @ 00505a84 */
          plVar14 = (long *)FUN_004f72a0(extraout_x1,param_1,lVar18,0);
          if (extraout_x1 == extraout_x1_00) {
                    /* try { // try from 00505964 to 00505997 has its CatchHandler @ 00505a84 */
            (**(code **)(*plVar14 + 0x98))(plVar14);
            uVar11 = FUN_004f9064(extraout_x1_02);
            plVar15 = (long *)FUN_004f7424(extraout_x1,param_2,lVar18,uVar11);
            (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
          }
          else {
            plVar15 = (long *)FUN_004f7424(extraout_x1_00,param_2,lVar18,0);
            (**(code **)(*plVar15 + 0x78))(plVar15,plVar14);
          }
        }
      }
switchD_00505794_default:
      uVar20 = uVar20 + 1;
    } while (uVar20 < (ulong)((long)(uStack_98 - local_a0) >> 3));
  }
  uVar11 = FUN_004efc34(extraout_x1_00,param_2);
  uVar12 = FUN_004efc18(extraout_x1,param_1);
  FUN_0051496c(uVar11,uVar12);
  if (local_a0 != 0) {
    uStack_98 = local_a0;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


