/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e24374; name: FUN_00e24374
 */


void FUN_00e24374(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  short sVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  cVar3 = *(char *)(param_1 + 0x11e);
  bVar7 = FUN_00e24734();
  *(byte *)(param_1 + 0x11e) = bVar7 & 1;
  if (cVar3 == '\0') {
    if (((bVar7 & 1) != 0) &&
       ((*(char *)(param_1 + 0x58) != '\0' || (*(char *)(param_1 + 0x59) != '\0')))) {
      uVar4 = *(undefined2 *)(param_1 + 0x58);
      *(undefined2 *)(param_1 + 0x58) = 0;
LAB_00e24438:
      plVar11 = (long *)(param_1 + 0x38);
      if (*(long *)(param_1 + 0x48) != 0) {
        FUN_00c6a584(*(long *)(param_1 + 0x48),plVar11);
      }
                    /* WARNING: Could not recover jumptable at 0x00e2445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11,uVar4);
      return;
    }
  }
  else {
    if ((bVar7 & 1) != 0) {
      lVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      iVar2 = *(int *)(param_1 + 0x140);
      if (iVar2 != 1) {
        fVar15 = (float)((double)*(long *)(lVar8 + 8) / 1000000000.0);
        if (iVar2 != 2) {
          if (iVar2 == 0) {
            FUN_00e25fe8(fVar15,param_1);
            return;
          }
          return;
        }
        FUN_00e25fe8(fVar15,param_1);
      }
      lVar8 = *(long *)(param_1 + 0x120);
      if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar8 + 0x1a);
        sVar10 = *(short *)(lVar8 + 0x1a);
        do {
          sVar5 = *psVar1;
          if (sVar5 == sVar10) {
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_00e24530;
            bVar6 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e24530:
            bVar6 = false;
          }
          if (bVar6) {
            lVar8 = *(long *)(lVar8 + 0x10);
            if (lVar8 == 0) {
              return;
            }
            plVar11 = (long *)(lVar8 + -0x28);
            fVar14 = (float)FUN_01fa5020(plVar11);
            lVar9 = *(long *)(param_1 + 0x130);
            fVar15 = -ABS(0.4 - fVar14);
            if (0.4 <= fVar14) {
              fVar15 = ABS(0.4 - fVar14);
            }
            if (lVar9 == 0) goto LAB_00e24584;
            if (*(short *)(lVar9 + 0x1a) == 0) goto LAB_00e24584;
            psVar1 = (short *)(lVar9 + 0x1a);
            fVar15 = *(float *)(param_1 + 0x150) * (fVar15 / 0.1) + 1.0;
            sVar10 = *(short *)(lVar9 + 0x1a);
            goto LAB_00e24618;
          }
          sVar10 = sVar5;
        } while (sVar5 != 0);
      }
      return;
    }
    FUN_00e279a8(param_1);
    if ((*(char *)(param_1 + 0x58) != '\b') || (*(char *)(param_1 + 0x59) != '\b')) {
      uVar4 = *(undefined2 *)(param_1 + 0x58);
      *(undefined2 *)(param_1 + 0x58) = 0x808;
      goto LAB_00e24438;
    }
  }
  return;
LAB_00e24618:
  sVar5 = *psVar1;
  if (sVar5 == sVar10) {
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_00e2463c;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00e2463c:
    bVar6 = false;
  }
  if (bVar6) {
    lVar9 = *(long *)(lVar9 + 0x10);
    if (lVar9 != 0) {
      plVar13 = *(long **)(param_1 + 0x148);
      fVar14 = 0.0;
      if (0.0 < fVar15) {
        fVar14 = fVar15;
      }
      plVar12 = (long *)PTR_DAT_047d8b70;
      if (plVar13 != (long *)0x0) {
        plVar12 = plVar13 + 6;
      }
      local_60 = *plVar12;
      plVar12 = (long *)PTR_PTR_047d4508;
      if (plVar13 != (long *)0x0) {
        plVar12 = plVar13 + 7;
      }
      lStack_58 = *plVar12;
      plVar12 = (long *)(lVar9 + -0x28);
      if (plVar13 == (long *)0x0) {
        local_50 = 0;
      }
      else {
        local_50 = plVar13[8];
      }
      local_48 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      local_48 = plVar13;
      FUN_00d54750(fVar14,plVar12,&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      lVar9 = *(long *)(lVar9 + 0x70);
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
      }
      else if (sVar10 == 0) goto LAB_00e245a8;
    }
    goto LAB_00e24584;
  }
  sVar10 = sVar5;
  if (sVar5 == 0) {
LAB_00e24584:
    lVar8 = *(long *)(lVar8 + 0x70);
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
      return;
    }
    if (sVar10 != 0) {
      return;
    }
LAB_00e245a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  goto LAB_00e24618;
}


