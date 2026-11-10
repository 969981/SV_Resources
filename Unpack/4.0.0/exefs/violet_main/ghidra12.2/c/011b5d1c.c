/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b5d1c; name: FUN_011b5d1c
 */


void FUN_011b5d1c(long param_1,int param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_18;
  
  uVar9 = 1;
  piVar7 = &DAT_04590dc8;
  for (piVar11 = &DAT_04586b20; *piVar11 != param_2; piVar11 = piVar11 + 0x14) {
    if (uVar9 == 0x411) goto LAB_011b5d90;
    if (piVar11[10] == param_2) goto LAB_011b5d80;
    uVar9 = uVar9 + 2;
  }
  uVar9 = uVar9 - 1;
LAB_011b5d80:
  piVar7 = (int *)((uVar9 & 0xffffffff) * 0x28 + 0x4586b28);
LAB_011b5d90:
  local_50 = *piVar7;
  local_48 = *(undefined8 *)(piVar7 + 2);
  uStack_40 = *(undefined8 *)(piVar7 + 4);
  local_38 = *(undefined8 *)(piVar7 + 6);
  if (local_50 == 2) {
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    local_70 = (undefined1 *)0x24d9d8da425c433e;
    pcStack_68 = "btl_set";
  }
  else {
    if (local_50 != 1) {
      plVar12 = (long *)0x0;
      goto LAB_011b5e1c;
    }
    if (((*PTR_DAT_047d8ac0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8ac0);
    }
    local_70 = (undefined1 *)0x2513b6da428d81bf;
    pcStack_68 = "btl_std";
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_60 = 7;
  local_58 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar6;
  FUN_01286898(&local_18,uVar6,&local_70,0);
  plVar12 = local_18;
  local_18 = (long *)0x0;
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
LAB_011b5e1c:
  if (param_3 < 0xe) {
    lVar10 = (ulong)param_3 * 0x20;
    local_70 = *(undefined1 **)(&DAT_04586968 + lVar10);
    pcStack_68 = (&PTR_DAT_04586970)[(ulong)param_3 * 4];
    local_60 = *(undefined8 *)(&DAT_04586978 + lVar10);
  }
  else {
    local_60 = 0;
    local_70 = &DAT_cbf29ce484222645;
    pcStack_68 = "";
  }
  FUN_011b604c(&local_18,&local_48,&local_70);
  lVar10 = plVar12[0x11];
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 6;
  }
  if (lVar10 != 0) {
    plVar8 = *(long **)(lVar10 + 0x210);
    if (plVar8 != *(long **)(lVar10 + 0x218)) {
      iVar5 = 0;
      do {
        plVar2 = (long *)PTR_DAT_047d8b70;
        if (*plVar8 != 0) {
          plVar2 = (long *)(*plVar8 + 0x30);
        }
        if (*plVar2 == *plVar1) {
          FUN_00e388b8(plVar12,iVar5,*(undefined8 *)(param_1 + 0x40));
          break;
        }
        plVar8 = plVar8 + 1;
        iVar5 = iVar5 + 1;
      } while (*(long **)(lVar10 + 0x218) != plVar8);
    }
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar10 = *plVar1;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


