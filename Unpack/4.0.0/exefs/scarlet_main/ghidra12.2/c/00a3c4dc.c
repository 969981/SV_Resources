/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a3c4dc; name: FUN_00a3c4dc
 */


void FUN_00a3c4dc(undefined4 param_1)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long local_90;
  long *local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  plVar13 = DAT_04835ba8;
  if (DAT_04836468 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*DAT_04835ba8 + 0x10))(DAT_04835ba8,0x50,8);
    if (puVar9 == (undefined8 *)0x0) {
      plVar13 = (long *)0x0;
      uVar17 = 0;
      uVar16 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      FUN_00a3cef0(puVar9,DAT_04835ba8);
      uVar16 = 8;
      uVar17 = 0x50;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    puVar5 = DAT_04836468;
    bVar1 = DAT_04836468 != (undefined8 *)0x0;
    DAT_04836468 = puVar9;
    if (bVar1) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar10 = FUN_00c4e600();
      iVar3 = *(int *)(lVar10 + 0x12c8);
      iVar8 = iVar3 + 1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (*(int *)(lVar10 + 0x12cc) <= iVar3) {
        *(int *)(lVar10 + 0x12cc) = iVar8;
      }
      (**(code **)*puVar5)(puVar5);
      uVar7 = DAT_04836480;
      uVar6 = DAT_04836478;
      plVar12 = DAT_04836470;
      uVar11 = (**(code **)(*DAT_04836470 + 0xf8))(DAT_04836470);
      if (((uVar11 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,puVar5,uVar6,uVar7);
      }
      else {
        FUN_00c48fe8(plVar12,puVar5,uVar6,uVar7);
      }
      lVar10 = FUN_00c4e600();
      iVar8 = *(int *)(lVar10 + 0x12c8) + -1;
      *(int *)(lVar10 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar12 = (long *)FUN_00c4e600();
        if (plVar12[600] != 0) {
          local_70 = plVar12 + plVar12[600] * 3;
          plStack_68 = plVar12;
          FUN_00c4ea30(&plStack_68,&local_70);
          local_80 = (long *)*plVar12;
          plVar2 = plVar12;
          if (plVar12[600] != 0) {
            plVar2 = plVar12 + plVar12[600] * 3;
          }
          if (plVar2 == plVar12) {
            lVar14 = 0;
            local_90 = 0;
          }
          else {
            lVar14 = 0;
            local_90 = 0;
            plVar15 = plVar12;
            do {
              (**(code **)(*(long *)*plVar15 + 0xd0))();
              if ((long *)*plVar15 != local_80) {
                (**(code **)(*local_80 + 0x100))(local_80,plVar12 + local_90 * 3,plVar15);
                local_80 = (long *)*plVar15;
                local_90 = lVar14;
              }
              plVar15 = plVar15 + 3;
              lVar14 = lVar14 + 1;
            } while (plVar2 != plVar15);
          }
          (**(code **)(*local_80 + 0x100))(local_80,plVar12 + local_90 * 3,plVar12 + lVar14 * 3);
          plVar12[600] = 0;
        }
        *(undefined4 *)(lVar10 + 0x12cc) = 0;
      }
    }
    puVar9 = DAT_04836468;
    DAT_04836470 = plVar13;
    DAT_04836478 = uVar17;
    DAT_04836480 = uVar16;
    DAT_04836468[5] = 0xffffffff00000000;
    *(undefined1 *)(puVar9 + 4) = 0;
    *(undefined4 *)((long)puVar9 + 0x24) = param_1;
    *(undefined1 *)(puVar9 + 6) = 0;
    FUN_01983560(&local_78);
    FUN_00a410dc(puVar9,&local_78,DAT_04835be8,DAT_04835bec);
    if (local_78 != (long *)0x0) {
      plVar13 = local_78 + 5;
      do {
        lVar10 = *plVar13;
        iVar8 = (int)lVar10 + -1;
        cVar4 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar1) {
          *(int *)plVar13 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
      else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


