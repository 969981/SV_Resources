/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f26f8; name: FUN_004f26f8
 */


void FUN_004f26f8(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  void *__dest;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  void *__src;
  long *local_110;
  long *local_108;
  undefined8 local_100;
  long *local_f8;
  void *local_f0;
  byte local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  long *local_c8;
  void *pvStack_c0;
  undefined4 uStack_b8;
  undefined3 uStack_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  long local_78;
  undefined *puStack_70;
  undefined8 *local_68;
  
  uVar11 = (ulong)(uint)(*(int *)((long)param_1 + 0x2c) +
                        (int)((ulong)(param_4 - *(long *)(*(long *)(param_4 + 0x10) + 0x30)) >> 4) *
                        -0x55555554);
  iVar1 = *(int *)(param_2 + uVar11);
  iVar2 = *(int *)(param_3 + uVar11);
  uStack_b4 = 0;
  uStack_b8 = 0;
  if (iVar1 == 0) {
    uVar11 = 0;
    local_110 = (long *)0x0;
    local_108 = (long *)0x0;
    lVar3 = 0;
    __src = (void *)0x0;
  }
  else {
                    /* try { // try from 004f275c to 004f2807 has its CatchHandler @ 004f2f90 */
    lVar3 = FUN_004a5180(*param_1,iVar1);
    puVar4 = *(ulong **)(lVar3 + 0x30);
    if ((puVar4 != (ulong *)0x0) &&
       (puStack_70 = PTR_LAB_047cd728, local_78 = lVar3, *puVar4 != 0xffffffffffffffff)) {
      local_d0 = &puStack_70;
      local_c8 = &local_78;
      local_68 = &local_d0;
      std::__call_once(puVar4,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar3 + 0x38) * 4)) {
    case 1:
      puVar8 = (undefined4 *)FUN_004f9d48(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_7c = *puVar8;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 2:
      puVar6 = (undefined8 *)FUN_004f9e84(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_88 = *puVar6;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 3:
      puVar8 = (undefined4 *)FUN_004f9fc0(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_8c = *puVar8;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 4:
      puVar6 = (undefined8 *)FUN_004fa0fc(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_98 = *puVar6;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 5:
      puVar6 = (undefined8 *)FUN_004fa374(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_a8 = *puVar6;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 6:
      puVar8 = (undefined4 *)FUN_004fa238(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_9c = *puVar8;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 7:
      puVar9 = (undefined1 *)FUN_004f9c0c(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_ac[0] = *puVar9;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 8:
      puVar8 = (undefined4 *)FUN_004f9d48(param_1,param_2,lVar3);
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      local_b0 = *puVar8;
      uVar11 = 0;
      __src = (void *)0x0;
      break;
    case 9:
                    /* try { // try from 004f2b7c to 004f2b8f has its CatchHandler @ 004f2f88 */
      FUN_004f2fb0(&local_d0,param_1,param_2,lVar3);
      uVar11 = (ulong)local_d0 & 0xff;
      uStack_b4 = (undefined3)((ulong)local_d0 >> 0x28);
      local_110 = local_c8;
      local_108 = (long *)0x0;
      __src = pvStack_c0;
      uStack_b8 = local_d0._1_4_;
      break;
    case 10:
      plVar7 = (long *)FUN_004f7ae0(param_1,param_2,lVar3,0);
      uVar11 = *(ulong *)(param_2 + (ulong)*(uint *)((long)param_1 + 0x24));
      plVar12 = (long *)(uVar11 & 0xfffffffffffffffe);
      if ((uVar11 & 1) == 0) {
        if (plVar7 != (long *)0x0 && plVar12 != (long *)0x0) {
LAB_004f2f00:
                    /* try { // try from 004f2f08 to 004f2f53 has its CatchHandler @ 004f2f90 */
          local_108 = (long *)(**(code **)(*plVar7 + 0x18))();
          uVar11 = 0;
          (**(code **)(*local_108 + 0x70))(local_108,plVar7);
          local_110 = (long *)0x0;
          __src = (void *)0x0;
          break;
        }
      }
      else if (plVar7 != (long *)0x0 && *plVar12 != 0) goto LAB_004f2f00;
      uVar11 = 0;
      local_110 = (long *)0x0;
      __src = (void *)0x0;
      local_108 = plVar7;
      break;
    default:
      uVar11 = 0;
      local_110 = (long *)0x0;
      local_108 = (long *)0x0;
      __src = (void *)0x0;
    }
  }
  if (iVar2 == 0) {
                    /* try { // try from 004f28e4 to 004f2b53 has its CatchHandler @ 004f2f90 */
    FUN_004f41b4(param_1,param_2,param_4);
    goto switchD_004f28b8_default;
  }
                    /* try { // try from 004f2838 to 004f28df has its CatchHandler @ 004f2f8c */
  lVar5 = FUN_004a5180(*param_1,iVar2);
  puVar4 = *(ulong **)(lVar5 + 0x30);
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_70 = PTR_LAB_047cd728, local_78 = lVar5, *puVar4 != 0xffffffffffffffff)) {
    local_d0 = &puStack_70;
    local_c8 = &local_78;
    local_68 = &local_d0;
    std::__call_once(puVar4,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar5 + 0x38) * 4)) {
  case 1:
    uVar10 = FUN_004f9d48(param_1,param_3,lVar5);
    FUN_004f311c(param_1,param_2,lVar5,uVar10);
    break;
  case 2:
    uVar10 = FUN_004f9e84(param_1,param_3,lVar5);
    FUN_004f3288(param_1,param_2,lVar5,uVar10);
    break;
  case 3:
    uVar10 = FUN_004f9fc0(param_1,param_3,lVar5);
    FUN_004f33f4(param_1,param_2,lVar5,uVar10);
    break;
  case 4:
    uVar10 = FUN_004fa0fc(param_1,param_3,lVar5);
    FUN_004f3560(param_1,param_2,lVar5,uVar10);
    break;
  case 5:
                    /* try { // try from 004f2bb0 to 004f2d4f has its CatchHandler @ 004f2f8c */
    uVar10 = FUN_004fa374(param_1,param_3,lVar5);
    FUN_004f3838(param_1,param_2,lVar5,uVar10);
    break;
  case 6:
    uVar10 = FUN_004fa238(param_1,param_3,lVar5);
    FUN_004f36cc(param_1,param_2,lVar5,uVar10);
    break;
  case 7:
    uVar10 = FUN_004f9c0c(param_1,param_3,lVar5);
    FUN_004f39a4(param_1,param_2,lVar5,uVar10);
    break;
  case 8:
    uVar10 = FUN_004f9d48(param_1,param_3,lVar5);
    FUN_004f311c(param_1,param_2,lVar5,uVar10);
    break;
  case 9:
    FUN_004f2fb0(local_e8,param_1,param_3,lVar5);
                    /* try { // try from 004f2d50 to 004f2d63 has its CatchHandler @ 004f2f68 */
    FUN_004f3c00(param_1,param_2,lVar5,local_e8);
    if ((local_e8[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_d8);
    }
    break;
  case 10:
    plVar7 = (long *)FUN_004f7ae0(param_1,param_3,lVar5,0);
    uVar13 = *(ulong *)(param_3 + (ulong)*(uint *)((long)param_1 + 0x24));
    plVar12 = (long *)(uVar13 & 0xfffffffffffffffe);
    if ((uVar13 & 1) == 0) {
      if (plVar7 != (long *)0x0 && plVar12 != (long *)0x0) {
LAB_004f2c0c:
        plVar12 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar12 + 0x70))(plVar12,plVar7);
        plVar7 = plVar12;
      }
    }
    else if (plVar7 != (long *)0x0 && *plVar12 != 0) goto LAB_004f2c0c;
    FUN_004f3b10(param_1,param_2,plVar7,lVar5);
  }
switchD_004f28b8_default:
  if (iVar1 == 0) {
    FUN_004f41b4(param_1,param_3,param_4);
  }
  else {
    puVar4 = *(ulong **)(lVar3 + 0x30);
    if ((puVar4 != (ulong *)0x0) &&
       (puStack_70 = PTR_LAB_047cd728, local_78 = lVar3, *puVar4 != 0xffffffffffffffff)) {
      local_d0 = &puStack_70;
      local_c8 = &local_78;
      local_68 = &local_d0;
      std::__call_once(puVar4,&local_68,(_func_void_void_ptr *)&LAB_004f9a40);
    }
    switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar3 + 0x38) * 4)) {
    case 1:
      FUN_004f311c(param_1,param_3,lVar3,&local_7c);
      break;
    case 2:
      FUN_004f3288(param_1,param_3,lVar3,&local_88);
      break;
    case 3:
      FUN_004f33f4(param_1,param_3,lVar3,&local_8c);
      break;
    case 4:
      FUN_004f3560(param_1,param_3,lVar3,&local_98);
      break;
    case 5:
                    /* try { // try from 004f2d80 to 004f2e3b has its CatchHandler @ 004f2f90 */
      FUN_004f3838(param_1,param_3,lVar3,&local_a8);
      break;
    case 6:
      FUN_004f36cc(param_1,param_3,lVar3,&local_9c);
      break;
    case 7:
      FUN_004f39a4(param_1,param_3,lVar3,local_ac);
      break;
    case 8:
      FUN_004f311c(param_1,param_3,lVar3,&local_b0);
      break;
    case 9:
      if ((uVar11 & 1) == 0) {
        local_100 = CONCAT44(CONCAT31(uStack_b4,uStack_b8._3_1_),uStack_b8 << 8);
        local_100 = CONCAT71(local_100._1_7_,(char)uVar11);
        local_f8 = local_110;
        local_f0 = __src;
      }
      else {
        if (local_110 < (long *)0x17) {
          __dest = (void *)((ulong)&local_100 | 1);
          local_100 = CONCAT71(local_100._1_7_,(char)((int)local_110 << 1));
        }
        else {
          if ((long *)0xffffffffffffffef < local_110) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(local_110 + 2) & 0xfffffffffffffff0
                                       );
          local_100 = (ulong)(local_110 + 2) & 0xfffffffffffffff0 | 1;
          local_f8 = local_110;
          local_f0 = __dest;
        }
        memcpy(__dest,__src,(long)local_110 + 1);
      }
                    /* try { // try from 004f2ebc to 004f2ecf has its CatchHandler @ 004f2f54 */
      FUN_004f3c00(param_1,param_3,lVar3,&local_100);
      if ((local_100 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_f0);
      }
      break;
    case 10:
      FUN_004f3b10(param_1,param_3,local_108,lVar3);
    }
  }
  if ((uVar11 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,__src);
  }
  return;
}


