/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbe738; name: FUN_01dbe738
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dbe738(long *param_1,long *param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long *local_38;
  long *local_18;
  
  local_18 = (long *)*param_1;
  if (local_18 != (long *)0x0) {
    lVar14 = local_18[6];
    if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      *(undefined8 *)(lVar14 + 8) = uVar9;
      *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
      pcVar10 = "count != 0";
      pcVar11 = "AddReference";
      pcVar12 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar13 = "Reference counter overflows.";
      goto LAB_01dbe96c;
    }
  }
  lVar14 = param_1[5];
  param_2 = (long *)*param_2;
  local_38 = param_2;
  if (param_2 == (long *)0x0) {
    FUN_0182bde0(&local_18,param_1 + 1,(int)lVar14,&local_38);
LAB_01dbe7f0:
    if (local_18 != (long *)0x0) {
      lVar14 = local_18[6];
      psVar1 = (short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    plVar2 = DAT_048363c0;
    DAT_04836464 = 1;
    DAT_048363b0._0_2_ = 0;
    ram0x048363b4 = 0;
    DAT_048363b8._4_4_ = 0;
    DAT_048363c0 = (long *)0x0;
    if (plVar2 == (long *)0x0) {
LAB_01dbe840:
      UNRECOVERED_JUMPTABLE = DAT_048363e8;
      DAT_048363c8._0_4_ = 1;
      DAT_048363d0 = 0;
      if (DAT_048363e8 == (code *)0x0) {
        return;
      }
      DAT_048363f0 = 0;
      DAT_048363f8 = 0;
      DAT_048363e0 = 0;
      DAT_048363e8 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x01dbe890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(&DAT_04836400);
      return;
    }
    plVar3 = plVar2 + 5;
    do {
      lVar14 = *plVar3;
      iVar7 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      goto LAB_01dbe840;
    }
    if ((int)lVar14 != 0) goto LAB_01dbe840;
  }
  else {
    plVar2 = param_2 + 5;
    do {
      lVar8 = *plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = (int)lVar8 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_0182bde0(&local_18,param_1 + 1,(int)lVar14,&local_38);
    if (param_2 == (long *)0x0) goto LAB_01dbe7f0;
    plVar2 = param_2 + 5;
    do {
      lVar14 = *plVar2;
      iVar7 = (int)lVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      goto LAB_01dbe7f0;
    }
    if ((int)lVar14 != 0) goto LAB_01dbe7f0;
  }
  pcVar10 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar11 = "DecrementReferenceInternal";
  pcVar12 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar13 = "Reference counter underflows.";
LAB_01dbe96c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar10,pcVar11,pcVar12,0x58,pcVar13);
}


