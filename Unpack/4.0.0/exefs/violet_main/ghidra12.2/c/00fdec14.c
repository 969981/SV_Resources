/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdec14; name: FUN_00fdec14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fdec14(void)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined4 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  plVar1 = DAT_048363c0;
  plVar6 = DAT_04835ce0;
  if (DAT_04835cd4 == 0) {
    if (DAT_048363b0._4_4_ != 0) {
      DAT_04835c20 = CONCAT44(DAT_048363b0._4_4_,(undefined4)DAT_048363b0);
      DAT_04835c28 = DAT_048363b8;
      if (DAT_048363c0 != (long *)0x0) {
        plVar6 = DAT_048363c0 + 5;
        do {
          lVar12 = *plVar6;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar5) {
            *(int *)plVar6 = (int)lVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar12 == -1) goto LAB_00fdeff8;
      }
      plVar6 = DAT_04835c30;
      DAT_04835c30 = plVar1;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar12 = *plVar1;
          iVar3 = (int)lVar12 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar12 == 0) goto LAB_00fdefd0;
      }
      UNRECOVERED_JUMPTABLE = DAT_04835c58;
      DAT_04835c38 = DAT_048363c8;
      DAT_04835c40 = DAT_048363d0;
      if (DAT_04835c58 != (code *)0x0) {
        DAT_04835c60 = 0;
        DAT_04835c68 = 0;
        DAT_04835c50 = 0;
        DAT_04835c58 = (code *)0x0;
        (*UNRECOVERED_JUMPTABLE)(&DAT_04835c70);
      }
      if (DAT_048363f0 != (code *)0x0) {
        puVar11 = &DAT_048363e0;
        UNRECOVERED_JUMPTABLE = DAT_048363f0;
        goto LAB_00fdecfc;
      }
    }
  }
  else {
    DAT_04835c20 = CONCAT44(DAT_04835cd4,_DAT_04835cd0);
    DAT_04835c28 = _DAT_04835cd8;
    if (DAT_04835ce0 != (long *)0x0) {
      plVar1 = DAT_04835ce0 + 5;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar12 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar12 == -1) {
LAB_00fdeff8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar1 = DAT_04835c30;
    DAT_04835c30 = plVar6;
    if (plVar1 != (long *)0x0) {
      plVar6 = plVar1 + 5;
      do {
        lVar12 = *plVar6;
        iVar3 = (int)lVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *(int *)plVar6 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      else if ((int)lVar12 == 0) goto LAB_00fdefd0;
    }
    UNRECOVERED_JUMPTABLE = DAT_04835c58;
    DAT_04835c38 = _DAT_04835ce8;
    DAT_04835c40 = DAT_04835cf0;
    if (DAT_04835c58 != (code *)0x0) {
      DAT_04835c60 = 0;
      DAT_04835c68 = 0;
      DAT_04835c50 = 0;
      DAT_04835c58 = (code *)0x0;
      (*UNRECOVERED_JUMPTABLE)(&DAT_04835c70);
    }
    if (DAT_04835d10 != (code *)0x0) {
      puVar11 = &DAT_04835d00;
      UNRECOVERED_JUMPTABLE = DAT_04835d10;
LAB_00fdecfc:
      (*UNRECOVERED_JUMPTABLE)(puVar11 + 4,&DAT_04835c70);
      DAT_04835c50 = *puVar11;
      DAT_04835c58 = (code *)puVar11[1];
      DAT_04835c60 = puVar11[2];
      DAT_04835c68 = puVar11[3];
    }
  }
  if (DAT_04835c20._4_4_ == 0) {
    return;
  }
  if (DAT_04835c20._4_4_ == 2) {
    uVar7 = 6;
LAB_00fded30:
    DAT_04835c10 = uVar7;
  }
  else {
    uVar7 = 1;
    if (DAT_04835c20._4_4_ == 1) goto LAB_00fded30;
  }
  lVar12 = 0;
  do {
    uVar9 = *(undefined8 *)(&DAT_04835d88 + lVar12 * 0x2c);
    *(undefined8 *)(&DAT_04835cd0 + lVar12 * 0x58) = *(undefined8 *)(&DAT_04835d80 + lVar12 * 0x58);
    *(undefined8 *)(&DAT_04835cd8 + lVar12 * 0x2c) = uVar9;
    lVar8 = (&DAT_04835d90)[lVar12 * 0x16];
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x28);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == -1) goto LAB_00fdeff8;
    }
    plVar6 = (&DAT_04835ce0)[lVar12 * 0x16];
    (&DAT_04835ce0)[lVar12 * 0x16] = (long *)lVar8;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 5;
      do {
        lVar8 = *plVar1;
        iVar3 = (int)lVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar8 == 0) goto LAB_00fdefd0;
    }
    lVar8 = lVar12 + 1;
    uVar9 = (&DAT_04835cf0)[lVar8 * 0x16];
    *(undefined8 *)(&DAT_04835ce8 + lVar12 * 0x2c) = *(undefined8 *)(&DAT_04835ce8 + lVar8 * 0x2c);
    (&DAT_04835cf0)[lVar12 * 0x16] = uVar9;
    UNRECOVERED_JUMPTABLE = (code *)(&DAT_04835d08)[lVar12 * 0x16];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (&DAT_04835d10)[lVar12 * 0x16] = (code *)0x0;
      (&DAT_04835d18)[lVar12 * 0x16] = 0;
      (&DAT_04835d00)[lVar12 * 0x16] = 0;
      (&DAT_04835d08)[lVar12 * 0x16] = 0;
      (*UNRECOVERED_JUMPTABLE)(&DAT_04835d20 + lVar12 * 0xb0);
    }
    if ((&DAT_04835d10)[lVar8 * 0x16] != (code *)0x0) {
      (*(&DAT_04835d10)[lVar8 * 0x16])(&DAT_04835d20 + lVar8 * 0xb0,&DAT_04835d20 + lVar12 * 0xb0);
      uVar10 = (&DAT_04835d08)[lVar8 * 0x16];
      (&DAT_04835d18)[lVar12 * 0x16] = (&DAT_04835d18)[lVar8 * 0x16];
      uVar9 = (&DAT_04835d10)[lVar8 * 0x16];
      (&DAT_04835d00)[lVar12 * 0x16] = (&DAT_04835d00)[lVar8 * 0x16];
      (&DAT_04835d08)[lVar12 * 0x16] = uVar10;
      (&DAT_04835d10)[lVar12 * 0x16] = (code *)uVar9;
    }
    plVar6 = DAT_04836310;
    lVar12 = lVar8;
  } while (lVar8 != 9);
  DAT_04836300 = 0;
  _DAT_04836304 = 0;
  DAT_0483630c = 0;
  DAT_04836310 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar12 = *plVar1;
      iVar3 = (int)lVar12 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar3;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_00fdefd0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_04836338;
  DAT_04836318 = 1;
  DAT_04836320 = 0;
  if (DAT_04836338 == (code *)0x0) {
    DAT_04836320 = 0;
    DAT_04836318 = 1;
    return;
  }
  DAT_04836340 = 0;
  DAT_04836348 = 0;
  DAT_04836330 = 0;
  DAT_04836338 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00fdeea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_04836350);
  return;
}


