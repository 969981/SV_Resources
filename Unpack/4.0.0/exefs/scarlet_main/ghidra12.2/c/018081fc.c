/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018081fc; name: FUN_018081fc
 */


void FUN_018081fc(long param_1,ulong param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_28;
  
  if (((param_2 & 1) == 0) &&
     (plVar10 = *(long **)(param_1 + 0x168), plVar10 != *(long **)(param_1 + 0x170))) {
    do {
      if ((*plVar10 == 0) || (*(short *)(*plVar10 + 0x1a) == 0)) {
        plVar10 = (long *)FUN_01809704(param_1 + 0x168,plVar10);
      }
      else {
        if (*plVar10 == 0) {
          local_28 = 0;
        }
        else {
          FUN_0227361c(&local_28);
        }
        uVar8 = local_28;
        local_60 = *(undefined8 *)(param_1 + 0x88);
        uStack_58 = *(undefined8 *)(param_1 + 0x90);
        local_50 = *(undefined8 *)(param_1 + 0x98);
        local_48 = *(long **)(param_1 + 0xa0);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x18))();
        }
        local_80 = *(undefined8 *)(param_1 + 0xa8);
        uStack_78 = *(undefined8 *)(param_1 + 0xb0);
        local_70 = *(undefined8 *)(param_1 + 0xb8);
        local_68 = *(long **)(param_1 + 0xc0);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x18))();
        }
        FUN_022736b0(uVar8,&local_60,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        FUN_0227232c(&local_28);
        plVar10 = plVar10 + 2;
      }
    } while (plVar10 != *(long **)(param_1 + 0x170));
  }
  plVar10 = *(long **)(param_1 + 0x130);
  plVar13 = *(long **)(param_1 + 0x138);
  if (plVar10 != plVar13) {
    pbVar6 = PTR_DAT_047d3908;
    plVar7 = (long *)PTR_DAT_047d3910;
    if ((*plVar10 != 0) && (*(short *)(*plVar10 + 0x1a) != 0)) {
      if (*plVar10 == 0) {
        local_28 = 0;
      }
      else {
        FUN_0227361c(&local_28);
      }
      uVar8 = local_28;
      local_a0 = *(undefined8 *)(param_1 + 0x88);
      uStack_98 = *(undefined8 *)(param_1 + 0x90);
      local_90 = *(undefined8 *)(param_1 + 0x98);
      local_88 = *(long **)(param_1 + 0xa0);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x18))();
      }
      local_c0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
      local_b0 = *(undefined8 *)(param_1 + 0xb8);
      local_a8 = *(long **)(param_1 + 0xc0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x18))();
      }
      FUN_022736b0(uVar8,&local_a0,&local_c0);
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
      FUN_0227232c(&local_28);
      FUN_0227379c(param_1 + 0x168,plVar10);
      pbVar6 = PTR_DAT_047d3908;
      plVar7 = (long *)PTR_DAT_047d3910;
    }
    while (plVar10 = plVar10 + 2, PTR_DAT_047d3908 = pbVar6, PTR_DAT_047d3910 = (undefined *)plVar7,
          plVar10 != plVar13) {
      if ((*plVar10 != 0) && (*(short *)(*plVar10 + 0x1a) != 0)) {
        if (*plVar10 == 0) {
          local_28 = 0;
        }
        else {
          FUN_0227361c(&local_28);
        }
        uVar8 = local_28;
        local_a0 = *(undefined8 *)(param_1 + 0x88);
        uStack_98 = *(undefined8 *)(param_1 + 0x90);
        local_90 = *(undefined8 *)(param_1 + 0x98);
        local_88 = *(long **)(param_1 + 0xa0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x18))();
        }
        local_c0 = *(undefined8 *)(param_1 + 0xa8);
        uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
        local_b0 = *(undefined8 *)(param_1 + 0xb8);
        local_a8 = *(long **)(param_1 + 0xc0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x18))();
        }
        FUN_022736b0(uVar8,&local_a0,&local_c0);
        if (local_a8 != (long *)0x0) {
          (**(code **)(*local_a8 + 0x20))();
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        FUN_0227232c(&local_28);
        FUN_0227379c(param_1 + 0x168,plVar10);
        pbVar6 = PTR_DAT_047d3908;
        plVar7 = (long *)PTR_DAT_047d3910;
      }
    }
    plVar10 = *(long **)(param_1 + 0x130);
    plVar13 = *(long **)(param_1 + 0x138);
    while (plVar13 != plVar10) {
      plVar13 = plVar13 + -2;
      puVar12 = (undefined8 *)*plVar13;
      if (puVar12 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar12 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)puVar12 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar6), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,plVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar6);
            }
            lVar11 = *plVar7;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_28 = *puVar12;
            FUN_00c44438(lVar11 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  *(long **)(param_1 + 0x138) = plVar10;
  return;
}


