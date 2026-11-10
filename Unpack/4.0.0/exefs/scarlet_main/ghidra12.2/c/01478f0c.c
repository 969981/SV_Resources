/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01478f0c; name: FUN_01478f0c
 */


long * FUN_01478f0c(long *param_1,ulong *param_2,uint param_3,long *param_4,long *param_5)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x28;
  long *local_108;
  long local_100;
  undefined2 local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long *local_80;
  long *local_78;
  undefined1 local_70 [4];
  undefined4 local_6c [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xe));
  plVar3 = (long *)FUN_01479658(param_1,param_2);
  local_80 = param_5;
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 1;
    lVar9 = *param_1;
    local_108 = (long *)0x0;
    pcVar11 = (char *)param_2[1];
    if ((pcVar11 == (char *)0x0) || (*pcVar11 == '\0')) {
      plVar12 = (long *)FUN_00d44228();
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
      local_108 = plVar12;
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar4;
      FUN_00cf9884(&local_78,uVar4,pcVar11);
      plVar12 = local_108;
      local_108 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))();
      }
      local_108 = local_78;
    }
    local_100 = 0;
    local_f8 = 0;
    local_f0 = (long *)0x0;
    local_e8 = 0;
    local_c0 = 0;
    local_88 = 0;
    local_e0 = 0;
    local_d0 = 0x1c71c71c71c71c7;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_98 = 0x1c71c71c71c71c7;
    local_90 = 0;
    uVar10 = *param_2;
    uVar13 = param_1[2];
    local_d8 = lVar9;
    local_a0 = lVar9;
    if (uVar13 == 0) {
LAB_0147902c:
      plVar12 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0xa0,8);
      if (plVar12 == (long *)0x0) {
        (**(code **)(*(long *)param_1[8] + 0xe8))();
      }
      lVar9 = param_1[8];
      if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      plVar7 = local_108;
      if (lVar5 != 0) {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      }
      local_108 = (long *)0x0;
      plVar12[2] = *param_2;
      plVar12[3] = (long)plVar7;
      plVar12[6] = 0;
      plVar12[7] = 0;
      plVar12[8] = 0;
      *(undefined2 *)(plVar12 + 5) = local_f8;
      plVar12[4] = local_100;
      plVar12[0xb] = local_c8;
      plVar12[0xc] = CONCAT44(uStack_bc,local_c0);
      plVar12[9] = local_d8;
      plVar12[10] = local_d0;
      plVar12[6] = (long)local_f0;
      plVar12[7] = local_e8;
      plVar12[8] = local_e0;
      local_f0 = (long *)0x0;
      local_e8 = 0;
      local_e0 = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x12] = local_90;
      plVar12[0x13] = CONCAT44(uStack_84,local_88);
      plVar12[0x10] = local_a0;
      plVar12[0x11] = local_98;
      plVar12[0xd] = local_b8;
      plVar12[0xe] = local_b0;
      plVar12[0xf] = local_a8;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      *plVar12 = 0;
      plVar12[1] = uVar10;
      if ((uVar13 == 0) || (*(float *)(param_1 + 0xd) * (float)uVar13 < (float)(param_1[0xc] + 1)))
      {
        uVar13 = (ulong)(uVar13 < 3 || (uVar13 & uVar13 - 1) != 0) | uVar13 << 1;
        uVar6 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
        if (uVar6 <= uVar13) {
          uVar6 = uVar13;
        }
        FUN_01605b18(plVar3,uVar6);
        uVar13 = param_1[2];
        if ((uVar13 & uVar13 - 1) == 0) {
          unaff_x28 = uVar13 - 1 & uVar10;
        }
        else {
          unaff_x28 = uVar10;
          if (uVar13 <= uVar10) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar10 / uVar13;
            }
            unaff_x28 = uVar10 - uVar6 * uVar13;
          }
        }
      }
      plVar7 = *(long **)(*plVar3 + unaff_x28 * 8);
      if (plVar7 == (long *)0x0) {
        plVar7 = param_1 + 7;
        *plVar12 = *plVar7;
        *plVar7 = (long)plVar12;
        *(long **)(param_1[1] + unaff_x28 * 8) = plVar7;
        if (*plVar12 != 0) {
          uVar10 = *(ulong *)(*plVar12 + 8);
          if ((uVar13 & uVar13 - 1) == 0) {
            uVar10 = uVar10 & uVar13 - 1;
          }
          else if (uVar13 <= uVar10) {
            uVar6 = 0;
            if (uVar13 != 0) {
              uVar6 = uVar10 / uVar13;
            }
            uVar10 = uVar10 - uVar6 * uVar13;
          }
          plVar7 = (long *)(*plVar3 + uVar10 * 8);
          goto LAB_014791ac;
        }
      }
      else {
        *plVar12 = *plVar7;
LAB_014791ac:
        *plVar7 = (long)plVar12;
      }
      param_1[0xc] = param_1[0xc] + 1;
    }
    else {
      uVar6 = uVar13 - 1;
      if ((uVar13 & uVar6) == 0) {
        unaff_x28 = uVar6 & uVar10;
        plVar12 = *(long **)(*plVar3 + unaff_x28 * 8);
        if (plVar12 == (long *)0x0) goto LAB_0147902c;
        do {
          plVar12 = (long *)*plVar12;
          if ((plVar12 == (long *)0x0) ||
             (plVar12[1] != uVar10 && (plVar12[1] & uVar6) != unaff_x28)) goto LAB_0147902c;
        } while (plVar12[2] != uVar10);
      }
      else {
        unaff_x28 = uVar10;
        if (uVar13 <= uVar10) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar10 / uVar13;
          }
          unaff_x28 = uVar10 - uVar6 * uVar13;
        }
        plVar12 = *(long **)(*plVar3 + unaff_x28 * 8);
        if (plVar12 == (long *)0x0) goto LAB_0147902c;
        do {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_0147902c;
          uVar6 = plVar12[1];
          if (uVar6 != uVar10) {
            if (uVar13 <= uVar6) {
              uVar1 = 0;
              if (uVar13 != 0) {
                uVar1 = uVar6 / uVar13;
              }
              uVar6 = uVar6 - uVar1 * uVar13;
            }
            if (uVar6 != unaff_x28) goto LAB_0147902c;
          }
        } while (plVar12[2] != uVar10);
      }
    }
    FUN_01479540(&local_b8);
    FUN_01479540(&local_f0);
    if (local_108 != (long *)0x0) {
      (**(code **)(*local_108 + 0x20))();
    }
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(plVar12 + 5) = 1;
    }
    *(int *)((long)plVar12 + 0x24) = *(int *)((long)plVar12 + 0x24) + 1;
    plVar3 = plVar12 + 3;
    if (*param_4 == 0) goto LAB_0147920c;
    if ((char)plVar12[5] == '\0') {
      uVar8 = (undefined4)plVar12[4];
LAB_0147937c:
      FUN_0135d26c(&local_108,plVar3);
      local_70[0] = 1;
      local_78 = param_5;
      local_6c[0] = uVar8;
      (*(code *)*param_4)(param_4 + 4,local_6c,&local_108,local_70,&local_78);
      if (local_f0 != (long *)0x0) {
        (**(code **)(*local_f0 + 0x20))();
      }
      goto LAB_0147920c;
    }
    plVar12 = plVar12 + 6;
  }
  else {
    if (*(char *)((long)plVar3 + 0x11) != '\0') {
      FUN_014797fc(plVar3);
    }
    *(int *)((long)plVar3 + 0xc) = *(int *)((long)plVar3 + 0xc) + 1;
    if (*param_4 == 0) goto LAB_0147920c;
    if ((char)plVar3[2] == '\0') {
      uVar8 = (undefined4)plVar3[1];
      goto LAB_0147937c;
    }
    plVar12 = plVar3 + 3;
  }
  FUN_014797a4(plVar12,param_4,&local_80);
LAB_0147920c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xe));
  return plVar3;
}


