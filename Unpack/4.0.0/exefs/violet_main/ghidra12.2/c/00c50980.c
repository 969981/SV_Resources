/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c50980; name: FUN_00c50980
 */


void FUN_00c50980(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  int local_7c;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  uVar6 = *(uint *)(param_1 + 0x140);
  uVar1 = uVar6 + 1;
  *(uint *)(param_1 + 0x140) = uVar1;
  if ((ulong)uVar1 <= (ulong)(*(long *)(param_1 + 0xb0) - *(long *)(param_1 + 0xa8) >> 5)) {
    lVar16 = *(long *)(param_1 + 0xa8) + (ulong)uVar6 * 0x20;
    plVar10 = *(long **)(lVar16 + 8);
    if (plVar10 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar10 + 0x80))();
    }
                    /* WARNING: Could not recover jumptable at 0x00c50a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)PTR_DAT_047e1c40)
              (param_1,uVar11,*(undefined8 *)(lVar16 + 0x10),*(undefined8 *)(param_1 + 0x118));
    return;
  }
  (**(code **)PTR_DAT_047e1970)(*(undefined8 *)(param_1 + 0x138),0x13,&local_7c);
  plVar10 = *(long **)(*(long *)(param_1 + 0x130) + ((ulong)*(byte *)(param_1 + 0x148) ^ 1) * 8);
  (**(code **)(*plVar10 + 0x28))(&local_a0,plVar10,*(undefined8 *)(param_1 + 0x118),(long)local_7c);
  if (local_98 == (long *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*local_98 + 0x80))();
  }
  (**(code **)PTR_DAT_047e1c40)(param_1,uVar11,local_90,*(undefined8 *)(param_1 + 0x118));
  uVar5 = *(ulong *)(param_1 + 0xb0);
  puVar2 = (undefined8 *)(param_1 + 0xc0);
  if (uVar5 < *(ulong *)(param_1 + 0xb8)) {
    FUN_00c53694(puVar2,uVar5,&local_a0);
    *(ulong *)(param_1 + 0xb0) = uVar5 + 0x20;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 200);
    lVar16 = (long)(uVar5 - *(long *)(param_1 + 0xa8)) >> 5;
    uVar5 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(ulong *)(param_1 + 0xb8) - *(long *)(param_1 + 0xa8);
    uVar13 = lVar12 >> 4;
    local_60 = 0;
    if (uVar5 <= uVar13) {
      uVar5 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar12 >> 5)) {
      uVar5 = uVar15;
    }
    puStack_58 = puVar2;
    if (uVar5 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar5 << 5,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    lVar12 = local_78 + lVar16 * 0x20;
    lVar4 = local_78 + uVar5 * 0x20;
    local_70 = lVar12;
    local_60 = lVar4;
    FUN_00c53694(puVar2,lVar12,&local_a0);
    lVar16 = lVar12 + 0x20;
    lVar14 = *(long *)(param_1 + 0xa8);
    lVar17 = *(long *)(param_1 + 0xb0);
    if (lVar17 == lVar14) {
      local_68 = lVar14;
    }
    else {
      lVar12 = lVar12 + -0x20;
      local_68 = lVar16;
      FUN_00c53694(puVar2,lVar12,lVar17 + -0x20);
      if (lVar17 + -0x20 != lVar14) {
        do {
          lVar12 = lVar12 + -0x20;
          FUN_00c53694(puVar2,lVar12,lVar17 + -0x40);
          lVar17 = lVar17 + -0x20;
        } while (lVar14 + 0x20 != lVar17);
      }
      lVar14 = *(long *)(param_1 + 0xa8);
      local_68 = *(long *)(param_1 + 0xb0);
    }
    *(long *)(param_1 + 0xa8) = lVar12;
    *(long *)(param_1 + 0xb0) = lVar16;
    local_60 = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb8) = lVar4;
    local_78 = lVar14;
    local_70 = lVar14;
    FUN_00c54884(&local_78);
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x38))(local_98,&local_a0);
    plVar10 = local_98;
    local_a0 = 0;
    local_98 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      plVar3 = plVar10 + 5;
      do {
        lVar16 = *plVar3;
        iVar9 = (int)lVar16 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar8) {
          *(int *)plVar3 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    local_90 = 0xffffffffffffffff;
    uStack_88 = 0;
    if (local_98 != (long *)0x0) {
      plVar10 = local_98 + 5;
      do {
        lVar16 = *plVar10;
        iVar9 = (int)lVar16 + -1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *(int *)plVar10 = iVar9;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*local_98 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


