/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018d9500; name: FUN_018d9500
 */


void FUN_018d9500(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  float extraout_s0;
  float fVar14;
  float extraout_var;
  float fVar16;
  float extraout_var_00;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  undefined8 uVar19;
  long *local_40 [2];
  
  lVar7 = FUN_018d9898(param_2,*param_4);
  if ((((*(long *)(lVar7 + 0xd8) == 0) || (*(short *)(*(long *)(lVar7 + 0xd8) + 0x1a) == 0)) &&
      (uVar9 = FUN_01473a8c(lVar7 + 0xc0), (uVar9 & 1) == 0)) || (*(long *)(lVar7 + 0xd0) == 0)) {
LAB_018d9590:
    puVar8 = (undefined1 *)FUN_00f6866c();
    *param_1 = *puVar8;
    return;
  }
  lVar7 = FUN_018d9898(param_2,*param_4);
  if ((((*(long *)(lVar7 + 0x88) == 0) || (*(short *)(*(long *)(lVar7 + 0x88) + 0x1a) == 0)) &&
      (uVar9 = FUN_013f7d04(lVar7 + 0x70), (uVar9 & 1) == 0)) ||
     ((lVar7 = *(long *)(lVar7 + 0x80), lVar7 == 0 ||
      (FUN_00e92dbc(local_40,lVar7), local_40[0] == (long *)0x0)))) goto LAB_018d9590;
  if (*(short *)((long)local_40[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_40[0] + 0x1a);
    sVar12 = *(short *)((long)local_40[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar12) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_018d9608;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018d9608:
        bVar5 = false;
      }
      if (bVar5) {
        plVar13 = (long *)0x0;
        if (local_40[0][2] != 0) {
          plVar13 = (long *)(local_40[0][2] + -0x28);
        }
        goto LAB_018d961c;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  plVar13 = (long *)0x0;
LAB_018d961c:
  plVar2 = local_40[0] + 3;
  do {
    sVar12 = (short)*plVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(short *)plVar2 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    FUN_0116e168();
  }
  else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar13 == (long *)0x0) goto LAB_018d9590;
  FUN_014410c0(local_40,*(undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 8)));
  auVar15 = FUN_01025bc4(local_40[0],*param_4 + (ulong)*(uint *)(param_2 + 0xe8));
  uVar9 = FUN_0200b008(plVar13);
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_0200b04c(plVar13);
    if ((uVar9 & 1) == 0) {
      lVar11 = *param_4;
      FUN_0200bf44(auVar15,*(undefined4 *)(lVar11 + (ulong)*(uint *)(param_2 + 0xfc)),
                   *(undefined4 *)(lVar11 + (ulong)*(uint *)(param_2 + 0x100)),
                   *(undefined4 *)(lVar11 + (ulong)*(uint *)(param_2 + 0xf4)),
                   *(undefined4 *)(lVar11 + (ulong)*(uint *)(param_2 + 0xf8)),plVar13,
                   *(undefined1 *)(lVar11 + (ulong)*(uint *)(param_2 + 0x104)));
      FUN_019587b4(lVar7);
      lVar11 = *param_4;
      puVar6 = (undefined8 *)(lVar11 + (ulong)*(uint *)(param_2 + 0x108));
      uVar19 = *puVar6;
      fVar14 = extraout_s0 - (float)uVar19;
      fVar16 = extraout_var - (float)((ulong)uVar19 >> 0x20);
      fVar17 = extraout_var_00 - (float)puVar6[1];
      fVar18 = *(float *)(lVar11 + (ulong)*(uint *)(param_2 + 0xec));
      fVar14 = fVar14 * fVar14;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      auVar15._0_4_ = fVar14 + fVar16;
      auVar15._4_4_ = fVar17 + 0.0;
      auVar15._8_4_ = fVar14 + fVar16;
      auVar15._12_4_ = fVar17 + 0.0;
      auVar15 = NEON_ext(auVar15,auVar15,4,1);
      if (auVar15._0_4_ + auVar15._4_4_ < fVar18 * fVar18) {
        pcVar10 = (char *)FUN_0200cd6c();
        if (*pcVar10 != '\0') {
          lVar11 = (**(code **)**(undefined8 **)param_4[1])(*(undefined8 **)param_4[1],1);
          *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) =
               *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c)) +
               (float)((double)*(long *)(lVar11 + 8) / 1000000000.0);
        }
        if (*(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0xf0)) <=
            *(float *)(*param_4 + (ulong)*(uint *)(param_2 + 0x10c))) goto LAB_018d982c;
      }
      else {
        *(undefined4 *)(lVar11 + (ulong)*(uint *)(param_2 + 0x10c)) = 0;
      }
      auVar15 = FUN_019587b4(lVar7);
      puVar6 = (undefined8 *)(*param_4 + (ulong)*(uint *)(param_2 + 0x108));
      puVar6[1] = auVar15._8_8_;
      *puVar6 = auVar15._0_8_;
      puVar8 = (undefined1 *)FUN_015a7158();
    }
    else {
LAB_018d982c:
      FUN_0200b034(plVar13);
      puVar8 = (undefined1 *)FUN_00f6866c();
    }
  }
  else {
    FUN_0200b034(plVar13);
    puVar8 = (undefined1 *)FUN_015c0588();
  }
  *param_1 = *puVar8;
  if (local_40[0] != (long *)0x0) {
    lVar7 = local_40[0][6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_40[0] + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_018d9770;
  }
  lVar7 = plVar13[6];
  psVar1 = (short *)(lVar7 + 0x1a);
  do {
    sVar12 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar12 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar12 == 1) {
    *(undefined8 *)(lVar7 + 0x10) = 0;
    (**(code **)(*plVar13 + 0x50))(plVar13);
    return;
  }
  if (sVar12 != 0) {
    return;
  }
LAB_018d9770:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


