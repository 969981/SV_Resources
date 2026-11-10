/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0192a8c0; name: FUN_0192a8c0
 */


void FUN_0192a8c0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x690) != *(long *)(param_1 + 0x698)) {
    FUN_0192ad58(param_1 + 0x688,param_2);
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x6a8);
  lVar18 = *(long *)(param_1 + 0x690) - *(long *)(param_1 + 0x688) >> 4;
  uVar11 = lVar18 + 1;
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar14 < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar12 = *(long *)(param_1 + 0x698) - *(long *)(param_1 + 0x688);
  uVar13 = lVar12 >> 3;
  if (uVar11 <= uVar13) {
    uVar11 = uVar13;
  }
  puVar1 = (undefined8 *)(param_1 + 0x6a0);
  if (uVar14 >> 1 <= (ulong)(lVar12 >> 4)) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 << 4,8);
    if (lVar12 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xe8))();
    }
  }
  uVar21 = *puVar1;
  puVar19 = (undefined8 *)(lVar12 + lVar18 * 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar18 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar18 == 0) {
    *puVar19 = 0;
    puVar19[1] = 0;
    FUN_00fa4838(puVar19,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar21;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    *puVar19 = 0;
    puVar19[1] = 0;
    FUN_00fa4838(puVar19,param_2);
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
  }
  puVar20 = *(undefined8 **)(param_1 + 0x688);
  puVar17 = *(undefined8 **)(param_1 + 0x690);
  puVar2 = puVar19 + 2;
  if (puVar17 == puVar20) {
    puVar17 = puVar20;
  }
  else {
    do {
      puVar19 = puVar19 + -2;
      puVar17 = puVar17 + -2;
      FUN_0192ac60(puVar1,puVar19,puVar17);
    } while (puVar20 != puVar17);
    puVar20 = *(undefined8 **)(param_1 + 0x688);
    puVar17 = *(undefined8 **)(param_1 + 0x690);
  }
  lVar18 = *(long *)(param_1 + 0x698);
  *(undefined8 **)(param_1 + 0x688) = puVar19;
  *(undefined8 **)(param_1 + 0x690) = puVar2;
  *(ulong *)(param_1 + 0x698) = lVar12 + uVar11 * 0x10;
  puVar9 = PTR_DAT_047d3918;
  puVar8 = PTR_DAT_047d3910;
  if (puVar17 != puVar20) {
    pbVar15 = PTR_DAT_047d3908;
    do {
      puVar17 = puVar17 + -2;
      puVar19 = (undefined8 *)*puVar17;
      if (puVar19 != (undefined8 *)0x0) {
        psVar3 = (short *)(puVar19 + 3);
        do {
          sVar5 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar4 = (int *)((long)puVar19 + 0x1c);
          do {
            iVar10 = *piVar4;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar7) {
              *piVar4 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*pbVar15 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar8;
            *(long *)puVar9 = lVar12;
            local_68 = *puVar19;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
            pbVar15 = PTR_DAT_047d3908;
          }
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    } while (puVar17 != puVar20);
  }
  if (puVar20 != (undefined8 *)0x0) {
    plVar16 = (long *)*puVar1;
    lVar18 = lVar18 - (long)puVar20;
    uVar11 = (**(code **)(*plVar16 + 0xf8))(plVar16);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar16 + 0x18))(plVar16,puVar20,lVar18,8);
    }
    else {
      FUN_00c48fe8(plVar16,puVar20,lVar18,8);
    }
  }
  return;
}


