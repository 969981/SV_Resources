/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a66ef0; name: FUN_00a66ef0
 */


void FUN_00a66ef0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long *local_60;
  undefined1 local_58 [8];
  long *local_38;
  
  if (((*PTR_DAT_047d4568 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4568), iVar8 != 0))
  {
    FUN_00100190(&LAB_02ace3a0,PTR_DAT_047d4570,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4568);
  }
  lVar13 = *(long *)PTR_DAT_047d4570;
  *(long *)PTR_DAT_047d4578 = lVar13;
  plVar14 = *(long **)(lVar13 + 0x50);
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 5;
    do {
      lVar13 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = (int)lVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar13 == -1) {
LAB_00a672f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar13 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar13;
  puVar6 = PTR_DAT_047d8f00;
  puVar5 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar13 + 0x1c8);
  for (plVar16 = *(long **)(lVar13 + 0x1c0); plVar16 != plVar1; plVar16 = plVar16 + 1) {
    lVar13 = *plVar16;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar13 + 0x28))((undefined8 *)(lVar13 + 0x28));
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar6 = uVar10;
      __cxa_guard_release(puVar5);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar6) {
        if (plVar14 == (long *)0x0) {
          return;
        }
        if (((*PTR_DAT_047d8550 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8550);
        }
        *(undefined8 *)PTR_DAT_047d8560 = *(undefined8 *)PTR_DAT_047d8558;
        FUN_01dc0384(&local_38);
        iVar8 = 0;
        plVar16 = local_38;
        goto LAB_00a67040;
      }
    }
  }
joined_r0x00a67204:
  if (plVar14 != (long *)0x0) {
    plVar16 = plVar14 + 5;
    do {
      lVar13 = *plVar16;
      iVar8 = (int)lVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *(int *)plVar16 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar13 == 0) {
LAB_00a672fc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_00a67040:
  do {
    iVar15 = 0;
    do {
      if (plVar16 == (long *)0x0) {
        FUN_00f139bc(lVar13,local_58,iVar8,iVar15);
      }
      else {
        plVar1 = plVar16 + 5;
        do {
          lVar11 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar11 == -1) goto LAB_00a672f4;
        FUN_00f139bc(lVar13,local_58,iVar8,iVar15);
        if (plVar16 != (long *)0x0) {
          plVar1 = plVar16 + 5;
          do {
            lVar11 = *plVar1;
            iVar4 = (int)lVar11 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
          else if ((int)lVar11 == 0) goto LAB_00a672fc;
        }
      }
      plVar16 = local_38;
      lVar11 = local_38[0xe];
      if ((*(byte *)(*(long *)(lVar11 + 0x10) + 4) >> 2 & 1) == 0) {
        sVar7 = FUN_00cf44f4();
        if (sVar7 != 0) {
          lVar11 = plVar16[0xe];
          goto LAB_00a670c4;
        }
      }
      else {
LAB_00a670c4:
        uVar12 = FUN_00cf4cfc(lVar11);
        if (((uVar12 & 1) == 0) && ((*(ushort *)(*(long *)(plVar16[0xe] + 0x10) + 4) >> 2 & 1) == 0)
           ) {
          plVar1 = plVar16 + 5;
          local_60 = plVar16;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)lVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar11 == -1) goto LAB_00a672f4;
          FUN_01edce74(plVar14,&local_60,0,0);
          if (local_60 != (long *)0x0) {
            plVar16 = local_60 + 5;
            do {
              lVar11 = *plVar16;
              iVar4 = (int)lVar11 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar3) {
                *(int *)plVar16 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 == 0) {
              (**(code **)(*local_60 + 0x10))();
            }
            else if ((int)lVar11 == 0) goto LAB_00a672fc;
          }
          plVar16 = local_38;
          FUN_013e3588(local_38[0xe]);
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0x1e);
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x20);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 5;
    do {
      lVar13 = *plVar1;
      iVar8 = (int)lVar13 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    else if ((int)lVar13 == 0) goto LAB_00a672fc;
  }
  goto joined_r0x00a67204;
}


