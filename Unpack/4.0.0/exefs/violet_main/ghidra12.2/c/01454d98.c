/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01454d98; name: FUN_01454d98
 */


/* WARNING: Removing unreachable block (ram,0x01454ff4) */

undefined8 FUN_01454d98(long param_1,undefined4 param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  short sVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  byte bVar17;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8;
  undefined1 *puStack_1a0;
  undefined8 local_198;
  long *local_190;
  undefined1 *local_188;
  undefined1 *puStack_180;
  undefined8 local_178;
  long *local_170;
  undefined4 local_168;
  undefined8 local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined8 local_70;
  char local_68;
  undefined8 local_48;
  
  if (((*PTR_DAT_047daeb0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047daeb0), iVar9 != 0))
  {
    FUN_00100190(&LAB_02a1c3ec,PTR_DAT_047daeb8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047daeb0);
  }
  lVar12 = *(long *)PTR_DAT_047daeb8;
  *(long *)PTR_DAT_047daec0 = lVar12;
  lVar12 = *(long *)(lVar12 + 0x68);
  if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) {
    return 0;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar13 = *(short *)(lVar12 + 0x1a);
  do {
    sVar3 = *psVar1;
    if (sVar3 == sVar13) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01454e4c;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01454e4c:
      bVar6 = false;
    }
    if (bVar6) {
      lVar12 = *(long *)(lVar12 + 0x10);
      if (lVar12 == 0) {
        return 0;
      }
      bVar6 = *(char *)(lVar12 + 0xdc) == '\0';
      if (bVar6) {
        uVar14 = 0;
        uVar16 = 0;
        uVar15 = 1;
        bVar17 = 1;
      }
      else {
        local_1c0 = &local_70;
        local_70 = CONCAT44(local_70._4_4_,param_2);
        lVar10 = FUN_01556d30((long *)(lVar12 + -0x28) + (long)*(int *)(param_1 + 0x170) * 7 + 0xb,
                              &local_70,&DAT_03d5ef89,&local_1c0,&local_48);
        bVar17 = *(byte *)(lVar10 + 0x28) & 1;
        uVar15 = *(undefined1 *)(lVar10 + 0x29);
        uVar16 = *(undefined4 *)(lVar10 + 0x20);
        uVar14 = *(undefined4 *)(lVar10 + 0x24);
      }
      lVar10 = *(long *)(lVar12 + 8);
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar13 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
      }
      else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (bVar6) {
        return 0;
      }
      local_70 = 0x100000001;
      local_68 = '\x01';
      uVar11 = FUN_01aca6a8(param_1,uVar14,&local_70);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      local_1b0 = local_70._4_4_;
      uStack_1ac = 0;
      uStack_1b4 = (undefined4)local_70;
      local_198 = 0;
      local_190 = (long *)0x0;
      local_7c = bVar17 != 0 && local_68 != '\0';
      local_1a8 = &DAT_cbf29ce484222645;
      puStack_1a0 = &DAT_03c886bc;
      local_1c0 = (undefined8 *)CONCAT44(uVar14,param_2);
      local_168 = 0;
      local_e0 = 0;
      local_80 = 0;
      local_188 = &DAT_cbf29ce484222645;
      puStack_180 = &DAT_03c886bc;
      local_c8 = &DAT_cbf29ce484222645;
      puStack_c0 = &DAT_03c886bc;
      local_90 = 0x101;
      local_178 = 0;
      local_170 = (long *)0x0;
      local_160 = 0;
      local_158 = (code *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      local_d8 = (undefined8 *)0x0;
      uStack_d0 = 0;
      local_b8 = 0;
      local_b0 = (long *)0x0;
      local_a0 = 0;
      uStack_98 = 0;
      local_1b8 = uVar16;
      local_7b = uVar15;
      FUN_01aca4f8(param_3,&local_1c0);
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      puVar8 = local_d8;
      if (local_d8 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_d8 + 3);
        do {
          sVar13 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar13 == 1) {
          piVar2 = (int *)((long)local_d8 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_48 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_48);
          }
        }
        else if (sVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      pcVar7 = local_158;
      if (local_158 != (code *)0x0) {
        local_150 = 0;
        uStack_148 = 0;
        local_160 = 0;
        local_158 = (code *)0x0;
        (*pcVar7)(auStack_140);
      }
      if (local_170 != (long *)0x0) {
        (**(code **)(*local_170 + 0x20))();
      }
      if (local_190 != (long *)0x0) {
        (**(code **)(*local_190 + 0x20))();
      }
      return 1;
    }
    sVar13 = sVar3;
    if (sVar3 == 0) {
      return 0;
    }
  } while( true );
}


