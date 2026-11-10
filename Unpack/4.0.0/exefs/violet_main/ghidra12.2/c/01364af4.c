/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01364af4; name: FUN_01364af4
 */


void FUN_01364af4(long param_1,long *param_2,long *param_3,byte *param_4,char *param_5,
                 undefined4 param_6,undefined8 param_7)

{
  short *psVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  short sVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  size_t sVar18;
  code *pcVar19;
  byte *pbVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  long *plVar28;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *local_e0;
  long *local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  long *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70 [2];
  
  plVar28 = (long *)*param_2;
  plVar22 = (long *)(param_1 + 0x40);
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar14 = (long *)*plVar22;
  *plVar22 = (long)plVar28;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *(long *)(param_1 + 0x48) = param_2[1];
  *(long *)(param_1 + 0x50) = param_2[2];
  *(long *)(param_1 + 0x58) = param_2[3];
  plVar28 = (long *)param_2[4];
  if (plVar28 != (long *)0x0) {
    (**(code **)(*plVar28 + 0x18))(plVar28);
  }
  plVar14 = *(long **)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = plVar28;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  puVar11 = PTR_DAT_047d3e28;
  *(int *)(param_1 + 0x68) = (int)param_2[5];
  puVar12 = PTR_DAT_047d3e30;
  if (param_4 == (byte *)0x0) {
    if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar27 = *(undefined1 **)puVar12;
    param_4 = *(byte **)(puVar12 + 8);
    sVar18 = *(size_t *)(puVar12 + 0x10);
    plVar28 = *(long **)(puVar12 + 0x18);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
  }
  else {
    puVar27 = &DAT_cbf29ce484222645;
    sVar18 = strlen((char *)param_4);
    bVar8 = *param_4;
    pbVar20 = param_4;
    while (bVar8 != 0) {
      pbVar20 = pbVar20 + 1;
      puVar27 = (undefined1 *)(((ulong)puVar27 ^ (ulong)bVar8) * 0x100000001b3);
      bVar8 = *pbVar20;
    }
    plVar28 = (long *)0x0;
  }
  plVar14 = *(long **)(param_1 + 0x88);
  *(undefined1 **)(param_1 + 0x70) = puVar27;
  *(byte **)(param_1 + 0x78) = param_4;
  *(size_t *)(param_1 + 0x80) = sVar18;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  *(long **)(param_1 + 0x88) = plVar28;
  puVar26 = (undefined8 *)PTR_PTR_047d4508;
  if (param_5 == (char *)0x0) {
    if (((*puVar11 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar13 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    uVar15 = *(undefined8 *)puVar12;
    uVar7 = *(undefined8 *)(puVar12 + 8);
    uVar6 = *(undefined8 *)(puVar12 + 0x10);
    plVar28 = *(long **)(puVar12 + 0x18);
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    *(undefined8 *)(param_1 + 0x90) = uVar15;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    *(undefined8 *)(param_1 + 0xa0) = uVar6;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    plVar14 = *(long **)(param_1 + 0xa8);
    *(long **)(param_1 + 0xa8) = plVar28;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    if (plVar28 != (long *)0x0) goto LAB_01365310;
  }
  else {
    if (*param_5 == '\0') {
      plVar28 = (long *)FUN_00d44228();
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x18))(plVar28);
      }
    }
    else {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar15 = *(undefined8 *)PTR_DAT_047d4248;
      *(undefined8 *)PTR_DAT_047d4250 = uVar15;
      FUN_00cf9884(&local_a8,uVar15,param_5);
      plVar28 = local_a8;
    }
    plVar14 = (long *)PTR_DAT_047d8b70;
    if (plVar28 != (long *)0x0) {
      plVar14 = plVar28 + 6;
    }
    lVar23 = *plVar14;
    plVar14 = puVar26;
    if (plVar28 != (long *)0x0) {
      plVar14 = plVar28 + 7;
    }
    lVar24 = *plVar14;
    if (plVar28 == (long *)0x0) {
      lVar25 = 0;
    }
    else {
      lVar25 = plVar28[8];
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    *(long *)(param_1 + 0x90) = lVar23;
    *(long *)(param_1 + 0x98) = lVar24;
    *(long *)(param_1 + 0xa0) = lVar25;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x18))(plVar28);
    }
    plVar14 = *(long **)(param_1 + 0xa8);
    *(long **)(param_1 + 0xa8) = plVar28;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x20))();
    }
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
LAB_01365310:
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
  }
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    if (*param_2 != 0) {
      puVar26 = (undefined8 *)(*param_2 + 0x38);
    }
    FUN_01366e10(&local_d8,*puVar26,param_1 + 0x1b8,param_1 + 0x1d8,0);
    FUN_01410c08(&local_a8,&local_d8);
    plVar28 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))();
    }
    plVar28 = local_a8;
    local_a8 = (long *)0x0;
    *(long **)(param_1 + 0x40) = plVar28;
    *(undefined8 *)(param_1 + 0x48) = local_a0;
    *(undefined8 **)(param_1 + 0x50) = local_98;
    *(undefined8 *)(param_1 + 0x58) = local_90;
    plVar28 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    uVar15 = local_88;
    local_88 = 0;
    *(undefined8 *)(param_1 + 0x60) = uVar15;
    *(undefined4 *)(param_1 + 0x68) = local_80._0_4_;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
  }
  uVar16 = FUN_00dc5c18(param_1 + 0xb0,1,plVar22,0,param_3);
  if ((uVar16 & 1) == 0) {
    plVar22 = (long *)0x0;
  }
  else {
    plVar22 = *(long **)(param_1 + 0xd0);
    if (plVar22 != (long *)0x0) {
      lVar23 = plVar22[6];
      if (*(long *)(lVar23 + 0x10) == 0) goto LAB_01365998;
      psVar1 = (short *)(lVar23 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar5 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (sVar5 == 0) {
        uVar15 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
        *(undefined8 *)(lVar23 + 8) = uVar15;
        *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) goto LAB_01365274;
    }
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  FUN_00c43ef0(&local_a8,param_1 + 0x30);
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  if (local_a8[2] == param_1 + 0x28) {
    FUN_01187348(&local_f8,&local_a8);
  }
  plVar28 = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar14 = local_a8 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *(short *)plVar14 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_a8 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_d8 = (long *)*plVar28;
        FUN_00c44438(lVar23 + 0x8040,&local_d8);
      }
    }
    else if (sVar5 == 0) goto LAB_01365194;
  }
  local_e8 = param_7;
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar15 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar15;
  FUN_00cbf5d4(&local_e0,uVar15,plVar22[1]);
  local_c8 = (undefined8 *)0x0;
  local_c0 = (long *)0x0;
  local_d8 = param_3;
  local_d0 = param_6;
  FUN_01365a38(&local_c8,&local_f8);
  local_b8 = local_e8;
  local_b0 = local_e0;
  if (local_e0 != (long *)0x0) {
    lVar23 = local_e0[6];
    if (*(long *)(lVar23 + 0x10) == 0) {
LAB_01365998:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
      *(undefined8 *)(lVar23 + 8) = uVar15;
      *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) {
LAB_01365274:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar28 = (long *)0x0;
  if (local_e0 != (long *)0x0) {
    plVar28 = local_e0 + 0xb;
  }
  if ((*(byte *)((long)plVar22 + 0x6d) & 1) == 0) {
    if ((*(byte *)((long)plVar22 + 0x6c) & 1) == 0) {
      plVar14 = plVar22 + 0xf;
      lVar23 = nn::os::GetCurrentThread();
LAB_01364e78:
      if (*plVar14 == 0) goto code_r0x01364e80;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar22 + 0x10));
            while (*plVar14 == 0) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *plVar14 = lVar23;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB_01364e88;
            }
          } while( true );
        }
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar23;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
LAB_01364e88:
      if ((*(byte *)((long)plVar22 + 0x6c) & 1) == 0) {
        local_a8 = local_d8;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        local_a0 = CONCAT44(local_a0._4_4_,local_d0);
        FUN_01186804(&local_98,&local_c8);
        local_88 = local_b8;
        local_80 = local_b0;
        if (local_b0 != (long *)0x0) {
          lVar23 = local_b0[6];
          if (*(long *)(lVar23 + 0x10) == 0) goto LAB_01365998;
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar5 = *psVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar5 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar5 == 0) {
            uVar15 = (**(code **)**(undefined8 **)(lVar23 + 0x10))();
            *(undefined8 *)(lVar23 + 8) = uVar15;
            *(undefined4 *)(lVar23 + 0x1c) = 0xfffffffe;
          }
          else if (sVar5 == -1) goto LAB_01365274;
        }
        local_78 = plVar28;
        if ((ulong)plVar22[0x1a] < (ulong)plVar22[0x1b]) {
          FUN_01366cbc(plVar22 + 0x19,&local_a8);
        }
        else {
          uVar16 = plVar22[0x1d];
          lVar23 = plVar22[0x1a] - plVar22[0x19] >> 4;
          if (0x7ffffffffffffffe < uVar16) {
            uVar16 = 0x7fffffffffffffff;
          }
          uVar2 = lVar23 * -0x71c71c71c71c71c7 + 1;
          if (uVar16 < uVar2) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar24 = plVar22[0x1b] - plVar22[0x19] >> 4;
          uVar21 = lVar24 * 0x1c71c71c71c71c72;
          if (uVar2 <= uVar21) {
            uVar2 = uVar21;
          }
          plVar28 = plVar22 + 0x1c;
          if (uVar16 >> 1 <= (ulong)(lVar24 * -0x71c71c71c71c71c7)) {
            uVar2 = uVar16;
          }
          if (uVar2 == 0) {
            lVar24 = 0;
          }
          else {
            lVar24 = (**(code **)(*(long *)*plVar28 + 0x10))((long *)*plVar28,uVar2 * 0x90,0x10);
            if (lVar24 == 0) {
              (**(code **)(*(long *)*plVar28 + 0xe8))();
            }
          }
          lVar25 = *plVar28;
          if (((DAT_04865a38 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(&DAT_04865a38), iVar13 != 0)) {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar17 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar17 != 0) {
            if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar25;
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          }
          puVar26 = (undefined8 *)(lVar24 + lVar23 * 0x10);
          lVar23 = lVar24 + lVar23 * 0x10;
          puVar26[2] = 0;
          puVar26[3] = 0;
          *puVar26 = 0;
          puVar26[1] = 0;
          *(undefined8 *)(lVar23 + 0x30) = 0;
          *(long **)(lVar23 + 0x20) = local_a8;
          *(undefined4 *)(lVar23 + 0x28) = (undefined4)local_a0;
          *(undefined8 *)(lVar23 + 0x38) = 0;
          FUN_01365a38((undefined8 *)(lVar23 + 0x30),&local_98);
          plVar14 = local_80;
          *(undefined8 *)(lVar23 + 0x40) = local_88;
          local_80 = (long *)0x0;
          *(long **)(lVar23 + 0x48) = plVar14;
          *puVar26 = &LAB_028fcec8;
          *(undefined1 **)(lVar23 + 8) = &LAB_028fcecc;
          *(undefined1 **)(lVar23 + 0x10) = &LAB_028fd03c;
          *(undefined1 **)(lVar23 + 0x18) = &LAB_028fd130;
          *(long **)(lVar23 + 0x80) = local_78;
          if (lVar17 != 0) {
            *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
          }
          lVar23 = plVar22[0x19];
          lVar25 = plVar22[0x1a];
          puVar3 = puVar26 + 0x12;
          if (lVar25 == lVar23) {
            lVar25 = lVar23;
          }
          else {
            do {
              puVar26 = puVar26 + -0x12;
              lVar25 = lVar25 + -0x90;
              FUN_00cbf394(plVar28,puVar26,lVar25);
            } while (lVar23 != lVar25);
            lVar23 = plVar22[0x19];
            lVar25 = plVar22[0x1a];
          }
          plVar22[0x19] = (long)puVar26;
          plVar22[0x1a] = (long)puVar3;
          lVar17 = plVar22[0x1b];
          plVar22[0x1b] = lVar24 + uVar2 * 0x90;
          while (lVar24 = lVar25, lVar24 != lVar23) {
            pcVar19 = *(code **)(lVar24 + -0x88);
            lVar25 = lVar24 + -0x90;
            if (pcVar19 != (code *)0x0) {
              *(undefined8 *)(lVar24 + -0x80) = 0;
              *(undefined8 *)(lVar24 + -0x78) = 0;
              *(undefined8 *)(lVar24 + -0x90) = 0;
              *(undefined8 *)(lVar24 + -0x88) = 0;
              (*pcVar19)(lVar24 + -0x70);
            }
          }
          if (lVar23 != 0) {
            plVar28 = (long *)*plVar28;
            uVar16 = (**(code **)(*plVar28 + 0xf8))(plVar28);
            if (((uVar16 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
              (**(code **)(*plVar28 + 0x18))(plVar28,lVar23,lVar17 - lVar23,0x10);
            }
            else {
              FUN_00c48fe8(plVar28,lVar23,lVar17 - lVar23,0x10);
            }
          }
        }
        if (local_80 != (long *)0x0) {
          lVar23 = local_80[6];
          psVar1 = (short *)(lVar23 + 0x1a);
          do {
            sVar5 = *psVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar5 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar23 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar5 == 0) goto LAB_01365970;
        }
        puVar26 = local_98;
        if (local_98 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_98 + 3);
          do {
            sVar5 = *psVar1;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar5 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (sVar5 == 1) {
            piVar4 = (int *)((long)local_98 + 0x1c);
            do {
              iVar13 = *piVar4;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar10) {
                *piVar4 = -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar13 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar23 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar23;
              local_70[0] = *puVar26;
              FUN_00c44438(lVar23 + 0x8040,local_70);
            }
          }
          else if (sVar5 == 0) goto LAB_01365194;
        }
      }
      else {
        FUN_01365d5c(&local_d8);
      }
      plVar22[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar22 + 0x10));
      goto LAB_01364dc0;
    }
    FUN_01365d5c(&local_d8);
  }
