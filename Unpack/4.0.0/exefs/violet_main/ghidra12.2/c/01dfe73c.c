/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfe73c; name: FUN_01dfe73c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01dfe73c(undefined1 param_1 [16],float param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  bool bVar16;
  float fVar18;
  undefined1 auVar17 [16];
  undefined1 extraout_q0 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined5 uStack_cd;
  undefined1 local_c0 [56];
  undefined8 local_88;
  undefined1 local_80 [4];
  uint uStack_7c;
  undefined8 local_48 [2];
  undefined8 local_38;
  
  local_48[0] = 0;
  fVar20 = param_1._0_4_ + (float)_DAT_03cabe60 * param_2;
  fVar18 = param_1._4_4_;
  fVar21 = fVar18 + (float)((ulong)_DAT_03cabe60 >> 0x20) * param_2;
  fVar22 = param_1._8_4_ + (float)_UNK_03cabe68 * param_2;
  fVar23 = param_1._12_4_ + (float)((ulong)_UNK_03cabe68 >> 0x20) * param_2;
  local_88 = 0;
  fVar19 = param_1._0_4_ + (float)_DAT_03caa8c0;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0))
  {
    FUN_00100190(extraout_q0,fVar19,PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  auVar17._12_4_ = fVar23;
  auVar17._8_4_ = fVar22;
  auVar17._4_4_ = fVar21;
  auVar17._0_4_ = fVar20;
  lVar11 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar11;
  uVar14 = *(undefined8 *)(lVar11 + 0x70);
  uStack_ce = 0;
  local_d0 = 0;
  uVar9 = FUN_00d6fedc(auVar17,fVar19,uVar14,*(undefined4 *)(param_3 + 0x770),local_80,1,&local_d0);
  auVar6._4_4_ = fVar21;
  auVar6._0_4_ = fVar20;
  auVar6._8_4_ = fVar22;
  auVar6._12_4_ = fVar23;
  uStack_ce = 0;
  local_d0 = 0;
  uVar10 = FUN_00c7a0cc(auVar6,fVar19,uVar14,*(undefined4 *)(param_3 + 0x760),local_c0,1,&local_d0);
  FUN_00e95abc(&local_d0,param_3);
  puVar7 = (undefined8 *)CONCAT53(uStack_cd,CONCAT12(uStack_ce,local_d0));
  if (puVar7 == (undefined8 *)0x0) {
    bVar16 = false;
  }
  else {
    fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ uStack_7c) & -(uint)((uVar9 & 1) != 0));
    if (*(short *)((long)puVar7 + 0x1a) != 0) {
      psVar1 = (short *)((long)puVar7 + 0x1a);
      sVar12 = *(short *)((long)puVar7 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01dfe8ec;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dfe8ec:
          bVar16 = false;
        }
        if (bVar16) {
          plVar13 = (long *)0x0;
          if (puVar7[2] != 0) {
            plVar13 = (long *)(puVar7[2] + -0x28);
          }
          goto LAB_01dfe914;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
    plVar13 = (long *)0x0;
LAB_01dfe914:
    psVar1 = (short *)(puVar7 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)puVar7 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar16) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar7;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    bVar16 = false;
    if (plVar13 == (long *)0x0) goto LAB_01dfe82c;
    plVar15 = (long *)plVar13[0x40];
    if (plVar15 == (long *)0x0) {
      bVar16 = false;
    }
    else {
      lVar11 = plVar15[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar14;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar11 = plVar15[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      bVar16 = 0.4 < (float)((uint)fVar18 ^
                            ((uint)fVar18 ^ local_c0._4_4_) & -(uint)((uVar10 & 1) != 0)) - fVar18;
      do {
        sVar12 = *psVar1;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))(plVar15);
      }
      else if (sVar12 == 0) goto LAB_01dfe9e8;
    }
    lVar11 = plVar13[0x13];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar12 == 0) {
LAB_01dfe9e8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01dfe82c:
  FUN_012c7df0(&local_88);
  FUN_012c7df0(local_48);
  return bVar16;
}


