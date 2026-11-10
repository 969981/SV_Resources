/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012aaa94; name: FUN_012aaa94
 */


void FUN_012aaa94(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  code *pcVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 uStack_68;
  long local_48;
  
  puVar6 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar6 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar6 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar19 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar19;
  param_1[4] = (long)(puVar6 + 0x88);
  plVar21 = param_1 + 5;
  *plVar21 = (long)(puVar6 + 0xd8);
  plVar22 = param_1 + 6;
  *plVar22 = 0;
  param_1[7] = 0;
  FUN_00d1a3f4(plVar22,plVar21);
  *param_1 = (long)&DAT_0459be40;
  param_1[4] = (long)&PTR_LAB_0459beb8;
  param_1[8] = 0;
  param_1[9] = 0;
  *plVar21 = (long)&DAT_0459bf08;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x100;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_012abe8c(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  FUN_00fabf24(param_1 + 0x4a);
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  lVar11 = tpidr_el0;
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0x5a] = lVar19;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5b] = 0x7ffffffffffffff;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0x61] = lVar19;
  param_1[0x62] = 0x7ffffffffffffff;
  param_1[0x6d] = -0x100000000;
  *(undefined2 *)(param_1 + 0x74) = 0x8000;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x6c] = 1;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0;
  *(undefined1 *)((long)param_1 + 0x3a2) = 0x80;
  param_1[0x75] = 0;
  FUN_0119456c(param_1 + 0x76);
  FUN_012abe74(param_1 + 0x91);
  memset(param_1 + 0x9a,0,0x50);
  *(undefined1 *)(param_1 + 0xa4) = 1;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined2 *)(param_1 + 200) = 1;
  *(undefined1 *)((long)param_1 + 0x642) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xcc] = lVar19;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xcd] = 0xaaaaaaaaaaaaaaa;
  param_1[0xd1] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd2] = lVar19;
  param_1[0xd3] = 0x666666666666666;
  param_1[0xd6] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xd7] = lVar19;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0;
  param_1[0xd8] = 0x666666666666666;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  FUN_00fabf24(param_1 + 0xdd);
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xee] = 0;
  *(undefined4 *)(param_1 + 0xef) = 0;
  param_1[0xec] = lVar19;
  param_1[0xed] = 0x333333333333333;
  param_1[0xf0] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xf1] = lVar19;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf2] = 0x333333333333333;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0x3f800000;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xf9] = lVar19;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfa] = 0x7ffffffffffffff;
  param_1[0xfd] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
      (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) &&
     (lVar19 = *(long *)(lVar11 + 0x30), lVar19 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar19 = DAT_04859430;
    *(long *)(lVar11 + 0x30) = DAT_04859430;
  }
  param_1[0xfe] = lVar19;
  param_1[0xff] = 0x7ffffffffffffff;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x101) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0x3f800000;
  param_1[0x104] = (long)&PTR_LAB_0459bf60;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  (*DAT_04859f60)(&local_70,&DAT_04859f80);
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 5;
    do {
      lVar11 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)lVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = (long *)param_1[8];
  param_1[8] = (long)local_70;
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 5;
    do {
      lVar11 = *plVar13;
      iVar10 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
      goto LAB_012abc98;
    }
  }
  if (local_70 != (long *)0x0) {
    plVar12 = local_70 + 5;
    do {
      lVar11 = *plVar12;
      iVar10 = (int)lVar11 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar11 == 0) {
      pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar16 = "DecrementReferenceInternal";
      pcVar17 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar18 = "Reference counter underflows.";
      goto LAB_012abc98;
    }
  }
  *(undefined1 *)((long)param_1 + 0x641) = DAT_04841648;
  plVar12 = (long *)param_1[1];
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar12;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x378,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00da2ea0(plVar13,*(undefined8 *)PTR_DAT_047d8d98,param_1 + 4,1);
  *plVar13 = (long)&DAT_0459bf80;
  plVar13[4] = (long)&PTR_LAB_0459c030;
  plVar13[5] = (long)&DAT_0459c080;
  local_70 = param_1;
  FUN_012abf54(plVar13,&local_70);
  local_70 = param_1;
  FUN_012ac0a0(plVar13,&local_70);
  (**(code **)(*plVar13 + 0x88))(plVar13,0);
  *(undefined4 *)(plVar13 + 3) = 0x80378;
  plVar13[1] = (long)plVar12;
  plVar13[2] = (long)plVar13;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  lVar11 = plVar13[6];
  plVar13[0x37] = plVar13[0x37] | 8;
  if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    *(undefined8 *)(lVar11 + 8) = uVar14;
    *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
  }
  else if (sVar3 == -1) {
    pcVar15 = "count != 0";
    pcVar16 = "AddReference";
    pcVar17 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar18 = "Reference counter overflows.";
LAB_012abc98:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar15,pcVar16,pcVar17,0x58,pcVar18);
  }
  plVar12 = plVar13;
  if ((long *)plVar13[0x36] != (long *)0x0) {
    plVar12 = (long *)plVar13[0x36];
  }
  *(undefined4 *)(plVar13 + 0x6e) = 0;
  if (plVar12 != plVar13) {
    (**(code **)(*plVar12 + 0x88))(plVar12,0);
  }
  plVar12 = plVar13;
  if ((long *)plVar13[0x35] != (long *)0x0) {
    plVar12 = (long *)plVar13[0x35];
  }
  if (plVar12 != plVar13) {
    (**(code **)(*plVar12 + 0x88))(plVar12,0);
  }
  plVar12 = plVar13 + 0x3a;
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_012ab100;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x3b));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar13 + 0x3b));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_012ab100;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_012ab100:
  puVar6 = PTR_DAT_047dd280;
  if (((*PTR_DAT_047dd280 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  puVar8 = PTR_DAT_047dd290;
  puVar7 = PTR_DAT_047dd288;
  lVar11 = *(long *)PTR_DAT_047dd288;
  *(long *)PTR_DAT_047dd290 = lVar11;
  FUN_00e220f4(plVar13,*(undefined8 *)(lVar11 + 0x30),0);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047dd280), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dd2e0,PTR_DAT_047dd288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd280);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  FUN_00e220f4(plVar13,0,*(undefined8 *)(lVar11 + 0x38));
  plVar13[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar13 + 0x3b));
  plVar12 = (long *)param_1[0x73];
  param_1[0x73] = 0;
  if (plVar12 != (long *)0x0) {
    lVar11 = plVar12[6];
    psVar1 = (short *)(lVar11 + 0x1a);
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
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar12 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x73] = (long)plVar13;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_00c43ef0(&local_70,plVar22);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  if ((long *)local_70[2] == plVar21) {
    FUN_0104dbac(&local_80,&local_70);
  }
  plVar21 = local_70;
  if (local_70 != (long *)0x0) {
    plVar22 = local_70 + 3;
    do {
      sVar3 = (short)*plVar22;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(short *)plVar22 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_48 = *plVar21;
        FUN_00c44438(lVar11 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_012ab314;
  }
  pcVar20 = (code *)param_1[0x107];
  if (pcVar20 != (code *)0x0) {
    param_1[0x108] = 0;
    param_1[0x109] = 0;
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    (*pcVar20)(param_1 + 0x10a);
  }
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  FUN_0104d888(param_1 + 0x10a,&local_80);
  puVar9 = local_80;
  param_1[0x106] = (long)&LAB_0216c16c;
  param_1[0x107] = (long)&LAB_0216c30c;
  param_1[0x108] = (long)&LAB_0216c81c;
  param_1[0x109] = (long)&LAB_0216c830;
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
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70 = (long *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_70);
      }
    }
    else if (sVar3 == 0) {
LAB_012ab314:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (((*PTR_DAT_047dd2e8 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047dd2e8), iVar10 != 0)) {
    FUN_00100190(&LAB_02b3c260,PTR_DAT_047dd2f0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd2e8);
  }
  lVar11 = *(long *)PTR_DAT_047dd2f0;
  *(long *)PTR_DAT_047dd2f8 = lVar11;
  FUN_014dd4b8(*(undefined8 *)(lVar11 + 0x40),param_1 + 0x104);
  return;
}


