/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e43e8; name: FUN_010e43e8
 */


void FUN_010e43e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  bool bVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_047d38f8;
  if (-1 < *(int *)(param_2 + 0x58)) {
    lVar11 = *(long *)PTR_DAT_047d38f8;
    lVar9 = nn::os::GetCurrentThread();
    if (lVar9 != lVar11) {
      uVar10 = nn::os::GetCurrentThread();
LAB_010e4564:
      if (*(long *)puVar5 == 0) goto code_r0x010e456c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
      do {
        if (*(long *)puVar5 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(puVar5 + 8));
            while (*(long *)puVar5 == 0) {
              cVar4 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar12) {
                *(undefined8 *)puVar5 = uVar10;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_010e4574;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar12) {
          *(undefined8 *)puVar5 = uVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_010e4574:
      bVar12 = false;
      goto LAB_010e4430;
    }
    bVar12 = true;
LAB_010e4430:
    iVar7 = FUN_00c5fc50(param_1,0xfff0b9d8,(long)*(int *)(param_2 + 0x5c));
    iVar8 = *(int *)(param_2 + 0x58);
    if (!bVar12) {
      *(undefined8 *)puVar5 = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar5 + 8));
    }
    if (iVar7 == iVar8) {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_00ca1a48(&local_70,param_3);
      local_60[0] = 2;
      local_58 = 0;
      uStack_50 = 0;
      FUN_00ca1ea4(&local_58,&local_70);
      FUN_00ca1900(param_1,local_60);
      FUN_00cecfd8(local_60);
      puVar6 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar12) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_70 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar12) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_48 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      iVar8 = FUN_00c5d980(param_1);
      FUN_00c5dbe0(param_1,FUN_01b2cb80,0);
      FUN_00c5dcd0(param_1,iVar8 + -1,1);
      iVar8 = FUN_00c5ddd0(param_1,1,0,iVar8 + -1,0,0);
      if (iVar8 != 0) {
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
code_r0x010e456c:
  cVar4 = '\x01';
  bVar12 = (bool)ExclusiveMonitorPass(puVar5,0x10);
  if (bVar12) {
    *(undefined8 *)puVar5 = uVar10;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_010e4574;
  goto LAB_010e4564;
}


