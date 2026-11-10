/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035e3a0; name: FUN_0035e3a0
 */


void FUN_0035e3a0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [24];
  ulong local_f0 [5];
  ulong uStack_c8;
  long local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  ulong *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [32];
  
  puVar4 = PTR_DAT_047cce80;
  uVar12 = *(ulong *)(*(long *)(param_1 + 0x168) + 0x10);
  if (3 < uVar12) {
    uVar12 = 4;
  }
  if (uVar12 != 0) {
    plVar14 = *(long **)(*(long *)(param_1 + 0x168) + 8);
    if (*plVar14 == 0) {
      local_f0[0] = (long)plVar14 + 9;
      local_f0[1] = (ulong)*(byte *)(plVar14 + 1);
    }
    else {
      local_f0[0] = plVar14[2];
      local_f0[1] = plVar14[1];
    }
    if (uVar12 != 1) {
      if (plVar14[4] == 0) {
        local_f0[2] = (long)plVar14 + 0x29;
        local_f0[3] = (ulong)*(byte *)(plVar14 + 5);
      }
      else {
        local_f0[2] = plVar14[6];
        local_f0[3] = plVar14[5];
      }
      if (uVar12 != 2) {
        if (plVar14[8] == 0) {
          local_f0[4] = (long)plVar14 + 0x49;
          uStack_c8 = (ulong)*(byte *)(plVar14 + 9);
        }
        else {
          local_f0[4] = plVar14[10];
          uStack_c8 = plVar14[9];
        }
        if (uVar12 != 3) {
          if (plVar14[0xc] == 0) {
            local_c0 = (long)plVar14 + 0x69;
            uStack_b8 = (ulong)*(byte *)(plVar14 + 0xd);
          }
          else {
            uStack_b8 = plVar14[0xd];
            local_c0 = plVar14[0xe];
          }
        }
      }
    }
  }
  uVar16 = 0;
LAB_0035e4b4:
  do {
    uVar19 = uVar12;
    *(undefined4 *)(param_1 + 0x170) = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_98 = (undefined4)uVar19;
    bVar5 = *(char *)(param_1 + 0x174) != '\0';
    local_90 = (undefined1 *)0x0;
    if (bVar5) {
      local_90 = auStack_108;
    }
    local_88 = 0;
    if (bVar5) {
      local_88 = 0x18;
    }
    uStack_84 = 0;
    local_a0 = local_f0;
    while (uVar7 = nnsocketRecvMsg(*(undefined4 *)(param_1 + 0x10),&local_b0,0), (long)uVar7 < 0) {
      piVar8 = __errno_location();
      if (*piVar8 != 4) {
        if (uVar16 != 0) goto LAB_0035e5bc;
        piVar8 = __errno_location();
        if (*piVar8 == 0xb) {
          dVar23 = *(double *)(param_1 + 0x18);
          dVar21 = *(double *)(param_1 + 0x20);
          dVar20 = dVar23 + dVar23;
          if (dVar23 + dVar23 <= dVar21) {
            dVar20 = dVar21;
          }
          dVar22 = dVar21 * 0.01 + dVar23 * 0.99;
          if (dVar23 * 0.8 < dVar21) {
            dVar22 = dVar20;
          }
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(double *)(param_1 + 0x18) = dVar22;
          *(undefined4 *)(param_1 + 0x170) = 0;
          FUN_00355050(*(undefined8 *)(param_1 + 8),param_1 + 0x1a8);
          return;
        }
        FUN_00368510(*(undefined8 *)(param_1 + 0x168));
        piVar8 = __errno_location();
        lVar17 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x302,
                              *piVar8,"recvmsg");
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar10 = FUN_00351770(lVar17,0xb,(long)*(int *)(param_1 + 0x10));
        uVar10 = FUN_00351770(uVar10,3,0xe);
        FUN_00367770(auStack_80,*(undefined8 *)(param_1 + 0x208));
        uVar12 = FUN_00351fa0(uVar10,4,auStack_80);
        lVar17 = *(long *)(param_1 + 0x188);
        if (PTR_DAT_047ccde8[0x10] != '\0') {
          FUN_00352270(uVar12);
          iVar6 = FUN_0038c970(0);
          if ((iVar6 != 0) && (lVar9 = *(long *)(param_1 + 0x168), *(long *)(lVar9 + 0x10) != 0)) {
            lVar18 = 0;
            uVar16 = 0;
            do {
              pvVar11 = (void *)FUN_0036a0b0(*(long *)(lVar9 + 8) + lVar18,3);
              free(pvVar11);
              lVar9 = *(long *)(param_1 + 0x168);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 0x20;
            } while (uVar16 < *(ulong *)(lVar9 + 0x10));
          }
        }
        goto LAB_0035e738;
      }
    }
    if ((uVar16 != 0) && (uVar7 == 0)) {
LAB_0035e5bc:
      *(undefined4 *)(param_1 + 0x170) = 1;
LAB_0035e5c4:
      lVar9 = *(long *)(param_1 + 0x168);
      lVar17 = *(ulong *)(lVar9 + 0x20) - uVar16;
      if (uVar16 <= *(ulong *)(lVar9 + 0x20) && lVar17 != 0) {
LAB_0035e5d4:
        FUN_00368f70(lVar9,lVar17,param_1 + 0x40);
      }
LAB_0035e5dc:
      lVar17 = *(long *)(param_1 + 0x188);
      if (PTR_DAT_047ccde8[0x10] != '\0') {
        FUN_00352270(0);
        iVar6 = FUN_0038c970(0);
        if ((iVar6 != 0) && (lVar9 = *(long *)(param_1 + 0x168), *(long *)(lVar9 + 0x10) != 0)) {
          lVar18 = 0;
          uVar12 = 0;
          do {
            pvVar11 = (void *)FUN_0036a0b0(*(long *)(lVar9 + 8) + lVar18,3);
            free(pvVar11);
            lVar9 = *(long *)(param_1 + 0x168);
            uVar12 = uVar12 + 1;
            lVar18 = lVar18 + 0x20;
          } while (uVar12 < *(ulong *)(lVar9 + 0x10));
        }
      }
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 8))(*(undefined8 *)(lVar17 + 0x10),0);
      }
