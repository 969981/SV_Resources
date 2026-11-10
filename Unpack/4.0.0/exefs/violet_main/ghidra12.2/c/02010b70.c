/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02010b70; name: FUN_02010b70
 */


void FUN_02010b70(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  short sVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  float extraout_s0;
  float fVar18;
  undefined8 extraout_d0;
  float extraout_var;
  float fVar22;
  float extraout_var_00;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar24;
  undefined8 extraout_var_01;
  float fVar25;
  long *local_70 [2];
  long local_58;
  
  lVar17 = *param_4;
  lVar14 = *(long *)(lVar17 + (ulong)*(uint *)(param_2 + 0xe4));
  if ((lVar14 == 0) && (lVar14 = *(long *)(lVar17 + (ulong)*(uint *)(param_2 + 8)), lVar14 != 0)) {
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
    if (((*PTR_DAT_047db160 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047db160), iVar8 != 0)) {
      uVar10 = FUN_01fb90e4();
      *(undefined8 *)PTR_DAT_047db168 = uVar10;
      __cxa_guard_release(PTR_DAT_047db160);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_047db168) goto LAB_02010c58;
    }
    lVar14 = 0;
LAB_02010c58:
    *(long *)(lVar17 + (ulong)*(uint *)(param_2 + 0xe4)) = lVar14;
  }
  if ((((*(long *)(lVar14 + 0x88) == 0) || (*(short *)(*(long *)(lVar14 + 0x88) + 0x1a) == 0)) &&
      (uVar11 = FUN_013f7d04(lVar14 + 0x70), (uVar11 & 1) == 0)) ||
     (lVar14 = *(long *)(lVar14 + 0x80), lVar14 == 0)) {
LAB_02010be0:
    *param_1 = *PTR_DAT_047db188;
    return;
  }
  FUN_00e92dbc(local_70,lVar14);
  plVar9 = local_70[0];
  if (local_70[0] == (long *)0x0) goto LAB_02010be0;
  if (*(short *)((long)local_70[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_70[0] + 0x1a);
    sVar13 = *(short *)((long)local_70[0] + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar13) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_02010cac;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02010cac:
        bVar6 = false;
      }
      if (bVar6) {
        plVar15 = (long *)0x0;
        if (local_70[0][2] != 0) {
          plVar15 = (long *)(local_70[0][2] + -0x28);
        }
        goto LAB_02010cc0;
      }
      sVar13 = sVar4;
    } while (sVar4 != 0);
  }
  plVar15 = (long *)0x0;
