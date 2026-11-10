/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148686c; name: FUN_0148686c
 */


void FUN_0148686c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long *local_58;
  
  FUN_00d1a240(param_1,0x800b8180);
  *param_1 = &PTR_FUN_0459aad0;
  param_1[4] = &PTR_LAB_0459ac20;
  param_1[5] = &DAT_0459ad48;
  param_1[6] = &PTR_LAB_0459ada0;
  puVar15 = param_1 + 7;
  *puVar15 = &PTR_LAB_0459adc8;
  plVar14 = (long *)param_1[1];
  param_1[0x26] = 0;
  param_1[0x2c] = 0x3ffffffffffffff;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = plVar14;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
    uVar3 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[9] == 0) {
      ppuVar12 = &PTR_LAB_0459adc8;
    }
    else {
      FUN_00c6a584(param_1[9],puVar15);
      ppuVar12 = (undefined **)*puVar15;
    }
    (*(code *)ppuVar12[4])(puVar15,uVar3);
    plVar14 = (long *)param_1[1];
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01487080:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x198,8);
  if (plVar9 == (long *)0x0) {
    lVar8 = *plVar14;
  }
  else {
    memset(plVar9 + 1,0,400);
    puVar6 = PTR_DAT_047d66f8;
    plVar9[2] = 0;
    *(undefined4 *)(plVar9 + 3) = 0;
    *plVar9 = (long)(puVar6 + 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    puVar6 = PTR_DAT_047d8c78;
    if (lVar10 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      if (*(long *)(lVar10 + 0x80) != 0) {
        lVar13 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
      }
    }
    *plVar9 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar9[1] = lVar13;
    plVar9[4] = (long)(puVar6 + 0x88);
    plVar16 = plVar9 + 5;
    *plVar16 = (long)(puVar6 + 0xd8);
    plVar17 = plVar9 + 6;
    *plVar17 = 0;
    plVar9[7] = 0;
    FUN_00d1a3f4(plVar17,plVar16);
    *plVar9 = (long)&DAT_0459ae00;
    plVar9[4] = (long)&PTR_LAB_0459ae78;
    *plVar16 = (long)&DAT_0459aec8;
    FUN_014870d4(plVar9 + 8);
    FUN_014870d4(plVar9 + 0x15);
    *(undefined1 *)(plVar9 + 0x32) = 0;
    plVar9[0x22] = (long)&DAT_cbf29ce484222645;
    plVar9[0x23] = (long)&DAT_03c886bc;
    plVar9[0x26] = (long)&DAT_cbf29ce484222645;
    plVar9[0x27] = (long)&DAT_03c886bc;
    plVar9[0x2a] = (long)&DAT_cbf29ce484222645;
    plVar9[0x2b] = (long)&DAT_03c886bc;
    plVar9[0x2e] = (long)&DAT_cbf29ce484222645;
    plVar9[0x2f] = (long)&DAT_03c886bc;
    *(undefined4 *)(plVar9 + 3) = 0x80198;
    plVar9[0x24] = 0;
    plVar9[0x25] = 0;
    plVar9[0x28] = 0;
    plVar9[0x29] = 0;
    plVar9[0x2c] = 0;
    plVar9[0x2d] = 0;
    plVar9[0x30] = 0;
    plVar9[0x31] = 0;
    plVar9[1] = (long)plVar14;
    plVar9[2] = (long)plVar9;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    lVar8 = *plVar17;
    if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01487010:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    plVar16 = param_1 + 0x24;
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar11;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01487030;
    plVar14 = (long *)*plVar16;
    *plVar16 = 0;
    if (plVar14 != (long *)0x0) {
      lVar8 = plVar14[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01487058;
    }
    param_1[0x24] = plVar9;
    plVar14 = (long *)param_1[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01487080;
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,0x110,8);
    if (lVar10 != 0) {
      local_58 = (long *)*plVar16;
      if (local_58 != (long *)0x0) {
        lVar13 = local_58[6];
        if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01487010;
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
          *(undefined8 *)(lVar13 + 8) = uVar11;
          *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_01487030;
      }
      FUN_0148750c(lVar10,&local_58);
      if (local_58 != (long *)0x0) {
        lVar13 = local_58[6];
        psVar1 = (short *)(lVar13 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar13 + 0x10) = 0;
          (**(code **)(*local_58 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01487058;
      }
      *(undefined4 *)(lVar10 + 0x18) = 0x80110;
      *(long **)(lVar10 + 8) = plVar14;
      *(long *)(lVar10 + 0x10) = lVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      lVar8 = *(long *)(lVar10 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) goto LAB_01487010;
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar11;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01487030;
      plVar14 = (long *)param_1[0x25];
      param_1[0x25] = 0;
      if (plVar14 != (long *)0x0) {
        lVar8 = plVar14[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_01487058;
      }
      param_1[0x25] = lVar10;
      plVar14 = (long *)param_1[1];
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01487080;
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,0x88,8);
      if (lVar10 != 0) {
        local_58 = (long *)param_1[0x25];
        if (local_58 == (long *)0x0) {
          FUN_01487330(lVar10,&local_58);
        }
        else {
          lVar13 = local_58[6];
          if (*(long *)(lVar13 + 0x10) == 0) goto LAB_01487010;
          psVar1 = (short *)(lVar13 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
            *(undefined8 *)(lVar13 + 8) = uVar11;
            *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) goto LAB_01487030;
          plVar9 = local_58;
          FUN_01487330(lVar10,&local_58);
          if (plVar9 != (long *)0x0) {
            lVar13 = plVar9[6];
            psVar1 = (short *)(lVar13 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar13 + 0x10) = 0;
              (**(code **)(*plVar9 + 0x50))(plVar9);
            }
            else if (sVar2 == 0) goto LAB_01487058;
          }
        }
        *(undefined4 *)(lVar10 + 0x18) = 0x80088;
        *(long **)(lVar10 + 8) = plVar14;
        *(long *)(lVar10 + 0x10) = lVar10;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        lVar8 = *(long *)(lVar10 + 0x30);
        if (*(long *)(lVar8 + 0x10) != 0) {
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar2 == 0) {
            uVar11 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
            *(undefined8 *)(lVar8 + 8) = uVar11;
            *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
          }
          else if (sVar2 == -1) {
LAB_01487030:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          plVar14 = (long *)param_1[0x26];
          param_1[0x26] = 0;
          if (plVar14 != (long *)0x0) {
            lVar8 = plVar14[6];
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar2 == 1) {
              *(undefined8 *)(lVar8 + 0x10) = 0;
              (**(code **)(*plVar14 + 0x50))();
            }
            else if (sVar2 == 0) {
LAB_01487058:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          param_1[0x26] = lVar10;
          return;
        }
        goto LAB_01487010;
      }
    }
    lVar8 = *plVar14;
  }
  (**(code **)(lVar8 + 0xe8))(plVar14);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
}


