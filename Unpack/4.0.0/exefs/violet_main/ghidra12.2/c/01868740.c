/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01868740; name: FUN_01868740
 */


void FUN_01868740(long param_1)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint local_78 [8];
  long *local_58;
  long *local_50;
  undefined4 local_44;
  
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  (**(code **)(*plVar9 + 0x30))(plVar9,param_1 + 0x40,3);
  local_50 = DAT_0485a0a0;
  if (DAT_0485a0a0 != (long *)0x0) {
    plVar9 = DAT_0485a0a0 + 5;
    do {
      lVar15 = *plVar9;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = (int)lVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar15 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9,2);
  if ((uVar10 & 1) == 0) {
    FUN_01868fe4(param_1,&local_50,uVar7);
  }
  else {
    plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
    uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9,3);
    if ((uVar10 & 1) == 0) {
      plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
      uVar10 = (**(code **)(*plVar9 + 0x48))(plVar9,4);
      if ((uVar10 & 1) == 0) {
        FUN_00ca7394(param_1 + 0x50,2);
        lVar15 = *(long *)(param_1 + 0x50);
        local_78[0] = 0x22;
        local_44 = 1;
        FUN_00c85118(lVar15,&local_44,local_78);
        *(int *)(lVar15 + 0x40) = *(int *)(lVar15 + 0x40) + 0xc;
        FUN_00ebd51c(lVar15,&local_50,uVar7,1);
        lVar16 = *(long *)(param_1 + 0x50);
        local_44 = 2;
        lVar15 = lVar16 + 0x48;
        local_78[0] = 0x69;
        FUN_00c85118(lVar15,&local_44,local_78);
        *(int *)(lVar16 + 0x88) = *(int *)(lVar16 + 0x88) + 4;
      }
      else {
        FUN_00ca7394(param_1 + 0x50,3);
        lVar15 = *(long *)(param_1 + 0x50);
        local_78[0] = 0x22;
        local_44 = 1;
        FUN_00c85118(lVar15,&local_44,local_78);
        *(int *)(lVar15 + 0x40) = *(int *)(lVar15 + 0x40) + 0xc;
        FUN_00ebd51c(lVar15,&local_50,uVar7,1);
        lVar15 = *(long *)(param_1 + 0x50);
        local_78[0] = 0x69;
        local_44 = 2;
        FUN_00c85118(lVar15 + 0x48,&local_44,local_78);
        *(int *)(lVar15 + 0x88) = *(int *)(lVar15 + 0x88) + 4;
        FUN_00ebd51c(lVar15 + 0x48,&local_50,uVar7,1);
        lVar16 = *(long *)(param_1 + 0x50);
        local_78[0] = 0x69;
        local_44 = 4;
        lVar15 = lVar16 + 0x90;
        FUN_00c85118(lVar15,&local_44,local_78);
        *(int *)(lVar16 + 0xd0) = *(int *)(lVar16 + 0xd0) + 4;
      }
      FUN_00ebd51c(lVar15,&local_50,uVar7,1);
    }
    else {
      FUN_01869060(param_1,&local_50,uVar7);
    }
  }
  lVar15 = *(long *)(param_1 + 0x90);
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9,2);
  plVar9 = *(long **)(*(long *)(lVar15 + 0x30) + 0x110);
  plVar2 = *(long **)(*(long *)(lVar15 + 0x30) + 0x118);
  plVar13 = plVar9;
  if ((plVar9 != plVar2) && (*plVar9 != -0x58074e8447efbca3)) {
    do {
      plVar13 = plVar13 + 0xc;
      if (plVar2 == plVar13) {
        plVar13 = plVar2;
        goto LAB_0186893c;
      }
    } while (*plVar13 != -0x58074e8447efbca3);
  }
