/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01027bbc; name: FUN_01027bbc
 */


void FUN_01027bbc(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *local_78;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  FUN_00d1a240(param_1,0x80098080);
  *param_1 = (long)&PTR_FUN_045ddf48;
  param_1[4] = (long)&PTR_LAB_045de0e0;
  param_1[5] = (long)&DAT_045de208;
  param_1[6] = (long)&PTR_LAB_045de260;
  plVar8 = param_1 + 7;
  *plVar8 = (long)&PTR_LAB_045de288;
  param_1[0x24] = 0;
  param_1[0x25] = (long)&PTR_LAB_045de2c0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((long)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x29,0,1);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar7 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2e] = 0x666666666666666;
  param_1[0x2f] = 0;
  param_1[0x2d] = lVar5;
  param_1[0x31] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar7 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x32] = lVar5;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x33] = 0x666666666666666;
  param_1[0x34] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar7 + 0x30), lVar5 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar5 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x54] = lVar5;
  param_1[0x55] = 0x1ffffffffffffff;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)((long)param_1 + 0x2dc) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x5a,0,1);
  param_1[0x5c] = 0;
  param_1[0x5d] = -1;
  FUN_00ddaef8(param_1 + 0x5e,&DAT_03c886bc,0);
  *(undefined4 *)(param_1 + 0x5f) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x2fc) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((long)param_1 + 0x331) = 0x101;
  *(undefined2 *)((long)param_1 + 0x335) = 0x100;
  (**(code **)(*param_1 + 0x70))(param_1,0);
  if (((char)param_1[0xb] != '\0') || (*(char *)((long)param_1 + 0x59) != '\x05')) {
    lVar7 = param_1[0xb];
    *(undefined2 *)(param_1 + 0xb) = 0x500;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar8);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8,(short)lVar7);
  }
  *(char *)(param_1 + 0x66) = (char)param_2[6];
  FUN_0102825c(param_1,param_2 + 0x18);
  *(undefined1 *)((long)param_1 + 0x331) = *(undefined1 *)((long)param_2 + 0x31);
  pcVar6 = (code *)param_1[0x41];
  if (pcVar6 != (code *)0x0) {
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    (*pcVar6)(param_1 + 0x44);
  }
  if ((code *)param_2[10] != (code *)0x0) {
    (*(code *)param_2[10])(param_2 + 0xc,param_1 + 0x44);
    lVar7 = param_2[0xb];
    param_1[0x41] = param_2[9];
    param_1[0x43] = lVar7;
    lVar7 = param_2[8];
    param_1[0x42] = param_2[10];
    param_1[0x40] = lVar7;
  }
  if ((*param_2 != 0) && (**(char **)(*param_2 + 0x38) != '\0')) {
    local_70 = &DAT_afc4d6c05abef19e;
    pcStack_68 = "default";
    local_60 = 7;
    local_58 = (long *)0x0;
    lVar7 = param_2[0x3a];
    plVar8 = (long *)param_2[0x3b];
    local_78 = plVar8;
    if (plVar8 == (long *)0x0) {
      FUN_010289bc(param_1,param_2,&local_70,0,lVar7,&local_78,param_2 + 0x3c);
    }
    else {
      plVar1 = plVar8 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_010289bc(param_1,param_2,&local_70,0,lVar7,&local_78,param_2 + 0x3c);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar7 = *plVar1;
          iVar4 = (int)lVar7 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


