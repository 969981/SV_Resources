/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01729ca4; name: FUN_01729ca4
 */


void FUN_01729ca4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *local_a8;
  long *local_a0 [4];
  long *local_80;
  long *local_70 [4];
  long *local_50;
  long *local_40;
  long *local_38;
  
  puVar5 = PTR_DAT_047d4240;
  local_38 = (long *)0x0;
  if (((*PTR_DAT_047d4240 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  puVar7 = PTR_DAT_047d4250;
  puVar6 = PTR_DAT_047d4248;
  uVar9 = *(undefined8 *)PTR_DAT_047d4248;
  *(undefined8 *)PTR_DAT_047d4250 = uVar9;
  FUN_00cf9884(local_70,uVar9,"default");
  plVar11 = local_38;
  local_38 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  local_40 = (long *)0x0;
  local_38 = local_70[0];
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar8 != 0)) {
    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4240);
  }
  uVar9 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar9;
  FUN_00cf9884(local_70,uVar9,"world/data/gfx/model_dither_fade/model_dither_fade_default_param/");
  plVar11 = local_40;
  local_40 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))();
  }
  local_40 = local_70[0];
  FUN_017296cc(local_a0,&local_40,&local_38);
  FUN_01221874(local_70,local_a0);
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  uVar10 = FUN_00dc5c18(param_1 + 0x30,1,local_70,0,0);
  if (((uVar10 & 1) != 0) && (plVar11 = *(long **)(param_1 + 0x50), plVar11 != (long *)0x0)) {
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0172a080;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0172a0a0;
    lVar12 = plVar11[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar2 == 0) goto LAB_01729ec8;
  }
  FUN_017297e0(&local_a8,&local_40,&local_38);
  FUN_01221874(local_a0,&local_a8);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  uVar10 = FUN_00dc5c18(param_1 + 0x70,1,local_a0,0,0);
  if (((uVar10 & 1) != 0) && (plVar11 = *(long **)(param_1 + 0x90), plVar11 != (long *)0x0)) {
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_0172a080:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_0172a0a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar12 = plVar11[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar2 == 0) {
LAB_01729ec8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_a0[0] != (long *)0x0) {
    (**(code **)(*local_a0[0] + 0x20))();
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    (**(code **)(*local_70[0] + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