LAB_02010cc0:
  plVar16 = local_70[0] + 3;
  do {
    sVar13 = (short)*plVar16;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar6) {
      *(short *)plVar16 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    piVar3 = (int *)((long)local_70[0] + 0x1c);
    do {
      iVar8 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar17 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar17;
      local_58 = *plVar9;
      FUN_00c44438(lVar17 + 0x8040,&local_58);
    }
  }
  else if (sVar13 == 0) goto LAB_020111c4;
  if (plVar15 == (long *)0x0) goto LAB_02010be0;
  FUN_00e3353c(local_70,lVar14);
  plVar9 = local_70[0];
  if (local_70[0] == (long *)0x0) {
LAB_02010cf8:
    *param_1 = *PTR_DAT_047db188;
  }
  else {
    if (*(short *)((long)local_70[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70[0] + 0x1a);
      sVar13 = *(short *)((long)local_70[0] + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_02010e54;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02010e54:
          bVar6 = false;
        }
        if (bVar6) {
          plVar16 = (long *)0x0;
          if (local_70[0][2] != 0) {
            plVar16 = (long *)(local_70[0][2] + -0x28);
          }
          goto LAB_02010e7c;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar16 = (long *)0x0;
LAB_02010e7c:
    plVar2 = local_70[0] + 3;
    do {
      sVar13 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_70[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_58 = *plVar9;
        FUN_00c44438(lVar17 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) {
LAB_020111c4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar16 == (long *)0x0) goto LAB_02010cf8;
    FUN_014410c0(local_70,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
    if (local_70[0] == (long *)0x0) {
LAB_0201118c:
      puVar12 = PTR_DAT_047db188;
    }
    else {
      uVar11 = FUN_0200b008(plVar15);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_0200b04c(plVar15);
        if ((uVar11 & 1) != 0) {
LAB_02011178:
          FUN_0200b034(plVar15);
          FUN_01e163ac(plVar16);
          goto LAB_0201118c;
        }
        uVar11 = FUN_00d60828(local_70[0],*param_4 + (ulong)*(uint *)(param_2 + 0xf4));
        if ((uVar11 & 1) != 0) {
          auVar19 = FUN_01025bc4(local_70[0],*param_4 + (ulong)*(uint *)(param_2 + 0xfc));
          auVar20 = FUN_00fe4dd4(local_70[0],*param_4 + (ulong)*(uint *)(param_2 + 0xf8));
          auVar21 = FUN_00fe4dd4(local_70[0],*param_4 + (ulong)*(uint *)(param_2 + 0x100));
          uVar24 = auVar21._8_8_;
          FUN_00fe4dd4(local_70[0],*param_4 + (ulong)*(uint *)(param_2 + 0x104));
          uVar10 = extraout_var_01;
          FUN_0200bf44(auVar19,auVar20._0_8_,0x3dcccccd,0x3f000000,0x3f000000,plVar15,
                       *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_2 + 0xf0)));
          auVar19._8_8_ = uVar10;
          auVar19._0_8_ = extraout_d0;
          FUN_02010b5c(auVar19,plVar15);
          auVar21._8_8_ = uVar24;
          FUN_01e163ac(auVar21,plVar16);
        }
        FUN_019587b4(lVar14);
        lVar17 = *param_4;
        puVar7 = (undefined8 *)(lVar17 + (ulong)*(uint *)(param_2 + 0x108));
        uVar10 = *puVar7;
        fVar18 = extraout_s0 - (float)uVar10;
        fVar22 = extraout_var - (float)((ulong)uVar10 >> 0x20);
        fVar23 = extraout_var_00 - (float)puVar7[1];
        fVar25 = *(float *)(lVar17 + (ulong)*(uint *)(param_2 + 0xe8));
        fVar18 = fVar18 * fVar18;
        fVar22 = fVar22 * fVar22;
        fVar23 = fVar23 * fVar23;
        auVar20._0_4_ = fVar18 + fVar22;
        auVar20._4_4_ = fVar23 + 0.0;
        auVar20._8_4_ = fVar18 + fVar22;
        auVar20._12_4_ = fVar23 + 0.0;
        auVar19 = NEON_ext(auVar20,auVar20,4,1);
        if (fVar25 * fVar25 <= auVar19._0_4_ + auVar19._4_4_) {
          *(undefined4 *)(lVar17 + (ulong)*(uint *)(param_2 + 0x10c)) = 0;
        }
        else {
          lVar17 = (**(code **)**(undefined8 **)param_4[1])(*(undefined8 **)param_4[1],1);
          *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) =
               *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) +
               (float)((double)*(long *)(lVar17 + 8) / 1000000000.0);
          if (*(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0xec)) <=
              *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c))) goto LAB_02011178;
        }
        auVar19 = FUN_019587b4(lVar14);
        puVar7 = (undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 0x108));
        puVar7[1] = auVar19._8_8_;
        *puVar7 = auVar19._0_8_;
        puVar12 = (undefined1 *)FUN_015a7158();
      }
      else {
        FUN_0200b034(plVar15);
        FUN_01e163ac(plVar16);
        puVar12 = (undefined1 *)FUN_015c0588();
      }
    }
    *param_1 = *puVar12;
    if (local_70[0] != (long *)0x0) {
      lVar14 = local_70[0][6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_70[0] + 0x50))();
      }
      else if (sVar13 == 0) goto LAB_02010d2c;
    }
    lVar14 = plVar16[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar13 == 0) goto LAB_02010d2c;
  }
  lVar14 = plVar15[6];
  psVar1 = (short *)(lVar14 + 0x1a);
  do {
    sVar13 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar14 + 0x10) = 0;
    (**(code **)(*plVar15 + 0x50))(plVar15);
    return;
  }
  if (sVar13 != 0) {
    return;
  }
LAB_02010d2c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


