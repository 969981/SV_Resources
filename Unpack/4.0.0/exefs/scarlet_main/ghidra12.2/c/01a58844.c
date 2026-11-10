/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a58844; name: FUN_01a58844
 */


void FUN_01a58844(long param_1)

{
  int *piVar1;
  long *plVar2;
  short *psVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short sVar8;
  char cVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  char *pcVar15;
  short sVar16;
  long lVar17;
  long *unaff_x22;
  byte bVar18;
  char local_b8 [8];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_38;
  
  plVar12 = (long *)FUN_00f351bc();
  lVar17 = *plVar12;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x20) + 0x10))();
  }
  puVar13 = (undefined8 *)FUN_00e514cc(lVar17);
  local_70 = 0x2cb63559b0b80fc6;
  pcStack_68 = "movie_for_bink";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  FUN_00eb0610(&local_38,*puVar13,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar14 = FUN_010bf4b8(&local_70,*(undefined8 *)(param_1 + 0x68),&local_38);
  if (lVar14 != 0) {
    piVar1 = (int *)(lVar14 + 0x28);
    do {
      iVar4 = *piVar1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar10) {
        *piVar1 = iVar4 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar12 != (long *)0x0) {
    plVar2 = plVar12 + 5;
    do {
      lVar11 = *plVar2;
      iVar4 = (int)lVar11 + -1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar10) {
        *(int *)plVar2 = iVar4;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar11 == 0) goto LAB_01a58b34;
  }
  *(long *)(param_1 + 0xe0) = lVar14;
  local_90 = 0x82887e2623688efc;
  pcStack_88 = "UseSRGB";
  local_80 = 7;
  local_78 = (long *)0x0;
  FUN_01773ea0(lVar14,&local_90,0);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  FUN_00eb6400(*(undefined8 *)(param_1 + 0xe0));
  FUN_00d100a8(*(undefined8 *)(param_1 + 0xe0));
  lVar14 = *(long *)(param_1 + 0x70);
  if ((lVar14 != 0) && (*(short *)(lVar14 + 0x1a) != 0)) {
    psVar3 = (short *)(lVar14 + 0x1a);
    sVar16 = *(short *)(lVar14 + 0x1a);
    do {
      sVar8 = *psVar3;
      if (sVar8 == sVar16) {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar10) {
          *psVar3 = sVar16 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 != '\0') goto LAB_01a58a08;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01a58a08:
        bVar10 = false;
      }
      if (bVar10) {
        if (*(long *)(lVar14 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(lVar14 + 0x10) + -0x28);
          pcVar15 = (char *)FUN_015f804c(*(undefined8 *)(param_1 + 0xe0));
          if (*pcVar15 == '\0') {
            local_b8[0] = '\0';
            bVar18 = 1;
          }
          else {
            uVar5 = *(undefined8 *)(pcVar15 + 8);
            uVar7 = *(undefined8 *)(pcVar15 + 0x10);
            uVar6 = *(undefined8 *)(pcVar15 + 0x18);
            unaff_x22 = *(long **)(pcVar15 + 0x20);
            if (unaff_x22 != (long *)0x0) {
              (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
            }
            local_b8[0] = '\0';
            local_b0 = uVar5;
            uStack_a8 = uVar7;
            local_a0 = uVar6;
            local_98 = unaff_x22;
            if (unaff_x22 != (long *)0x0) {
              (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
            }
            bVar18 = 0;
            local_b8[0] = '\x01';
          }
          FUN_026f3c60(plVar12,local_b8);
          if (local_b8[0] != '\0') {
            if (local_98 != (long *)0x0) {
              (**(code **)(*local_98 + 0x20))();
            }
            local_b8[0] = '\0';
          }
          if (!(bool)(bVar18 | unaff_x22 == (long *)0x0)) {
            (**(code **)(*unaff_x22 + 0x20))(unaff_x22);
          }
          (**(code **)(*plVar12 + 0x60))(plVar12);
        }
        break;
      }
      sVar16 = sVar8;
    } while (sVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  if (local_38 != (long *)0x0) {
    plVar12 = local_38 + 5;
    do {
      lVar14 = *plVar12;
      iVar4 = (int)lVar14 + -1;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar10) {
        *(int *)plVar12 = iVar4;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    else if ((int)lVar14 == 0) {
LAB_01a58b34:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x20) + 0x18))((long *)(lVar17 + 0x20));
  }
  return;
}


