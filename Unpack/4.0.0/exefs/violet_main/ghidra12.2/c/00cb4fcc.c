/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb4fcc; name: FUN_00cb4fcc
 */


void FUN_00cb4fcc(undefined8 *param_1,undefined2 param_2,long *param_3,long *param_4)

{
  ulong *puVar1;
  undefined1 (*pauVar2) [16];
  short *psVar3;
  long *plVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong *extraout_x1;
  char *__s2;
  undefined8 uVar18;
  int iVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  code *pcVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  char *__s1;
  void *__src;
  undefined1 auVar27 [16];
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  ulong uStack_88;
  void *local_78;
  undefined8 local_70;
  long *local_68;
  
  plVar24 = (long *)*param_1;
  if (plVar24 != (long *)0x0) {
    lVar25 = plVar24[6];
    if (*(long *)(lVar25 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar3 = (short *)(lVar25 + 0x1a);
    do {
      sVar6 = *psVar3;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar10) {
        *psVar3 = sVar6 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar6 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
      *(undefined8 *)(lVar25 + 8) = uVar16;
      *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
    }
    else if (sVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  iVar13 = (int)plVar24[0xe];
  iVar7 = *(int *)((long)plVar24 + 0x74);
  iVar8 = iVar7 * iVar13;
  local_78 = (void *)0x0;
  local_70 = -0x8000000000000000;
  if (iVar8 < 1) {
    local_70._0_4_ = 0;
  }
  else {
    FUN_00cb59d4(&local_78,PTR_PTR_047d1a50,iVar8);
  }
  if ((int)local_70 != iVar8) {
    local_70 = CONCAT44(local_70._4_4_,iVar8);
  }
  memcpy(local_78,(void *)plVar24[0xf],(long)iVar13 * (long)iVar7 * 4);
  puVar11 = PTR_DAT_047d1a08;
  pauVar2 = (undefined1 (*) [16])(plVar24 + 10);
  local_90 = *(undefined8 *)*pauVar2;
  auVar27 = NEON_ext(*pauVar2,*pauVar2,8,1);
  uStack_88 = (ulong)auVar27._0_4_;
  __src = (void *)plVar24[0x22];
  local_d0 = 0x80;
  plVar14 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_d0,0);
  if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
    (**(code **)(puVar11 + 0x10))(plVar14,"hknpDefaultHeightFieldGeometry");
  }
  FUN_00cb5b00(plVar14,iVar13,iVar7,&local_78,0,0);
  *plVar14 = (long)(PTR_DAT_047ddc38 + 0x10);
  plVar15 = plVar14 + 0xd;
  *plVar15 = 0;
  *(undefined2 *)(plVar14 + 0xf) = param_2;
  plVar14[0xe] = -0x8000000000000000;
  if (iVar8 < 1) {
    iVar19 = 0;
  }
  else {
    FUN_00cb58c0(plVar15,PTR_PTR_047d1a50,iVar8);
    iVar19 = (int)plVar14[0xe];
  }
  if (iVar19 != iVar8) {
    *(int *)(plVar14 + 0xe) = iVar8;
  }
  memcpy((void *)*plVar15,__src,(long)iVar7 * (long)iVar13);
  if ((char)plVar24[0x37] != '\0') {
    local_d0 = 0;
    local_c8 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_68 = (long *)0x8;
    plVar15 = (long *)(**(code **)puVar11)(0,&local_68,0);
    if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
      (**(code **)(puVar11 + 0x10))(plVar15,"Cloner");
    }
    local_68 = (long *)0xc0;
    lVar25 = (**(code **)puVar11)(0,&local_68,0);
    if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
      (**(code **)(puVar11 + 0x10))(lVar25,"CloneImpl");
    }
    FUN_00cb44e4(lVar25);
    *plVar15 = lVar25;
    local_a0 = 0;
    uStack_b0 = 0;
    *(undefined1 *)(lVar25 + 0x5d) = 0;
    local_a8 = 0;
    local_b8 = plVar15;
    uVar16 = (**(code **)(*(long *)plVar24[0x39] + 0x70))();
    if (plVar24[0x39] == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(plVar24[0x39] + 0x1d8);
    }
    FUN_00cb42bc(&local_98,&local_d0,uVar16,uVar18,0);
    plVar15 = local_b8;
    if (local_b8 != (long *)0x0) {
      lVar25 = *local_b8;
      if (lVar25 != 0) {
        FUN_00cb4718(lVar25);
        (**(code **)(puVar11 + 8))(0,lVar25,0);
      }
      (**(code **)(puVar11 + 8))(0,plVar15,0);
    }
    if ((local_c0 != (long *)0x0) && (local_c0[1] != 0)) {
      plVar15 = local_c0 + 2;
      do {
        lVar25 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_c0 + 0x18))();
      }
    }
    if ((local_c8 != (long *)0x0) && (local_c8[1] != 0)) {
      plVar15 = local_c8 + 2;
      do {
        lVar25 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_c8 + 0x18))();
      }
    }
    if (local_98 == (long *)0x0) {
      local_c8 = (long *)0x0;
      local_c0 = (long *)0x0;
      local_d0 = 0;
      local_68 = (long *)0x8;
      plVar15 = (long *)(**(code **)puVar11)(0,&local_68,0);
      if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
        (**(code **)(puVar11 + 0x10))(plVar15,"Cloner");
      }
      local_68 = (long *)&DAT_000000c0;
      lVar25 = (**(code **)puVar11)(0,&local_68,0);
      if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
        (**(code **)(puVar11 + 0x10))(lVar25,"CloneImpl");
      }
      FUN_00cb44e4(lVar25);
      *plVar15 = lVar25;
      local_a8 = 1;
      local_a0 = 0;
      uStack_b0 = 0;
      *(undefined1 *)(lVar25 + 0x5d) = 0;
      local_b8 = plVar15;
      uVar16 = (**(code **)(*(long *)plVar24[0x39] + 0x70))();
      if (plVar24[0x39] == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(plVar24[0x39] + 0x1d8);
      }
      FUN_00cb42bc(&local_68,&local_d0,uVar16,uVar18,0);
      local_98 = local_68;
      plVar15 = local_b8;
      local_68 = (long *)0x0;
      if (local_b8 != (long *)0x0) {
        lVar25 = *local_b8;
        if (lVar25 != 0) {
          FUN_00cb4718(lVar25);
          (**(code **)(puVar11 + 8))(0,lVar25,0);
        }
        (**(code **)(puVar11 + 8))(0,plVar15,0);
      }
      if ((local_c0 != (long *)0x0) && (local_c0[1] != 0)) {
        plVar15 = local_c0 + 2;
        do {
          lVar25 = *plVar15;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 + -1 == 0) {
          (**(code **)(*local_c0 + 0x18))();
        }
      }
      if ((local_c8 != (long *)0x0) && (local_c8[1] != 0)) {
        plVar15 = local_c8 + 2;
        do {
          lVar25 = *plVar15;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar10) {
            *plVar15 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 + -1 == 0) {
          (**(code **)(*local_c8 + 0x18))();
        }
      }
      if (local_98 == (long *)0x0) goto LAB_00cb5408;
    }
    plVar15 = (long *)(**(code **)(*local_98 + 0x40))(local_98,PTR_DAT_047ddc18);
    puVar12 = PTR_DAT_047ddc28;
    if ((plVar15 != (long *)0x0) && (0 < (int)plVar15[1])) {
      puVar20 = (ulong *)PTR_DAT_047ddc40;
      while (uVar23 = *puVar20, ((uint)uVar23 >> 3 & 1) == 0) {
        if (((uVar23 & 1) != 0) || (puVar20 = (ulong *)puVar20[1], puVar20 == (ulong *)0x0))
        goto LAB_00cb531c;
      }
      if (puVar20 != (ulong *)0x0) {
        __s1 = (char *)puVar20[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2];
        goto LAB_00cb5320;
      }
LAB_00cb531c:
      __s1 = (char *)0x0;
LAB_00cb5320:
      lVar25 = 0;
      do {
        lVar26 = *plVar15;
        plVar17 = *(long **)(lVar26 + lVar25 * 0x18 + 0x10);
        if (plVar17 == (long *)0x0) {
LAB_00cb536c:
          __s2 = (char *)(*(ulong *)(lVar26 + lVar25 * 0x18 + 8) & 0xfffffffffffffffe);
joined_r0x00cb5378:
          if ((__s2 != (char *)0x0) && (iVar13 = strcmp(__s1,__s2), iVar13 == 0)) {
            lVar25 = *(long *)(*plVar15 + lVar25 * 0x18 + 0x10);
            if ((lVar25 != 0) && (*(long *)(lVar25 + 8) != 0)) {
              plVar15 = (long *)(lVar25 + 0x10);
              do {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar10) {
                  *plVar15 = *plVar15 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
            }
            goto LAB_00cb53c8;
          }
        }
        else {
          puVar21 = (undefined8 *)*plVar17;
          if (puVar21 == (undefined8 *)0x0) {
            puVar21 = (undefined8 *)puVar12;
            do {
              puVar20 = (ulong *)puVar12;
              if (((uint)*puVar21 >> 0xb & 1) != 0) {
                uVar5 = (uint)*puVar21 & 0x7ff;
                pcVar22 = (code *)puVar21[(ulong)(byte)(POPCOUNT((char)uVar5) +
                                                       POPCOUNT((char)(uVar5 >> 8))) + 2];
                if (pcVar22 != (code *)0x0) goto LAB_00cb534c;
                break;
              }
              puVar21 = (undefined8 *)puVar21[1];
            } while (puVar21 != (undefined8 *)0x0);
          }
          else {
            pcVar22 = (code *)*puVar21;
LAB_00cb534c:
            (*pcVar22)();
            puVar20 = extraout_x1;
            if (extraout_x1 == (ulong *)0x0) goto LAB_00cb536c;
          }
          do {
            uVar23 = *puVar20;
            if (((uint)uVar23 >> 3 & 1) != 0) {
              __s2 = (char *)puVar20[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2];
              goto joined_r0x00cb5378;
            }
          } while (((uVar23 & 1) == 0) &&
                  (puVar1 = puVar20 + 1, puVar20 = (ulong *)*puVar1,
                  (ulong *)*puVar1 != (ulong *)0x0));
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 < (int)plVar15[1]);
      lVar25 = 0;
LAB_00cb53c8:
      plVar15 = (long *)*param_4;
      *param_4 = lVar25;
      if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
        plVar17 = plVar15 + 2;
        do {
          lVar25 = *plVar17;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar10) {
            *plVar17 = lVar25 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (lVar25 + -1 == 0) {
          (**(code **)(*plVar15 + 0x18))();
        }
      }
    }
    if ((local_98 != (long *)0x0) && (local_98[1] != 0)) {
      plVar15 = local_98 + 2;
      do {
        lVar25 = *plVar15;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar10) {
          *plVar15 = lVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*local_98 + 0x18))();
      }
    }
  }
