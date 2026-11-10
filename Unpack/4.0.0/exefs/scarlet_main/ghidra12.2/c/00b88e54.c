/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b88e54; name: FUN_00b88e54
 */


void FUN_00b88e54(void *param_1,long *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  void *__src;
  long *unaff_x22;
  ulong unaff_x23;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  
  if (*(long *)((long)param_1 + 0x18) == 0) {
    puVar1 = (undefined4 *)param_2[1];
    if (puVar1 == (undefined4 *)param_2[2]) {
      __src = (void *)*param_2;
      unaff_x22 = (long *)((long)puVar1 - (long)__src);
      uVar9 = (long)unaff_x22 >> 2;
      uVar10 = uVar9 + 1;
      if (uVar10 >> 0x3e != 0) goto LAB_00b8956c;
      lVar5 = param_2[2] - (long)__src;
      uVar7 = lVar5 >> 1;
      if (uVar10 <= uVar7) {
        uVar10 = uVar7;
      }
      if (0x1ffffffffffffffe < (ulong)(lVar5 >> 2)) {
        uVar10 = 0x3fffffffffffffff;
      }
      if (uVar10 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        if (uVar10 >> 0x3e != 0) goto LAB_00b89574;
        lVar5 = tpidr_el0;
        plVar6 = *(long **)(lVar5 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
          unaff_x26 = uVar10 << 2;
        }
        pvVar4 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar10 << 2,8);
      }
      puVar1 = (undefined4 *)((long)pvVar4 + uVar9 * 4);
      *puVar1 = 4;
      if (0 < (long)unaff_x22) {
        memcpy(pvVar4,__src,(size_t)unaff_x22);
      }
      *param_2 = (long)pvVar4;
      param_2[1] = (long)(puVar1 + 1);
      param_2[2] = (long)((long)pvVar4 + uVar10 * 4);
      if (__src != (void *)0x0) {
        lVar5 = tpidr_el0;
        unaff_x22 = *(long **)(lVar5 + 0x30);
        if (unaff_x22 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          unaff_x22 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*unaff_x22 + 0xf8))(unaff_x22);
        if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*unaff_x22 + 0x18))(unaff_x22,__src,0,8);
        }
        else {
          FUN_00c48fe8(unaff_x22,__src,0,8);
        }
      }
    }
    else {
      *puVar1 = 4;
      param_2[1] = (long)(puVar1 + 1);
    }
    lVar5 = *(long *)((long)param_1 + 0x18);
    if (lVar5 == 0) {
      lVar5 = *(long *)((long)param_1 + 0x10);
    }
    uVar8 = (int)((ulong)((long)param_1 - *(long *)(lVar5 + 0x50)) >> 3) * 0x3cf3cf3d;
    unaff_x23 = (ulong)uVar8;
    puVar2 = (uint *)param_2[1];
    if (puVar2 < (uint *)param_2[2]) {
      *puVar2 = uVar8;
      goto LAB_00b8922c;
    }
    param_1 = (void *)*param_2;
    __src = (void *)((long)puVar2 - (long)param_1);
    uVar9 = (long)__src >> 2;
    uVar10 = uVar9 + 1;
    if (uVar10 >> 0x3e != 0) goto LAB_00b8956c;
    lVar5 = param_2[2] - (long)param_1;
    uVar7 = lVar5 >> 1;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar5 >> 2)) {
      uVar10 = 0x3fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (uVar10 >> 0x3e != 0) goto LAB_00b89574;
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar10 << 2,8);
    }
    puVar2 = (uint *)((long)pvVar4 + uVar9 * 4);
    *puVar2 = uVar8;
    if (0 < (long)__src) {
      memcpy(pvVar4,param_1,(size_t)__src);
    }
    *param_2 = (long)pvVar4;
    param_2[1] = (long)(puVar2 + 1);
    param_2[2] = (long)((long)pvVar4 + uVar10 * 4);
    if (param_1 == (void *)0x0) {
      return;
    }
    lVar5 = tpidr_el0;
    plVar6 = *(long **)(lVar5 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    goto LAB_00b89318;
  }
  FUN_00b88e54(*(long *)((long)param_1 + 0x18),param_2);
  puVar1 = (undefined4 *)param_2[1];
  if (puVar1 == (undefined4 *)param_2[2]) {
    __src = (void *)*param_2;
    unaff_x22 = (long *)((long)puVar1 - (long)__src);
    uVar9 = (long)unaff_x22 >> 2;
    uVar10 = uVar9 + 1;
    if (uVar10 >> 0x3e != 0) goto LAB_00b8956c;
    lVar5 = param_2[2] - (long)__src;
    uVar7 = lVar5 >> 1;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar5 >> 2)) {
      uVar10 = 0x3fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar4 = (void *)0x0;
LAB_00b88f40:
      puVar1 = (undefined4 *)((long)pvVar4 + uVar9 * 4);
      *puVar1 = 3;
      if (0 < (long)unaff_x22) {
        memcpy(pvVar4,__src,(size_t)unaff_x22);
      }
      *param_2 = (long)pvVar4;
      param_2[1] = (long)(puVar1 + 1);
      param_2[2] = (long)((long)pvVar4 + uVar10 * 4);
      if (__src != (void *)0x0) {
        lVar5 = tpidr_el0;
        unaff_x22 = *(long **)(lVar5 + 0x30);
        if (unaff_x22 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          unaff_x22 = DAT_04859430;
          *(long **)(lVar5 + 0x30) = DAT_04859430;
        }
        uVar10 = (**(code **)(*unaff_x22 + 0xf8))(unaff_x22);
        if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*unaff_x22 + 0x18))(unaff_x22,__src,0,8);
        }
        else {
          FUN_00c48fe8(unaff_x22,__src,0,8);
        }
      }
      goto LAB_00b88fc0;
    }
    if (uVar10 >> 0x3e == 0) {
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      pvVar4 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar10 << 2,8);
      goto LAB_00b88f40;
    }
