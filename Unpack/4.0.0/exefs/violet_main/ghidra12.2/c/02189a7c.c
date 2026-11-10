/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02189a7c; name: FUN_02189a7c
 */


void FUN_02189a7c(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  short sVar5;
  char cVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  long lVar20;
  short sVar21;
  long lVar22;
  long *plVar23;
  bool bVar24;
  long lVar25;
  ulong uVar26;
  long *local_280;
  long *local_278;
  long *local_270;
  undefined1 *local_268;
  undefined1 *local_260;
  undefined8 local_258;
  long *local_250;
  undefined4 local_248;
  undefined2 local_240;
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_180 [96];
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  long *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70 [2];
  
  lVar20 = *param_1;
  if ((lVar20 == 0) || (*(short *)(lVar20 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar20 + 0x1a);
  sVar21 = *(short *)(lVar20 + 0x1a);
LAB_02189ad8:
  sVar5 = *psVar1;
  if (sVar5 == sVar21) {
    cVar6 = '\x01';
    bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar24) {
      *psVar1 = sVar21 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_02189afc;
    bVar24 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_02189afc:
    bVar24 = false;
  }
  if (!bVar24) {
    sVar21 = sVar5;
    if (sVar5 == 0) {
      return;
    }
    goto LAB_02189ad8;
  }
  lVar20 = *(long *)(lVar20 + 0x10);
  if (lVar20 == 0) {
    return;
  }
  FUN_00c9e664(&local_280,lVar20 + 0xc0);
  if (local_280 == (long *)0x0) {
    if (local_278 == (long *)0x0) goto LAB_0218a03c;
    plVar11 = local_278 + 5;
    do {
      iVar10 = (int)*plVar11;
      iVar7 = iVar10 + -1;
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar24) {
        *(int *)plVar11 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
joined_r0x0218a2e4:
    if (iVar7 == 0) {
      (**(code **)(*local_278 + 0x10))();
LAB_0218a03c:
      if (local_280 != (long *)0x0) {
        (**(code **)(*local_280 + 0x60))();
      }
      (**(code **)(*(long *)(lVar20 + -0x28) + 0x60))();
      return;
    }
    if (iVar10 != 0) goto LAB_0218a03c;
  }
  else {
    local_270 = *(long **)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x48) + 0x460);
    uVar4 = *(uint *)(param_1 + 2);
    uVar26 = (ulong)uVar4;
    plVar11 = (long *)FUN_01408c20(local_70,*(undefined8 *)(lVar20 + -0x20),&local_270);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
    }
    lVar22 = *(long *)(lVar20 + 0x110);
    plVar12 = *(long **)(lVar22 + uVar26 * 8);
    *(undefined8 *)(lVar22 + uVar26 * 8) = 0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x60))();
    }
    *(long **)(lVar22 + uVar26 * 8) = plVar11;
    lVar22 = *(long *)(*(long *)(lVar20 + 0x110) + uVar26 * 8);
    plVar11 = *(long **)(lVar22 + 0x380);
    *(undefined8 *)(lVar22 + 0x368) = 0x38a81037838c3183;
    *(char **)(lVar22 + 0x370) = "DetailObject";
    *(undefined8 *)(lVar22 + 0x380) = 0;
    *(undefined8 *)(lVar22 + 0x378) = 0xc;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    local_250 = (long *)0x0;
    local_248 = 0;
    local_1b0 = 0;
    local_270 = (long *)0x0;
    local_268 = &DAT_cbf29ce484222645;
    local_240 = 0x101;
    local_90 = &DAT_cbf29ce484222645;
    local_88 = &DAT_03c886bc;
    local_80 = 0;
    local_78 = (long *)0x0;
    local_260 = &DAT_03c886bc;
    local_258 = 0;
    local_230 = 0;
    local_228 = (code *)0x0;
    local_220 = 0;
    uStack_218 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    local_190 = 0;
    local_188 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    local_110 = 0;
    local_108 = 0;
    local_a0 = 0;
    local_98 = (long *)0x0;
    lVar22 = *(long *)(lVar20 + 0x108);
    plVar11 = *(long **)(lVar22 + 0xa0);
    if (plVar11 == (long *)0x0) {
    }
    else {
      (**(code **)(*plVar11 + 0x18))(plVar11);
      if (local_270 != (long *)0x0) {
        lVar13 = *local_270;
        local_270 = plVar11;
        (**(code **)(lVar13 + 0x20))();
        plVar11 = local_270;
      }
    }
    local_270 = plVar11;
    local_268 = *(undefined1 **)(lVar22 + 0xa8);
    local_260 = *(undefined1 **)(lVar22 + 0xb0);
    local_258 = *(undefined8 *)(lVar22 + 0xb8);
    plVar11 = *(long **)(lVar22 + 0xc0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    if (local_250 != (long *)0x0) {
      lVar13 = *local_250;
      local_250 = plVar11;
      (**(code **)(lVar13 + 0x20))();
      plVar11 = local_250;
    }
    local_250 = plVar11;
    pcVar9 = local_198;
    local_248 = *(undefined4 *)(lVar22 + 200);
    local_240 = CONCAT11(local_240._1_1_,1);
    local_a0 = *(undefined8 *)(lVar20 + 0x220);
    local_1b0 = *(undefined8 *)(lVar20 + 0x228);
    if (local_198 != (code *)0x0) {
      local_190 = 0;
      local_188 = 0;
      local_1a0 = 0;
      local_198 = (code *)0x0;
      (*pcVar9)(auStack_180);
    }
    if (*(code **)(lVar20 + 0x248) != (code *)0x0) {
      (**(code **)(lVar20 + 0x248))(lVar20 + 600,auStack_180);
      local_188 = *(undefined8 *)(lVar20 + 0x250);
      local_198 = *(code **)(lVar20 + 0x240);
      local_1a0 = *(undefined8 *)(lVar20 + 0x238);
      local_190 = *(undefined8 *)(lVar20 + 0x248);
    }
    pcVar9 = local_118;
    if (local_118 != (code *)0x0) {
      local_110 = 0;
      local_108 = 0;
      local_120 = 0;
      local_118 = (code *)0x0;
      (*pcVar9)(auStack_100);
    }
    if (*(code **)(lVar20 + 0x2c8) != (code *)0x0) {
      (**(code **)(lVar20 + 0x2c8))(lVar20 + 0x2d8,auStack_100);
      local_108 = *(undefined8 *)(lVar20 + 0x2d0);
      local_118 = *(code **)(lVar20 + 0x2c0);
      local_120 = *(undefined8 *)(lVar20 + 0x2b8);
      local_110 = *(undefined8 *)(lVar20 + 0x2c8);
    }
    lVar22 = FUN_010278b0(*(undefined8 *)(*(long *)(lVar20 + 0x110) + uVar26 * 8),
                          *(undefined8 *)(lVar20 + -0x20),&local_270);
    plVar12 = *(long **)(lVar20 + -0x20);
    plVar11 = *(long **)(*(long *)(lVar20 + 0x110) + uVar26 * 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar13 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar12;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    plVar14 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x1b0,0x10);
    if (plVar14 == (long *)0x0) {
      (**(code **)(*plVar12 + 0xe8))(plVar12);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00d1a240(plVar14,0x8009809b);
    puVar8 = PTR_DAT_047dd528;
    puVar2 = PTR_DAT_047dd528 + 0x2e0;
    plVar23 = plVar14 + 4;
    *plVar23 = (long)(PTR_DAT_047dd528 + 0x160);
    plVar14[5] = (long)(puVar8 + 0x288);
    plVar14[6] = (long)puVar2;
    plVar14[0x28] = 0;
    plVar14[0x29] = 0;
    plVar14[7] = (long)(puVar8 + 0x308);
    plVar14[0x2c] = (long)&DAT_cbf29ce484222645;
    plVar14[0x2d] = (long)&DAT_03c886bc;
    plVar14[0x35] = 0;
    plVar14[0x2a] = 0;
    plVar14[0x2b] = 0;
    *(undefined4 *)(plVar14 + 0x34) = 0xffffffff;
    plVar14[0x24] = 0;
    *(undefined4 *)(plVar14 + 0x25) = 0;
    plVar14[0x26] = 0;
    *(undefined4 *)((long)plVar14 + 0x114) = 0;
    plVar14[2] = (long)plVar14;
    *(undefined4 *)(plVar14 + 3) = 0x1001b0;
    plVar14[0x2e] = 0;
    plVar14[0x2f] = 0;
    plVar14[0x30] = 0;
    plVar14[0x31] = 0;
    plVar14[0x32] = 0;
    plVar14[0x33] = 0;
    *plVar14 = (long)(puVar8 + 0x10);
    plVar14[1] = (long)plVar12;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    lVar13 = plVar14[0x13];
    if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar21 = *psVar1;
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar24) {
        *psVar1 = sVar21 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar21 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar16;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar21 == -1) {
      pcVar15 = "count != 0";
      pcVar17 = "AddReference";
      pcVar18 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
      ;
      pcVar19 = "Reference counter overflows.";
      goto LAB_0218a208;
    }
    (**(code **)(plVar14[4] + 0xe8))(plVar23,plVar11);
    (**(code **)(plVar14[4] + 0x68))(plVar23);
    local_70[0] = plVar14;
    FUN_00df8c30(plVar11 + 0x21,local_70);
    if (local_70[0] != (long *)0x0) {
      lVar13 = local_70[0][0x13];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar21 = *psVar1;
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar24) {
          *psVar1 = sVar21 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar21 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    (**(code **)(*plVar11 + 0x100))(plVar11,plVar23);
    plVar12 = plVar11 + 0x88;
    lVar25 = *plVar12;
    lVar13 = nn::os::GetCurrentThread();
    if (lVar13 != lVar25) {
      lVar13 = nn::os::GetCurrentThread();
LAB_02189ec4:
      if (*plVar12 == 0) goto code_r0x02189ecc;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar11 + 0x89));
            while (*plVar12 == 0) {
              cVar6 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar24) {
                *plVar12 = lVar13;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_02189ed4;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar24) {
          *plVar12 = lVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_02189ed4:
      bVar24 = false;
      goto LAB_02189ed8;
    }
    plVar12 = (long *)0x0;
    bVar24 = true;
LAB_02189ed8:
    if ((*(byte *)(plVar11 + 0x8b) >> 2 & 1) == 0) {
      FUN_00d37964(plVar11,0,0);
    }
    else {
      (**(code **)(*plVar23 + 0xf8))(plVar23);
    }
    if (!bVar24) {
      *plVar12 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar12 + 1));
    }
    plVar14[0x2c] = *(long *)(lVar20 + 0x1b8);
    plVar14[0x2d] = *(long *)(lVar20 + 0x1c0);
    plVar14[0x2e] = *(long *)(lVar20 + 0x1c8);
    plVar11 = *(long **)(lVar20 + 0x1d0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar12 = (long *)plVar14[0x2f];
    plVar14[0x2f] = (long)plVar11;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x20))();
    }
    if ((int)plVar14[0x25] == 0) {
      lVar13 = *(long *)(*(long *)(*(long *)(lVar20 + 0x108) + 0x30) + uVar26 * 8);
      if (lVar13 != 0) {
        piVar3 = (int *)(lVar13 + 0x28);
        do {
          iVar10 = *piVar3;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar24) {
            *piVar3 = iVar10 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar11 = (long *)plVar14[0x26];
      plVar14[0x26] = lVar13;
      if (plVar11 != (long *)0x0) {
        plVar12 = plVar11 + 5;
        do {
          lVar13 = *plVar12;
          iVar10 = (int)lVar13 + -1;
          cVar6 = '\x01';
          bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar24) {
            *(int *)plVar12 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        else if ((int)lVar13 == 0) {
          pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar17 = "DecrementReferenceInternal";
          pcVar18 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar19 = "Reference counter underflows.";
          goto LAB_0218a208;
        }
      }
      *(undefined4 *)(plVar14 + 0x25) = 1;
    }
    *(long **)(*(long *)(lVar20 + 0x180) + uVar26 * 8) = plVar14;
    *(long *)(*(long *)(lVar20 + 0x148) + uVar26 * 8) = lVar22;
    *(undefined1 *)(lVar22 + 0x334) = 1;
    if (*(long *)(lVar22 + 0x120) != 0) {
      *(undefined1 *)(*(long *)(lVar22 + 0x120) + 0x212) = 1;
      if (*(long *)(lVar22 + 0x120) != 0) {
        *(undefined1 *)(*(long *)(lVar22 + 0x120) + 0x210) = *(undefined1 *)(lVar20 + 0x340);
      }
    }
    uVar26 = (ulong)(uVar4 >> 3) & 0x1ffffffc;
    *(uint *)(*(long *)(lVar20 + 0x1d8) + uVar26) =
         *(uint *)(*(long *)(lVar20 + 0x1d8) + uVar26) | 1 << (ulong)(uVar4 & 0x1f);
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_98 == (long *)0x0) {
LAB_02189ff0:
      pcVar9 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = 0;
        local_108 = 0;
        local_120 = 0;
        local_118 = (code *)0x0;
        (*pcVar9)(auStack_100);
      }
      pcVar9 = local_198;
      if (local_198 != (code *)0x0) {
        local_190 = 0;
        local_188 = 0;
        local_1a0 = 0;
        local_198 = (code *)0x0;
        (*pcVar9)(auStack_180);
      }
      pcVar9 = local_228;
      if (local_228 != (code *)0x0) {
        local_220 = 0;
        uStack_218 = 0;
        local_230 = 0;
        local_228 = (code *)0x0;
        (*pcVar9)(auStack_210);
      }
      if (local_250 != (long *)0x0) {
        (**(code **)(*local_250 + 0x20))();
      }
      if (local_270 != (long *)0x0) {
        (**(code **)(*local_270 + 0x20))();
      }
      if (local_278 == (long *)0x0) goto LAB_0218a03c;
      plVar11 = local_278 + 5;
      do {
        iVar10 = (int)*plVar11;
        iVar7 = iVar10 + -1;
        cVar6 = '\x01';
        bVar24 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar24) {
          *(int *)plVar11 = iVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto joined_r0x0218a2e4;
    }
    plVar11 = local_98 + 5;
    do {
      lVar22 = *plVar11;
      iVar10 = (int)lVar22 + -1;
      cVar6 = '\x01';
      bVar24 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar24) {
        *(int *)plVar11 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*local_98 + 0x10))();
      goto LAB_02189ff0;
    }
    if ((int)lVar22 != 0) goto LAB_02189ff0;
  }
  pcVar15 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar17 = "DecrementReferenceInternal";
  pcVar18 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
  ;
  pcVar19 = "Reference counter underflows.";
LAB_0218a208:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar15,pcVar17,pcVar18,0x58,pcVar19);
code_r0x02189ecc:
  cVar6 = '\x01';
  bVar24 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar24) {
    *plVar12 = lVar13;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_02189ed4;
  goto LAB_02189ec4;
}


