/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00910e3c; name: FUN_00910e3c
 */


void FUN_00910e3c(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  long *plVar14;
  long lVar15;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  puVar3 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar11) {
      bVar13 = true;
    }
    else {
      uVar10 = nn::os::GetCurrentThread();
      do {
        if (*(long *)puVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar3 + 8));
            while (*(long *)puVar3 == 0) {
              cVar2 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar13) {
                *(undefined8 *)puVar3 = uVar10;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_009110dc;
            }
          } while( true );
        }
        cVar2 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar13) {
          *(undefined8 *)puVar3 = uVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_009110dc:
      bVar13 = false;
    }
    iVar5 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar6 = *(int *)(param_2 + 0x58);
    if (!bVar13) {
      *(undefined8 *)puVar3 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar3 + 8));
    }
    if (iVar5 == iVar6) {
      local_90 = *param_3;
      FUN_0103155c(&local_b0,&local_90);
      local_88 = local_b0;
      local_80 = local_a8;
      local_b0 = 0;
      local_90 = CONCAT71(local_90._1_7_,1);
      local_78 = local_a0;
      local_70 = local_98;
      FUN_01031320(param_1,&local_90);
      lVar7 = local_88;
      if (((char)local_90 == '\x01') && (local_88 = 0, lVar7 != 0)) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar11 = FUN_00c4e600();
        uVar4 = local_70;
        uVar10 = local_78;
        plVar9 = local_80;
        iVar5 = *(int *)(lVar11 + 0x12c8);
        iVar6 = iVar5 + 1;
        *(int *)(lVar11 + 0x12c8) = iVar6;
        if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
          *(int *)(lVar11 + 0x12cc) = iVar6;
        }
        uVar8 = (**(code **)(*local_80 + 0xf8))(local_80);
        if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,lVar7,uVar10,uVar4);
        }
        else {
          FUN_00c48fe8(plVar9,lVar7,uVar10,uVar4);
        }
        lVar7 = FUN_00c4e600();
        iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_68 = plVar9 + plVar9[600] * 3;
            local_48 = plVar9;
            FUN_00c4ea30(&local_48,&local_68);
            plVar12 = (long *)*plVar9;
            plVar1 = plVar9;
            if (plVar9[600] != 0) {
              plVar1 = plVar9 + plVar9[600] * 3;
            }
            if (plVar1 == plVar9) {
              lVar15 = 0;
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              lVar15 = 0;
              plVar14 = plVar9;
              do {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + lVar15 * 3,plVar14);
                  plVar12 = (long *)*plVar14;
                  lVar15 = lVar11;
                }
                plVar14 = plVar14 + 3;
                lVar11 = lVar11 + 1;
              } while (plVar1 != plVar14);
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + lVar15 * 3,plVar9 + lVar11 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      lVar7 = local_b0;
      local_b0 = 0;
      if (lVar7 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar11 = FUN_00c4e600();
        iVar5 = *(int *)(lVar11 + 0x12c8);
        iVar6 = iVar5 + 1;
        *(int *)(lVar11 + 0x12c8) = iVar6;
        if (*(int *)(lVar11 + 0x12cc) <= iVar5) {
          *(int *)(lVar11 + 0x12cc) = iVar6;
        }
        uVar8 = (**(code **)(*local_a8 + 0xf8))(local_a8);
        if (((uVar8 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*local_a8 + 0x18))(local_a8,lVar7,local_a0,local_98);
        }
        else {
          FUN_00c48fe8(local_a8,lVar7,local_a0,local_98);
        }
        lVar7 = FUN_00c4e600();
        iVar6 = *(int *)(lVar7 + 0x12c8) + -1;
        *(int *)(lVar7 + 0x12c8) = iVar6;
        if (iVar6 == 0) {
          plVar9 = (long *)FUN_00c4e600();
          if (plVar9[600] != 0) {
            local_68 = plVar9 + plVar9[600] * 3;
            local_48 = plVar9;
            FUN_00c4ea30(&local_48,&local_68);
            plVar12 = (long *)*plVar9;
            plVar1 = plVar9;
            if (plVar9[600] != 0) {
              plVar1 = plVar9 + plVar9[600] * 3;
            }
            if (plVar1 == plVar9) {
              lVar15 = 0;
              lVar11 = 0;
            }
            else {
              lVar11 = 0;
              lVar15 = 0;
              plVar14 = plVar9;
              do {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar12) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + lVar15 * 3,plVar14);
                  plVar12 = (long *)*plVar14;
                  lVar15 = lVar11;
                }
                plVar14 = plVar14 + 3;
                lVar11 = lVar11 + 1;
              } while (plVar1 != plVar14);
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar9 + lVar15 * 3,plVar9 + lVar11 * 3);
            plVar9[600] = 0;
          }
          *(undefined4 *)(lVar7 + 0x12cc) = 0;
        }
      }
      iVar6 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,&LAB_00901a30,0);
      FUN_00c5dcd0(param_1,iVar6 + -1,1);
      iVar6 = FUN_00c5ddd0(param_1,1,0,iVar6 + -1,0,0);
      if (iVar6 != 0) {
        uVar10 = FUN_00c646d0(param_1,0xffffffff,0);
        *(undefined8 *)PTR_DAT_047d4238 = uVar10;
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("0","CallImpl",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\haxe_lua/invoker.h"
                   ,0xa8,"Lua panic: function error: %s",uVar10);
      }
    }
  }
  FUN_00c5db00(param_1,0);
  return;
}


