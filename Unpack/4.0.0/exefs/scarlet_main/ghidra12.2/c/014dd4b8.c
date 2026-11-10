/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014dd4b8; name: FUN_014dd4b8
 */


/* WARNING: Removing unreachable block (ram,0x014dd800) */
/* WARNING: Removing unreachable block (ram,0x014dd804) */
/* WARNING: Removing unreachable block (ram,0x014dd80c) */
/* WARNING: Removing unreachable block (ram,0x014dd814) */
/* WARNING: Removing unreachable block (ram,0x014ddbd8) */
/* WARNING: Removing unreachable block (ram,0x014ddbe0) */
/* WARNING: Removing unreachable block (ram,0x014ddbe4) */
/* WARNING: Removing unreachable block (ram,0x014ddbec) */
/* WARNING: Removing unreachable block (ram,0x014ddbf4) */
/* WARNING: Removing unreachable block (ram,0x014de040) */
/* WARNING: Removing unreachable block (ram,0x014de050) */
/* WARNING: Removing unreachable block (ram,0x014ddbfc) */
/* WARNING: Removing unreachable block (ram,0x014dd81c) */
/* WARNING: Removing unreachable block (ram,0x014dd820) */

void FUN_014dd4b8(long *param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  plVar20 = param_1 + 0xf;
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar20 == 0) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_014dd4fc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x10));
        while (*plVar20 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar6) {
            *plVar20 = lVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_014dd4fc;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar6) {
      *plVar20 = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_014dd4fc:
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 == (undefined8 *)param_1[10]) {
    uVar18 = param_1[0xc];
    lVar11 = (long)puVar4 - param_1[8] >> 3;
    uVar16 = lVar11 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[10] - param_1[8];
    uVar17 = lVar12 >> 2;
    if (uVar16 <= uVar17) {
      uVar16 = uVar17;
    }
    if (uVar18 >> 1 <= (ulong)(lVar12 >> 3)) {
      uVar16 = uVar18;
    }
    if (uVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)param_1[0xb] + 0x10))((long *)param_1[0xb],uVar16 << 3,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)param_1[0xb] + 0xe8))();
      }
    }
    puVar4 = (undefined8 *)(lVar12 + lVar11 * 8);
    lVar11 = param_1[0xb];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar4 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_014de0f4;
      *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar11;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar4 = param_2;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    lVar11 = param_1[8];
    lVar14 = param_1[9];
    puVar22 = puVar4;
    if (lVar14 != lVar11) {
      do {
        lVar21 = param_1[0xb];
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          puVar22[-1] = *(undefined8 *)(lVar14 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_014de0f4;
          *(long *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = lVar21;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          puVar22[-1] = *(undefined8 *)(lVar14 + -8);
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        lVar14 = lVar14 + -8;
        puVar22 = puVar22 + -1;
      } while (lVar11 != lVar14);
      lVar11 = param_1[8];
    }
    param_1[8] = (long)puVar22;
    param_1[9] = (long)(puVar4 + 1);
    lVar14 = param_1[10];
    param_1[10] = lVar12 + uVar16 * 8;
    if (lVar11 != 0) {
      plVar20 = (long *)param_1[0xb];
      uVar16 = (**(code **)(*plVar20 + 0xf8))(plVar20);
      if (((uVar16 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar11,lVar14 - lVar11,8);
      }
      else {
        FUN_00c48fe8(plVar20,lVar11,lVar14 - lVar11,8);
      }
    }
  }
  else {
    lVar11 = param_1[0xb];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar12 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar12 == 0) {
      *puVar4 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_014de0f4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar11;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      *puVar4 = param_2;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    param_1[9] = (long)(puVar4 + 1);
  }
  (**(code **)(*param_1 + 0x18))(&local_80,param_1);
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  puVar7 = PTR_DAT_047d3908;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  if ((long *)local_80[2] == param_1 + 5) {
    do {
      uVar19 = local_78;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar6) {
        local_78 = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar13 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar9 = uVar13;
    FUN_00c44204(&local_70,uVar13,uVar19);
    puVar4 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar4 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar4 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)puVar8;
          *(long *)puVar9 = lVar11;
          local_68 = (undefined8 *)*puVar4;
          FUN_00c44438(lVar11 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_014dd868;
    }
    puVar4 = local_a0;
    if (local_70 == (undefined8 *)0x0) {
      FUN_014df1b8(&local_a0);
    }
    else {
      local_a0 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar4 + 3);
        do {
          sVar3 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar4 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*puVar7 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar8;
            *(long *)puVar9 = lVar11;
            local_68 = (undefined8 *)*puVar4;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) goto LAB_014dd868;
      }
      local_a0 = local_70;
      local_70 = (undefined8 *)0x0;
      local_98 = uVar19;
    }
  }
  puVar4 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_68 = (undefined8 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar3 == 0) goto LAB_014dd868;
  }
  local_90 = (undefined8 *)0x0;
  local_88 = 0;
  do {
    uVar19 = local_98;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(&local_98,0x10);
    if (bVar6) {
      local_98 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar8;
  *(undefined8 *)puVar9 = uVar13;
  FUN_00c44204(&local_68,uVar13,uVar19);
  puVar4 = local_a0;
  local_a0 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar4 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar4 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_80 = (undefined8 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) goto LAB_014dd868;
  }
  puVar4 = local_90;
  local_90 = (undefined8 *)0x0;
  if (local_68 == (undefined8 *)0x0) {
    if (puVar4 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar4 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar4 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)puVar8;
          *(long *)puVar9 = lVar11;
          local_80 = (undefined8 *)*puVar4;
          FUN_00c44438(lVar11 + 0x8040,&local_80);
        }
      }
      else if (sVar3 == 0) goto LAB_014dd868;
    }
    uVar19 = 0;
  }
  else {
    if (puVar4 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar4 + 3);
      do {
        sVar3 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)puVar4 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)puVar8;
          *(long *)puVar9 = lVar11;
          local_80 = (undefined8 *)*puVar4;
          FUN_00c44438(lVar11 + 0x8040,&local_80);
        }
      }
      else if (sVar3 == 0) goto LAB_014dd868;
    }
    local_90 = local_68;
    local_68 = (undefined8 *)0x0;
  }
  puVar4 = local_68;
  local_88 = uVar19;
  if (local_68 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_68 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_80 = (undefined8 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) goto LAB_014dd868;
  }
  (**(code **)*param_2)(param_2,&local_90);
  puVar4 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_80 = (undefined8 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) goto LAB_014dd868;
  }
  puVar4 = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a0 + 3);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_a0 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)puVar8;
        *(long *)puVar9 = lVar11;
        local_80 = (undefined8 *)*puVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_80);
      }
    }
    else if (sVar3 == 0) {
LAB_014dd868:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  param_1[0xf] = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x10));
  return;
}


