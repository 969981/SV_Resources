/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01444a28; name: FUN_01444a28
 */


void FUN_01444a28(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  short sVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  char cVar11;
  bool bVar12;
  undefined *puVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long *plVar23;
  char *__haystack;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  ulong uVar27;
  
  FUN_00d1a240(param_1,0x80038080);
  *param_1 = &DAT_045ecdd0;
  param_1[0x24] = 0;
  param_1[4] = &PTR_LAB_045ecf20;
  param_1[5] = &DAT_045ed048;
  param_1[6] = &PTR_LAB_045ed0a0;
  param_1[7] = &PTR_LAB_045ed0c8;
  *(undefined4 *)((long)param_1 + 0x134) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x25,0,1);
  param_1[0x29] = 0;
  param_1[0x2a] = param_1[1];
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0x1fffffffffffffff;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  uVar19 = param_2[1];
  uVar22 = param_2[2];
  param_1[0x2e] = *param_2;
  param_1[0x2f] = uVar19;
  param_1[0x30] = uVar22;
  plVar15 = (long *)param_2[4];
  param_1[0x32] = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))();
  }
  param_1[0x33] = param_2[5];
  param_1[0x34] = param_2[6];
  param_1[0x35] = param_2[7];
  plVar15 = (long *)param_2[8];
  param_1[0x36] = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 9);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if ((code *)param_2[0xe] != (code *)0x0) {
    (*(code *)param_2[0xe])(param_2 + 0x10,param_1 + 0x3e);
    uVar19 = param_2[0xf];
    param_1[0x3b] = param_2[0xd];
    param_1[0x3d] = uVar19;
    uVar19 = param_2[0xc];
    param_1[0x3c] = param_2[0xe];
    param_1[0x3a] = uVar19;
  }
  param_1[0x4a] = param_2[0x1c];
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((code *)param_2[0x20] != (code *)0x0) {
    (*(code *)param_2[0x20])(param_2 + 0x22,param_1 + 0x50);
    uVar19 = param_2[0x21];
    param_1[0x4d] = param_2[0x1f];
    param_1[0x4f] = uVar19;
    uVar19 = param_2[0x1e];
    param_1[0x4e] = param_2[0x20];
    param_1[0x4c] = uVar19;
  }
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  if ((code *)param_2[0x30] != (code *)0x0) {
    (*(code *)param_2[0x30])(param_2 + 0x32,param_1 + 0x60);
    uVar19 = param_2[0x31];
    param_1[0x5d] = param_2[0x2f];
    param_1[0x5f] = uVar19;
    uVar19 = param_2[0x2e];
    param_1[0x5e] = param_2[0x30];
    param_1[0x5c] = uVar19;
  }
  param_1[0x6c] = param_2[0x3e];
  lVar20 = param_2[0x3f];
  param_1[0x6d] = lVar20;
  if (lVar20 != 0) {
    piVar2 = (int *)(lVar20 + 0x28);
    do {
      iVar14 = *piVar2;
      cVar11 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar12) {
        *piVar2 = iVar14 + 1;
        cVar11 = ExclusiveMonitorsStatus();
      }
    } while (cVar11 != '\0');
    if (iVar14 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x6e] = param_2[0x40];
  param_1[0x6f] = param_2[0x41];
  param_1[0x70] = param_2[0x42];
  plVar15 = (long *)param_2[0x43];
  param_1[0x71] = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))();
  }
  param_1[0x73] = param_2[0x45];
  uVar19 = param_2[0x44];
  param_1[0x74] = param_2[0x46];
  param_1[0x72] = uVar19;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((long)param_1 + 0x3b4) = 0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar14 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar13 = PTR_DAT_047d3e30;
  param_1[0x77] = *(undefined8 *)PTR_DAT_047d3e30;
  param_1[0x78] = *(undefined8 *)(puVar13 + 8);
  plVar15 = *(long **)(puVar13 + 0x18);
  param_1[0x79] = *(undefined8 *)(puVar13 + 0x10);
  param_1[0x7a] = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))();
  }
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = PTR_DAT_047dcde8 + 0x10;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  lVar20 = tpidr_el0;
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar20 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar20 + 0x30) = DAT_04859430;
  }
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x85] = lVar16;
  param_1[0x86] = 0x666666666666666;
  param_1[0x89] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar20 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar20 + 0x30) = DAT_04859430;
  }
  param_1[0x8a] = lVar16;
  *(undefined4 *)(param_1 + 0x8f) = 0x3f800000;
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8b] = 0x666666666666666;
  param_1[0x8e] = 0;
  *(undefined2 *)(param_1 + 0x90) = 1;
  *(undefined1 *)((long)param_1 + 0x482) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar20 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar20 + 0x30) = DAT_04859430;
  }
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x97] = lVar16;
  param_1[0x98] = 0x666666666666666;
  param_1[0x9b] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04865a38), iVar14 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar16 == 0) || (*(long *)(lVar16 + 0x80) == 0)) ||
      (lVar16 = *(long *)(lVar16 + *(long *)(lVar16 + 0x80) * 8 + -8), lVar16 == 0)) &&
     (lVar16 = *(long *)(lVar20 + 0x30), lVar16 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_04859438), iVar14 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar16 = DAT_04859430;
    *(long *)(lVar20 + 0x30) = DAT_04859430;
  }
  param_1[0x9c] = lVar16;
  plVar15 = (long *)param_1[0x30];
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x9d] = 0x666666666666666;
  param_1[0xa0] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  uVar19 = *param_2;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = uVar19;
  param_1[0xa8] = 0xfffffffffffffff;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  uVar19 = *param_2;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = uVar19;
  param_1[0xaf] = 0x38e38e38e38e38e;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  uVar19 = *param_2;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = uVar19;
  param_1[0xb6] = 0xfffffffffffffff;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((plVar15 != (long *)0x0) && (plVar10 = param_1 + 0x27, plVar10 != plVar15)) {
    plVar23 = (long *)param_1[0x2a];
    plVar1 = param_1 + 0x2a;
    if (plVar23 == (long *)plVar15[3]) {
      lVar20 = param_1[0x29];
      plVar23 = (long *)param_1[0x27];
    }
    else {
      plVar26 = (long *)param_1[0x27];
      plVar25 = (long *)param_1[0x28];
      if (plVar25 == plVar26) {
        plVar25 = plVar26;
      }
      else {
        do {
          plVar25 = plVar25 + -1;
          plVar23 = (long *)*plVar25;
          if (plVar23 != (long *)0x0) {
            lVar20 = plVar23[6];
            psVar3 = (short *)(lVar20 + 0x1a);
            do {
              sVar6 = *psVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
              if (bVar12) {
                *psVar3 = sVar6 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (sVar6 == 1) {
              *(undefined8 *)(lVar20 + 0x10) = 0;
              (**(code **)(*plVar23 + 0x50))();
            }
            else if (sVar6 == 0) goto LAB_01445650;
          }
        } while (plVar25 != plVar26);
        plVar25 = (long *)*plVar10;
        plVar23 = (long *)*plVar1;
      }
      lVar20 = param_1[0x29];
      param_1[0x28] = plVar26;
      uVar27 = (**(code **)(*plVar23 + 0xf8))(plVar23);
      if (((uVar27 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
        (**(code **)(*plVar23 + 0x18))(plVar23,plVar25,lVar20 - (long)plVar25,8);
      }
      else {
        FUN_00c48fe8(plVar23,plVar25,lVar20 - (long)plVar25,8);
      }
      plVar23 = (long *)0x0;
      lVar20 = 0;
      *plVar10 = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
    }
    lVar16 = plVar15[3];
    lVar7 = plVar15[4];
    lVar8 = plVar15[6];
    param_1[0x2c] = plVar15[5];
    param_1[0x2d] = lVar8;
    *plVar1 = lVar16;
    param_1[0x2b] = lVar7;
    puVar24 = (undefined8 *)*plVar15;
    puVar9 = (undefined8 *)plVar15[1];
    uVar27 = (long)puVar9 - (long)puVar24 >> 3;
    if ((ulong)(lVar20 - (long)plVar23 >> 3) < uVar27) {
      if (plVar23 != (long *)0x0) {
        plVar26 = (long *)param_1[0x28];
        plVar15 = plVar23;
        if (plVar26 != plVar23) {
          do {
            plVar26 = plVar26 + -1;
            plVar15 = (long *)*plVar26;
            if (plVar15 != (long *)0x0) {
              lVar20 = plVar15[6];
              psVar3 = (short *)(lVar20 + 0x1a);
              do {
                sVar6 = *psVar3;
                cVar11 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(psVar3,0x10);
                if (bVar12) {
                  *psVar3 = sVar6 + -1;
                  cVar11 = ExclusiveMonitorsStatus();
                }
              } while (cVar11 != '\0');
              if (sVar6 == 1) {
                *(undefined8 *)(lVar20 + 0x10) = 0;
                (**(code **)(*plVar15 + 0x50))();
              }
              else if (sVar6 == 0) {
LAB_01445650:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
          } while (plVar26 != plVar23);
          plVar15 = (long *)*plVar10;
          lVar20 = param_1[0x29];
        }
        plVar26 = (long *)param_1[0x2a];
        param_1[0x28] = plVar23;
        uVar21 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar21 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,plVar15,lVar20 - (long)plVar15,8);
        }
        else {
          FUN_00c48fe8(plVar26,plVar15,lVar20 - (long)plVar15,8);
        }
        lVar20 = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        *plVar10 = 0;
      }
      uVar21 = param_1[0x2b];
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar27 <= uVar21) {
        if (uVar27 <= (ulong)(lVar20 >> 2)) {
          uVar27 = lVar20 >> 2;
        }
        if (uVar21 >> 1 <= (ulong)(lVar20 >> 3)) {
          uVar27 = uVar21;
        }
        if (uVar27 <= uVar21) {
          lVar20 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar27 << 3,8);
          if (lVar20 == 0) {
            (**(code **)(*(long *)*plVar1 + 0xe8))();
          }
          param_1[0x29] = lVar20 + uVar27 * 8;
          param_1[0x27] = lVar20;
          param_1[0x28] = lVar20;
          if (puVar24 != puVar9) {
            FUN_014456cc(plVar1,lVar20,puVar24);
            lVar16 = lVar20 + 8;
            if (puVar24 + 1 != puVar9) {
              FUN_014456cc(plVar1,lVar20 + 8);
              lVar16 = lVar20 + 0x10;
              for (puVar24 = puVar24 + 2; puVar24 != puVar9; puVar24 = puVar24 + 1) {
                FUN_014456cc(plVar1,lVar16,puVar24);
                lVar16 = lVar16 + 8;
              }
            }
            lVar20 = lVar16;
          }
          param_1[0x28] = lVar20;
          goto LAB_01444fac;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar4 = (undefined8 *)((long)puVar24 + (param_1[0x28] - (long)plVar23));
    uVar21 = param_1[0x28] - (long)plVar23 >> 3;
    puVar5 = puVar4;
    if (uVar27 <= uVar21) {
      puVar5 = puVar9;
    }
    while (puVar5 != puVar24) {
      FUN_01445844(plVar23,*puVar24);
      plVar23 = plVar23 + 1;
      puVar24 = puVar24 + 1;
    }
    if (uVar21 < uVar27) {
      lVar16 = param_1[0x28];
      lVar20 = lVar16;
      if (puVar5 != puVar9) {
        FUN_014456cc(plVar1,lVar16,puVar4);
        lVar20 = lVar16 + 8;
        if (puVar4 + 1 != puVar9) {
          FUN_014456cc(plVar1,lVar20,puVar4 + 1);
          lVar20 = lVar16 + 0x10;
          for (puVar4 = puVar4 + 2; puVar4 != puVar9; puVar4 = puVar4 + 1) {
            FUN_014456cc(plVar1,lVar20,puVar4);
            lVar20 = lVar20 + 8;
          }
        }
      }
      param_1[0x28] = lVar20;
    }
    else {
      FUN_028ff1a8(plVar10,plVar23);
    }
  }
LAB_01444fac:
  plVar15 = (long *)param_1[0x27];
  plVar10 = (long *)param_1[0x28];
  *(undefined4 *)((long)param_1 + 0x39c) = 0;
  puVar13 = PTR_PTR_047d4508;
  while( true ) {
    if (plVar15 == plVar10) {
      return;
    }
    puVar24 = (undefined8 *)puVar13;
    if (*(long *)(*plVar15 + 0x40) != 0) {
      puVar24 = (undefined8 *)(*(long *)(*plVar15 + 0x40) + 0x38);
    }
    __haystack = (char *)*puVar24;
    pcVar17 = strstr(__haystack,"p1_");
    if (pcVar17 != (char *)0x0) break;
    pcVar17 = strstr(__haystack,"p2_");
    if (pcVar17 != (char *)0x0) {
      uVar18 = 2;
      goto LAB_01445104;
    }
    plVar15 = plVar15 + 1;
  }
  uVar18 = 1;
LAB_01445104:
  *(undefined4 *)((long)param_1 + 0x39c) = uVar18;
  return;
}


