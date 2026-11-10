/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f4837c; name: FUN_00f4837c
 */


void FUN_00f4837c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,undefined8 *param_6)

{
  short *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  short sVar18;
  undefined4 uVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  undefined8 uVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  float fVar34;
  undefined1 local_e0 [16];
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  float local_ac;
  undefined1 local_a8;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_68;
  
  uVar33 = param_4._8_8_;
  uVar32 = param_4._0_8_;
  uVar31 = param_3._8_8_;
  fVar29 = param_3._4_4_;
  fVar23 = param_3._0_4_;
  lVar17 = *(long *)(param_5 + 0x70);
  if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
    plVar20 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar18 = *(short *)(lVar17 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00f48858;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f48858:
        bVar11 = false;
      }
      if (bVar11) {
        plVar20 = (long *)0x0;
        if (*(long *)(lVar17 + 0x10) != 0) {
          plVar20 = (long *)(*(long *)(lVar17 + 0x10) + -0x28);
        }
        break;
      }
      plVar20 = (long *)0x0;
      sVar18 = sVar5;
    } while (sVar5 != 0);
  }
  plVar14 = (long *)FUN_00f4906c(param_5);
  lVar17 = *plVar14;
  if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
LAB_00f483c4:
    plVar14 = (long *)0x0;
    bVar11 = false;
    bVar10 = false;
  }
  else {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar18 = *(short *)(lVar17 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00f488b8;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f488b8:
        bVar11 = false;
      }
      if (bVar11) {
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 == 0) goto LAB_00f483c4;
        plVar14 = (long *)(lVar17 + -0x28);
        bVar10 = *(char *)(lVar17 + 0x199) != '\0';
        bVar11 = *(char *)(lVar17 + 0x1f8) != '\0';
        break;
      }
      plVar14 = (long *)0x0;
      bVar11 = false;
      bVar10 = false;
      sVar18 = sVar5;
    } while (sVar5 != 0);
  }
  lVar17 = (*(code *)**(undefined8 **)*param_6)((undefined8 *)*param_6,1);
  fVar34 = (float)((double)*(long *)(lVar17 + 8) / 1000000000.0);
  uVar12 = FUN_00cf2c34();
  if (!bVar10) {
    if (uVar12 == 7) {
      fVar26 = fVar34 * 5.0 + *(float *)(param_5 + 0x15d8);
      puVar2 = (undefined8 *)&DAT_03d5f0ec;
      if (fVar26 <= 100.0) {
        puVar2 = (undefined8 *)(param_5 + 0x15d8);
      }
      *(float *)(param_5 + 0x15d8) = fVar26;
      local_98 = (undefined1 *)((ulong)local_98._4_4_ << 0x20);
      puVar3 = &local_98;
      if (0.0 <= fVar26) {
        puVar3 = puVar2;
      }
      *(undefined4 *)(param_5 + 0x15d8) = *(undefined4 *)puVar3;
    }
    else if (((uVar12 & 0xfffffffd) == 4) || (uVar12 == 5)) {
      fVar26 = fVar34 * 5.0 + *(float *)(param_5 + 0x15d4);
      puVar2 = (undefined8 *)&DAT_03d5f0ec;
      if (fVar26 <= 100.0) {
        puVar2 = (undefined8 *)(param_5 + 0x15d4);
      }
      *(float *)(param_5 + 0x15d4) = fVar26;
      local_98 = (undefined1 *)((ulong)local_98._4_4_ << 0x20);
      puVar3 = &local_98;
      if (0.0 <= fVar26) {
        puVar3 = puVar2;
      }
      *(undefined4 *)(param_5 + 0x15d4) = *(undefined4 *)puVar3;
    }
  }
  if (*(int *)((long)plVar20 + 0x17c) - 1U < 3) {
    if (bVar11 || bVar10) {
      if (bVar11) {
        fVar26 = *(float *)(param_5 + 0x15d8) - fVar34 * 100.0;
        *(float *)(param_5 + 0x15d8) = fVar26;
        fVar34 = *(float *)(param_5 + 0x15d4) - fVar34 * 100.0;
LAB_00f48590:
        *(float *)(param_5 + 0x15d4) = fVar34;
      }
      else {
        if (bVar10) {
          fVar26 = *(float *)(param_5 + 0x15d8) - fVar34 * 5.0;
          fVar34 = *(float *)(param_5 + 0x15d4) - fVar34 * 5.0;
          *(float *)(param_5 + 0x15d8) = fVar26;
          goto LAB_00f48590;
        }
        fVar26 = *(float *)(param_5 + 0x15d8);
        fVar34 = *(float *)(param_5 + 0x15d4);
      }
      fVar23 = 100.0;
      fVar29 = 0.0;
      uVar31 = 0;
      puVar2 = (undefined8 *)&DAT_03d5f0ec;
      if (fVar26 <= 100.0) {
        puVar2 = (undefined8 *)(param_5 + 0x15d8);
      }
      puVar3 = &local_98;
      if (0.0 <= fVar26) {
        puVar3 = puVar2;
      }
      uVar22 = (ulong)local_98._4_4_;
      local_98 = (undefined1 *)(uVar22 << 0x20);
      puVar2 = (undefined8 *)&DAT_03d5f0ec;
      if (fVar34 <= 100.0) {
        puVar2 = (undefined8 *)(param_5 + 0x15d4);
      }
      *(undefined4 *)(param_5 + 0x15d8) = *(undefined4 *)puVar3;
      local_98 = (undefined1 *)(uVar22 << 0x20);
      puVar3 = &local_98;
      if (0.0 <= fVar34) {
        puVar3 = puVar2;
      }
      *(undefined4 *)(param_5 + 0x15d4) = *(undefined4 *)puVar3;
    }
    else {
      if (uVar12 == 7) {
LAB_00f4849c:
        fVar26 = *(float *)(param_5 + 0x15d4) - fVar34 * 5.0;
        puVar2 = (undefined8 *)&DAT_03d5f0ec;
        if (fVar26 <= 100.0) {
          puVar2 = (undefined8 *)(param_5 + 0x15d4);
        }
        *(float *)(param_5 + 0x15d4) = fVar26;
        local_98 = (undefined1 *)((ulong)local_98 & 0xffffffff00000000);
        puVar3 = &local_98;
        if (0.0 <= fVar26) {
          puVar3 = puVar2;
        }
        *(undefined4 *)(param_5 + 0x15d4) = *(undefined4 *)puVar3;
      }
      else {
        fVar23 = 100.0;
        fVar29 = 0.0;
        uVar31 = 0;
        fVar26 = *(float *)(param_5 + 0x15d8) - fVar34 * 5.0;
        puVar2 = (undefined8 *)&DAT_03d5f0ec;
        if (fVar26 <= 100.0) {
          puVar2 = (undefined8 *)(param_5 + 0x15d8);
        }
        *(float *)(param_5 + 0x15d8) = fVar26;
        local_98 = (undefined1 *)((ulong)local_98._4_4_ << 0x20);
        puVar3 = &local_98;
        if (0.0 <= fVar26) {
          puVar3 = puVar2;
        }
        *(undefined4 *)(param_5 + 0x15d8) = *(undefined4 *)puVar3;
        if (2 < uVar12 - 4) goto LAB_00f4849c;
      }
      if ((uVar12 & 0xfffffffe) == 2) {
        fVar23 = 100.0;
        fVar29 = 0.0;
        uVar31 = 0;
        fVar26 = fVar34 * -5.0 + *(float *)(param_5 + 0x15d4);
        *(float *)(param_5 + 0x15d4) = fVar26;
        uVar22 = (ulong)local_98 >> 0x20;
        local_98 = (undefined1 *)(uVar22 << 0x20);
        puVar2 = (undefined8 *)&DAT_03d5f0ec;
        if (fVar26 <= 100.0) {
          puVar2 = (undefined8 *)(param_5 + 0x15d4);
        }
        puVar3 = &local_98;
        if (0.0 <= fVar26) {
          puVar3 = puVar2;
        }
        fVar34 = fVar34 * -5.0 + *(float *)(param_5 + 0x15d8);
        *(undefined4 *)(param_5 + 0x15d4) = *(undefined4 *)puVar3;
        puVar2 = (undefined8 *)&DAT_03d5f0ec;
        if (fVar34 <= 100.0) {
          puVar2 = (undefined8 *)(param_5 + 0x15d8);
        }
        *(float *)(param_5 + 0x15d8) = fVar34;
        local_98 = (undefined1 *)(uVar22 << 0x20);
        puVar3 = &local_98;
        if (0.0 <= fVar34) {
          puVar3 = puVar2;
        }
        *(undefined4 *)(param_5 + 0x15d8) = *(undefined4 *)puVar3;
      }
    }
  }
  if (*(int *)(param_5 + 0x15d0) == -1) {
    fVar34 = *(float *)(param_5 + 0x15d4) + -50.0;
    if ((fVar34 < 1.1920929e-07) || ((int)(fVar34 / 2.5) < 1)) {
      fVar34 = *(float *)(param_5 + 0x15d8) + -50.0;
      if ((fVar34 < 1.1920929e-07) || ((int)(fVar34 / 2.5) < 1)) goto LAB_00f4863c;
      uVar19 = 1;
    }
    else {
      uVar19 = 0;
    }
    *(undefined4 *)(param_5 + 0x15d0) = uVar19;
  }
