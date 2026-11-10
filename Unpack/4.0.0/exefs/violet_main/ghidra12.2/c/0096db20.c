/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0096db20; name: FUN_0096db20
 */


void FUN_0096db20(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  bool bVar16;
  long *plVar17;
  long lVar18;
  char local_90 [8];
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  puVar4 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar14 = *(long *)PTR_DAT_047d38f8;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar14) {
      bVar16 = true;
    }
    else {
      uVar12 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar4 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
            while (*(long *)puVar4 == 0) {
              cVar3 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
              if (bVar16) {
                *(undefined8 *)puVar4 = uVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_0096dde4;
            }
          } while( true );
        }
        cVar3 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar16) {
          *(undefined8 *)puVar4 = uVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_0096dde4:
      bVar16 = false;
    }
    iVar6 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar7 = *(int *)(param_2 + 0x58);
    if (!bVar16) {
      *(undefined8 *)puVar4 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
    }
    if (iVar6 == iVar7) {
      uVar12 = *param_3;
      uVar2 = param_3[1];
      lVar14 = *(long *)puVar4;
      lVar8 = nn::os::GetCurrentThread();
      if (lVar8 == lVar14) {
        bVar16 = true;
      }
      else {
        uVar11 = nn::os::GetCurrentThread();
        do {
          if (*(long *)puVar4 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(puVar4 + 8));
              while (*(long *)puVar4 == 0) {
                cVar3 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar16) {
                  *(undefined8 *)puVar4 = uVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_0096de28;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar16) {
            *(undefined8 *)puVar4 = uVar11;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_0096de28:
        bVar16 = false;
      }
      puVar5 = PTR_DAT_047d3920;
      plVar13 = *(long **)(*(long *)PTR_DAT_047d3920 + 8);
      puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x10,8);
      if (puVar9 == (undefined8 *)0x0) {
        if (*(code **)PTR_DAT_047d3928 != (code *)0x0) {
          (**(code **)PTR_DAT_047d3928)(PTR_DAT_047d3928 + 0x20);
        }
        plVar13 = *(long **)(*(long *)puVar5 + 8);
        puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x10,8);
        if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("result","CreateImpl",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/memory_manager.h"
                     ,0x69,"GlueCode MemoryManager Allocate failed.");
        }
      }
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar9 = uVar12;
      puVar9[1] = uVar2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (!bVar16) {
        *(undefined8 *)puVar4 = 0;
        nn::os::SignalLightEvent((LightEventType *)(puVar4 + 8));
      }
      local_90[0] = '\x01';
      local_78 = 0x10;
      local_70 = 8;
      local_88 = puVar9;
      local_80 = plVar13;
      FUN_009679e0(param_1,local_90);
      puVar9 = local_88;
      if ((local_90[0] == '\x01') && (local_88 = (undefined8 *)0x0, puVar9 != (undefined8 *)0x0)) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar8 = FUN_00c4e600();
        uVar2 = local_70;
        uVar12 = local_78;
        plVar13 = local_80;
        iVar6 = *(int *)(lVar8 + 0x12c8);
        iVar7 = iVar6 + 1;
        *(int *)(lVar8 + 0x12c8) = iVar7;
        if (*(int *)(lVar8 + 0x12cc) <= iVar6) {
          *(int *)(lVar8 + 0x12cc) = iVar7;
        }
        uVar10 = (**(code **)(*local_80 + 0xf8))(local_80);
        if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
          (**(code **)(*plVar13 + 0x18))(plVar13,puVar9,uVar12,uVar2);
        }
        else {
          FUN_00c48fe8(plVar13,puVar9,uVar12,uVar2);
        }
        lVar8 = FUN_00c4e600();
        iVar7 = *(int *)(lVar8 + 0x12c8) + -1;
        *(int *)(lVar8 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar13 = (long *)FUN_00c4e600();
          if (plVar13[600] != 0) {
            local_68 = plVar13 + plVar13[600] * 3;
            local_48 = plVar13;
            FUN_00c4ea30(&local_48,&local_68);
            plVar15 = (long *)*plVar13;
            plVar1 = plVar13;
            if (plVar13[600] != 0) {
              plVar1 = plVar13 + plVar13[600] * 3;
            }
            if (plVar1 == plVar13) {
              lVar18 = 0;
              lVar14 = 0;
            }
            else {
              lVar14 = 0;
              lVar18 = 0;
              plVar17 = plVar13;
              do {
                (**(code **)(*(long *)*plVar17 + 0xd0))();
                if ((long *)*plVar17 != plVar15) {
                  (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + lVar18 * 3,plVar17);
                  plVar15 = (long *)*plVar17;
                  lVar18 = lVar14;
                }
                plVar17 = plVar17 + 3;
                lVar14 = lVar14 + 1;
              } while (plVar1 != plVar17);
            }
            (**(code **)(*plVar15 + 0x100))(plVar15,plVar13 + lVar18 * 3,plVar13 + lVar14 * 3);
            plVar13[600] = 0;
          }
          *(undefined4 *)(lVar8 + 0x12cc) = 0;
        }
      }
      iVar7 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_01c62880,0);
      FUN_00c5dcd0(param_1,iVar7 + -1,1);
      iVar7 = FUN_00c5ddd0(param_1,1,0,iVar7 + -1,0,0);
      if (iVar7 != 0) {
        uVar12 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar12;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar12);
      }
    }
  }
  FUN_00c5db00(param_1,0);
  return;
}


