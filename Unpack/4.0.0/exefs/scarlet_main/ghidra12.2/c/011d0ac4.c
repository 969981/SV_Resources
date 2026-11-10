/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d0ac4; name: FUN_011d0ac4
 */


void FUN_011d0ac4(long param_1)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  float fVar18;
  long *local_68 [4];
  long *local_48;
  char *local_38;
  
  FUN_00d0a71c(param_1 + 0x80);
  local_38 = "pokemon/loc_search_move/loc_poke_seachmove/loc_poke_seachmove_fast.tranm";
  FUN_00e52f24(local_68,&local_38);
  uVar9 = FUN_00e84144(param_1 + 0x2b8,1,local_68,0,0);
  if (((uVar9 & 1) != 0) && (plVar15 = *(long **)(param_1 + 0x2d8), plVar15 != (long *)0x0)) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_011d0fe0;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar11;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_011d1000;
    lVar17 = plVar15[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar2 == 0) goto LAB_011d0ddc;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
  local_38 = "pokemon/loc_search_move/loc_poke_seachmove/loc_poke_seachmove_middle.tranm";
  FUN_00e52f24(local_68,&local_38);
  uVar9 = FUN_00e84144(param_1 + 0x2f8,1,local_68,0,0);
  if (((uVar9 & 1) != 0) && (plVar15 = *(long **)(param_1 + 0x318), plVar15 != (long *)0x0)) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_011d0fe0;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar11;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_011d1000;
    lVar17 = plVar15[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar2 == 0) goto LAB_011d0ddc;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
  local_38 = "pokemon/loc_search_move/loc_poke_seachmove/loc_poke_seachmove_slow.tranm";
  FUN_00e52f24(local_68,&local_38);
  uVar9 = FUN_00e84144(param_1 + 0x338,1,local_68,0,0);
  if (((uVar9 & 1) != 0) && (plVar15 = *(long **)(param_1 + 0x358), plVar15 != (long *)0x0)) {
    lVar17 = plVar15[6];
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_011d0fe0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar11;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_011d1000:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    lVar17 = plVar15[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar2 == 0) {
LAB_011d0ddc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68[0] != (long *)0x0) {
    (**(code **)(*local_68[0] + 0x20))();
  }
  uVar9 = *(ulong *)(param_1 + 0x48);
  uVar3 = *(ulong *)(param_1 + 0x50);
  uVar13 = uVar3 ^ uVar9;
  uVar12 = uVar13 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar13 << 0x10;
  uVar14 = uVar12 ^ (uVar13 >> 0x1b | uVar13 << 0x25);
  *(ulong *)(param_1 + 0x48) = uVar14 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar14 << 0x10;
  *(ulong *)(param_1 + 0x50) = uVar14 >> 0x1b | uVar14 << 0x25;
  *(float *)(param_1 + 0x288) = (float)(uVar3 + uVar9) * 5.421011e-20 * 5.0 + 0.0 + 5.0;
  fVar18 = (float)((uVar13 >> 0x1b | uVar13 << 0x25) + uVar12) * 5.421011e-20;
  *(float *)(param_1 + 0x290) = fVar18 + fVar18 + 0.0 + 3.0;
  puVar6 = PTR_DAT_047d8c28;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0))
  {
    local_68[0] = (long *)FUN_00d44228();
    puVar7 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,local_68);
    FUN_00100190(PTR_LAB_047d9240,puVar7,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  puVar7 = PTR_DAT_047d8c30;
  plVar15 = *(long **)PTR_DAT_047d8c30;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar8 != 0)) {
    local_68[0] = (long *)FUN_00d44228();
    puVar6 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,local_68);
    FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar16 = *(long **)puVar7;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  plVar10 = *(long **)(param_1 + 0x380);
  *(undefined8 *)(param_1 + 0x380) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  plVar10 = *(long **)(param_1 + 0x388);
  *(long **)(param_1 + 0x380) = plVar15;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(long **)(param_1 + 0x388) = plVar16;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0xffffffff;
  return;
}