LAB_00f4863c:
  plVar15 = (long *)FUN_00f48cd0(param_5);
  lVar17 = *plVar15;
  if ((lVar17 != 0) && (*(short *)(lVar17 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar17 + 0x1a);
    sVar18 = *(short *)(lVar17 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar18) {
        cVar6 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar11) {
          *psVar1 = sVar18 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00f48934;
        bVar11 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00f48934:
        bVar11 = false;
      }
      if (bVar11) {
        if (*(long *)(lVar17 + 0x10) != 0) {
          plVar21 = (long *)(*(long *)(lVar17 + 0x10) + -0x28);
          plVar15 = local_68;
          if (*(int *)(param_5 + 0x15d0) == -1) goto LAB_00f48960;
          plVar15 = (long *)FUN_00f48cd0(param_5);
          lVar17 = *plVar15;
          if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) goto LAB_00f48984;
          psVar1 = (short *)(lVar17 + 0x1a);
          sVar18 = *(short *)(lVar17 + 0x1a);
          goto LAB_00f4899c;
        }
        break;
      }
      sVar18 = sVar5;
    } while (sVar5 != 0);
  }
  goto LAB_00f4864c;
LAB_00f4899c:
  sVar5 = *psVar1;
  if (sVar5 == sVar18) {
    cVar6 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar11) {
      *psVar1 = sVar18 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00f489c0;
    bVar11 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00f489c0:
    bVar11 = false;
  }
  if (!bVar11) goto code_r0x00f489c8;
  local_68 = (long *)(*(long *)(lVar17 + 0x10) + -0x28);
  plVar15 = (long *)0x0;
  if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00f48960;
  iVar16 = *(int *)(param_5 + 0x15d0);
  if ((iVar16 == -1) ||
     (fVar34 = *(float *)(param_5 + (long)iVar16 * 4 + 0x15d4) + -50.0, fVar34 < 1.1920929e-07)) {
    iVar13 = 0;
  }
  else {
    iVar13 = (int)(fVar34 / 2.5);
  }
  iVar4 = *(int *)(param_5 + 0x15dc);
  if (iVar13 == iVar4) goto LAB_00f48a30;
  if (iVar16 == 0) {
    uVar19 = 5;
LAB_00f48a70:
    *(undefined4 *)(param_5 + 0x1618) = uVar19;
  }
  else if (iVar16 == 1) {
    uVar19 = 4;
    goto LAB_00f48a70;
  }
  puVar9 = PTR_DAT_047d3e30;
  puVar8 = PTR_DAT_047d3e28;
  if (*(int *)((long)plVar20 + 0x17c) - 1U < 3) {
    if (iVar13 < iVar4) {
      FUN_01fae700(param_5,param_5 + (long)iVar16 * 0xa60 + 0xb0,&local_68,0);
      iVar16 = *(int *)(param_5 + 0x15dc) + -1;
      *(int *)(param_5 + 0x15dc) = iVar16;
      if (iVar16 == 0) {
        FUN_01fae700(param_5,param_5 + (long)*(int *)(param_5 + 0x15d0) * 0xa60 + 0xb0,&local_68,1);
        *(undefined4 *)(param_5 + 0x15d0) = 0xffffffff;
      }
      goto LAB_00f48a30;
    }
    lVar17 = 0;
    while( true ) {
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar8);
      }
      if (*(long *)(param_5 + (long)iVar16 * 0xa60 + lVar17 + 0x170) != *(long *)puVar9) {
        FUN_01fae700(param_5,param_5 + lVar17 + (long)*(int *)(param_5 + 0x15d0) * 0xa60 + 0x120,
                     &local_68,0);
      }
      if (lVar17 == 0x850) break;
      iVar16 = *(int *)(param_5 + 0x15d0);
      lVar17 = lVar17 + 0x70;
    }
    iVar4 = *(int *)(param_5 + 0x15dc);
  }
  else {
    if ((*(int *)((long)plVar20 + 0x17c) != 0) || (iVar13 < iVar4)) goto LAB_00f48a30;
    lVar17 = *(long *)(param_5 + 0x15e0);
    if (*(long *)(param_5 + 0x15e8) != lVar17) {
      uVar22 = 0;
      do {
        local_98 = &DAT_afc4d6c05abef19e;
        pcStack_90 = "default";
        local_88 = 7;
        local_80 = (long *)0x0;
        FUN_00e7c820(local_68,*(undefined4 *)(lVar17 + uVar22 * 4),&local_98);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        uVar28 = uVar33 & 0xffffffff;
        uVar27 = uVar32;
        auVar24 = FUN_01facb64(plVar20,param_5 + 0x1560);
        fVar34 = (float)uVar32 + fVar23;
        fVar25 = (float)((ulong)uVar32 >> 0x20) + fVar29;
        fVar30 = (float)uVar31;
        uVar7 = (ulong)uVar31 >> 0x20;
        uVar19 = *(undefined4 *)(param_5 + 0x1618);
        fVar23 = nextafterf(1.0,3.4028235e+38);
        local_98 = (undefined1 *)((ulong)(uint)fVar23 << 0x20);
        fVar26 = (float)FUN_01096038(param_5 + 0x15b0,&local_98);
        fVar23 = *(float *)(param_5 + 0x15a0);
        fVar29 = 0.0;
        uVar31 = 0;
        local_a8 = 0;
        local_ac = fVar23 + fVar26 * (*(float *)(param_5 + 0x15a4) - fVar23);
        uStack_d0 = uVar27;
        uStack_c8 = uVar28;
        local_c0 = CONCAT44(fVar25,fVar34);
        uStack_b8 = CONCAT44((float)uVar7 + 0.0,(float)uVar33 + fVar30);
        local_b0 = uVar19;
        local_e0 = auVar24;
        FUN_014071f4(plVar20,local_e0);
        uVar22 = uVar22 + 1;
        lVar17 = *(long *)(param_5 + 0x15e0);
        uVar32 = uVar27;
        uVar33 = uVar28;
      } while (uVar22 < (ulong)(*(long *)(param_5 + 0x15e8) - lVar17 >> 2));
      iVar4 = *(int *)(param_5 + 0x15dc);
    }
  }
  *(int *)(param_5 + 0x15dc) = iVar4 + 1;
LAB_00f48a30:
  plVar15 = local_68;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x60))();
    plVar15 = local_68;
  }
  goto LAB_00f48960;
code_r0x00f489c8:
  sVar18 = sVar5;
  if (sVar5 == 0) goto LAB_00f48984;
  goto LAB_00f4899c;
LAB_00f48984:
  local_68 = (long *)0x0;
  plVar15 = local_68;
LAB_00f48960:
  local_68 = plVar15;
  (**(code **)(*plVar21 + 0x60))(plVar21);
LAB_00f4864c:
  if (plVar14 != (long *)0x0) {
    lVar17 = plVar14[0x13];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar18 == 0) goto LAB_00f486c0;
  }
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0x13];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar18 = *psVar1;
      cVar6 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar18 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar18 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar20 + 0x50))(plVar20);
    }
    else if (sVar18 == 0) {
LAB_00f486c0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


