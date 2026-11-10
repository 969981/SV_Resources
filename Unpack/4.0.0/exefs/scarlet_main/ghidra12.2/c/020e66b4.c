/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020e66b4; name: FUN_020e66b4
 */


void FUN_020e66b4(int param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long *local_70;
  long *local_68;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar5 = PTR_DAT_047d8f00;
  plVar1 = *(long **)(lVar11 + 0x1c8);
  for (plVar12 = *(long **)(lVar11 + 0x1c0); plVar12 != plVar1; plVar12 = plVar12 + 1) {
    plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 0x28))();
    if (((*PTR_DAT_047d8ef8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8ef8), iVar7 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(PTR_DAT_047d8ef8);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) goto LAB_020e6758;
    }
  }
LAB_020e6758:
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  plVar1 = *(long **)(lVar11 + 0x1c8);
  for (plVar12 = *(long **)(lVar11 + 0x1c0); plVar12 != plVar1; plVar12 = plVar12 + 1) {
    plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 0x28))();
    if (((*PTR_DAT_047d8ef8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8ef8), iVar7 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar5 = uVar10;
      __cxa_guard_release(PTR_DAT_047d8ef8);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)puVar5) goto LAB_020e67cc;
    }
  }
LAB_020e67cc:
  iVar7 = 0;
  do {
    iVar13 = 0;
    do {
      if (((DAT_04840580 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04840580), iVar6 != 0)) {
        FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04840580);
      }
      DAT_04840568 = DAT_04840570;
      FUN_015539d4(&local_68,DAT_04840570,iVar7,iVar13);
      plVar12 = local_68;
      uVar9 = FUN_00cf4cfc(local_68[0xe]);
      if (((uVar9 & 1) != 0) || ((*(ushort *)(*(long *)(plVar12[0xe] + 0x10) + 4) >> 2 & 1) != 0)) {
        iVar6 = FUN_016910b0(local_68);
        if (iVar6 - param_1 < 1) {
          FUN_020e66a0(local_68,1);
        }
        else {
          FUN_016910cc(local_68,param_1);
        }
        if (((*PTR_DAT_047d4c98 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        lVar11 = *(long *)PTR_DAT_047d4ca0;
        *(long *)PTR_DAT_047d4ca8 = lVar11;
        plVar12 = *(long **)(lVar11 + 0x1c0);
        plVar1 = *(long **)(lVar11 + 0x1c8);
        if (plVar12 == plVar1) {
          lVar11 = 0;
        }
        else {
          do {
            lVar11 = *plVar12;
            plVar8 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))
                                       ((undefined8 *)(lVar11 + 0x28));
            if (((*PTR_DAT_047d8ef8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8ef8), iVar6 != 0)) {
              uVar10 = FUN_01b3fb0c();
              *(undefined8 *)puVar5 = uVar10;
              __cxa_guard_release(PTR_DAT_047d8ef8);
            }
            for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
              if (plVar8 == (long *)puVar5) goto LAB_020e6918;
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar1);
          lVar11 = 0;
        }
LAB_020e6918:
        local_70 = local_68;
        if (local_68 != (long *)0x0) {
          plVar12 = local_68 + 5;
          do {
            lVar4 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = (int)lVar4 + 1;
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
        FUN_0152f420(lVar11,&local_70,iVar7,iVar13);
        if (local_70 != (long *)0x0) {
          plVar12 = local_70 + 5;
          do {
            lVar11 = *plVar12;
            iVar6 = (int)lVar11 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_70 + 0x10))();
          }
          else if ((int)lVar11 == 0) goto LAB_020e6b44;
        }
      }
      if (local_68 != (long *)0x0) {
        plVar12 = local_68 + 5;
        do {
          lVar11 = *plVar12;
          iVar6 = (int)lVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
        else if ((int)lVar11 == 0) {
LAB_020e6b44:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x1e);
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x21) {
      return;
    }
  } while( true );
}


