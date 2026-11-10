/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143d138; name: FUN_0143d138
 */


void FUN_0143d138(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  long local_120;
  long **pplStack_118;
  long local_110;
  int *piStack_108;
  long local_100;
  undefined8 *puStack_f8;
  long local_f0;
  int local_bc;
  undefined8 local_b8;
  undefined *puStack_b0;
  size_t local_a8;
  long *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long *local_80;
  undefined4 local_78;
  long *local_70 [2];
  
  local_70[0] = (long *)FUN_00e31554();
  local_70[0] = (long *)*local_70[0];
  if (local_70[0] != (long *)0x0) {
    plVar1 = local_70[0] + 5;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  puVar6 = PTR_s_EnableVATMap_047e2038;
  local_a8 = strlen(PTR_s_EnableVATMap_047e2038);
  local_78 = 0;
  local_b8 = 0xe57cc745d0061299;
  puStack_b0 = puVar6;
  local_98 = 0xf644afd9efa28ae5;
  puStack_90 = &DAT_03c7144e;
  local_a0 = (long *)0x0;
  local_88 = 4;
  local_80 = (long *)0x0;
  lVar8 = *(long *)(param_1 + 0x120);
  if (lVar8 != 0) {
    lVar11 = *(long *)(param_1 + 0x138);
    local_bc = 0;
    lVar9 = *(long *)(lVar11 + 0x210);
    if (*(long *)(lVar11 + 0x218) != lVar9) {
      lVar2 = DAT_0485a0d8 + 0x38;
      uVar10 = 0;
      while( true ) {
        local_120 = lVar9 + uVar10 * 0x88;
        pplStack_118 = local_70;
        piStack_108 = &local_bc;
        local_130 = &LAB_02bda834;
        puStack_128 = &LAB_02bda848;
        local_140 = &LAB_0278165c;
        local_138 = FUN_02bda830;
        local_110 = param_1;
        local_100 = lVar2;
        puStack_f8 = &local_b8;
        local_f0 = lVar11 + 0x210;
        FUN_01775724(lVar8,&local_140);
        pcVar7 = local_138;
        if (local_138 != (code *)0x0) {
          local_130 = (undefined1 *)0x0;
          puStack_128 = (undefined1 *)0x0;
          local_140 = (undefined1 *)0x0;
          local_138 = (code *)0x0;
          (*pcVar7)(&local_120);
        }
        uVar10 = (long)local_bc + 1;
        local_bc = (int)uVar10;
        lVar9 = *(long *)(lVar11 + 0x210);
        if ((ulong)((*(long *)(lVar11 + 0x218) - lVar9 >> 3) * -0xf0f0f0f0f0f0f0f) <= uVar10) break;
        lVar8 = *(long *)(param_1 + 0x120);
      }
    }
    fVar12 = fmodf(*(float *)(lVar11 + 0x248),*(float *)(param_1 + 0x228));
    *(float *)(param_1 + 0x220) = fVar12;
    *(undefined4 *)(param_1 + 0x128) = 5;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_70[0] != (long *)0x0) {
    plVar1 = local_70[0] + 5;
    do {
      lVar8 = *plVar1;
      iVar5 = (int)lVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_70[0] + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


