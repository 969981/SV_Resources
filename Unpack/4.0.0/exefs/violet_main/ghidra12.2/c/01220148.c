/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01220148; name: FUN_01220148
 */


void FUN_01220148(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *local_158;
  long *local_150 [4];
  long *local_130;
  undefined8 local_120;
  undefined *puStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  local_e0 = (long *)0xa1e60f3b5726910f;
  pcStack_d8 = 
  "world/data/pokemon/collision/pokemon_collision_height_data/pokemon_collision_height_data_array";
  local_c0 = 0x80d4f13cfad4efb3;
  pcStack_b8 = 
  "world/data/pokemon/collision/pokemon_collision_offset_data/pokemon_collision_offset_data_array";
  local_d0 = 0x5e;
  local_c8 = (long *)0x0;
  local_b0 = 0x5e;
  local_a8 = (long *)0x0;
  local_90 = 0x5e;
  local_88 = (long *)0x0;
  local_a0 = 0xd182554e5f320f7f;
  pcStack_98 = 
  "world/data/pokemon/collision/pokemon_collision_radius_data/pokemon_collision_radius_data_array";
  local_80 = 0xdcf9c4bd1360c113;
  pcStack_78 = 
  "world/data/pokemon/collision/pokemon_collision_category_data/pokemon_collision_category_data_array"
  ;
  local_70 = 0x62;
  local_68 = (long *)0x0;
  local_100 = 0xf37342f5f7a782fa;
  pcStack_f8 = ".bfbs";
  local_f0 = 5;
  local_e8 = (long *)0x0;
  lVar9 = 0;
  local_120 = 0xf82647c93ec7c8aa;
  puStack_118 = &DAT_03c202d3;
  local_110 = 4;
  local_108 = (long *)0x0;
  do {
    lVar8 = param_1 + lVar9 * 0x40;
    FUN_01221800(&local_158,&local_e0 + lVar9 * 4,&local_100);
    FUN_01221874(local_150,&local_158);
    uVar5 = FUN_00dc5c18(lVar8 + 0x340,1,local_150,0,0);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(lVar8 + 0x360), plVar7 != (long *)0x0)) {
      lVar10 = plVar7[6];
      if (*(long *)(lVar10 + 0x10) == 0) goto LAB_01220544;
      psVar1 = (short *)(lVar10 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar6;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01220564;
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) goto LAB_0122058c;
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (local_150[0] != (long *)0x0) {
      (**(code **)(*local_150[0] + 0x20))();
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    FUN_01221800(&local_158,&local_e0 + lVar9 * 4,&local_120);
    FUN_01221874(local_150,&local_158);
    uVar5 = FUN_00dc5c18(lVar8 + 0x440,1,local_150,0,0);
    if (((uVar5 & 1) != 0) && (plVar7 = *(long **)(lVar8 + 0x460), plVar7 != (long *)0x0)) {
      lVar8 = plVar7[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_01220544:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
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
        uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar6;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01220564:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar8 = plVar7[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) {
LAB_0122058c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    if (local_130 != (long *)0x0) {
      (**(code **)(*local_130 + 0x20))();
    }
    if (local_150[0] != (long *)0x0) {
      (**(code **)(*local_150[0] + 0x20))();
    }
    if (local_158 != (long *)0x0) {
      (**(code **)(*local_158 + 0x20))();
    }
    lVar9 = lVar9 + 1;
    if (lVar9 == 4) {
      if (local_108 != (long *)0x0) {
        (**(code **)(*local_108 + 0x20))();
      }
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x20))();
      }
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x20))();
      }
      return;
    }
  } while( true );
}


