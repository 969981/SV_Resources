/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dc4ca8; name: FUN_01dc4ca8
 */


void FUN_01dc4ca8(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,int param_6,ulong param_7,ulong param_8,int param_9)

{
  byte *pbVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *local_98;
  long *local_88;
  
  param_7 = param_7 & 0xffffffff;
  if (param_9 == 5) {
    lVar12 = 0x68f8;
  }
  else {
    if (param_9 != 3) {
      return;
    }
    lVar12 = 0x68b0;
  }
  pfVar10 = (float *)FUN_01dc3bc0(param_4);
  if (pfVar10 != (float *)0x0) {
    local_88 = *(long **)(param_4 + 0x6cd0);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x58))();
    }
    plVar7 = (long *)PTR_DAT_047d8b70;
    plVar2 = (long *)PTR_PTR_047d4508;
    plVar15 = *(long **)(param_4 + param_7 * 8 + 0x6b00);
    plVar11 = (long *)PTR_DAT_047d8b70;
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 6;
    }
    local_b0 = *plVar11;
    plVar11 = (long *)PTR_PTR_047d4508;
    if (plVar15 != (long *)0x0) {
      plVar11 = plVar15 + 7;
    }
    lStack_a8 = *plVar11;
    if (plVar15 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = plVar15[8];
    }
    local_98 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    local_98 = plVar15;
    uVar18 = FUN_01dc1eb0(&local_88,&local_b0);
    uVar20 = param_2;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    fVar19 = (float)uVar20;
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x60))();
    }
    local_b8 = *(long **)(param_4 + 0x6cd0);
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x58))();
    }
    plVar14 = *(long **)(param_4 + (param_8 & 0xffffffff) * 8 + 0x6b00);
    plVar11 = plVar2;
    plVar15 = plVar7;
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 7;
      plVar15 = plVar14 + 6;
    }
    local_b0 = *plVar15;
    lStack_a8 = *plVar11;
    if (plVar14 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = plVar14[8];
    }
    local_98 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_98 = plVar14;
    fVar17 = (float)FUN_01dc1eb0(&local_b8,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x60))();
    }
    pbVar1 = (byte *)(param_4 + param_7 + 0x68b6);
    *(byte *)((long)pfVar10 + 9) = *pbVar1;
    *(undefined2 *)((long)pfVar10 + 10) = 0x104;
    *(undefined1 *)(pfVar10 + 2) = 0;
    *pfVar10 = (fVar17 - (float)uVar18) * 0.25;
    pfVar10[1] = (fVar19 - (float)param_2) * 0.25;
    iVar9 = FUN_01dc1b60(*(undefined4 *)(param_4 + 0x6c38),*(uint *)(param_4 + 0x6c3c) >> 8 & 0x3f,
                         *(uint *)(param_4 + 0x6c3c) >> 0xe & 0x3f);
    FUN_01dc0268(&local_b0);
    plVar11 = (long *)thunk_FUN_010f26f8(local_b0,*(undefined4 *)(param_4 + 0x6c38),
                                         *(undefined1 *)(param_4 + 0x6c3c),iVar9 + param_6);
    FUN_0149c1c0(&local_b0);
    local_c0 = plVar11;
    if (plVar11 == (long *)0x0) {
      FUN_014e63f0(param_4,&local_c0,4,param_7,0);
    }
    else {
      plVar15 = plVar11 + 5;
      do {
        lVar8 = *plVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = (int)lVar8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      FUN_014e63f0(param_4,&local_c0,4,param_7,0);
      if (plVar11 != (long *)0x0) {
        plVar15 = plVar11 + 5;
        do {
          lVar8 = *plVar15;
          iVar9 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar6) {
            *(int *)plVar15 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    bVar3 = *pbVar1;
    bVar4 = *(byte *)(param_4 + lVar12 + param_7);
    plVar11 = *(long **)(param_4 + 0x6cd0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
    }
    puVar16 = (undefined8 *)(param_4 + (ulong)bVar3 * 0x98 + 0x30);
    plVar13 = (long *)*puVar16;
    plVar15 = plVar2;
    plVar14 = plVar7;
    if (plVar13 != (long *)0x0) {
      plVar15 = plVar13 + 7;
      plVar14 = plVar13 + 6;
    }
    local_b0 = *plVar14;
    lStack_a8 = *plVar15;
    if (plVar13 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = plVar13[8];
    }
    local_98 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    local_98 = plVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
      lVar12 = FUN_00c8c7b4(plVar11[0x2e],&local_b0);
      (**(code **)(*plVar11 + 0x60))(plVar11);
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
      }
    }
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11);
    }
    local_c8 = *(long **)(param_4 + 0x6cd0);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x58))();
    }
    plVar14 = (long *)*puVar16;
    plVar11 = plVar2;
    plVar15 = plVar7;
    if (plVar14 != (long *)0x0) {
      plVar11 = plVar14 + 7;
      plVar15 = plVar14 + 6;
    }
    local_b0 = *plVar15;
    lStack_a8 = *plVar11;
    if (plVar14 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = plVar14[8];
    }
    local_98 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    local_98 = plVar14;
    FUN_01442568(uVar18,param_2,param_3,&local_c8,&local_b0);
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x60))();
    }
    plVar11 = *(long **)(param_4 + 0x6cd0);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
    }
    plVar15 = *(long **)(param_4 + (ulong)bVar4 * 0x98 + 0x30);
    if (plVar15 != (long *)0x0) {
      plVar2 = plVar15 + 7;
      plVar7 = plVar15 + 6;
    }
    local_b0 = *plVar7;
    lStack_a8 = *plVar2;
    if (plVar15 == (long *)0x0) {
      local_a0 = 0;
    }
    else {
      local_a0 = plVar15[8];
    }
    local_98 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    local_98 = plVar15;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
      lVar12 = FUN_00c8c7b4(plVar11[0x2e],&local_b0);
      (**(code **)(*plVar11 + 0x60))(plVar11);
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
    }
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11);
    }
  }
  return;
}


