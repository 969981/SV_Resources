/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035d480; name: FUN_0035d480
 */


undefined8 FUN_0035d480(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long local_3f30;
  long local_3f28;
  long local_3f20 [1998];
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [32];
  
  lVar14 = *(long *)(param_1 + 0x178);
  lVar18 = *(long *)(param_1 + 0x180);
  plVar1 = (long *)(PTR_DAT_047cce80 + 8);
  lVar10 = *(long *)(lVar14 + 0x10);
  lVar15 = 0;
  lVar2 = param_1 + 0x280;
LAB_0035d4d4:
  do {
    if (lVar15 - lVar10 == 0) {
LAB_0035d858:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar14 = *(long *)(lVar14 + 8);
    if (*(long *)(lVar14 + lVar15 * 0x20) == 0) {
      lVar16 = lVar14 + lVar15 * 0x20;
      local_3f30 = lVar16 + lVar18 + 9;
      uVar9 = (ulong)*(byte *)(lVar16 + 8);
    }
    else {
      lVar16 = lVar14 + lVar15 * 0x20;
      local_3f30 = *(long *)(lVar16 + 0x10) + lVar18;
      uVar9 = *(ulong *)(lVar16 + 8);
    }
    lVar16 = lVar15 + 1;
    local_3f28 = uVar9 - lVar18;
    *(undefined8 *)(param_1 + 0x180) = 0;
    lVar17 = local_3f28;
    if (lVar16 == lVar10) {
      local_98 = 1;
    }
    else {
      plVar11 = (long *)(lVar14 + lVar15 * 0x20 + 0x30);
      lVar14 = 0;
      plVar12 = local_3f20;
      do {
        lVar16 = lVar14;
        if (plVar11[-2] == 0) {
          *plVar12 = (long)plVar11 + -7;
          uVar9 = (ulong)*(byte *)(plVar11 + -1);
        }
        else {
          *plVar12 = *plVar11;
          uVar9 = plVar11[-1];
        }
        plVar12[1] = uVar9;
        lVar17 = uVar9 + lVar17;
        *(undefined8 *)(param_1 + 0x180) = 0;
        if (lVar16 == 0x3e6) break;
        plVar12 = plVar12 + 2;
        plVar11 = plVar11 + 4;
        lVar14 = lVar16 + 1;
      } while ((lVar15 - lVar10) + 2 + lVar16 != 0);
      local_98 = (int)lVar16 + 2;
      lVar16 = lVar15 + lVar16 + 1 + 1;
    }
    local_b0 = 0;
    local_a8 = 0;
    local_84 = 0;
    local_a0 = &local_3f30;
    if (*(long *)(param_1 + 0x2a0) != 0) {
      if (*(char *)(param_1 + 0x2ad) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_0035d950();
      }
      *(undefined1 *)(param_1 + 0x2ad) = 0;
      FUN_0038db40(lVar2);
      FUN_003673f0(auStack_80,"TracedBuffer list shutdown");
      uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x4f7,
                           auStack_80,0,0);
      if (4 < uVar9) {
        FUN_00350fd0();
      }
      FUN_0038db60(lVar2);
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    local_90 = 0;
    local_88 = 0;
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    while (lVar10 = nnsocketSendMsg(uVar3,&local_b0,0), lVar10 < 0) {
      piVar7 = __errno_location();
      if (*piVar7 != 4) {
        piVar7 = __errno_location();
        if (*piVar7 == 0xb) {
          *(long *)(param_1 + 0x180) = lVar18;
          for (; lVar15 != 0; lVar15 = lVar15 + -1) {
            FUN_003692b0(*(undefined8 *)(param_1 + 0x178));
          }
          return 0;
        }
        piVar7 = __errno_location();
        iVar4 = *piVar7;
        piVar7 = __errno_location();
        if (iVar4 == 0x20) {
          uVar8 = 0x5c9;
        }
        else {
          uVar8 = 0x5ce;
        }
        lVar14 = FUN_00352a10("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",uVar8,
                              *piVar7,"sendmsg");
        if (lVar14 != 0) {
          uVar8 = FUN_00351770(lVar14,0xb,(long)*(int *)(param_1 + 0x10));
          uVar8 = FUN_00351770(uVar8,3,0xe);
          FUN_00367770(auStack_80,*(undefined8 *)(param_1 + 0x208));
          uVar8 = FUN_00351fa0(uVar8,4,auStack_80);
          *param_2 = uVar8;
          FUN_00368510(*(undefined8 *)(param_1 + 0x178));
          if (*(long *)(param_1 + 0x2a0) == 0) {
            return 1;
          }
          FUN_0038db40(lVar2);
          FUN_003673f0(auStack_80,"TracedBuffer list shutdown");
          uVar9 = FUN_00351340("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x4f7
                               ,auStack_80,0,0);
          if (4 < uVar9) {
            FUN_00350fd0();
          }
          FUN_0038db60(lVar2);
          *(undefined8 *)(param_1 + 0x2a0) = 0;
          return 1;
        }
        goto LAB_0035d858;
      }
    }
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (*(long *)(param_1 + 0x180) != 0) goto LAB_0035d858;
    *(int *)(param_1 + 0x2a8) = *(int *)(param_1 + 0x2a8) + (int)lVar10;
    lVar14 = *(long *)(param_1 + 0x178);
    uVar9 = lVar17 - lVar10;
    lVar15 = lVar16;
    if (uVar9 != 0) {
      plVar11 = (long *)(*(long *)(lVar14 + 8) + lVar16 * 0x20);
      do {
        lVar15 = lVar15 + -1;
        if (plVar11[-4] == 0) {
          uVar13 = (ulong)*(byte *)(plVar11 + -3);
        }
        else {
          uVar13 = plVar11[-3];
        }
        if (uVar9 < uVar13) {
          lVar18 = uVar13 - uVar9;
          *(long *)(param_1 + 0x180) = lVar18;
          lVar10 = *(long *)(lVar14 + 0x10);
          if (lVar15 == lVar10) goto LAB_0035d704;
          goto LAB_0035d4d4;
        }
        uVar9 = uVar9 - uVar13;
        plVar11 = plVar11 + -4;
      } while (uVar9 != 0);
    }
    lVar18 = 0;
    lVar10 = *(long *)(lVar14 + 0x10);
    if (lVar15 == lVar10) {
LAB_0035d704:
      *param_2 = 0;
      FUN_00368510(*(undefined8 *)(param_1 + 0x178));
      return 1;
    }
  } while( true );
}


