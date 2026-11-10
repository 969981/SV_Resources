/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0036adb0; name: FUN_0036adb0
 */


ulong FUN_0036adb0(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [12];
  long local_d0;
  long lStack_c8;
  long local_c0;
  undefined8 **ppuStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 *local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  plVar9 = (long *)(*param_1 + 0x78);
  do {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar6) {
      *plVar9 = *plVar9 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar21 = *param_1;
  uVar8 = FUN_0036f310(lVar21);
  lVar17 = *(long *)(lVar21 + 0xd0) + 0x910;
  lVar11 = 0;
  if (param_1[2] != 0) {
    lVar11 = 0x18;
  }
  auVar22 = FUN_0038e740(uVar8,lVar11 + lVar17);
  lVar11 = auVar22._8_8_;
  FUN_0036b3fc(lVar11,auVar22._0_8_,param_1);
  *param_2 = lVar11;
  FUN_00367020(&local_90);
  if (*(char *)(lVar11 + 0xa8) == '\0') {
    *(undefined8 *)(lVar11 + 0x8e0) = 0;
    *(long *)(lVar11 + 0x8e8) = param_1[1];
    uVar12 = 0;
    if (param_1[8] != 0) goto LAB_0036b3f4;
  }
  else {
    *(undefined8 *)(lVar11 + 0x8e0) = 0;
    *(undefined8 *)(lVar11 + 0x8e8) = 0;
    *(undefined8 *)(lVar11 + 0x8f0) = 0;
    puVar5 = PTR_DAT_047cc628;
    if (2 < (ulong)param_1[8]) goto LAB_0036b3f4;
    uVar12 = 0;
    if (param_1[8] != 0) {
      uVar20 = 0;
      do {
        lVar13 = param_1[7];
        *(undefined8 *)(lVar11 + uVar20 * 0x20 + 0x650) = *(undefined8 *)(lVar13 + uVar20 * 8);
        plVar9 = (long *)(*(ulong *)(lVar13 + uVar20 * 8) & 0xfffffffffffffffc);
        if (*plVar9 == **(long **)puVar5) {
LAB_0036aec8:
          puVar14 = (undefined8 *)plVar9[4];
          if ((puVar14 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar14, plVar15 != (long *)0x0)
             ) {
            do {
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = *plVar15 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          lStack_88 = plVar9[5];
          local_90 = (undefined8 *)plVar9[4];
          lStack_78 = plVar9[7];
          lStack_80 = plVar9[6];
        }
        else {
          iVar7 = FUN_00368130();
          if (iVar7 == 0) {
            plVar9 = (long *)(*(ulong *)(param_1[7] + uVar20 * 8) & 0xfffffffffffffffc);
            goto LAB_0036aec8;
          }
        }
        uVar12 = param_1[8];
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar12);
    }
  }
  *(int *)(lVar11 + 0x6b0) = (int)uVar12;
  lVar13 = param_1[9];
  lVar16 = param_1[2];
  if (lVar16 == 0) {
    uVar12 = 0;
    bVar6 = false;
  }
  else {
    plVar9 = (long *)(lVar11 + lVar17);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = lVar16;
    *(long **)(lVar11 + 0xa0) = plVar9;
    plVar9 = (long *)(param_1[2] + 0x910);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((*(char *)(lVar11 + 0xa8) != '\x01') ||
       (lVar17 = param_1[2], *(char *)(lVar17 + 0xa8) != '\0')) goto LAB_0036b3f4;
    uVar1 = *(uint *)(param_1 + 3);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(lVar17 + 0x6b8) <= lVar13) {
        lVar13 = *(long *)(lVar17 + 0x6b8);
      }
    }
    if ((uVar1 >> 2 & 1) == 0) {
      if ((uVar1 >> 1 & 1) == 0) {
        uVar12 = 0;
        bVar2 = *(byte *)(param_1 + 3);
      }
      else {
        FUN_003673f0(auStack_70,
                     "Census context propagation requested without Census tracing propagation");
        lVar17 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x19c,
                              auStack_70,0,0);
        uVar12 = 0;
        if (lVar17 != 0) {
          FUN_003673f0(&local_d0,"Call creation failed");
          uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                               &local_d0,0,0);
          uVar12 = FUN_00352130(uVar8,lVar17);
        }
        bVar2 = *(byte *)(param_1 + 3);
      }
    }
    else {
      if ((uVar1 >> 1 & 1) == 0) {
        FUN_003673f0(auStack_70,
                     "Census tracing propagation requested without Census context propagation");
        lVar17 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x194,
                              auStack_70,0,0);
        uVar12 = 0;
        if (lVar17 != 0) {
          FUN_003673f0(&local_d0,"Call creation failed");
          uVar8 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                               &local_d0,0,0);
          uVar12 = FUN_00352130(uVar8,lVar17);
        }
        uVar8 = *(undefined8 *)(param_1[2] + 0x620);
        pcVar18 = *(code **)(lVar11 + 0x628);
      }
      else {
        uVar12 = 0;
        uVar8 = *(undefined8 *)(lVar17 + 0x620);
        pcVar18 = *(code **)(lVar11 + 0x628);
      }
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(*(undefined8 *)(lVar11 + 0x620));
      }
      *(undefined8 *)(lVar11 + 0x620) = uVar8;
      *(undefined8 *)(lVar11 + 0x628) = 0;
      bVar2 = *(byte *)(param_1 + 3);
    }
    if ((bVar2 >> 3 & 1) == 0) {
      bVar6 = false;
    }
    else {
      *(undefined1 *)(lVar11 + 0xaa) = 1;
      bVar6 = *(long *)(param_1[2] + 0xc0) != 0;
    }
  }
  *(long *)(lVar11 + 0x6b8) = lVar13;
  lStack_c8 = param_1[6];
  local_c0 = lVar11 + 0x610;
  ppuStack_b8 = &local_90;
  local_b0 = *(undefined8 *)(lVar11 + 0x90);
  local_a0 = *(undefined8 *)(lVar11 + 8);
  lVar17 = lVar11 + 0x10;
  local_d0 = lVar11 + 0x910;
  lStack_a8 = lVar13;
  lStack_98 = lVar17;
  lVar21 = FUN_00344660(lVar21 + 0x78,1,&LAB_0036b5d0,lVar11,&local_d0);
  if (lVar21 != 0) {
    if (uVar12 == 0) {
      FUN_003673f0(auStack_70,"Call creation failed");
      uVar12 = FUN_00351340("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                            auStack_70,0,0);
    }
    uVar12 = FUN_00352130(uVar12,lVar21);
  }
  lVar21 = param_1[2];
  if (lVar21 != 0) {
    plVar9 = (long *)(lVar21 + 0x98);
    lVar16 = *(long *)(lVar11 + 0xa0);
    lVar13 = *plVar9;
    if (lVar13 == 0) {
      puVar10 = *(ulong **)(lVar21 + 8);
      do {
        uVar19 = *puVar10;
        uVar20 = uVar19 + 0x30;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar4) {
          *puVar10 = uVar20;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar10[1] < uVar20) {
        lVar13 = FUN_0038e7c0(puVar10,0x30);
      }
      else {
        lVar13 = (long)puVar10 + uVar19 + 0x20;
      }
      *(undefined8 *)(lVar13 + 0x20) = 0;
      FUN_0038db00(lVar13);
      do {
        if (*plVar9 != 0) {
          ClearExclusiveLocal();
                    /* try { // try from 0036b20c to 0036b213 has its CatchHandler @ 0036b3f8 */
          FUN_0038db20(lVar13);
          lVar13 = *plVar9;
          FUN_0038db40(lVar13);
          lVar21 = *(long *)(lVar13 + 0x20);
          goto joined_r0x0036b224;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *plVar9 = lVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_0038db40(lVar13);
    lVar21 = *(long *)(lVar13 + 0x20);
joined_r0x0036b224:
    if (lVar21 == 0) {
      *(long *)(lVar13 + 0x20) = lVar11;
      plVar9 = (long *)(lVar16 + 8);
      *(long *)(lVar16 + 0x10) = lVar11;
    }
    else {
      *(long *)(lVar16 + 8) = lVar21;
      lVar21 = *(long *)(*(long *)(lVar21 + 0xa0) + 0x10);
      *(long *)(lVar16 + 0x10) = lVar21;
      *(long *)(*(long *)(lVar21 + 0xa0) + 8) = lVar11;
      plVar9 = (long *)(*(long *)(*(long *)(lVar16 + 8) + 0xa0) + 0x10);
    }
    *plVar9 = lVar11;
    FUN_0038db60(lVar13);
  }
  if (uVar12 != 0) {
    uVar20 = uVar12;
    if (4 < uVar12) {
      uVar20 = FUN_00350fb0(uVar12,uVar12);
    }
    FUN_0036b750(lVar11,uVar20);
  }
  if (bVar6) {
    plVar9 = (long *)(lVar11 + 0x8b8);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        lVar17 = param_1[4];
        goto joined_r0x0036b3c4;
      }
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar9 = (long *)(lVar11 + 0x910);
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_003505cc(lVar17,4);
    plVar9 = (long *)FUN_0038c780(0x48);
    *plVar9 = lVar11;
    plVar9[6] = (long)&LAB_0036d000;
    plVar9[7] = (long)plVar9;
    plVar9[8] = 0;
    lVar21 = FUN_0037b8b0(plVar9 + 5);
    *(byte *)(lVar21 + 0x10) = *(byte *)(lVar21 + 0x10) | 0x40;
    *(undefined8 *)(*(long *)(lVar21 + 8) + 0x88) = 4;
    *(long *)(lVar21 + 0x18) = lVar11;
    plVar9[2] = (long)&LAB_0036d060;
    plVar9[3] = lVar21;
    plVar9[4] = 0;
    FUN_003504a8(lVar17,plVar9 + 1,0,"executing batch");
  }
  lVar17 = param_1[4];
joined_r0x0036b3c4:
  if (lVar17 == 0) {
    lVar17 = param_1[5];
  }
  else {
    if (param_1[5] != 0) {
LAB_0036b3f4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00371490();
    FUN_00371a20(param_1[4]);
    auVar23 = FUN_00357ff0();
    *(undefined1 (*) [12])(lVar11 + 0x78) = auVar23;
    lVar17 = param_1[5];
  }
  if (lVar17 != 0) {
    auVar23 = FUN_00357fe0();
    *(undefined1 (*) [12])(lVar11 + 0x78) = auVar23;
  }
  uVar20 = FUN_00358040(lVar11 + 0x78);
  if ((uVar20 & 1) == 0) {
    FUN_00344740(lVar11 + 0x910,lVar11 + 0x78);
  }
  if (*(char *)(lVar11 + 0xa8) == '\0') {
    lVar17 = FUN_00373790(*(undefined8 *)(lVar11 + 0x8e8));
    if (lVar17 == 0) goto LAB_0036b370;
    lVar17 = lVar17 + 0x38;
  }
  else {
    lVar17 = *(long *)(*(long *)(lVar11 + 0x88) + 0x68);
    if (lVar17 == 0) goto LAB_0036b370;
    lVar17 = lVar17 + 0x50;
  }
  FUN_003461b0(lVar17);
LAB_0036b370:
  if ((local_90 != (undefined8 *)0x0) && (plVar9 = (long *)*local_90, plVar9 != (long *)0x0)) {
    do {
      lVar17 = *plVar9;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (*(code *)local_90[3])(local_90[4]);
    }
  }
  return uVar12;
}


