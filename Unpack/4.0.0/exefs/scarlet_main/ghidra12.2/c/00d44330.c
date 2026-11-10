/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d44330; name: FUN_00d44330
 */


void FUN_00d44330(long *param_1,ulong param_2)

{
  void *__s;
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  
  __s = (void *)param_1[1];
  if (param_2 <= (ulong)(param_1[2] - (long)__s >> 3)) {
    pvVar3 = __s;
    if (param_2 != 0) {
      pvVar3 = (void *)((long)__s + param_2 * 8);
      memset(__s,0,param_2 << 3);
    }
    param_1[1] = (long)pvVar3;
    return;
  }
  lVar4 = (long)__s - *param_1 >> 3;
  uVar2 = param_2 + lVar4;
  if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar8 = lVar5 >> 2;
  if (uVar2 <= uVar8) {
    uVar2 = uVar8;
  }
  if (0xffffffffffffffe < (ulong)(lVar5 >> 3)) {
    uVar2 = 0x1fffffffffffffff;
  }
  if (uVar2 == 0) {
    lVar5 = 0;
LAB_00d443dc:
    plVar6 = (long *)(lVar5 + lVar4 * 8);
    *plVar6 = 0;
    if (param_2 != 1) {
      plVar6[1] = 0;
      if (param_2 != 2) {
        plVar6[2] = 0;
        if (param_2 != 3) {
          plVar6[3] = 0;
          if (param_2 != 4) {
            lVar4 = param_2 * 8 + -0x20;
            plVar7 = plVar6 + 4;
            do {
              lVar4 = lVar4 + -8;
              *plVar7 = 0;
              plVar7 = plVar7 + 1;
            } while (lVar4 != 0);
          }
        }
      }
    }
    plVar9 = (long *)*param_1;
    plVar7 = plVar6 + param_2;
    if ((long *)param_1[1] == plVar9) {
      plVar10 = plVar9;
    }
    else {
      plVar10 = (long *)param_1[1] + -1;
      lVar4 = *plVar10;
      *plVar10 = 0;
      plVar6 = plVar6 + -1;
      *plVar6 = lVar4;
      while (plVar10 != plVar9) {
        plVar10 = plVar10 + -1;
        lVar4 = *plVar10;
        *plVar10 = 0;
        plVar6 = plVar6 + -1;
        *plVar6 = lVar4;
      }
      plVar10 = (long *)*param_1;
      plVar9 = (long *)param_1[1];
    }
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar7;
    param_1[2] = lVar5 + uVar2 * 8;
    if (plVar9 != plVar10) {
      plVar9 = plVar9 + -1;
      puVar11 = (undefined8 *)*plVar9;
      *plVar9 = 0;
      if (puVar11 != (undefined8 *)0x0) {
        FUN_00d44bc8(puVar11 + 2);
        *puVar11 = &PTR_LAB_045a0398;
        if ((long *)puVar11[1] != (long *)0x0) {
          (**(code **)(*(long *)puVar11[1] + 0x20))();
        }
        lVar4 = tpidr_el0;
        plVar6 = *(long **)(lVar4 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,puVar11,0,8);
        }
      }
      if (plVar9 != plVar10) {
        lVar4 = tpidr_el0;
        do {
          plVar9 = plVar9 + -1;
          puVar11 = (undefined8 *)*plVar9;
          *plVar9 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            FUN_00d44bc8(puVar11 + 2);
            *puVar11 = &PTR_LAB_045a0398;
            if ((long *)puVar11[1] != (long *)0x0) {
              (**(code **)(*(long *)puVar11[1] + 0x20))();
            }
            plVar6 = *(long **)(lVar4 + 0x30);
            if (plVar6 == (long *)0x0) {
              if (((DAT_04859438 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
                DAT_04859430 = DAT_04859418;
                __cxa_guard_release(&DAT_04859438);
              }
              plVar6 = DAT_04859430;
              *(long **)(lVar4 + 0x30) = DAT_04859430;
            }
            uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
            if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
              (**(code **)(*plVar6 + 0x18))(plVar6,puVar11,0,8);
            }
            else {
              FUN_00c48fe8(plVar6,puVar11,0,8);
            }
          }
        } while (plVar10 != plVar9);
      }
    }
    if (plVar10 == (long *)0x0) {
      return;
    }
    uVar2 = tpidr_el0;
    plVar6 = *(long **)(uVar2 + 0x30);
    param_1 = plVar10;
    if (plVar6 != (long *)0x0) goto LAB_00d444c0;
  }
  else {
    if (uVar2 >> 0x3d == 0) {
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar2 << 3,8);
      goto LAB_00d443dc;
    }
    FUN_0219c980();
  }
  if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar6 = DAT_04859430;
  *(long **)(uVar2 + 0x30) = DAT_04859430;
LAB_00d444c0:
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d44504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