LAB_01364dc0:
  if (local_b0 != (long *)0x0) {
    lVar23 = local_b0[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_b0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01365970;
  }
  puVar26 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c8 + 3);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_c8 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_a8 = (long *)*puVar26;
        FUN_00c44438(lVar23 + 0x8040,&local_a8);
      }
    }
    else if (sVar5 == 0) goto LAB_01365194;
  }
  if (local_e0 != (long *)0x0) {
    lVar23 = local_e0[6];
    psVar1 = (short *)(lVar23 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
      (**(code **)(*local_e0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_01365970;
  }
  puVar26 = local_f8;
  if (local_f8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f8 + 3);
    do {
      sVar5 = *psVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_f8 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar10) {
          *piVar4 = -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_a8 = (long *)*puVar26;
        FUN_00c44438(lVar23 + 0x8040,&local_a8);
      }
    }
    else if (sVar5 == 0) {
LAB_01365194:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar23 = plVar22[6];
  psVar1 = (short *)(lVar23 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar10) {
      *psVar1 = sVar5 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar23 + 0x10) = 0;
    (**(code **)(*plVar22 + 0x50))(plVar22);
  }
  else if (sVar5 == 0) {
LAB_01365970:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
code_r0x01364e80:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar10) {
    *plVar14 = lVar23;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01364e88;
  goto LAB_01364e78;
}


