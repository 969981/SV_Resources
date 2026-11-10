/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb0860; name: FUN_00bb0860
 */


void FUN_00bb0860(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  pthread_mutex_t *__mutex;
  void *__dest;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  void *__src;
  size_t __n;
  undefined8 *unaff_x24;
  long local_58;
  
  if ((DAT_0483a6d0 != 2) && (DAT_0483a6d0 != 2)) {
    do {
      lVar8 = DAT_0483a6d0;
      if (DAT_0483a6d0 != 0) break;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x483a6d0,0x10);
      if (bVar2) {
        DAT_0483a6d0 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    DataMemoryBarrier(2,3);
    if (lVar8 == 0) {
      lVar8 = tpidr_el0;
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      DAT_0483a6c0 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0x18,8);
      *DAT_0483a6c0 = 0;
      DAT_0483a6c0[1] = 0;
      DAT_0483a6c0[2] = 0;
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,8,8);
      plVar9 = *(long **)(lVar8 + 0x30);
      if (plVar9 == (long *)0x0) {
        unaff_x24 = &DAT_04859000;
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar8 + 0x30) = DAT_04859430;
      }
      __mutex = (pthread_mutex_t *)(**(code **)(*plVar9 + 0x10))(plVar9,0x20,8);
      *puVar6 = &__mutex->__data;
      pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      DAT_0483a6d0 = 2;
      DAT_0483a6c8 = puVar6;
    }
    else {
      while (lVar8 == 1) {
        sched_yield();
        lVar8 = DAT_0483a6d0;
      }
    }
  }
  puVar4 = DAT_0483a6c8;
  FUN_00bb1344(DAT_0483a6c8);
  puVar3 = DAT_0483a6c0;
  puVar6 = (undefined8 *)DAT_0483a6c0[1];
  if (puVar6 != (undefined8 *)DAT_0483a6c0[2]) {
    *puVar6 = param_1;
    puVar3[1] = puVar6 + 1;
    goto LAB_00bb0aec;
  }
  __src = (void *)*DAT_0483a6c0;
  __n = (long)puVar6 - (long)__src;
  uVar7 = ((long)__n >> 3) + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar8 = (long)DAT_0483a6c0[2] - (long)__src;
  uVar10 = lVar8 >> 2;
  if (uVar7 <= uVar10) {
    uVar7 = uVar10;
  }
  if (0xffffffffffffffe < (ulong)(lVar8 >> 3)) {
    uVar7 = 0x1fffffffffffffff;
  }
  if (uVar7 == 0) {
    __dest = (void *)0x0;
  }
  else {
    if (uVar7 >> 0x3d == 0) {
      local_58 = uVar7 << 3;
      unaff_x24 = (undefined8 *)tpidr_el0;
      plVar9 = (long *)unaff_x24[6];
      if (plVar9 == (long *)0x0) {
        if ((DAT_04859438 & 1) == 0) goto LAB_00bb0c38;
        goto LAB_00bb0b48;
      }
    }
    else {
      FUN_00bb1680();
LAB_00bb0c38:
      iVar5 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar5 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_00bb0b48:
      plVar9 = DAT_04859430;
      unaff_x24[6] = DAT_04859430;
    }
    __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,local_58,8);
  }
  puVar6 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar6 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *puVar3 = __dest;
  puVar3[1] = puVar6 + 1;
  puVar3[2] = (void *)((long)__dest + uVar7 * 8);
  if (__src != (void *)0x0) {
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,__src,0,8);
    }
    else {
      FUN_00c48fe8(plVar9,__src,0,8);
    }
  }
LAB_00bb0aec:
  FUN_00bb14b8(puVar4);
  return;
}


