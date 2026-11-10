/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01189030; name: FUN_01189030
 */


void FUN_01189030(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
  FUN_00d1a240(param_1,0x80048080);
  param_1[0x28] = 0;
  *param_1 = &DAT_046091e0;
  *(undefined1 *)((long)param_1 + 0x11e) = 0;
  param_1[6] = &PTR_LAB_046094c0;
  param_1[7] = &PTR_LAB_046094e8;
  param_1[4] = &PTR_LAB_04609340;
  param_1[5] = &DAT_04609468;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x29,0,1);
  param_1[0x2b] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x2c,0,1);
  param_1[0x34] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x38] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_1[1];
  param_1[0x33] = 0x1fffffffffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar9 = tpidr_el0;
    lVar7 = *(long *)(lVar9 + 0x30);
    if (lVar7 == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      lVar7 = DAT_04859430;
      *(long *)(lVar9 + 0x30) = DAT_04859430;
    }
  }
  param_1[0x39] = lVar7;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = 0x1fffffffffffffff;
  param_1[0x3b] = 0;
  param_1[0x41] = 0x1fffffffffffffff;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = param_1[1];
  *(undefined4 *)((long)param_1 + 0x23c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x46,0,1);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((long)param_1 + 0x244) = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((long)param_1 + 0x246) = 0;
  *(undefined8 *)((long)param_1 + 0x24e) = 0;
  *(undefined8 *)((long)param_1 + 0x256) = 0;
  *(undefined8 *)((long)param_1 + 0x25e) = 0;
  *(undefined8 *)((long)param_1 + 0x266) = 0;
  *(undefined8 *)((long)param_1 + 0x26e) = 0;
  *(undefined4 *)((long)param_1 + 0x275) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  if ((*param_2 != 0) && (*(short *)(*param_2 + 0x1a) != 0)) {
    *(undefined1 *)((long)param_1 + 0x11e) = 1;
    FUN_00c6c994(param_1 + 0x24,param_2);
  }
  plVar14 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_011896d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar14;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x60,8);
  if (plVar8 == (long *)0x0) {
LAB_011896d4:
    (**(code **)(*plVar14 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  memset(plVar8 + 1,0,0x58);
  puVar5 = PTR_DAT_047d66f8;
  plVar8[2] = 0;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar11 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *plVar8 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar8[1] = lVar11;
  plVar8[4] = (long)(puVar5 + 0x88);
  plVar15 = plVar8 + 5;
  *plVar15 = (long)(puVar5 + 0xd8);
  plVar16 = plVar8 + 6;
  *plVar16 = 0;
  plVar8[7] = 0;
  FUN_00d1a3f4(plVar16,plVar15);
  *plVar8 = (long)&DAT_04609520;
  plVar8[1] = (long)plVar14;
  plVar8[4] = (long)&PTR_LAB_046095a0;
  *plVar15 = (long)&DAT_046095f0;
  plVar8[10] = 0;
  *(undefined1 *)(plVar8 + 0xb) = 0;
  plVar8[2] = (long)plVar8;
  *(undefined4 *)(plVar8 + 3) = 0x80060;
  plVar8[8] = 0;
  plVar8[9] = 0;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  lVar7 = *plVar16;
  if (*(long *)(lVar7 + 0x10) != 0) {
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar10;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01189724;
    plVar14 = (long *)param_1[0x55];
    param_1[0x55] = 0;
    if (plVar14 != (long *)0x0) {
      lVar7 = plVar14[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01189438;
    }
    param_1[0x55] = plVar8;
    plVar14 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_011896d0;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar14;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,0x318,8);
    if (lVar9 == 0) goto LAB_011896d4;
    FUN_011899e0();
    *(undefined4 *)(lVar9 + 0x18) = 0x80318;
    *(long **)(lVar9 + 8) = plVar14;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    lVar7 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar7 + 0x10) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar10;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01189724:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar14 = (long *)param_1[0x2e];
      param_1[0x2e] = 0;
      if (plVar14 != (long *)0x0) {
        lVar7 = plVar14[6];
        psVar1 = (short *)(lVar7 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar2 == 0) {
LAB_01189438:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      param_1[0x2e] = lVar9;
      FUN_011897a4(param_1);
      if ((long *)param_1[0x30] != (long *)param_1[0x2f]) {
        if (*(char *)((long)param_1 + 0x244) == '\0') {
          uVar13 = *(undefined1 *)(param_1 + 0x54);
        }
        else {
          uVar13 = 0;
        }
        *(undefined1 *)(*(long *)param_1[0x2f] + 0x1fc) = uVar13;
        lVar7 = param_1[0x2f];
        if (1 < (ulong)(param_1[0x30] - lVar7 >> 3)) {
          uVar12 = 1;
          do {
            if (*(char *)((long)param_1 + 0x244) == '\0') {
              uVar13 = *(undefined1 *)(param_1 + 0x54);
            }
            else {
              uVar13 = 0;
            }
            *(undefined1 *)(*(long *)(lVar7 + uVar12 * 8) + 0x1fc) = uVar13;
            lVar7 = param_1[0x2f];
            uVar12 = uVar12 + 1;
          } while (uVar12 < (ulong)(param_1[0x30] - lVar7 >> 3));
        }
      }
      param_1[0xc] = param_1[0xc] | 0xe;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


