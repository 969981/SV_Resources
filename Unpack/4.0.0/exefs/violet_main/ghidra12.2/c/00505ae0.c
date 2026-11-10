/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00505ae0; name: FUN_00505ae0
 */


bool FUN_00505ae0(long *param_1)

{
  void *__src;
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  void *__dest;
  long extraout_x1;
  uint uVar10;
  ulong *puVar11;
  long lVar12;
  int iVar13;
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
  
  lVar5 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  if (extraout_x1 == 0) {
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x98))(param_1);
    if (puVar6 == (undefined8 *)0x0) {
      local_d0 = (undefined **)0x6e776f6e6b6e750e;
      plStack_c8 = (long *)((ulong)plStack_c8 & 0xffffffffffffff00);
    }
    else {
      puVar11 = (ulong *)*puVar6;
      if ((*puVar11 & 1) == 0) {
        plStack_c8 = (long *)puVar11[1];
        local_d0 = (undefined **)*puVar11;
        local_c0 = (void *)puVar11[2];
      }
      else {
        plVar9 = (long *)puVar11[1];
        __src = (void *)puVar11[2];
        if (plVar9 < (long *)0x17) {
          __dest = (void *)((ulong)&local_d0 | 1);
          local_d0 = (undefined **)CONCAT71(local_d0._1_7_,(char)((int)plVar9 << 1));
        }
        else {
          if ((long *)0xffffffffffffffef < plVar9) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)(plVar9 + 2) & 0xfffffffffffffff0);
          local_d0 = (undefined **)((ulong)(plVar9 + 2) & 0xfffffffffffffff0 | 1);
          plStack_c8 = plVar9;
          local_c0 = __dest;
        }
        memcpy(__dest,__src,(long)plVar9 + 1);
      }
      if (((ulong)local_d0 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
    }
  }
  uVar10 = *(uint *)(lVar5 + 0x68);
  if (0 < (int)uVar10) {
    lVar12 = 0;
    do {
      if ((*(int *)(*(long *)(lVar5 + 0x28) + lVar12 + 0x3c) == 2) &&
         (uVar7 = FUN_004f4514(extraout_x1,param_1), (uVar7 & 1) == 0)) {
        return false;
      }
      lVar12 = lVar12 + 0x98;
    } while ((ulong)uVar10 * 0x98 != lVar12);
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
                    /* try { // try from 00505bfc to 00505c0b has its CatchHandler @ 00505ff8 */
  FUN_004f4acc(extraout_x1,param_1,&local_88);
  puVar3 = PTR_DAT_047cd750;
  puVar2 = PTR_LAB_047cd728;
  if (local_80 != local_88) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(local_88 + uVar7 * 8);
      puVar11 = *(ulong **)(lVar5 + 0x30);
      if ((puVar11 != (ulong *)0x0) &&
         (puStack_68 = puVar2, local_70 = lVar5, *puVar11 != 0xffffffffffffffff)) {
        local_d0 = &puStack_68;
                    /* try { // try from 00505c9c to 00505cfb has its CatchHandler @ 00506000 */
        local_110 = &local_d0;
        plStack_c8 = &local_70;
        std::__call_once(puVar11,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
      }
      uVar10 = *(uint *)(lVar5 + 0x38);
      if (*(int *)(puVar3 + (ulong)uVar10 * 4) == 10) {
        puVar11 = *(ulong **)(lVar5 + 0x30);
        if (puVar11 != (ulong *)0x0) {
          puStack_68 = puVar2;
          local_70 = lVar5;
          if (*puVar11 != 0xffffffffffffffff) {
            local_d0 = &puStack_68;
            local_110 = &local_d0;
            plStack_c8 = &local_70;
            std::__call_once(puVar11,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
          }
          uVar10 = *(uint *)(lVar5 + 0x38);
        }
        if ((uVar10 == 0xb) && (uVar8 = FUN_004a64c0(lVar5), (uVar8 & 1) != 0)) {
                    /* try { // try from 00505d00 to 00505d3f has its CatchHandler @ 00505ff4 */
          lVar12 = FUN_004a5124(lVar5);
          lVar12 = *(long *)(lVar12 + 0x28);
          puVar11 = *(ulong **)(lVar12 + 200);
          if (puVar11 != (ulong *)0x0) {
            local_70 = lVar12 + 0x98;
            puStack_68 = puVar2;
            if (*puVar11 != 0xffffffffffffffff) {
              local_d0 = &puStack_68;
              local_110 = &local_d0;
              plStack_c8 = &local_70;
              std::__call_once(puVar11,&local_110,(_func_void_void_ptr *)&LAB_00506f10);
            }
          }
          if (*(int *)(puVar3 + (ulong)*(uint *)(lVar12 + 0xd0) * 4) == 10) {
                    /* try { // try from 00505d50 to 00505d67 has its CatchHandler @ 00505ff0 */
            plVar9 = (long *)FUN_004f92d8(extraout_x1,param_1,lVar5);
            uVar8 = FUN_004fdddc();
            if ((uVar8 & 1) == 0) goto LAB_00505dfc;
                    /* try { // try from 00505d6c to 00505d7b has its CatchHandler @ 00505fc8 */
            FUN_004f8ac0(&local_d0,param_1,lVar5);
                    /* try { // try from 00505d7c to 00505d8b has its CatchHandler @ 00505fc0 */
            FUN_004f8ac0(&local_110,param_1,lVar5);
                    /* try { // try from 00505d94 to 00505db3 has its CatchHandler @ 00505fec */
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_d0);
            (**(code **)(*plVar9 + 0x38))(plVar9,&local_110);
                    /* try { // try from 00505dc0 to 00505df7 has its CatchHandler @ 00506004 */
            while (uVar8 = (**(code **)(*plStack_c8 + 0x28))(plStack_c8,&local_d0,&local_110),
                  (uVar8 & 1) == 0) {
              uVar8 = (**(code **)(*local_a0 + 0x30))();
              if ((uVar8 & 1) == 0) {
                bVar1 = false;
                iVar4 = 1;
                goto LAB_00505e98;
              }
              (**(code **)(*plStack_c8 + 0x90))(plStack_c8,&local_d0);
            }
            iVar4 = 7;
            bVar1 = true;
LAB_00505e98:
                    /* try { // try from 00505ea4 to 00505eab has its CatchHandler @ 00505fd8 */
            (**(code **)(*local_108 + 0x80))(local_108,&local_110);
            if ((local_e8 == 9) && ((local_100 & 1) != 0)) {
              FUN_0049e790(PTR_LAB_047cba48,local_f0);
            }
                    /* try { // try from 00505edc to 00505ee3 has its CatchHandler @ 00505fcc */
            (**(code **)(*plStack_c8 + 0x80))(plStack_c8,&local_d0);
            if ((local_a8 == 9) && (((ulong)local_c0 & 1) != 0)) {
              FUN_0049e790(PTR_LAB_047cba48,local_b0);
            }
            if (!bVar1) goto LAB_00505f10;
          }
        }
        else {
LAB_00505dfc:
          if (*(int *)(lVar5 + 0x3c) == 3) {
                    /* try { // try from 00505e08 to 00505e17 has its CatchHandler @ 00505ffc */
            iVar4 = FUN_004f48a0(extraout_x1,param_1,lVar5);
            if (0 < iVar4) {
              iVar13 = 0;
              do {
                    /* try { // try from 00505e28 to 00505e47 has its CatchHandler @ 00506084 */
                plVar9 = (long *)FUN_004f7c80(extraout_x1,param_1,lVar5,iVar13);
                uVar8 = (**(code **)(*plVar9 + 0x30))();
                if ((uVar8 & 1) == 0) goto LAB_00505f0c;
                iVar13 = iVar13 + 1;
              } while (iVar4 != iVar13);
            }
          }
          else {
                    /* try { // try from 00505e5c to 00505e7b has its CatchHandler @ 00506000 */
            plVar9 = (long *)FUN_004f72a0(extraout_x1,param_1,lVar5,0);
            uVar8 = (**(code **)(*plVar9 + 0x30))();
            if ((uVar8 & 1) == 0) {
LAB_00505f0c:
              iVar4 = 1;
              goto LAB_00505f10;
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulong)(local_80 - local_88 >> 3));
  }
  iVar4 = 5;
LAB_00505f10:
  if (local_88 != 0) {
    local_80 = local_88;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return iVar4 == 5;
}


