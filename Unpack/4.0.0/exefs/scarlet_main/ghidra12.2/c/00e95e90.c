/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e95e90; name: FUN_00e95e90
 */


void FUN_00e95e90(long param_1,undefined8 *param_2)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long lVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float afStack_b8 [14];
  float local_78;
  float local_74;
  
  lVar12 = *(long *)(param_1 + 0x88);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar14 = *(short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar14) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_00e95f28;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e95f28:
        bVar7 = false;
      }
      if (bVar7) {
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) {
          return;
        }
        lVar16 = *(long *)(lVar12 + 0x1c0);
        plVar15 = (long *)(lVar12 + -0x28);
        if ((lVar16 == 0) || (uVar9 = FUN_01e1c630(lVar16), (uVar9 & 1) == 0)) goto LAB_00e95f84;
        plVar10 = (long *)FUN_01400aa8();
        if ((*plVar10 == 0) ||
           (((*(short *)(*plVar10 + 0x1a) == 0 || (lVar13 = *plVar10, lVar13 == 0)) ||
            (*(short *)(lVar13 + 0x1a) == 0)))) goto LAB_00e95f84;
        psVar1 = (short *)(lVar13 + 0x1a);
        sVar14 = *(short *)(lVar13 + 0x1a);
        goto LAB_00e96018;
      }
      sVar14 = sVar5;
    } while (sVar5 != 0);
  }
  return;
LAB_00e96018:
  sVar5 = *psVar1;
  if (sVar5 == sVar14) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar14 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 != '\0') goto LAB_00e9603c;
    bVar7 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00e9603c:
    bVar7 = false;
  }
  if (bVar7) {
    lVar13 = *(long *)(lVar13 + 0x10);
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + -0x28);
      afStack_b8[8] = 0.0;
      afStack_b8[9] = 0.0;
      afStack_b8[10] = 0.0;
      afStack_b8[0xb] = 0.0;
      afStack_b8[0xc] = 0.0;
      afStack_b8[4] = 0.0;
      afStack_b8[5] = 0.0;
      afStack_b8[6] = 0.0;
      afStack_b8[7] = 0.0;
      afStack_b8[2] = 0.0;
      afStack_b8[3] = 0.0;
      afStack_b8[0] = 0.0;
      afStack_b8[1] = 0.0;
      uVar8 = FUN_01e1c638(plVar15);
      if (uVar8 < 0x19) {
        uVar4 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar8 * 4);
      }
      else {
        uVar4 = 0;
      }
      uVar8 = FUN_01e1c650(plVar10,uVar4);
      if (0 < (int)uVar8) {
        fVar18 = (float)FUN_01e1c71c(plVar10);
        afStack_b8[uVar8] = fVar18 + afStack_b8[uVar8];
      }
      uVar8 = FUN_01e1c734(lVar16);
      if (0 < (int)uVar8) {
        fVar18 = (float)FUN_01e1c74c(plVar10);
        afStack_b8[uVar8] = fVar18 + afStack_b8[uVar8];
      }
      if (*(char *)(lVar13 + 0x130) == '\0') {
        fVar18 = 0.0;
      }
      else {
        fVar18 = *(float *)(lVar13 + 0x138);
      }
      pfVar17 = (float *)(param_1 + 0xbc);
      uVar9 = 1;
      local_74 = fVar18;
      do {
        if ((uVar9 < 0xb) &&
           (uVar11 = (*(code *)(&PTR_LAB_045449a8)[*(int *)(&UNK_03d30624 + uVar9 * 4)])
                               (param_1,(long *)(param_1 + 0x88),param_1 + 0x98), (uVar11 & 1) != 0)
           ) {
          fVar19 = (float)FUN_01e1c764(plVar10,uVar9 & 0xffffffff);
          fVar20 = afStack_b8[uVar9];
          lVar16 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
          fVar19 = *pfVar17 +
                   fVar19 * (fVar20 + 1.0) * (float)((double)*(long *)(lVar16 + 8) / 1000000000.0);
          pfVar2 = &local_74;
          if (fVar19 <= fVar18) {
            pfVar2 = pfVar17;
          }
          *pfVar17 = fVar19;
          local_78 = 0.0;
          pfVar3 = &local_78;
          if (0.0 <= fVar19) {
            pfVar3 = pfVar2;
          }
          *pfVar17 = *pfVar3;
        }
        uVar9 = uVar9 + 1;
        pfVar17 = pfVar17 + 1;
      } while (uVar9 != 0xd);
      lVar16 = *(long *)(lVar13 + 8);
      psVar1 = (short *)(lVar16 + 0x1a);
      do {
        sVar14 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar14 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar14 == 1) {
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar14 == 0) goto LAB_00e95fa8;
    }
    goto LAB_00e95f84;
  }
  sVar14 = sVar5;
  if (sVar5 == 0) {
LAB_00e95f84:
    lVar12 = *(long *)(lVar12 + 0x70);
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e96004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x50))(plVar15);
      return;
    }
    if (sVar14 != 0) {
      return;
    }
LAB_00e95fa8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00e96018;
}