LAB_00cb5408:
  lVar25 = *param_4;
  local_d0 = 0xc0;
  plVar15 = (long *)(**(code **)puVar11)(0,&local_d0,0);
  if (*(code **)(puVar11 + 0x10) != (code *)0x0) {
    (**(code **)(puVar11 + 0x10))(plVar15,"hknpHeightFieldShape");
  }
  FUN_00cb5d94(plVar15,plVar14,&local_90,3,lVar25);
  plVar17 = (long *)*param_3;
  if (plVar17 != plVar15) {
    if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
      plVar17 = plVar15 + 2;
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar10) {
          *plVar17 = *plVar17 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      plVar17 = (long *)*param_3;
    }
    *param_3 = (long)plVar15;
    if ((plVar17 != (long *)0x0) && (plVar17[1] != 0)) {
      plVar4 = plVar17 + 2;
      do {
        lVar25 = *plVar4;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar10) {
          *plVar4 = lVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar25 + -1 == 0) {
        (**(code **)(*plVar17 + 0x18))();
      }
    }
  }
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar17 = plVar15 + 2;
    do {
      lVar25 = *plVar17;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar10) {
        *plVar17 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
    plVar15 = plVar14 + 2;
    do {
      lVar25 = *plVar15;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar10) {
        *plVar15 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 + -1 == 0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  lVar25 = local_70;
  uVar23 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar25) && (local_78 != (void *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_78,uVar23 << 2);
  }
  lVar25 = plVar24[6];
  psVar3 = (short *)(lVar25 + 0x1a);
  do {
    sVar6 = *psVar3;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar10) {
      *psVar3 = sVar6 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar6 == 1) {
    *(undefined8 *)(lVar25 + 0x10) = 0;
    (**(code **)(*plVar24 + 0x50))(plVar24);
  }
  else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


