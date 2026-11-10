/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b12a20; name: FUN_00b12a20
 */


long * FUN_00b12a20(undefined8 param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined1 local_68;
  undefined8 local_48;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x280,8);
  puVar6 = PTR_DAT_047d66f8;
  if (plVar10 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar12 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)&PTR_LAB_04552ba8;
  plVar10[1] = lVar12;
  plVar10[4] = (long)&PTR_LAB_04552bd8;
  if (((DAT_04839420 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04839420), iVar8 != 0)) {
    FUN_00100190(&LAB_00b12850,&DAT_04839410,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839420);
  }
  DAT_04839418 = 1;
  plVar10[6] = (long)&PTR_LAB_04552b70;
  plVar10[7] = (long)&PTR_LAB_04552b88;
  *plVar10 = (long)&PTR_LAB_04552ae8;
  *(undefined4 *)(plVar10 + 8) = 0;
  *(undefined4 *)(plVar10 + 0x19) = 0;
  plVar10[4] = (long)&PTR_LAB_04552b38;
  plVar10[5] = (long)&PTR_LAB_04552b58;
  plVar10[0x1a] = 0;
  plVar10[0x1b] = 0;
  plVar10[0x1c] = 0;
  memset(plVar10 + 9,0,0x74);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  lVar11 = tpidr_el0;
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar11 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar10 + 0x20) = 0;
  plVar10[0x1d] = lVar12;
  plVar10[0x23] = 0;
  plVar10[0x1e] = 0xffffffffffffff;
  plVar10[0x1f] = 0;
  plVar10[0x21] = 0;
  plVar10[0x22] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar11 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(plVar10 + 0x27) = 0;
  plVar10[0x24] = lVar12;
  plVar10[0x25] = 0xf83e0f83e0f83e;
  plVar10[0x26] = 0;
  plVar10[0x2a] = 0;
  plVar10[0x28] = 0;
  plVar10[0x29] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
      (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) &&
     (lVar12 = *(long *)(lVar11 + 0x30), lVar12 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar12 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  plVar10[0x2b] = lVar12;
  plVar10[0x2c] = 0xf83e0f83e0f83e;
  plVar10[0x2d] = 0;
  *(undefined4 *)(plVar10 + 0x2e) = 0;
  *(undefined2 *)(plVar10 + 0x2f) = 0;
  *(undefined4 *)(plVar10 + 0x31) = 0;
  plVar10[0x32] = 0;
  *(undefined1 *)(plVar10 + 0x33) = 0;
  *(undefined2 *)((long)plVar10 + 0x19a) = 0;
  *(undefined4 *)((long)plVar10 + 0x19c) = 0;
  *(undefined8 *)((long)plVar10 + 0x17c) = 0;
  *(undefined2 *)((long)plVar10 + 0x184) = 0;
  *(undefined2 *)(plVar10 + 0x34) = 0x7fff;
  *(undefined4 *)(plVar10 + 0x36) = 0;
  *(undefined8 *)((long)plVar10 + 0x1a4) = 0;
  *(undefined4 *)((long)plVar10 + 0x1ab) = 0;
  *(undefined1 *)((long)plVar10 + 0x1b4) = 0;
  *(undefined2 *)((long)plVar10 + 0x1b6) = 0;
  *(undefined4 *)(plVar10 + 0x37) = 0;
  *(undefined2 *)((long)plVar10 + 0x1bc) = 0x7fff;
  *(undefined4 *)((long)plVar10 + 0x1c7) = 0;
  plVar10[0x38] = 0;
  *(undefined2 *)((long)plVar10 + 0x1d6) = 0;
  *(undefined4 *)(plVar10 + 0x3b) = 0;
  *(undefined8 *)((long)plVar10 + 0x1cc) = 0;
  *(undefined1 *)((long)plVar10 + 0x1d4) = 0;
  *(undefined2 *)((long)plVar10 + 0x1dc) = 0x7fff;
  plVar10[0x3c] = 0;
  *(undefined4 *)((long)plVar10 + 0x1e7) = 0;
  plVar10[0x40] = 0;
  *(undefined1 *)(plVar10 + 0x41) = 0;
  *(undefined1 *)((long)plVar10 + 0x20c) = 0;
  *(undefined2 *)((long)plVar10 + 0x20e) = 0;
  *(undefined4 *)(plVar10 + 0x42) = 0;
  *(undefined8 *)((long)plVar10 + 0x1ec) = 0;
  *(undefined8 *)((long)plVar10 + 0x1f1) = 0;
  *(undefined2 *)((long)plVar10 + 0x214) = 0x7fff;
  *(undefined4 *)((long)plVar10 + 0x224) = 0;
  *(undefined4 *)((long)plVar10 + 0x21f) = 0;
  plVar10[0x43] = 0;
  *(undefined2 *)(plVar10 + 0x45) = 0;
  memset((void *)((long)plVar10 + 0x22c),0,0x48);
  *(undefined4 *)(plVar10 + 0x4f) = 0xffffffff;
  *(undefined1 *)((long)plVar10 + 0x27c) = 0;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar11 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar11;
  if (lVar11 != 0) {
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_68 = 1;
    local_70 = plVar10 + 6;
    FUN_01667c7c(lVar11,&local_80);
    puVar7 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_a0 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_a0);
        }
      }
      else if (sVar3 == 0) goto LAB_00b132c4;
    }
  }
  if (((*PTR_DAT_047da9b8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047da9b8), iVar8 != 0))
  {
    FUN_00100190(&LAB_00b15f74,PTR_DAT_047da9c0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047da9b8);
  }
  lVar11 = *(long *)PTR_DAT_047da9c0;
  *(long *)PTR_DAT_047da9c8 = lVar11;
  if (lVar11 != 0) {
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_88 = 1;
    local_90 = plVar10 + 7;
    FUN_015c48c8(lVar11,&local_a0);
    puVar7 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_48 = *puVar7;
          FUN_00c44438(lVar11 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
LAB_00b132c4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *(undefined4 *)((long)plVar10 + 0xc4) = 0;
  *(undefined8 *)((long)plVar10 + 0xbc) = 0;
  *(undefined4 *)(plVar10 + 3) = 0x80280;
  plVar10[1] = (long)param_2;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  return plVar10;
}


