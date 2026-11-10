/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cfcd54; name: FUN_00cfcd54
 */


ulong FUN_00cfcd54(long *param_1)

{
  short *psVar1;
  short sVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *plStack_68;
  
  while( true ) {
    lVar10 = param_1[0xf] - param_1[0xe];
    if (lVar10 == 0) break;
    uVar15 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar10 + param_1[0xe] + -8;
    uVar13 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar13) =
         *(ulong *)(param_1[7] + uVar13) & (1L << (uVar15 & 0x3f) ^ 0xffffffffffffffffU);
    lVar10 = *param_1;
    if (uVar15 < (ulong)(param_1[1] - lVar10 >> 3)) {
      plVar7 = *(long **)(lVar10 + uVar15 * 8);
      *(undefined8 *)(lVar10 + uVar15 * 8) = 0;
      if (plVar7 != (long *)0x0) {
        lVar10 = plVar7[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (uVar15 < (ulong)param_1[0x15]) {
        return uVar15;
      }
      param_1[0x15] = uVar15 + 1;
      return uVar15;
    }
  }
  puVar3 = (undefined8 *)param_1[1];
  uVar13 = (long)puVar3 - *param_1 >> 3;
  plVar7 = param_1 + 3;
  if (puVar3 < (undefined8 *)param_1[2]) {
    lVar10 = *plVar7;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar3 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00cfd150;
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar3 = 0;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar3 + 1);
  }
  else {
    uVar14 = param_1[4];
    uVar15 = uVar13 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar15) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar11 = lVar10 >> 2;
    local_70 = 0;
    if (uVar15 <= uVar11) {
      uVar15 = uVar11;
    }
    if (uVar14 >> 1 <= (ulong)(lVar10 >> 3)) {
      uVar15 = uVar14;
    }
    plStack_68 = plVar7;
    if (uVar15 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar15 << 3,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar7 + 0xe8))();
      }
    }
    puVar3 = (undefined8 *)(local_88 + uVar13 * 8);
    local_70 = local_88 + uVar15 * 8;
    lVar10 = *plVar7;
    local_80 = puVar3;
    local_78 = puVar3;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar8 == 0) {
      *puVar3 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00cfd150:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      *puVar3 = 0;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    }
    local_78 = local_78 + 1;
    lVar10 = *param_1;
    lVar8 = param_1[1];
    if (lVar8 == lVar10) {
      lVar8 = lVar10;
    }
    else {
      do {
        puVar3 = local_80;
        lVar16 = *plVar7;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          uVar12 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          puVar3[-1] = uVar12;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00cfd150;
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar16;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          uVar12 = *(undefined8 *)(lVar8 + -8);
          *(undefined8 *)(lVar8 + -8) = 0;
          puVar3[-1] = uVar12;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar8 = lVar8 + -8;
        local_80 = local_80 + -1;
      } while (lVar10 != lVar8);
      lVar10 = *param_1;
      lVar8 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar16 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar10;
    local_80 = (undefined8 *)lVar10;
    local_78 = (undefined8 *)lVar8;
    local_70 = lVar16;
    FUN_00d05410(&local_88);
  }
  param_1[0x15] = uVar13 + 1;
  return uVar13;
}


