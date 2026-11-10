/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0202078c; name: FUN_0202078c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0202078c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  short sVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_48;
  
  lVar9 = FUN_0201f994(param_1,*param_2);
  if ((((*(long *)(lVar9 + 0x128) != 0) && (*(short *)(*(long *)(lVar9 + 0x128) + 0x1a) != 0)) ||
      (uVar10 = FUN_00d53914(lVar9 + 0x110), (uVar10 & 1) != 0)) && (*(long *)(lVar9 + 0x120) != 0))
  {
    FUN_00d52990(&local_b0,*(long *)(lVar9 + 0x120),0);
    puVar7 = local_b0;
    if (local_b0 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(short *)((long)local_b0 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_b0 + 0x1a);
      sVar11 = *(short *)((long)local_b0 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_02020858;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02020858:
          bVar5 = false;
        }
        if (bVar5) {
          plVar12 = (long *)0x0;
          if (local_b0[2] != 0) {
            plVar12 = (long *)(local_b0[2] + -0x28);
          }
          goto LAB_02020880;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
    plVar12 = (long *)0x0;
LAB_02020880:
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
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
        local_48 = *puVar7;
        FUN_00c44438(lVar9 + 0x8040,&local_48);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    uVar6 = _UNK_03cabe68;
    uVar13 = _DAT_03cabe60;
    if (plVar12 != (long *)0x0) {
      lVar9 = plVar12[0x17];
      if (lVar9 != 0) {
        uVar10 = 0;
        do {
          if ((ulong)(long)*(int *)(lVar9 + 0x20) <= uVar10) break;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = (undefined8 *)0x0;
          uStack_a8 = 0;
          FUN_00f314bc(plVar12,uVar10 & 0xffffffff,&local_b0);
          fVar14 = (float)local_90 * (float)uVar13;
          fVar16 = local_90._4_4_ * (float)((ulong)uVar13 >> 0x20);
          fVar17 = (float)uStack_88 * (float)uVar6;
          fVar18 = uStack_88._4_4_ * (float)((ulong)uVar6 >> 0x20);
          auVar15._0_4_ = fVar14 + fVar16;
          auVar15._4_4_ = fVar17 + fVar18;
          auVar15._8_4_ = fVar14 + fVar16;
          auVar15._12_4_ = fVar17 + fVar18;
          auVar15 = NEON_ext(auVar15,auVar15,4,1);
          local_48 = CONCAT44(local_48._4_4_,auVar15._0_4_ + auVar15._4_4_);
          fVar14 = (float)FUN_00d7a4e0();
          if (fVar14 < (*(float *)((long)plVar12 + 0x334) * 3.1415927) / 180.0) {
            uVar13 = 1;
            goto LAB_02020978;
          }
          lVar9 = plVar12[0x17];
          uVar10 = uVar10 + 1;
        } while (lVar9 != 0);
      }
      uVar13 = 0;
LAB_02020978:
      lVar9 = plVar12[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12);
        return uVar13;
      }
      if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return uVar13;
    }
  }
  return 0;
}


