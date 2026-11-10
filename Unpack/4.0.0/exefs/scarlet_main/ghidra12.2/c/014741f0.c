/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014741f0; name: FUN_014741f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014741f0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  code *UNRECOVERED_JUMPTABLE;
  
  DAT_04835be0 = 0x500;
  DAT_04835be4 = 0x2d0;
  DAT_04835ba8 = param_1;
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar7 = *(long **)(lVar8 + 0x1c8);
  plVar3 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar3 == plVar7) {
      lVar8 = 0;
      break;
    }
    lVar8 = *plVar3;
    uVar6 = FUN_01474488(lVar8 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar6 & 1) == 0);
  DAT_04835c00 = lVar8;
  if (((*PTR_DAT_047d8968 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8968), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e38,PTR_DAT_047d8970,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8968);
  }
  lVar8 = 0;
  DAT_04835c08 = *(undefined8 *)PTR_DAT_047d8970;
  *(undefined8 *)PTR_DAT_047d8978 = DAT_04835c08;
  do {
    plVar7 = (long *)(&DAT_04835ce0)[lVar8 * 0x16];
    (&DAT_04835cd0)[lVar8 * 0x58] = 0;
    *(undefined8 *)(&DAT_04835cd4 + lVar8 * 0x2c) = 0;
    (&DAT_04835cdc)[lVar8 * 0x2c] = 0;
    (&DAT_04835ce0)[lVar8 * 0x16] = 0;
    if (plVar7 != (long *)0x0) {
      plVar3 = plVar7 + 5;
      do {
        lVar4 = *plVar3;
        iVar5 = (int)lVar4 + -1;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *(int *)plVar3 = iVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      else if ((int)lVar4 == 0) goto LAB_01474460;
    }
    (&DAT_04835ce8)[lVar8 * 0x2c] = 1;
    (&DAT_04835cf0)[lVar8 * 0x16] = 0;
    UNRECOVERED_JUMPTABLE = (code *)(&DAT_04835d08)[lVar8 * 0x16];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      (&DAT_04835d10)[lVar8 * 0x16] = 0;
      (&DAT_04835d18)[lVar8 * 0x16] = 0;
      (&DAT_04835d00)[lVar8 * 0x16] = 0;
      (&DAT_04835d08)[lVar8 * 0x16] = 0;
      (*UNRECOVERED_JUMPTABLE)(&DAT_04835d20 + lVar8 * 0xb0);
    }
    plVar7 = DAT_04835c30;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 10);
  DAT_04835c20._0_2_ = 0;
  ram0x04835c24 = 0;
  DAT_04835c28._4_4_ = 0;
  DAT_04835c30 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7 + 5;
    do {
      lVar8 = *plVar3;
      iVar5 = (int)lVar8 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *(int *)plVar3 = iVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_01474460:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  UNRECOVERED_JUMPTABLE = DAT_04835c58;
  DAT_04835c38._0_4_ = 1;
  DAT_04835c40 = 0;
  if (DAT_04835c58 == (code *)0x0) {
    return;
  }
  DAT_04835c60 = 0;
  DAT_04835c68 = 0;
  DAT_04835c50 = 0;
  DAT_04835c58 = (code *)0x0;
                    /* WARNING: Could not recover jumptable at 0x014743c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&DAT_04835c70);
  return;
}