LAB_0186893c:
  if (plVar2 != plVar13) {
    iVar4 = (int)((ulong)((long)plVar13 - (long)plVar9) >> 5) * -0x55555555;
    lVar16 = plVar9[(long)iVar4 * 0xc + 4];
    lVar3 = plVar9[(long)iVar4 * 0xc + 5];
    lVar14 = lVar16;
    if (lVar16 != lVar3) {
      lVar12 = lVar16;
      if (*(uint *)(lVar16 + 0x20) != (uVar8 & 1)) {
        do {
          lVar14 = lVar12 + 0x28;
          if (lVar3 == lVar14) {
            lVar14 = lVar3;
            goto LAB_01868980;
          }
          puVar1 = (uint *)(lVar12 + 0x48);
          lVar12 = lVar14;
        } while (*puVar1 != (uVar8 & 1));
      }
    }
LAB_01868980:
    if (lVar3 != lVar14) {
      lVar12 = (long)iVar4;
      uVar10 = (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x59);
      lVar3 = *(long *)(lVar15 + 0x80);
      if ((ulong)(*(long *)(lVar15 + 0x88) - lVar3 >> 2) <= uVar10) goto LAB_01868f8c;
      *(uint *)(lVar3 + uVar10 * 4) =
           (int)((ulong)(lVar14 - lVar16) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar3 + uVar10 * 4) &
           (*(uint *)((long)plVar9 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
    }
  }
  lVar15 = *(long *)(param_1 + 0x90);
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9,4);
  plVar9 = *(long **)(*(long *)(lVar15 + 0x30) + 0x110);
  plVar2 = *(long **)(*(long *)(lVar15 + 0x30) + 0x118);
  plVar13 = plVar9;
  if ((plVar9 != plVar2) && (*plVar9 != -0x71d3529ee2b24559)) {
    do {
      plVar13 = plVar13 + 0xc;
      if (plVar2 == plVar13) {
        plVar13 = plVar2;
        goto LAB_01868a48;
      }
    } while (*plVar13 != -0x71d3529ee2b24559);
  }
LAB_01868a48:
  if (plVar2 != plVar13) {
    iVar4 = (int)((ulong)((long)plVar13 - (long)plVar9) >> 5) * -0x55555555;
    lVar16 = plVar9[(long)iVar4 * 0xc + 4];
    lVar3 = plVar9[(long)iVar4 * 0xc + 5];
    lVar14 = lVar16;
    if (lVar16 != lVar3) {
      lVar12 = lVar16;
      if (*(uint *)(lVar16 + 0x20) != (uVar8 & 1)) {
        do {
          lVar14 = lVar12 + 0x28;
          if (lVar3 == lVar14) {
            lVar14 = lVar3;
            goto LAB_01868a8c;
          }
          puVar1 = (uint *)(lVar12 + 0x48);
          lVar12 = lVar14;
        } while (*puVar1 != (uVar8 & 1));
      }
    }
LAB_01868a8c:
    if (lVar3 != lVar14) {
      lVar12 = (long)iVar4;
      uVar10 = (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x59);
      lVar3 = *(long *)(lVar15 + 0x80);
      if ((ulong)(*(long *)(lVar15 + 0x88) - lVar3 >> 2) <= uVar10) goto LAB_01868f8c;
      *(uint *)(lVar3 + uVar10 * 4) =
           (int)((ulong)(lVar14 - lVar16) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar3 + uVar10 * 4) &
           (*(uint *)((long)plVar9 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
    }
  }
  lVar15 = *(long *)(param_1 + 0x90);
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
  uVar8 = (**(code **)(*plVar9 + 0x48))(plVar9,3);
  plVar9 = *(long **)(*(long *)(lVar15 + 0x30) + 0x110);
  plVar2 = *(long **)(*(long *)(lVar15 + 0x30) + 0x118);
  plVar13 = plVar9;
  if ((plVar9 != plVar2) && (*plVar9 != -0x1060da8d018c3120)) {
    do {
      plVar13 = plVar13 + 0xc;
      if (plVar2 == plVar13) {
        plVar13 = plVar2;
        goto LAB_01868b54;
      }
    } while (*plVar13 != -0x1060da8d018c3120);
  }
LAB_01868b54:
  if (plVar2 != plVar13) {
    iVar4 = (int)((ulong)((long)plVar13 - (long)plVar9) >> 5) * -0x55555555;
    lVar16 = plVar9[(long)iVar4 * 0xc + 4];
    lVar3 = plVar9[(long)iVar4 * 0xc + 5];
    lVar14 = lVar16;
    if (lVar16 != lVar3) {
      lVar12 = lVar16;
      if (*(uint *)(lVar16 + 0x20) != (uVar8 & 1)) {
        do {
          lVar14 = lVar12 + 0x28;
          if (lVar3 == lVar14) {
            lVar14 = lVar3;
            goto LAB_01868b98;
          }
          puVar1 = (uint *)(lVar12 + 0x48);
          lVar12 = lVar14;
        } while (*puVar1 != (uVar8 & 1));
      }
    }
LAB_01868b98:
    if (lVar3 != lVar14) {
      lVar12 = (long)iVar4;
      uVar10 = (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5a) -
               (ulong)*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x59);
      lVar3 = *(long *)(lVar15 + 0x80);
      if ((ulong)(*(long *)(lVar15 + 0x88) - lVar3 >> 2) <= uVar10) {
LAB_01868f8c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      *(uint *)(lVar3 + uVar10 * 4) =
           (int)((ulong)(lVar14 - lVar16) >> 3) * -0x33333333 <<
           (ulong)(*(byte *)((long)plVar9 + lVar12 * 0x60 + 0x5b) & 0x1f) |
           *(uint *)(lVar3 + uVar10 * 4) &
           (*(uint *)((long)plVar9 + lVar12 * 0x60 + 0x5c) ^ 0xffffffff);
    }
  }
  uVar10 = FUN_00d100a8(*(undefined8 *)(param_1 + 0x90));
  if ((uVar10 & 1) != 0) {
    FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),1,*(long *)(param_1 + 0x90) + 0xf0
                );
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x40) + 200),2,local_78);
    if ((char)local_78[0] != '\0') {
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      local_78[0] = local_78[0] & 0xffffff00;
    }
  }
  if (local_50 != (long *)0x0) {
    plVar9 = local_50 + 5;
    do {
      lVar15 = *plVar9;
      iVar4 = (int)lVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *(int *)plVar9 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar15 = *(long *)(param_1 + 0x50);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
  if ((int)((ulong)(*(long *)(param_1 + 0x58) - lVar15) >> 3) * 0x38e38e39 != 0) {
    FUN_00dd7d48(uVar11,0,lVar15 + 0x38);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
    if (((int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) * 0x38e38e39 &
        0xfffffffeU) != 0) {
      FUN_00dd7d48(uVar11,1,*(long *)(param_1 + 0x50) + 0x80);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
      if (2 < (uint)((int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) *
                    0x38e38e39)) {
        FUN_00dd7d48(uVar11,2,*(long *)(param_1 + 0x50) + 200);
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
        if (((int)((ulong)(*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50)) >> 3) * 0x38e38e39
            & 0xfffffffcU) != 0) {
          FUN_00dd7d48(uVar11,3,*(long *)(param_1 + 0x50) + 0x110);
          lVar15 = *(long *)(param_1 + 0x50);
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
          if (4 < (uint)((int)((ulong)(*(long *)(param_1 + 0x58) - lVar15) >> 3) * 0x38e38e39)) {
            uVar10 = 4;
            lVar16 = 0x158;
            do {
              FUN_00dd7d48(uVar11,uVar10 & 0xffffffff,lVar15 + lVar16);
              lVar15 = *(long *)(param_1 + 0x50);
              uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 200);
              uVar10 = uVar10 + 1;
              lVar16 = lVar16 + 0x48;
            } while (uVar10 < (uint)((int)((ulong)(*(long *)(param_1 + 0x58) - lVar15) >> 3) *
                                    0x38e38e39));
          }
        }
      }
    }
  }
  FUN_00dd8920(uVar11,param_1 + 0x48,1);
  lVar15 = *(long *)(param_1 + 0x40);
  uVar7 = (**(code **)(*(long *)(*(long *)(param_1 + 0x38) + 0x30) + 0x40))();
  FUN_00c4db90(*(undefined8 *)(lVar15 + 200),uVar7,0,0,0,0);
  plVar9 = (long *)(*(long *)(param_1 + 0x38) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x01868db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x50))(plVar9,(long *)(param_1 + 0x50),2);
  return;
}