LAB_0035e608:
      FUN_0035cfa0(param_1);
      return;
    }
    if (uVar7 == 0) {
      FUN_00368510(*(undefined8 *)(param_1 + 0x168));
      FUN_003673f0(auStack_128,"Socket closed");
      uVar10 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x310,
                            auStack_128,0,0);
      uVar10 = FUN_00351770(uVar10,0xb,(long)*(int *)(param_1 + 0x10));
      uVar10 = FUN_00351770(uVar10,3,0xe);
      FUN_00367770(auStack_80,*(undefined8 *)(param_1 + 0x208));
      uVar12 = FUN_00351fa0(uVar10,4,auStack_80);
      lVar17 = *(long *)(param_1 + 0x188);
      if (PTR_DAT_047ccde8[0x10] != '\0') {
        FUN_00352270(uVar12);
        iVar6 = FUN_0038c970(0);
        if ((iVar6 != 0) && (lVar9 = *(long *)(param_1 + 0x168), *(long *)(lVar9 + 0x10) != 0)) {
          lVar18 = 0;
          uVar16 = 0;
          do {
            pvVar11 = (void *)FUN_0036a0b0(*(long *)(lVar9 + 8) + lVar18,3);
            free(pvVar11);
            lVar9 = *(long *)(param_1 + 0x168);
            uVar16 = uVar16 + 1;
            lVar18 = lVar18 + 0x20;
          } while (uVar16 < *(ulong *)(lVar9 + 0x10));
        }
      }
LAB_0035e738:
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      if (lVar17 != 0) {
        (**(code **)(lVar17 + 8))(*(undefined8 *)(lVar17 + 0x10),uVar12);
      }
      if (4 < uVar12) {
        FUN_00350fd0(uVar12);
      }
      goto LAB_0035e608;
    }
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar5) {
        *(ulong *)puVar4 = *(long *)puVar4 + uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar16 = uVar7 + uVar16;
    dVar20 = *(double *)(param_1 + 0x20) + (double)uVar7;
    *(double *)(param_1 + 0x20) = dVar20;
    if (*(int *)(param_1 + 0x170) == 0) {
      dVar23 = *(double *)(param_1 + 0x18);
      dVar21 = dVar23 + dVar23;
      if (dVar23 + dVar23 <= dVar20) {
        dVar21 = dVar20;
      }
      dVar22 = dVar20 * 0.01 + dVar23 * 0.99;
      if (dVar23 * 0.8 < dVar20) {
        dVar22 = dVar21;
      }
      *(double *)(param_1 + 0x18) = dVar22;
      *(undefined8 *)(param_1 + 0x20) = 0;
      lVar9 = *(long *)(param_1 + 0x168);
      lVar17 = *(ulong *)(lVar9 + 0x20) - uVar16;
      if (!(*(ulong *)(lVar9 + 0x20) < uVar16 || lVar17 == 0)) goto LAB_0035e5d4;
      goto LAB_0035e5dc;
    }
    if (uVar16 == *(ulong *)(*(long *)(param_1 + 0x168) + 0x20)) goto LAB_0035e5c4;
    uVar12 = 0;
    if (uVar19 != 0) {
      uVar13 = 0;
      puVar15 = local_f0 + 1;
      do {
        while( true ) {
          uVar12 = *puVar15;
          if (uVar7 < uVar12) break;
          uVar19 = uVar19 - 1;
          puVar15 = puVar15 + 2;
          uVar7 = uVar7 - uVar12;
          uVar12 = uVar13;
          if (uVar19 == 0) goto LAB_0035e4b4;
        }
        bVar5 = uVar7 != 0;
        uVar12 = uVar12 - uVar7;
        uVar1 = puVar15[-1] + uVar7;
        uVar7 = 0;
        uVar2 = puVar15[-1];
        if (bVar5) {
          uVar2 = uVar1;
        }
        local_f0[uVar13 * 2] = uVar2;
        local_f0[uVar13 * 2 + 1] = uVar12;
        uVar19 = uVar19 - 1;
        puVar15 = puVar15 + 2;
        uVar12 = uVar13 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar19 != 0);
    }
  } while( true );
}


