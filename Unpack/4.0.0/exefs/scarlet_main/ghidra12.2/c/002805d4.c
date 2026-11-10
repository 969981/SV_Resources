/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002805d4; name: FUN_002805d4
 */


/* WARNING: Removing unreachable block (ram,0x00280a80) */

void FUN_002805d4(long *param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 *****pppppuVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *****pppppuVar12;
  long *plVar13;
  undefined8 ***pppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  long lVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 *****pppppuVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined1 uStack0000000000000000;
  undefined8 *****local_b0;
  int local_a4;
  long *local_a0;
  ulong local_98;
  undefined8 *****local_90;
  undefined8 *****apppppuStack_88 [2];
  ulong local_78;
  undefined8 *****local_70;
  undefined8 *****pppppuStack_68;
  
  local_78 = 0;
  if ((long *)param_1[8] != param_1 + 9) {
    uVar23 = 0;
    local_a4 = 0;
    lVar25 = 0;
    lVar24 = 0;
    plVar10 = (long *)param_1[8];
LAB_0028063c:
    lVar19 = param_1[6];
    lVar17 = plVar10[7];
    lVar8 = FUN_002804c4(lVar19 + 0x10,plVar10 + 4);
    if (lVar19 + 0x18 == lVar8) goto switchD_00280674_caseD_3;
    switch(*(undefined4 *)(lVar17 + 0x48)) {
    case 0:
      lVar24 = lVar24 + 1;
      plVar11 = (long *)plVar10[1];
      if ((long *)plVar10[1] != (long *)0x0) goto LAB_00280694;
      goto LAB_00280814;
    case 1:
      lVar25 = lVar25 + 1;
      goto switchD_00280674_caseD_3;
    case 2:
      iVar3 = *(int *)(lVar17 + 0x30);
      if (*(long *)(lVar17 + 0x40) == 0) {
        ppppuVar18 = (undefined8 ****)0x0;
      }
      else {
        plVar11 = (long *)(*(long *)(lVar17 + 0x40) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar6) {
            *plVar11 = *plVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        ppppuVar18 = *(undefined8 *****)(lVar17 + 0x40);
      }
      local_a4 = iVar3 + local_a4;
      if ((uVar23 & 1) == 0) {
        pppppuVar12 = (undefined8 *****)0x1;
        pppppuVar16 = &local_70;
      }
      else {
        pppppuVar12 = pppppuStack_68;
        pppppuVar16 = local_70;
      }
      pppppuVar20 = (undefined8 *****)(uVar23 >> 1);
      if (pppppuVar20 == pppppuVar12) {
        local_b0 = (undefined8 *****)((long)pppppuVar12 << 1);
        pppppuVar9 = (undefined8 *****)FUN_0049e770(PTR_FUN_047cba38,(long)pppppuVar12 << 5);
        pppppuVar12 = pppppuVar9;
      }
      else {
        pppppuVar9 = (undefined8 *****)0x0;
        local_b0 = (undefined8 *****)0x0;
        pppppuVar12 = pppppuVar16;
      }
      (pppppuVar12 + (long)pppppuVar20 * 2)[1] = ppppuVar18;
      *(int *)(pppppuVar12 + (long)pppppuVar20 * 2) = local_a4;
      if (pppppuVar9 != (undefined8 *****)0x0) {
        if (pppppuVar20 != (undefined8 *****)0x0) {
          pppppuVar12 = pppppuVar16;
          if (pppppuVar20 == (undefined8 *****)0x1) {
            uVar22 = 0;
          }
          else {
            uVar22 = 0;
            pppppuVar15 = pppppuVar9 + 3;
            do {
              uVar4 = *(undefined4 *)pppppuVar12;
              pppppuVar15[-2] = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar15 + -3) = uVar4;
              pppppuVar15[-2] = pppppuVar12[1];
              uVar4 = *(undefined4 *)(pppppuVar12 + 2);
              pppppuVar12[1] = (undefined8 ****)0x0;
              *pppppuVar15 = (undefined8 ****)0x0;
              *(undefined4 *)(pppppuVar15 + -1) = uVar4;
              uVar22 = uVar22 + 2;
              *pppppuVar15 = pppppuVar12[3];
              pppppuVar12[3] = (undefined8 ****)0x0;
              pppppuVar12 = pppppuVar12 + 4;
              pppppuVar15 = pppppuVar15 + 4;
            } while (((ulong)pppppuVar20 & 0x7ffffffffffffffe) != uVar22);
          }
          pppppuVar15 = pppppuVar16;
          if (((uint)uVar23 >> 1 & 1) != 0) {
            uVar4 = *(undefined4 *)pppppuVar12;
            pppppuVar2 = pppppuVar9 + uVar22 * 2;
            pppppuVar2[1] = (undefined8 ****)0x0;
            *(undefined4 *)pppppuVar2 = uVar4;
            pppppuVar2[1] = pppppuVar12[1];
            pppppuVar12[1] = (undefined8 ****)0x0;
          }
          while (pppppuVar15 != (undefined8 *****)0x0) {
            pppppuVar20 = (undefined8 *****)((long)pppppuVar20 + -1);
            ppppuVar18 = pppppuVar16[(long)pppppuVar20 * 2 + 1];
            pppppuVar15 = pppppuVar20;
            if (ppppuVar18 != (undefined8 ****)0x0) {
              ppppuVar1 = ppppuVar18 + 1;
              do {
                pppuVar14 = *ppppuVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
                if (bVar6) {
                  *ppppuVar1 = (undefined8 ***)((long)pppuVar14 + -1);
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((undefined8 ***)((long)pppuVar14 + -1) == (undefined8 ***)0x0) {
                (*(code *)**ppppuVar18)(ppppuVar18);
                FUN_0049e790(PTR_LAB_047cba48,ppppuVar18);
              }
            }
          }
        }
        if ((local_78 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_70);
        }
        local_78 = local_78 | 1;
        pppppuStack_68 = local_b0;
        local_70 = pppppuVar9;
      }
      uVar23 = local_78 + 2;
      plVar11 = (long *)plVar10[1];
      local_78 = uVar23;
      goto joined_r0x00280810;
    case 3:
      goto switchD_00280674_caseD_3;
    default:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00280c2c to 00280c2f has its CatchHandler @ 00280c30 */
      abort();
    }
  }
LAB_00280988:
                    /* try { // try from 00280988 to 002809b3 has its CatchHandler @ 00280c38 */
  FUN_003673f0(&local_98,"weighted_target: all children report state TRANSIENT_FAILURE");
  lVar24 = FUN_00351340("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/weighted_target/weighted_target.cc"
                        ,0x185,&local_98,0,0);
  plVar10 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (plVar10 != (long *)0x0) {
    *plVar10 = (long)(PTR_DAT_047cc560 + 0x10);
    plVar10[1] = lVar24;
  }
  uVar21 = 3;
LAB_00280b08:
                    /* try { // try from 00280b18 to 00280b23 has its CatchHandler @ 00280c40 */
  local_a0 = plVar10;
  (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],uVar21,&local_a0);
  plVar10 = local_a0;
  local_a0 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)*plVar10)(plVar10);
    FUN_0049e790(PTR_LAB_047cba48,plVar10);
  }
  puVar7 = PTR_LAB_047cba48;
  uVar23 = local_78 & 1;
  pppppuVar12 = &local_70;
  if (uVar23 != 0) {
    pppppuVar12 = local_70;
  }
  uVar22 = local_78 >> 1;
  if ((uVar22 != 0) && (pppppuVar12 != (undefined8 *****)0x0)) {
    do {
      uVar22 = uVar22 - 1;
      ppppuVar18 = pppppuVar12[uVar22 * 2 + 1];
      if (ppppuVar18 != (undefined8 ****)0x0) {
        ppppuVar1 = ppppuVar18 + 1;
        do {
          pppuVar14 = *ppppuVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
          if (bVar6) {
            *ppppuVar1 = (undefined8 ***)((long)pppuVar14 + -1);
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((undefined8 ***)((long)pppuVar14 + -1) == (undefined8 ***)0x0) {
          (*(code *)**ppppuVar18)(ppppuVar18);
          FUN_0049e790(puVar7,ppppuVar18);
        }
      }
    } while (uVar22 != 0);
    uVar23 = local_78 & 1;
  }
  if (uVar23 != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return;
switchD_00280674_caseD_3:
  plVar11 = (long *)plVar10[1];
joined_r0x00280810:
  if (plVar11 == (long *)0x0) {
LAB_00280814:
    plVar11 = plVar10 + 2;
    plVar13 = (long *)*plVar11;
    if ((long *)*plVar13 != plVar10) {
      do {
        lVar8 = *plVar11;
        plVar11 = (long *)(lVar8 + 0x10);
        plVar13 = (long *)*plVar11;
      } while (*plVar13 != lVar8);
    }
  }
  else {
LAB_00280694:
    do {
      plVar13 = plVar11;
      plVar11 = (long *)*plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
  plVar10 = plVar13;
  if (plVar13 == param_1 + 9) goto LAB_00280894;
  goto LAB_0028063c;
LAB_00280894:
  if (1 < uVar23) {
    plVar10 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x20);
    uVar23 = local_78;
    if (plVar10 != (long *)0x0) {
      if ((local_78 & 1) == 0) {
        uVar22 = local_78 >> 1;
        if (uVar22 != 0) {
          pppppuVar12 = &local_70;
          pppppuVar16 = apppppuStack_88;
          do {
            *(undefined4 *)(pppppuVar16 + -1) = *(undefined4 *)pppppuVar12;
            ppppuVar18 = pppppuVar12[1];
            *pppppuVar16 = (undefined8 ****)0x0;
            uVar22 = uVar22 - 1;
            pppppuVar12[1] = (undefined8 ****)0x0;
            *pppppuVar16 = ppppuVar18;
            pppppuVar12 = pppppuVar12 + 2;
            pppppuVar16 = pppppuVar16 + 2;
          } while (uVar22 != 0);
        }
        local_98 = uVar23 & 0xfffffffffffffffe;
        *plVar10 = (long)&PTR_LAB_0448cfa0;
        plVar10[1] = 0;
        uVar23 = uVar23 >> 1;
        if (uVar23 != 0) {
          pppppuVar12 = &local_90;
          plVar11 = plVar10 + 3;
          do {
            uVar4 = *(undefined4 *)pppppuVar12;
            *plVar11 = 0;
            *(undefined4 *)(plVar11 + -1) = uVar4;
            uVar23 = uVar23 - 1;
            *plVar11 = (long)pppppuVar12[1];
            pppppuVar12[1] = (undefined8 ****)0x0;
            pppppuVar12 = pppppuVar12 + 2;
            plVar11 = plVar11 + 2;
          } while (uVar23 != 0);
        }
        plVar10[1] = local_98;
      }
      else {
        apppppuStack_88[0] = pppppuStack_68;
        local_90 = local_70;
        local_78 = 0;
        *plVar10 = (long)&PTR_LAB_0448cfa0;
        plVar10[1] = 0;
        plVar10[1] = uVar23 | 1;
        plVar10[3] = (long)pppppuStack_68;
        plVar10[2] = (long)local_70;
        local_98 = 0;
      }
      puVar7 = PTR_LAB_047cba48;
      uVar23 = 0;
      uVar22 = local_98 >> 1;
      if ((uVar22 != 0) && (&uStack0000000000000000 != &DAT_00000090)) {
        do {
          uVar22 = uVar22 - 1;
          ppppuVar18 = apppppuStack_88[uVar22 * 2];
          if (ppppuVar18 != (undefined8 ****)0x0) {
            ppppuVar1 = ppppuVar18 + 1;
            do {
              pppuVar14 = *ppppuVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(ppppuVar1,0x10);
              if (bVar6) {
                *ppppuVar1 = (undefined8 ***)((long)pppuVar14 + -1);
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((undefined8 ***)((long)pppuVar14 + -1) == (undefined8 ***)0x0) {
              (*(code *)**ppppuVar18)(ppppuVar18);
              FUN_0049e790(puVar7,ppppuVar18);
            }
          }
        } while (uVar22 != 0);
        uVar23 = local_98 & 1;
      }
      if (uVar23 != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_90);
      }
    }
    uVar21 = 2;
    goto LAB_00280b08;
  }
  if (lVar25 == 0) {
    if (lVar24 == 0) goto LAB_00280988;
    uVar21 = 0;
  }
  else {
    uVar21 = 1;
  }
  plVar11 = param_1 + 1;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = *plVar11 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  plVar10 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
  puVar7 = PTR_DAT_047cc568;
  if (plVar10 == (long *)0x0) {
    if (param_1 != (long *)0x0) {
      do {
        lVar24 = *plVar11;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar6) {
          *plVar11 = lVar24 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar24 == 1) {
        (**(code **)(*param_1 + 8))(param_1);
        FUN_0049e790(PTR_LAB_047cba48,param_1);
        plVar10 = (long *)0x0;
        goto LAB_00280b08;
      }
    }
    plVar10 = (long *)0x0;
  }
  else {
    *(undefined1 *)(plVar10 + 2) = 0;
    *plVar10 = (long)(puVar7 + 0x10);
    plVar10[1] = (long)param_1;
  }
  goto LAB_00280b08;
}


