/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f49928; name: FUN_00f49928
 */


void FUN_00f49928(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  short sVar14;
  long *plVar15;
  ulong uVar16;
  float fVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined1 auStack_100 [64];
  undefined1 local_c0 [16];
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_68;
  float local_64;
  
  uVar25 = param_4._8_8_;
  uVar24 = param_4._0_8_;
  uVar23 = param_3._8_8_;
  fVar22 = param_3._4_4_;
  fVar21 = param_3._0_4_;
  iVar2 = *(int *)(param_5 + 0xd0);
  iVar3 = *(int *)(param_5 + 0xd4);
  if (iVar2 == iVar3) {
    return;
  }
  lVar11 = *(long *)(param_5 + 0x40);
  if (lVar11 == 0) {
    return;
  }
  if (*(short *)(lVar11 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar11 + 0x1a);
  sVar14 = *(short *)(lVar11 + 0x1a);
  do {
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00f499bc;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f499bc:
      bVar6 = false;
    }
    if (bVar6) {
      lVar11 = *(long *)(lVar11 + 0x10);
      if (lVar11 == 0) {
        return;
      }
      plVar10 = (long *)FUN_00f48cd0(param_5);
      auVar9._8_8_ = local_c0._8_8_;
      auVar9._0_8_ = local_c0._0_8_;
      auVar8._8_8_ = local_c0._8_8_;
      auVar8._0_8_ = local_c0._0_8_;
      auVar7._8_8_ = local_c0._8_8_;
      auVar7._0_8_ = local_c0._0_8_;
      lVar12 = *plVar10;
      if (lVar12 == 0) goto LAB_00f499e8;
      local_c0 = auVar7;
      if (*(short *)(lVar12 + 0x1a) == 0) goto LAB_00f499e8;
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar14 = *(short *)(lVar12 + 0x1a);
      break;
    }
    sVar14 = sVar4;
    if (sVar4 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    sVar14 = sVar4;
    local_c0 = auVar9;
    if (sVar4 == 0) break;
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00f49a30;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f49a30:
      bVar6 = false;
    }
    if (bVar6) {
      local_c0 = auVar8;
      if (*(long *)(lVar12 + 0x10) != 0) {
        plVar15 = (long *)(*(long *)(lVar12 + 0x10) + -0x28);
        plVar10 = (long *)FUN_00f4b088(param_5);
        lVar12 = *plVar10;
        if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_00f49aa4;
        psVar1 = (short *)(lVar12 + 0x1a);
        sVar14 = *(short *)(lVar12 + 0x1a);
        goto LAB_00f49a70;
      }
      break;
    }
  }
  goto LAB_00f499e8;
  while (sVar14 = sVar4, sVar4 != 0) {
LAB_00f49a70:
    sVar4 = *psVar1;
    if (sVar4 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_00f49a94;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00f49a94:
      bVar6 = false;
    }
    if (bVar6) {
      plVar10 = (long *)0x0;
      if (*(long *)(lVar12 + 0x10) != 0) {
        plVar10 = (long *)(*(long *)(lVar12 + 0x10) + -0x28);
      }
      goto LAB_00f49abc;
    }
  }
LAB_00f49aa4:
  plVar10 = (long *)0x0;
LAB_00f49abc:
  lVar12 = *(long *)(param_5 + 0xd8);
  if (*(long *)(param_5 + 0xe0) != lVar12) {
    if (iVar2 < iVar3) {
      uVar16 = 0;
      do {
        local_c0._0_8_ = &DAT_afc4d6c05abef19e;
        local_c0._8_8_ = "default";
        local_b0 = 7;
        local_a8 = (long *)0x0;
        FUN_00e7c820(plVar15,*(undefined4 *)(lVar12 + uVar16 * 4),local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        uVar19 = uVar25 & 0xffffffff;
        uVar18 = uVar24;
        uVar20 = uVar19;
        FUN_01667884(local_c0);
        local_90 = 0x3f80000000000000;
        local_88 = 0;
        local_c0 = FUN_01facb64(plVar10,param_5 + 0x110);
        uStack_98 = CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar25 + (float)uVar23);
        local_a0 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar22,(float)uVar24 + fVar21);
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_5 + 0x160));
        local_88 = 0;
        local_b0 = uVar18;
        local_a8 = (long *)uVar20;
        local_64 = nextafterf(1.0,3.4028235e+38);
        local_68 = 0;
        fVar17 = (float)FUN_01fad7f8(param_5 + 0xa8,&local_68);
        fVar21 = *(float *)(param_5 + 0x150);
        fVar22 = 0.0;
        uVar23 = 0;
        local_90 = CONCAT44(-(fVar21 + fVar17 * (*(float *)(param_5 + 0x154) - fVar21)),
                            (undefined4)local_90);
        memcpy(auStack_100,local_c0,0x40);
        FUN_014071f4(plVar10,auStack_100);
        lVar12 = *(long *)(param_5 + 0xd8);
        uVar16 = uVar16 + 1;
        uVar25 = uVar19;
      } while (uVar16 < (ulong)(*(long *)(param_5 + 0xe0) - lVar12 >> 2));
    }
    else {
      uVar16 = 0;
      do {
        local_c0._0_8_ = &DAT_afc4d6c05abef19e;
        local_c0._8_8_ = "default";
        local_b0 = 7;
        local_a8 = (long *)0x0;
        FUN_00e7c820(plVar15,*(undefined4 *)(lVar12 + uVar16 * 4),local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        uVar19 = uVar25 & 0xffffffff;
        uVar18 = uVar24;
        uVar20 = uVar19;
        FUN_01667884(local_c0);
        local_90 = 0x3f80000000000000;
        local_88 = 0;
        local_c0 = FUN_01facb64(plVar10,param_5 + 0x110);
        uStack_98 = CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar25 + (float)uVar23);
        local_a0 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar22,(float)uVar24 + fVar21);
        local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)(param_5 + 0x160));
        local_88 = 0;
        local_b0 = uVar18;
        local_a8 = (long *)uVar20;
        local_64 = nextafterf(1.0,3.4028235e+38);
        local_68 = 0;
        fVar17 = (float)FUN_01fad7f8(param_5 + 0xa8,&local_68);
        fVar21 = *(float *)(param_5 + 0x150);
        fVar22 = 0.0;
        uVar23 = 0;
        local_90 = CONCAT44(fVar21 + fVar17 * (*(float *)(param_5 + 0x154) - fVar21),
                            (undefined4)local_90);
        memcpy(auStack_100,local_c0,0x40);
        FUN_014071f4(plVar10,auStack_100);
        lVar12 = *(long *)(param_5 + 0xd8);
        uVar16 = uVar16 + 1;
        uVar25 = uVar19;
      } while (uVar16 < (ulong)(*(long *)(param_5 + 0xe0) - lVar12 >> 2));
    }
  }
  iVar13 = 1;
  if (iVar2 < iVar3) {
    iVar13 = -1;
  }
  iVar13 = *(int *)(param_5 + 0xd4) + iVar13;
  *(int *)(param_5 + 0xd4) = iVar13;
  if (iVar13 == 0) {
    FUN_00f4b108(plVar10);
  }
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*plVar15 + 0x60))(plVar15);
LAB_00f499e8:
  (**(code **)(*(long *)(lVar11 + -0x28) + 0x60))();
  return;
}


