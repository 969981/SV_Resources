/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e3e45c; name: FUN_00e3e45c
 */


undefined8
FUN_00e3e45c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
            byte param_6)

{
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  uint uVar17;
  void *pvVar18;
  undefined *puVar19;
  size_t __n;
  int *piVar20;
  long *unaff_x27;
  undefined *puVar21;
  undefined4 local_f8 [2];
  undefined1 auStack_f0 [24];
  long local_d8;
  long local_d0;
  long local_c0;
  long local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  void *local_80;
  void *local_78;
  undefined8 uStack_70;
  
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_80 = (void *)0x0;
  plVar16 = *(long **)(param_1 + 0x28);
  if (plVar16 != (long *)0x0) {
    local_88 = 0;
    local_f8[0] = 0;
    local_98 = param_3;
    uStack_90 = param_3;
    memset(auStack_f0,0,0x54);
    FUN_00e3f700(&local_80,local_f8);
    lVar7 = tpidr_el0;
    if (local_c0 != 0) {
      local_b8 = local_c0;
      unaff_x27 = *(long **)(lVar7 + 0x30);
      if (unaff_x27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        unaff_x27 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*unaff_x27 + 0xf8))(unaff_x27);
      if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*unaff_x27 + 0x18))(unaff_x27,local_c0,0,8);
      }
      else {
        FUN_00c48fe8(unaff_x27,local_c0,0,8);
      }
    }
    if (local_d8 != 0) {
      local_d0 = local_d8;
      unaff_x27 = *(long **)(lVar7 + 0x30);
      if (unaff_x27 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        unaff_x27 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar9 = (**(code **)(*unaff_x27 + 0xf8))(unaff_x27);
      if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*unaff_x27 + 0x18))(unaff_x27,local_d8,0,8);
      }
      else {
        FUN_00c48fe8(unaff_x27,local_d8,0,8);
      }
    }
    *(undefined4 *)((long)local_78 + -0x60) = 0;
    *(undefined8 *)((long)local_78 + -0x58) = param_2;
    *(undefined8 *)((long)local_78 + -0x50) = param_2;
    *(undefined8 *)((long)local_78 + -0x48) = param_3;
    lVar12 = *(long *)((long)local_78 + -0x40);
    uVar9 = (ulong)*(uint *)(param_1 + 0x1c);
    lVar13 = *(long *)((long)local_78 + -0x38) - lVar12 >> 3;
    uVar14 = lVar13 * -0x5555555555555555;
    if (uVar14 < uVar9) {
      FUN_00e40f58((long *)((long)local_78 + -0x40),uVar9 + lVar13 * 0x5555555555555555,&local_98);
    }
    else if (uVar9 < uVar14) {
      *(ulong *)((long)local_78 + -0x38) = lVar12 + uVar9 * 0x18;
    }
    pvVar18 = local_78;
    puVar21 = (undefined *)(ulong)*(uint *)(param_1 + 0x20);
    pvVar8 = *(void **)((long)local_78 + -0x28);
    pvVar4 = *(void **)((long)local_78 + -0x20);
    __n = (long)pvVar4 - (long)pvVar8;
    puVar19 = (undefined *)((long)__n >> 4);
    if (puVar19 < puVar21) {
      plVar15 = (long *)(puVar21 + -(long)puVar19);
      if ((long *)(*(long *)((long)local_78 + -0x18) - (long)pvVar4 >> 4) < plVar15) {
        lVar12 = *(long *)((long)local_78 + -0x18) - (long)pvVar8;
        puVar10 = (undefined *)(lVar12 >> 3);
        puVar1 = puVar21;
        if (puVar21 <= puVar10) {
          puVar1 = puVar10;
        }
        if (0x7fffffffffffffe < (ulong)(lVar12 >> 4)) {
          puVar1 = (undefined *)0xfffffffffffffff;
        }
        if (puVar1 == (undefined *)0x0) {
          pvVar4 = (void *)0x0;
        }
        else {
          if ((ulong)puVar1 >> 0x3c != 0) {
            FUN_028a5f50();
            goto LAB_00e3f1ac;
          }
          plVar11 = *(long **)(lVar7 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          pvVar4 = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,(long)puVar1 << 4,8);
        }
        memset((void *)((long)pvVar4 + (long)puVar19 * 0x10),0,(long)plVar15 * 0x10);
        if (0 < (long)__n) {
          memcpy(pvVar4,pvVar8,__n);
        }
        *(void **)((long)pvVar18 + -0x28) = pvVar4;
        *(void **)((long)pvVar18 + -0x20) = (void *)((long)pvVar4 + (long)puVar21 * 0x10);
        *(void **)((long)pvVar18 + -0x18) = (void *)((long)pvVar4 + (long)puVar1 * 0x10);
        if (pvVar8 != (void *)0x0) {
          plVar15 = *(long **)(lVar7 + 0x30);
          if (plVar15 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar15 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,pvVar8,0,8);
          }
          else {
            FUN_00c48fe8(plVar15,pvVar8,0,8);
          }
        }
      }
      else {
        pvVar8 = pvVar4;
        if (plVar15 != (long *)0x0) {
          pvVar8 = (void *)((long)pvVar4 + (long)plVar15 * 0x10);
          memset(pvVar4,0,(long)plVar15 * 0x10);
        }
        *(void **)((long)pvVar18 + -0x20) = pvVar8;
      }
    }
    else if (puVar19 != puVar21) {
      *(void **)((long)local_78 + -0x20) = (void *)((long)pvVar8 + (long)puVar21 * 0x10);
    }
    *(long **)((long)local_78 + -0x10) = plVar16;
    *(int *)((long)local_78 + -8) = param_5;
    param_5 = (int)param_3 - (int)param_2;
    plVar11 = &local_d8;
    pvVar18 = (void *)0x1;
    puVar19 = &DAT_03d689fa;
    *(byte *)((long)local_78 + -4) = param_6 & 1;
    plVar15 = &local_c0;
    do {
      pvVar8 = local_78;
      uVar17 = (uint)pvVar18;
      if ((((ulong)pvVar18 & 0xfff) == 0) && (param_5 <= (int)(uVar17 >> 0xc))) {
        FUN_028a5f60();
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      piVar20 = (int *)((long)local_78 + -0x60);
      plVar5 = *(long **)((long)local_78 + -0x10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,piVar20);
      }
      if (*piVar20 + 1000U < 10) {
                    /* WARNING: Could not recover jumptable at 0x00e3e6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)((ulong)*(ushort *)(puVar19 + (ulong)(*piVar20 + 1000U) * 2) * 4 +
                          0xe3e6a8))();
        return uVar6;
      }
      FUN_028a5f70();
      lVar12 = FUN_00c4e600();
      if (*(int *)(lVar12 + 0x12c8) < 1) {
        (**(code **)(*plVar11 + 0x18))(plVar11,piVar20,0,8);
      }
      else {
        FUN_00c48fe8(plVar11,piVar20,0,8);
      }
      __n = *(size_t *)((long)pvVar8 + -0x40);
      plVar11 = plVar15;
      if (__n != 0) {
        *(size_t *)((long)pvVar8 + -0x38) = __n;
        unaff_x27 = *(long **)(lVar7 + 0x30);
        if (unaff_x27 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          unaff_x27 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*unaff_x27 + 0xf8))(unaff_x27);
        if ((uVar9 & 1) != 0) {
LAB_00e3f1ac:
          uVar17 = (uint)pvVar18;
          lVar12 = FUN_00c4e600();
          if (0 < *(int *)(lVar12 + 0x12c8)) {
            FUN_00c48fe8(unaff_x27,__n,0,8);
            plVar11 = plVar15;
            goto LAB_00e3e6a8;
          }
        }
        (**(code **)(*unaff_x27 + 0x18))(unaff_x27,__n,0,8);
        plVar11 = plVar15;
      }
LAB_00e3e6a8:
      pvVar4 = local_80;
      local_78 = (void *)((long)pvVar8 + -0x60);
      pvVar18 = (void *)(ulong)(uVar17 + 1);
      plVar15 = plVar16;
    } while (local_80 != local_78);
    pvVar18 = local_78;
    pvVar8 = local_80;
    if (local_80 != (void *)0x0) {
      while (pvVar2 = pvVar18, local_80 = pvVar8, pvVar2 != pvVar4) {
        lVar12 = *(long *)((long)pvVar2 + -0x28);
        if (lVar12 != 0) {
          *(long *)((long)pvVar2 + -0x20) = lVar12;
          plVar16 = *(long **)(lVar7 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar16,lVar12,0,8);
          }
        }
        lVar12 = *(long *)((long)pvVar2 + -0x40);
        pvVar18 = (void *)((long)pvVar2 + -0x60);
        pvVar8 = local_80;
        if (lVar12 != 0) {
          *(long *)((long)pvVar2 + -0x38) = lVar12;
          plVar16 = *(long **)(lVar7 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(lVar7 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
          if (((uVar9 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
            (**(code **)(*plVar16 + 0x18))(plVar16,lVar12,0,8);
            pvVar8 = local_80;
          }
          else {
            FUN_00c48fe8(plVar16,lVar12,0,8);
            pvVar8 = local_80;
          }
        }
      }
      local_78 = pvVar4;
      if (pvVar8 != (void *)0x0) {
        plVar16 = *(long **)(lVar7 + 0x30);
        if (plVar16 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar16 = DAT_04859430;
          *(long **)(lVar7 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*plVar16 + 0xf8))(plVar16);
        if (((uVar9 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar16 + 0x18))(plVar16,pvVar8,0,8);
        }
        else {
          FUN_00c48fe8(plVar16,pvVar8,0,8);
        }
      }
    }
  }
  return 0;
}


