/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfd66c; name: FUN_01dfd66c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01dfd66c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  short *psVar1;
  ulong *puVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  ulong local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  ulong *local_90 [7];
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  uStack_c8 = param_4._8_4_;
  uVar17 = param_4._0_8_;
  plVar11 = (long *)FUN_01dfd3b8();
  lVar13 = *plVar11;
  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
LAB_01dfd698:
    uVar9 = 1;
  }
  else {
    psVar1 = (short *)(lVar13 + 0x1a);
    uVar9 = 1;
    sVar15 = *(short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      if (sVar5 == sVar15) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_01dfd6f0;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dfd6f0:
        bVar7 = false;
      }
      if (bVar7) {
        lVar13 = *(long *)(lVar13 + 0x10);
        if (lVar13 == 0) goto LAB_01dfd698;
        lVar12 = FUN_01104bd8(lVar13 + 0xe0,local_90);
        if ((lVar12 == 0) || (FUN_00e95abc(local_90,param_5), local_90[0] == (ulong *)0x0))
        goto LAB_01dfd734;
        if (*(short *)((long)local_90[0] + 0x1a) == 0) goto LAB_01dfd790;
        psVar1 = (short *)((long)local_90[0] + 0x1a);
        sVar15 = *(short *)((long)local_90[0] + 0x1a);
        goto LAB_01dfd75c;
      }
      sVar15 = sVar5;
    } while (sVar5 != 0);
  }
  goto LAB_01dfd69c;
  while (sVar15 = sVar5, sVar5 != 0) {
LAB_01dfd75c:
    sVar5 = *psVar1;
    if (sVar5 == sVar15) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_01dfd780;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01dfd780:
      bVar7 = false;
    }
    if (bVar7) {
      plVar11 = (long *)0x0;
      if (local_90[0][2] != 0) {
        plVar11 = (long *)(local_90[0][2] - 0x28);
      }
      goto LAB_01dfd7a8;
    }
  }
LAB_01dfd790:
  plVar11 = (long *)0x0;
LAB_01dfd7a8:
  puVar2 = local_90[0] + 3;
  do {
    sVar15 = (short)*puVar2;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *(short *)puVar2 = sVar15 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar15 == 1) {
    piVar3 = (int *)((long)local_90[0] + 0x1c);
    do {
      iVar10 = *piVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar7) {
        *piVar3 = -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_b0 = *local_90[0];
      FUN_00c44438(lVar14 + 0x8040,&local_b0);
    }
  }
  else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar11 == (long *)0x0) {
LAB_01dfd734:
    uVar9 = 1;
  }
  else {
    local_58 = 0;
    local_b0 = 0xd36b2ac302427423;
    puStack_a8 = &DAT_03c19000;
    local_a0 = 4;
    local_98 = (long *)0x0;
    uVar9 = FUN_00c8ea20(*(undefined8 *)(*(long *)(lVar12 + 0x138) + 0x70),&local_b0);
    if ((~uVar9 & 0xffff) == 0) {
      FUN_00c9e664(&local_50,lVar12 + 0xe8);
      if (local_50 == (long *)0x0) {
        uStack_c8 = (undefined4)_UNK_03cabe58;
        local_d0 = (undefined4)_DAT_03cabe50;
        uStack_cc = (undefined4)((ulong)_DAT_03cabe50 >> 0x20);
      }
      else {
        (**(code **)(*(long *)local_48[9] + 0xb0))();
        local_d0 = (undefined4)uVar17;
        uStack_cc = (undefined4)((ulong)uVar17 >> 0x20);
      }
      if (local_48 != (long *)0x0) {
        plVar4 = local_48 + 5;
        do {
          lVar12 = *plVar4;
          iVar10 = (int)lVar12 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *(int *)plVar4 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x60))();
      }
    }
    else {
      FUN_00d175d0(*(undefined8 *)(*(long *)(lVar12 + 0x138) + 0x70),uVar9);
      local_d0 = (undefined4)uVar17;
      uStack_cc = (undefined4)((ulong)uVar17 >> 0x20);
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    fVar16 = *(float *)((long)plVar11 + 0x274);
    NEON_ext(param_1,param_1,8,1);
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    auVar8._4_4_ = uStack_cc;
    auVar8._0_4_ = local_d0;
    auVar8._8_4_ = uStack_c8;
    auVar8._12_4_ = 0;
    lVar12 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar12;
    local_b0 = local_b0 & 0xffffffffff000000;
    uVar9 = FUN_00d6fedc(auVar8,CONCAT44(param_1._4_4_ + fVar16,param_1._0_4_),
                         *(undefined8 *)(lVar12 + 0x70),*(undefined4 *)(param_5 + 0x770),local_90,1,
                         &local_b0);
    FUN_012c7df0(&local_58);
    lVar12 = plVar11[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar15 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))();
LAB_01dfd69c:
  return uVar9 & 1;
}


