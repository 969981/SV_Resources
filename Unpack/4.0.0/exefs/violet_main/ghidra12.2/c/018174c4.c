/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018174c4; name: FUN_018174c4
 */


void FUN_018174c4(long *param_1,locale *param_2,char *param_3,long param_4,long param_5)

{
  locale *this;
  long *plVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  long lVar12;
  char *pcVar13;
  char cVar14;
  locale alStack_4b0 [8];
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  long *local_480;
  undefined8 uStack_478;
  char local_470 [1024];
  long local_70;
  undefined8 local_68;
  
  *param_1 = (long)param_2;
  param_1[1] = param_4;
  param_1[2] = param_5;
  param_1[3] = 0;
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x30) == 0) {
    plVar8 = &DAT_04859000;
    if ((DAT_04859438 & 1) == 0) goto LAB_018179cc;
    goto LAB_0181789c;
  }
  while( true ) {
    local_70 = *(long *)(lVar3 + 0x30);
    local_68 = *(undefined8 *)(lVar3 + 0x38);
    *(long *)(lVar3 + 0x30) = (long)param_2;
    *(undefined2 *)(lVar3 + 0x38) = 1;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(locale **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    plVar8 = (long *)(**(code **)(*(long *)param_2 + 0x10))(param_2,0xf0,0x10);
    puVar4 = PTR_DAT_047d66f8;
    if (plVar8 == (long *)0x0) {
      (**(code **)(*(long *)param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    *plVar8 = (long)(puVar4 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if (*(long *)(lVar9 + 0x80) != 0) {
        lVar12 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
      }
    }
    plVar8[1] = lVar12;
    this = (locale *)(plVar8 + 6);
    plVar10 = plVar8 + 5;
    *(int *)plVar10 = 0;
    *plVar8 = (long)&PTR_LAB_045e8b50;
    plVar8[4] = (long)&PTR_LAB_045e8b88;
    std::locale::locale(this);
    lVar9 = std::locale::use_facet((id *)this);
    plVar8[7] = lVar9;
    lVar9 = std::locale::use_facet((id *)this);
    plVar8[8] = lVar9;
    memset(plVar8 + 9,0,0x48);
    *(undefined4 *)(plVar8 + 3) = 0x1000f0;
    plVar8[1] = (long)param_2;
    plVar8[2] = (long)plVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    do {
      lVar7 = *plVar10;
      cVar14 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *(int *)plVar10 = (int)lVar7 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    if ((int)lVar7 == -1) break;
    plVar10 = (long *)param_1[3];
    param_1[3] = 0;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 5;
      do {
        lVar7 = *plVar1;
        iVar6 = (int)lVar7 + -1;
        cVar14 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar2) {
          *(int *)plVar1 = iVar6;
          cVar14 = ExclusiveMonitorsStatus();
        }
      } while (cVar14 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    param_1[3] = (long)plVar8;
    cVar14 = *param_3;
    if (cVar14 == '\0') {
      lVar7 = 0;
    }
    else {
      lVar9 = 0;
      do {
        pcVar13 = param_3 + 1;
        local_470[lVar9] = cVar14;
        lVar7 = lVar9 + 1;
        if ((*param_3 == '(') && (*pcVar13 != '?')) {
          local_470[lVar9 + 1] = '?';
          lVar7 = lVar9 + 3;
          local_470[lVar9 + 2] = ':';
        }
        cVar14 = *pcVar13;
        lVar9 = lVar7;
        param_3 = pcVar13;
      } while (cVar14 != '\0');
    }
    local_470[lVar7] = '\0';
    std::locale::locale(alStack_4b0);
    local_4a8 = std::locale::use_facet((id *)alStack_4b0);
    local_4a0 = std::locale::use_facet((id *)alStack_4b0);
    local_498 = 0;
    local_490 = 0;
    local_488 = 0;
    local_480 = (long *)0x0;
    uStack_478 = 0;
    sVar11 = strlen(local_470);
    param_3 = local_470 + sVar11;
    pcVar13 = (char *)FUN_014684b8(alStack_4b0,local_470,param_3);
    if (pcVar13 == param_3) {
      lVar7 = param_1[3];
      std::locale::operator=((locale *)(lVar7 + 0x30),alStack_4b0);
      plVar8 = local_480;
      uVar5 = local_488;
      *(undefined8 *)(lVar7 + 0x38) = local_4a8;
      *(undefined8 *)(lVar7 + 0x40) = local_4a0;
      *(undefined8 *)(lVar7 + 0x48) = local_498;
      *(undefined8 *)(lVar7 + 0x50) = local_490;
      local_488 = 0;
      local_480 = (long *)0x0;
      plVar10 = *(long **)(lVar7 + 0x60);
      *(undefined8 *)(lVar7 + 0x58) = uVar5;
      *(long **)(lVar7 + 0x60) = plVar8;
      if (plVar10 != (long *)0x0) {
        plVar8 = plVar10 + 1;
        do {
          lVar9 = *plVar8;
          cVar14 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar9 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined8 *)(lVar7 + 0x68) = uStack_478;
      if (local_480 != (long *)0x0) {
        plVar8 = local_480 + 1;
        do {
          lVar7 = *plVar8;
          cVar14 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *plVar8 = lVar7 + -1;
            cVar14 = ExclusiveMonitorsStatus();
          }
        } while (cVar14 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*local_480 + 0x10))(local_480);
          std::__shared_weak_count::__release_weak();
        }
      }
      std::locale::~locale(alStack_4b0);
      *(long *)(lVar3 + 0x30) = local_70;
      *(undefined2 *)(lVar3 + 0x38) = (undefined2)local_68;
      return;
    }
    FUN_028bd500();
    param_2 = alStack_4b0;
LAB_018179cc:
    iVar6 = __cxa_guard_acquire(&DAT_04859438);
    if (iVar6 != 0) {
      plVar8[0x86] = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
LAB_0181789c:
    *(long *)(lVar3 + 0x30) = plVar8[0x86];
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x53,"Reference counter overflows.");
}


