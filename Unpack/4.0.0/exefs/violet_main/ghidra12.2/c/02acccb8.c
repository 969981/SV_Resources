/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02acccb8; name: FUN_02acccb8
 */


void FUN_02acccb8(long param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar10 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar10;
  puVar6 = PTR_DAT_047d4c00;
  puVar5 = PTR_DAT_047d4bf8;
  plVar14 = *(long **)(lVar10 + 0x1c0);
  plVar2 = *(long **)(lVar10 + 0x1c8);
  do {
    if (plVar14 == plVar2) {
LAB_02accdf8:
      plVar14 = *(long **)(param_1 + 0x50);
      if (plVar14 != (long *)0x0) {
        plVar2 = plVar14 + 5;
        do {
          lVar10 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar10 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        FUN_00a50a60(plVar14);
        FUN_00a51744(plVar14);
        FUN_00a4ff20(plVar14);
        do {
          lVar10 = *plVar2;
          iVar7 = (int)lVar10 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02acce84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar14 + 0x10))(plVar14);
          return;
        }
        if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      return;
    }
    lVar10 = *plVar14;
    plVar8 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x28))((undefined8 *)(lVar10 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
      uVar9 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar9;
      __cxa_guard_release(puVar5);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar6) {
        if (*(char *)(lVar10 + 0x8538) == '\0') {
          lVar12 = 3000;
          lVar13 = 0x25e8;
          puVar11 = (undefined1 *)(lVar10 + 0x8540);
          do {
            puVar1 = (undefined4 *)(lVar10 + lVar13);
            lVar13 = lVar13 + 8;
            *(undefined4 *)(puVar11 + -4) = *puVar1;
            lVar12 = lVar12 + -1;
            *puVar11 = *(undefined1 *)((long)puVar1 + 5);
            puVar11 = puVar11 + 8;
          } while (lVar12 != 0);
          *(char *)(lVar10 + 0x8538) = '\x01';
        }
        if (*(byte *)(lVar10 + 0x25d8) < 2) {
          *(byte *)(lVar10 + 0x25d8) = 2;
          *(undefined1 *)(lVar10 + 0xcd0) = 1;
        }
        goto LAB_02accdf8;
      }
    }
    plVar14 = plVar14 + 1;
  } while( true );
}


