/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df7cbc; name: FUN_00df7cbc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00df7cbc(long *param_1,long param_2,uint param_3)

{
  LightEventType *pLVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  bool bVar22;
  long *plVar23;
  bool bVar24;
  undefined1 auStack_70 [8];
  long *local_68;
  
  puVar7 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar7 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  puVar7 = PTR_DAT_047d8c78;
  if (lVar9 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar16 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar16;
  param_1[4] = (long)(puVar7 + 0x88);
  plVar23 = param_1 + 5;
  *plVar23 = (long)(puVar7 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar23);
  lVar6 = _UNK_03cabe68;
  lVar17 = _DAT_03cabe60;
  lVar16 = DAT_03cab628;
  lVar9 = DAT_03cab620;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  plVar21 = param_1 + 0x21;
  param_1[9] = lVar16;
  param_1[8] = lVar9;
  param_1[0xb] = lVar6;
  param_1[10] = lVar17;
  lVar6 = _UNK_03cabe58;
  lVar17 = _DAT_03cabe50;
  lVar16 = _UNK_03caa5b8;
  lVar9 = _DAT_03caa5b0;
  *(undefined8 *)((long)param_1 + 0xed) = 0;
  param_1[0xd] = lVar16;
  param_1[0xc] = lVar9;
  param_1[0xf] = lVar6;
  param_1[0xe] = lVar17;
  lVar16 = _UNK_03caa988;
  lVar9 = _DAT_03caa980;
  *param_1 = (long)&DAT_045eb438;
  param_1[4] = (long)&PTR_LAB_045eb568;
  param_1[0x19] = lVar16;
  param_1[0x18] = lVar9;
  param_1[0x1b] = lVar6;
  param_1[0x1a] = lVar17;
  *plVar23 = (long)&DAT_045eb5b8;
  param_1[0x1f] = (long)&PTR_LAB_045eb610;
  param_1[0x20] = 0;
  FUN_00df91bc();
  param_1[0x6f] = 0;
  param_1[0x6d] = (long)&DAT_cbf29ce484222645;
  param_1[0x6e] = (long)&DAT_03c886bc;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  lVar9 = tpidr_el0;
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar9 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0x77] = lVar16;
  param_1[0x78] = 0;
  *(undefined4 *)((long)param_1 + 0x3d4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x79,0,1);
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar9 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  param_1[0x7e] = lVar16;
  param_1[0x7f] = 0;
  *(undefined4 *)((long)param_1 + 0x40c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x80,0,1);
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar9 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar9 + 0x30) = DAT_04859430;
  }
  pLVar1 = (LightEventType *)(param_1 + 0x89);
  param_1[0x85] = lVar16;
  plVar23 = param_1 + 0x88;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)((long)param_1 + 0x454) = 1;
  nn::os::InitializeLightEvent(pLVar1,0,1);
  param_1[0x8b] = 0;
  param_1[0x8c] = param_2;
  if (param_2 == 0) goto LAB_00df7f64;
  lVar9 = *(long *)(param_2 + 0x30);
  if (*(long *)(lVar9 + 0x10) == 0) goto LAB_00df8950;
  psVar2 = (short *)(lVar9 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar22 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar22) {
      *psVar2 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_00df7f64:
    *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    puVar7 = PTR_DAT_047db010;
    if (*(code **)(PTR_DAT_047db010 + 0x10) != (code *)0x0) {
      (**(code **)(PTR_DAT_047db010 + 0x10))(PTR_DAT_047db010 + 0x20,param_1 + 0x92);
      lVar16 = *(long *)(puVar7 + 8);
      param_1[0x91] = *(long *)(puVar7 + 0x18);
      lVar9 = *(long *)(puVar7 + 0x10);
      param_1[0x8e] = *(long *)puVar7;
      param_1[0x8f] = lVar16;
      param_1[0x90] = lVar9;
    }
    *(undefined1 *)(param_1 + 0x9e) = 1;
    *(undefined8 *)((long)param_1 + 0x4f4) = 0x100000001;
    *(undefined8 *)((long)param_1 + 0x4fc) = 0x1000000000000;
    param_1[0xa1] = 0;
    *(undefined4 *)((long)param_1 + 0x51c) = 1;
    nn::os::InitializeLightEvent(param_1 + 0xa2,0,1);
    *(undefined1 *)(param_1 + 0xa4) = 0;
    param_1[0xa7] = 0;
    FUN_00dfa020(param_2,param_1,~param_3 & 1);
    plVar19 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00df891c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar19;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x50,8);
    puVar7 = PTR_DAT_047d66f8;
    if (plVar10 == (long *)0x0) {
LAB_00df8920:
      (**(code **)(*plVar19 + 0xe8))(plVar19);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    plVar10[2] = 0;
    *(undefined4 *)(plVar10 + 3) = 0;
    *plVar10 = (long)(puVar7 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = 0;
      if (*(long *)(lVar16 + 0x80) != 0) {
        lVar17 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8);
      }
    }
    plVar10[1] = lVar17;
    plVar20 = plVar10 + 5;
    *(int *)plVar20 = 0;
    *plVar10 = (long)&PTR_LAB_045eb680;
    plVar10[4] = (long)&PTR_LAB_045eb6b8;
    plVar10[6] = 0;
    *(undefined4 *)((long)plVar10 + 0x44) = 1;
    nn::os::InitializeLightEvent(plVar10 + 7,0,1);
    plVar10[9] = (long)param_1;
    plVar10[1] = (long)plVar19;
    plVar10[2] = (long)plVar10;
    *(undefined4 *)(plVar10 + 3) = 0x80050;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    do {
      lVar9 = *plVar20;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar22) {
        *(int *)plVar20 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar19 = (long *)param_1[0x20];
    param_1[0x20] = 0;
    if (plVar19 != (long *)0x0) {
      plVar20 = plVar19 + 5;
      do {
        lVar9 = *plVar20;
        iVar8 = (int)lVar9 + -1;
        cVar4 = '\x01';
        bVar22 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar22) {
          *(int *)plVar20 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar19 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
        pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar13 = "DecrementReferenceInternal";
        pcVar14 = 
        "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
        ;
        pcVar15 = "Reference counter underflows.";
        goto LAB_00df8990;
      }
    }
    param_1[0x20] = (long)plVar10;
    if ((param_3 & 1) != 0) {
      lVar9 = param_1[0x86];
      param_1[0x87] = param_1[0x87] | 2;
      *(undefined1 *)(param_1 + 0x86) = 1;
      if ((char)lVar9 == '\0') {
        lVar16 = *plVar23;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar16) {
          lVar9 = nn::os::GetCurrentThread();
LAB_00df851c:
          if (*plVar23 == 0) goto code_r0x00df8524;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          do {
            if (*plVar23 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar1);
                while (*plVar23 == 0) {
                  cVar4 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar22) {
                    *plVar23 = lVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00df852c;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar22) {
              *plVar23 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00df852c:
          bVar22 = false;
          plVar19 = plVar23;
          goto LAB_00df8534;
        }
        plVar19 = (long *)0x0;
        bVar22 = true;
LAB_00df8534:
        uVar18 = param_1[0x8b];
        param_1[0x8b] = uVar18 | 4;
        if (((uVar18 & 7) == 0) && (param_1[0x8c] != 0)) {
          FUN_00d37b18(param_1[0x8c],param_1);
        }
        if (!bVar22) {
          *plVar19 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
        }
        (**(code **)(*param_1 + 0x108))(param_1);
        FUN_00cf6de0(plVar21,auStack_70);
      }
      FUN_00da04fc(plVar21,1,0);
    }
    plVar19 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00df891c;
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar19;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar10 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x230,0x10);
    if (plVar10 == (long *)0x0) goto LAB_00df8920;
    FUN_00df8ae0();
    *(undefined4 *)(plVar10 + 3) = 0x100230;
    plVar10[1] = (long)plVar19;
    plVar10[2] = (long)plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    lVar9 = plVar10[0x13];
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_00df8950:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar22 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar22) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar11;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
LAB_00df8210:
      plVar19 = plVar10 + 4;
      (**(code **)(*plVar19 + 0xe8))(plVar19,param_1);
      (**(code **)(*plVar19 + 0x68))(plVar19);
      local_68 = plVar10;
      FUN_00df8c30(plVar21,&local_68);
      if (local_68 != (long *)0x0) {
        lVar9 = local_68[0x13];
        psVar2 = (short *)(lVar9 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar22) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_68 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      (**(code **)(*param_1 + 0x100))(param_1,plVar19);
      lVar16 = param_1[0x88];
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 != lVar16) {
        lVar9 = nn::os::GetCurrentThread();
LAB_00df8280:
        if (*plVar23 == 0) goto code_r0x00df8288;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        do {
          if (*plVar23 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar1);
              while (*plVar23 == 0) {
                cVar4 = '\x01';
                bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar22) {
                  *plVar23 = lVar9;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_00df8290;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar22) {
            *plVar23 = lVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_00df8290:
        bVar22 = false;
        plVar21 = plVar23;
        goto LAB_00df8298;
      }
      plVar21 = (long *)0x0;
      bVar22 = true;
LAB_00df8298:
      if ((*(byte *)(param_1 + 0x8b) >> 2 & 1) == 0) {
        lVar16 = *plVar23;
        lVar9 = nn::os::GetCurrentThread();
        if (lVar9 != lVar16) {
          lVar9 = nn::os::GetCurrentThread();
LAB_00df838c:
          if (*plVar23 == 0) goto code_r0x00df8394;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent(pLVar1);
          do {
            if (*plVar23 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent(pLVar1);
                while (*plVar23 == 0) {
                  cVar4 = '\x01';
                  bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar24) {
                    *plVar23 = lVar9;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') goto LAB_00df839c;
                }
              } while( true );
            }
            cVar4 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar24) {
              *plVar23 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
LAB_00df839c:
          bVar24 = false;
          goto LAB_00df83a0;
        }
        plVar23 = (long *)0x0;
        bVar24 = true;
LAB_00df83a0:
        uVar18 = param_1[0x8b];
        param_1[0x8b] = uVar18 & 0xfffffffffffffffe;
        if (((uVar18 & 7) != 0) != ((uVar18 & 6) != 0)) {
          lVar9 = param_1[0x8c];
          if ((uVar18 & 7) == 0) {
            if (lVar9 != 0) {
              FUN_00d37b18(lVar9,param_1);
            }
          }
          else if (lVar9 != 0) {
            plVar19 = (long *)(lVar9 + 0x138);
            lVar16 = nn::os::GetCurrentThread();
LAB_00df848c:
            if (*plVar19 == 0) goto code_r0x00df8494;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x140));
            do {
              if (*plVar19 != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x140));
                  while (*plVar19 == 0) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                    if (bVar5) {
                      *plVar19 = lVar16;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') goto LAB_00df849c;
                  }
                } while( true );
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *plVar19 = lVar16;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
LAB_00df849c:
            FUN_00d37f30(lVar9,param_1);
            *(undefined8 *)(lVar9 + 0x138) = 0;
            nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x140));
          }
        }
        if (!bVar24) {
          *plVar23 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
        }
      }
      else {
        (**(code **)(*plVar19 + 0xf8))(plVar19);
      }
      if (!bVar22) {
        *plVar21 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar21 + 1));
      }
      param_1[0x73] = (long)plVar10;
      if (((char)plVar10[0xb] != -0x7e) || (*(char *)((long)plVar10 + 0x59) != -0x7e)) {
        lVar9 = plVar10[0xb];
        plVar21 = plVar10 + 7;
        *(undefined2 *)(plVar10 + 0xb) = 0x8282;
        if (plVar10[9] != 0) {
          FUN_00c6a584(plVar10[9],plVar21);
        }
        (**(code **)(*plVar21 + 0x20))(plVar21,(short)lVar9);
      }
      return;
    }
    if (sVar3 != -1) goto LAB_00df8210;
  }
  else if (sVar3 != -1) goto LAB_00df7f64;
  pcVar12 = "count != 0";
  pcVar13 = "AddReference";
  pcVar14 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
  ;
  pcVar15 = "Reference counter overflows.";
LAB_00df8990:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar12,pcVar13,pcVar14,0x58,pcVar15);
code_r0x00df8524:
  cVar4 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar22) {
    *plVar23 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00df852c;
  goto LAB_00df851c;
code_r0x00df8288:
  cVar4 = '\x01';
  bVar22 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar22) {
    *plVar23 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00df8290;
  goto LAB_00df8280;
code_r0x00df8394:
  cVar4 = '\x01';
  bVar24 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar24) {
    *plVar23 = lVar9;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00df839c;
  goto LAB_00df838c;
code_r0x00df8494:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar5) {
    *plVar19 = lVar16;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00df849c;
  goto LAB_00df848c;
}


