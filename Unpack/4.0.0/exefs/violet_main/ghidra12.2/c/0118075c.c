/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118075c; name: FUN_0118075c
 */


void FUN_0118075c(undefined8 param_1,long param_2)

{
  float *pfVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  
  local_80 = *(undefined8 *)(param_2 + 0x110);
  uStack_78 = *(undefined8 *)(param_2 + 0x118);
  local_70 = *(undefined8 *)(param_2 + 0x120);
  plVar14 = *(long **)(param_2 + 0x128);
  local_68 = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
  }
  else {
    (**(code **)(param_2 + 0x10))(&local_60,param_2 + 0x30,&local_80);
    plVar14 = local_68;
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00d0a71c(&local_90,&local_60);
  lVar10 = FUN_01180e7c(param_2,&local_90);
  puVar8 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_b0 = *puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_b0);
      }
    }
    else if (sVar4 == 0) goto LAB_01180b28;
  }
  if (lVar10 != 0) {
    local_b0 = 0x89fbdfd187b4a105;
    pcStack_a8 = "StartRate";
    local_a0 = 9;
    local_98 = (long *)0x0;
    uVar11 = FUN_01180d38(param_2,&local_b0);
    fVar23 = 0.0;
    if ((uVar11 & 0xff) != 0) {
      fVar23 = (float)(uVar11 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_b0 = 0xd90c1d0825ba4098;
    pcStack_a8 = "EndRate";
    local_a0 = 7;
    local_98 = (long *)0x0;
    uVar11 = FUN_01180d38(param_2,&local_b0);
    fVar21 = 0.0;
    if ((uVar11 & 0xff) != 0) {
      fVar21 = (float)(uVar11 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_b0 = 0x9acde900bddf6add;
    pcStack_a8 = "StartDec";
    local_a0 = 8;
    local_98 = (long *)0x0;
    uVar11 = FUN_01180d38(param_2,&local_b0);
    fVar24 = 0.0;
    if ((uVar11 & 0xff) != 0) {
      fVar24 = (float)(uVar11 >> 0x20) * 360.0;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_b0 = 0xa6502ea951208e5a;
    pcStack_a8 = "EndDec";
    local_a0 = 6;
    local_98 = (long *)0x0;
    uVar11 = FUN_01180d38(param_2,&local_b0);
    fVar25 = 0.0;
    if ((uVar11 & 0xff) != 0) {
      fVar25 = (float)(uVar11 >> 0x20) * 360.0;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    local_b0 = 0x4fa950f8315da084;
    pcStack_a8 = "ShakeAxis";
    local_a0 = 9;
    local_98 = (long *)0x0;
    uVar11 = FUN_01470908(param_2,&local_b0);
    iVar9 = 0;
    if ((uVar11 & 0xff) != 0) {
      iVar9 = (int)(uVar11 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    puVar7 = PTR_PTR_047d9248;
    fVar15 = (float)(**(code **)PTR_PTR_047d9248)(param_1);
    fVar16 = (float)(**(code **)puVar7)(param_1);
    fVar22 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    uVar12 = (ulong)((fVar24 + (fVar25 - fVar24) * fVar16) *
                    (fVar22 / *(float *)PTR_FloatDegree180_047d2390));
    uVar11 = uVar12 >> 0x18 & 0xff;
    fVar23 = (fVar23 + (fVar21 - fVar23) * fVar15) *
             (*(float *)(PTR_SinCosSampleTable_047d2398 + uVar11 * 0x10 + 4) +
             *(float *)(PTR_SinCosSampleTable_047d2398 + uVar11 * 0x10 + 0xc) *
             (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08);
    uVar19 = *(undefined8 *)(lVar10 + 0x68);
    uVar17 = *(undefined8 *)(lVar10 + 0x60);
    if (iVar9 == 1) {
      uVar17 = CONCAT44(fVar23,(int)uVar17);
    }
    else {
      uVar18 = (undefined4)((ulong)uVar17 >> 0x20);
      uVar20 = (undefined4)((ulong)uVar19 >> 0x20);
      if (iVar9 == 3) {
        fVar21 = fVar23;
        fVar23 = 0.0;
LAB_01180a74:
        uVar17 = CONCAT44(uVar18,fVar21);
        uVar19 = CONCAT44(uVar20,fVar23);
      }
      else {
        if (iVar9 == 2) {
          uVar19 = CONCAT44(uVar20,fVar23);
          goto LAB_01180a30;
        }
        if (iVar9 == 4) {
          fVar21 = 0.0;
          goto LAB_01180a74;
        }
        uVar17 = CONCAT44(uVar18,fVar23);
        if (1 < iVar9 - 3U) goto LAB_01180a30;
      }
      uVar11 = (ulong)((fVar22 / *(float *)PTR_FloatDegree180_047d2390) * -*(float *)(lVar10 + 0xc4)
                      );
      pfVar1 = (float *)(PTR_SinCosSampleTable_047d2398 + (uVar11 >> 0x18 & 0xff) * 0x10);
      fVar23 = (float)((uint)uVar11 & 0xffffff) * 5.9604645e-08;
      fVar24 = pfVar1[1] + pfVar1[3] * fVar23;
      fVar21 = *pfVar1 + pfVar1[2] * fVar23;
      fVar23 = (float)uVar17;
      uVar17 = CONCAT44((int)((ulong)uVar17 >> 0x20),fVar21 * fVar23 - fVar24 * (float)uVar19);
      uVar19 = CONCAT44((int)((ulong)uVar19 >> 0x20),fVar24 * fVar23 + fVar21 * (float)uVar19);
    }
LAB_01180a30:
    *(undefined1 *)(lVar10 + 0xe0) = 1;
    *(undefined8 *)(lVar10 + 0x68) = uVar19;
    *(undefined8 *)(lVar10 + 0x60) = uVar17;
  }
  puVar8 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_60 + 3);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_b0 = *puVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_b0);
      }
    }
    else if (sVar4 == 0) {
LAB_01180b28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