LAB_00b89574:
    uVar8 = (uint)uVar9;
    FUN_01f6e360();
LAB_00b89578:
    iVar3 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar3 != 0) {
      unaff_x27[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_00b89420:
    plVar6 = (long *)unaff_x27[0x86];
    *(long **)(unaff_x23 + 0x30) = plVar6;
LAB_00b89060:
    pvVar4 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,unaff_x22,8);
  }
  else {
    *puVar1 = 3;
    param_2[1] = (long)(puVar1 + 1);
LAB_00b88fc0:
    lVar5 = *(long *)((long)param_1 + 0x18);
    if (lVar5 == 0) {
      lVar5 = *(long *)((long)param_1 + 0x10);
    }
    uVar8 = (int)((ulong)((long)param_1 - *(long *)(lVar5 + 0x50)) >> 3) * 0x3cf3cf3d;
    uVar9 = (ulong)uVar8;
    puVar2 = (uint *)param_2[1];
    if (puVar2 < (uint *)param_2[2]) {
      *puVar2 = uVar8;
LAB_00b8922c:
      param_2[1] = (long)(puVar2 + 1);
      return;
    }
    param_1 = (void *)*param_2;
    __src = (void *)((long)puVar2 - (long)param_1);
    uVar10 = (long)__src >> 2;
    unaff_x26 = uVar10 + 1;
    if (unaff_x26 >> 0x3e != 0) {
LAB_00b8956c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_2[2] - (long)param_1;
    uVar7 = lVar5 >> 1;
    if (unaff_x26 <= uVar7) {
      unaff_x26 = uVar7;
    }
    if (0x1ffffffffffffffe < (ulong)(lVar5 >> 2)) {
      unaff_x26 = 0x3fffffffffffffff;
    }
    unaff_x23 = tpidr_el0;
    if (unaff_x26 != 0) {
      if (unaff_x26 >> 0x3e != 0) goto LAB_00b89574;
      unaff_x22 = (long *)(unaff_x26 << 2);
      plVar6 = *(long **)(unaff_x23 + 0x30);
      if (plVar6 == (long *)0x0) {
        unaff_x27 = &DAT_04859000;
        if ((DAT_04859438 & 1) == 0) goto LAB_00b89578;
        goto LAB_00b89420;
      }
      goto LAB_00b89060;
    }
    pvVar4 = (void *)0x0;
  }
  puVar2 = (uint *)((long)pvVar4 + uVar10 * 4);
  *puVar2 = uVar8;
  if (0 < (long)__src) {
    memcpy(pvVar4,param_1,(size_t)__src);
  }
  *param_2 = (long)pvVar4;
  param_2[1] = (long)(puVar2 + 1);
  param_2[2] = (long)((long)pvVar4 + unaff_x26 * 4);
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar6 = *(long **)(unaff_x23 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(unaff_x23 + 0x30) = DAT_04859430;
  }
LAB_00b89318:
  uVar10 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar10 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00b8935c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar6,param_1,0,8);
  return;
}


