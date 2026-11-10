/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019a5cf0; name: FUN_019a5cf0
 */


void FUN_019a5cf0(uint *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 uStack_6f;
  
  uStack_6f._3_4_ = 400;
  plVar9 = (long *)FUN_0152bfac((long)&uStack_6f + 7,DAT_0483b088,(long)&uStack_6f + 3);
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  puVar7 = PTR_DAT_047dae20;
  puVar6 = PTR_DAT_047dae18;
  puVar5 = PTR_DAT_047dae10;
  if ((*param_1 & 1) == 0) {
LAB_019a5d60:
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar4 = *plVar1;
        iVar13 = (int)lVar4 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar13;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    return;
  }
  puVar14 = &local_78;
  local_78 = DAT_03d5f17e;
  local_70 = DAT_03d5f186;
  uVar12 = 1;
  do {
    iVar13 = 0;
    do {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00100190(&LAB_02b6f660,puVar6,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar5);
      }
      uVar10 = *(undefined8 *)puVar6;
      *(undefined8 *)puVar7 = uVar10;
      FUN_01054a8c(uVar10,plVar9,uVar12,iVar13);
      uVar11 = FUN_01fb1a20(plVar9[6],*param_2);
      if ((uVar11 & 1) != 0) {
        *param_1 = *param_1 & 0xfffffffe;
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x401);
    puVar14 = (undefined8 *)((long)puVar14 + 1);
    if (puVar14 == &uStack_6f) goto LAB_019a5d60;
    uVar12 = *(undefined1 *)puVar14;
  } while( true );
}


