/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005060a8; name: FUN_005060a8
 */


void FUN_005060a8(long *param_1)

{
  void *__src;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  void *__dest;
  long extraout_x1;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined ***local_110;
  long *local_108;
  byte local_100;
  undefined8 local_f0;
  int local_e8;
  undefined **local_d0;
  long *plStack_c8;
  void *local_c0;
  undefined8 local_b0;
  int local_a8;
  long *local_a0;
  long local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined *puStack_68;
  
  (**(code **)(*param_1 + 0x98))();
  if (extraout_x1 == 0) {
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1);
    if (puVar4 == (undefined8 *)0x0) {
      local_d0 = (undefined **)0x6e776f6e6b6e750e;
      plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffffffffff00);
    }
    else {
      puVar9 = (ulong *)*puVar4;
      if ((*puVar9 & 1) == 0) {
        plStack_c8 = (long *)puVar9[1];
        local_d0 = (undefined **)*puVar9;
        local_c0 = (void *)puVar9[2];
      }
      else {
        plVar5 = (long *)puVar9[1];
        __src = (void *)puVar9[2];
        if (plVar5 < (long *)0x17) {
          __dest = (void *)((ulong)&local_d0 | 1);
          local_d0 = (undefined **)CONCAT71(local_d0._1_7_,(char)((int)plVar5 << 1));
        }
        else {
          if ((long *)0xffffffffffffffef < plVar5) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar5 + 2) & 0xfffffffffffffff0);
          local_d0 = (undefined **)((ulong)(plVar5 + 2) & 0xfffffffffffffff0 | 1);
          plStack_c8 = plVar5;
          local_c0 = __dest;
        }
        memcpy(__dest,__src,(long)plVar5 + 1);
      }
      if (((ulong)local_d0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
    }
  }
  plVar5 = (long *)FUN_004efc34(extraout_x1,param_1);
  if (*plVar5 != plVar5[1]) {
    FUN_00514600();
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
                    /* try { // try from 00506178 to 00506187 has its CatchHandler @ 00506538 */
  FUN_004f4acc(extraout_x1,param_1,&local_88);
  puVar2 = PTR_DAT_047cd750;
  puVar1 = PTR_LAB_047cd728;
  lVar10 = local_80;
  if (local_80 != local_88) {
    uVar12 = 0;
    do {
      lVar10 = *(long *)(local_88 + uVar12 * 8);
      puVar9 = *(ulong **)(lVar10 + 0x30);
      if ((puVar9 != (ulong *)0x0) &&
         (puStack_68 = puVar1, local_70 = lVar10, *puVar9 != 0xffffffffffffffff)) {
        local_d0 = &puStack_68;
                    /* try { // try from 00506244 to 005062e7 has its CatchHandler @ 00506544 */
        local_110 = &local_d0;
        plStack_c8 = &local_70;
        std::__call_once(puVar9,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
      }
      uVar8 = *(uint *)(lVar10 + 0x38);
      if (*(int *)(puVar2 + (ulong)uVar8 * 4) == 10) {
        puVar9 = *(ulong **)(lVar10 + 0x30);
        if (puVar9 != (ulong *)0x0) {
          puStack_68 = puVar1;
          local_70 = lVar10;
          if (*puVar9 != 0xffffffffffffffff) {
            local_d0 = &puStack_68;
            local_110 = &local_d0;
            plStack_c8 = &local_70;
            std::__call_once(puVar9,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
          }
          uVar8 = *(uint *)(lVar10 + 0x38);
        }
        if ((uVar8 == 0xb) && (uVar6 = FUN_004a64c0(lVar10), (uVar6 & 1) != 0)) {
          lVar7 = FUN_004a5124(lVar10);
          lVar7 = *(long *)(lVar7 + 0x28);
          puVar9 = *(ulong **)(lVar7 + 200);
          if (puVar9 != (ulong *)0x0) {
            local_70 = lVar7 + 0x98;
            puStack_68 = puVar1;
            if (*puVar9 != 0xffffffffffffffff) {
              local_d0 = &puStack_68;
              local_110 = &local_d0;
              plStack_c8 = &local_70;
              std::__call_once(puVar9,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
            }
          }
          if (*(int *)(puVar2 + (ulong)*(uint *)(lVar7 + 0xd0) * 4) == 10) {
                    /* try { // try from 005062f8 to 0050630f has its CatchHandler @ 0050653c */
            plVar5 = (long *)FUN_004f9248(extraout_x1,param_1,lVar10);
            uVar6 = FUN_004fdddc();
            if ((uVar6 & 1) != 0) {
                    /* try { // try from 00506314 to 00506323 has its CatchHandler @ 00506530 */
              FUN_004f8ac0(&local_d0,param_1,lVar10);
                    /* try { // try from 00506324 to 00506333 has its CatchHandler @ 00506528 */
              FUN_004f8ac0(&local_110,param_1,lVar10);
                    /* try { // try from 0050633c to 0050635b has its CatchHandler @ 00506534 */
              (**(code **)(*plVar5 + 0x30))(plVar5,&local_d0);
              (**(code **)(*plVar5 + 0x38))(plVar5,&local_110);
                    /* try { // try from 00506368 to 005063a3 has its CatchHandler @ 00506548 */
              while (uVar6 = (**(code **)(*plStack_c8 + 0x28))(plStack_c8,&local_d0,&local_110),
                    (uVar6 & 1) == 0) {
                FUN_004fde04(plStack_c8);
                (**(code **)(*local_a0 + 0x80))();
                (**(code **)(*plStack_c8 + 0x90))(plStack_c8,&local_d0);
              }
                    /* try { // try from 00506434 to 0050643b has its CatchHandler @ 00506514 */
              (**(code **)(*local_108 + 0x80))(local_108,&local_110);
              if ((local_e8 == 9) && ((local_100 & 1) != 0)) {
                FUN_0049e790(PTR_LAB_047cba48,local_f0);
              }
                    /* try { // try from 0050646c to 00506473 has its CatchHandler @ 00506508 */
              (**(code **)(*plStack_c8 + 0x80))(plStack_c8,&local_d0);
              if ((local_a8 == 9) && (((ulong)local_c0 & 1) != 0)) {
                FUN_0049e790(PTR_LAB_047cba48,local_b0);
              }
            }
            goto LAB_00506208;
          }
        }
        if (*(int *)(lVar10 + 0x3c) == 3) {
                    /* try { // try from 005063b4 to 005063c3 has its CatchHandler @ 00506540 */
          iVar3 = FUN_004f48a0(extraout_x1,param_1,lVar10);
          if (0 < iVar3) {
            iVar11 = 0;
            do {
                    /* try { // try from 005063d4 to 005063f3 has its CatchHandler @ 005065c8 */
              plVar5 = (long *)FUN_004f7da8(extraout_x1,param_1,lVar10,iVar11);
              (**(code **)(*plVar5 + 0x80))();
              iVar11 = iVar11 + 1;
            } while (iVar3 != iVar11);
          }
        }
        else {
                    /* try { // try from 00506404 to 00506423 has its CatchHandler @ 00506544 */
          plVar5 = (long *)FUN_004f7424(extraout_x1,param_1,lVar10,0);
          (**(code **)(*plVar5 + 0x80))();
        }
      }
LAB_00506208:
      uVar12 = uVar12 + 1;
      lVar10 = local_88;
    } while (uVar12 < (ulong)(local_80 - local_88 >> 3));
  }
  if (lVar10 != 0) {
    local_80 = lVar10;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return;
}


