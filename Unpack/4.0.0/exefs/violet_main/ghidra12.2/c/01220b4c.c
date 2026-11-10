/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01220b4c; name: FUN_01220b4c
 */


void FUN_01220b4c(long param_1)

{
  undefined *puVar1;
  short *psVar2;
  undefined *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  char *pcStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  undefined8 local_190;
  char *pcStack_188;
  undefined8 local_180;
  long *local_178;
  undefined8 local_170;
  char *pcStack_168;
  undefined8 local_160;
  long *local_158;
  undefined8 local_150;
  char *pcStack_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  long *local_118;
  undefined8 local_110;
  char *pcStack_108;
  undefined8 local_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  local_1d0 = (long *)0x72fb7574b4aa7f77;
  pcStack_1c8 = "world/data/pokemon/pokemon_unique_path_data/pokemon_collision_unique_data";
  local_1b0 = 0xbecf51037b9eeeee;
  pcStack_1a8 = "world/data/pokemon/pokemon_unique_path_data/pokemon_common_data";
  local_1a0 = 0x3f;
  local_198 = (long *)0x0;
  local_190 = 0xec459400fe894709;
  pcStack_188 = "world/data/pokemon/pokemon_unique_path_data/wild_pokemon_group_data";
  local_180 = 0x43;
  local_178 = (long *)0x0;
  local_170 = 0x4b8828a14d723ba2;
  pcStack_168 = "world/data/pokemon/pokemon_unique_path_data/wild_pokemon_single_data";
  local_160 = 0x44;
  local_158 = (long *)0x0;
  local_150 = 0x8f80f9e5a180138d;
  pcStack_148 = "world/data/pokemon/pokemon_unique_path_data/wild_pokemon_special_data";
  local_130 = 0xfb25c8961afdcc63;
  pcStack_128 = "world/data/pokemon/pokemon_unique_path_data/partner_pokemon_data";
  local_120 = 0x40;
  local_118 = (long *)0x0;
  local_e0 = 0x40;
  local_d8 = (long *)0x0;
  local_d0 = 0x4193399a29917bf6;
  pcStack_c8 = "world/data/pokemon/pokemon_unique_path_data/pokemon_stain_unique_data";
  local_110 = 0xd4df64e67b82c40d;
  pcStack_108 = "world/data/pokemon/pokemon_unique_path_data/partner_movement_data";
  local_1c0 = 0x49;
  local_1b8 = (long *)0x0;
  local_140 = 0x45;
  local_138 = (long *)0x0;
  local_100 = 0x41;
  local_f8 = (long *)0x0;
  local_f0 = 0xe395eac3fa540d55;
  pcStack_e8 = "world/data/pokemon/pokemon_unique_path_data/pokemon_contact_data";
  local_c0 = 0x45;
  local_b8 = (long *)0x0;
  lVar16 = 0;
  local_b0 = 0x4f6ef0789a729bb2;
  pcStack_a8 = "world/data/pokemon/pokemon_unique_path_data/pokemon_species_behavior_data";
  local_a0 = 0x49;
  local_98 = (long *)0x0;
  puVar1 = PTR_DAT_047d66f8 + 0x10;
  local_90 = 0x36545b8588c49781;
  pcStack_88 = "world/data/pokemon/pokemon_unique_path_data/pokemon_species_table";
  local_80 = 0x41;
  local_78 = (long *)0x0;
  do {
    lVar9 = FUN_01221220(auStack_70,*(undefined8 *)(param_1 + 8));
    if (lVar9 != 0) {
      lVar14 = *(long *)(lVar9 + 0x30);
      if (*(long *)(lVar14 + 0x10) == 0) goto LAB_01221190;
      psVar2 = (short *)(lVar14 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
        *(undefined8 *)(lVar14 + 8) = uVar12;
        *(undefined4 *)(lVar14 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_012211b0;
    }
    lVar14 = param_1 + lVar16 * 8;
    plVar15 = (long *)(lVar14 + 0x40);
    plVar10 = (long *)*plVar15;
    *plVar15 = 0;
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[6];
      psVar2 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_012210b0;
    }
    *plVar15 = lVar9;
    FUN_012214a8(lVar9,&local_1d0 + lVar16 * 4);
    plVar10 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    plVar15 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0xa8,8);
    if (plVar15 == (long *)0x0) {
      (**(code **)(*plVar10 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                 ,0x40);
    }
    memset(plVar15 + 1,0,0xa0);
    *plVar15 = (long)puVar1;
    plVar15[2] = 0;
    *(undefined4 *)(plVar15 + 3) = 0;
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    puVar7 = PTR_DAT_047d8c78;
    if (lVar11 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      if (*(long *)(lVar11 + 0x80) != 0) {
        lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
      }
    }
    puVar3 = PTR_DAT_047d8c78 + 0x88;
    *plVar15 = (long)(PTR_DAT_047d8c78 + 0x10);
    plVar15[1] = lVar13;
    plVar15[4] = (long)puVar3;
    plVar18 = plVar15 + 5;
    *plVar18 = (long)(puVar7 + 0xd8);
    plVar17 = plVar15 + 6;
    *plVar17 = 0;
    plVar15[7] = 0;
    FUN_00d1a3f4(plVar17,plVar18);
    *plVar15 = (long)&PTR_LAB_04550638;
    plVar15[4] = (long)&PTR_FUN_045506b0;
    *plVar18 = (long)&PTR_LAB_04550700;
    FUN_01221a2c(plVar15 + 8);
    *(undefined4 *)(plVar15 + 3) = 0x800a8;
    plVar15[1] = (long)plVar10;
    plVar15[2] = (long)plVar15;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    lVar9 = *plVar17;
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_01221190:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar12;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
LAB_012211b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar17 = (long *)(lVar14 + 0x98);
    plVar10 = (long *)*plVar17;
    *plVar17 = 0;
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar10[6];
      psVar2 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_012210b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar16 = lVar16 + 1;
    *plVar17 = (long)plVar15;
    if (lVar16 == 0xb) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined1 *)(param_1 + 0xf4) = 0;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_b8 != (long *)0x0) {
        (**(code **)(*local_b8 + 0x20))();
      }
      if (local_d8 != (long *)0x0) {
        (**(code **)(*local_d8 + 0x20))();
      }
      if (local_f8 != (long *)0x0) {
        (**(code **)(*local_f8 + 0x20))();
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x20))();
      }
      if (local_138 != (long *)0x0) {
        (**(code **)(*local_138 + 0x20))();
      }
      if (local_158 != (long *)0x0) {
        (**(code **)(*local_158 + 0x20))();
      }
      if (local_178 != (long *)0x0) {
        (**(code **)(*local_178 + 0x20))();
      }
      if (local_198 != (long *)0x0) {
        (**(code **)(*local_198 + 0x20))();
      }
      if (local_1b8 != (long *)0x0) {
        (**(code **)(*local_1b8 + 0x20))();
      }
      return;
    }
  } while( true );
}


