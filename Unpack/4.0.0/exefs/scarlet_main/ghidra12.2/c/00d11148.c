/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d11148; name: FUN_00d11148
 */


void FUN_00d11148(long *param_1,undefined4 *param_2,undefined4 *param_3,long *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  long local_70;
  long *plStack_68;
  
  puVar4 = (undefined4 *)param_1[1];
  plVar1 = param_1 + 3;
  if (puVar4 < (undefined4 *)param_1[2]) {
    lVar16 = *plVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d11530;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    uVar5 = *param_3;
    *puVar4 = *param_2;
    puVar4[1] = uVar5;
    lVar16 = *param_4;
    *(long *)(puVar4 + 2) = lVar16;
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == -1) goto LAB_00d11534;
    }
    uVar13 = param_5[1];
    *(undefined8 *)(puVar4 + 4) = *param_5;
    *(undefined8 *)(puVar4 + 6) = uVar13;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar4 + 8);
  }
  else {
    uVar14 = param_1[4];
    lVar16 = (long)puVar4 - *param_1 >> 5;
    uVar2 = lVar16 + 1;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    uVar12 = lVar11 >> 4;
    local_70 = 0;
    if (uVar2 <= uVar12) {
      uVar2 = uVar12;
    }
    if (uVar14 >> 1 <= (ulong)(lVar11 >> 5)) {
      uVar2 = uVar14;
    }
    plStack_68 = plVar1;
    if (uVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 5,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    puVar4 = (undefined4 *)(local_88 + lVar16 * 0x20);
    local_70 = local_88 + uVar2 * 0x20;
    lVar16 = *plVar1;
    local_80 = puVar4;
    local_78 = puVar4;
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00d11530:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar16;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    uVar5 = *param_3;
    *puVar4 = *param_2;
    puVar4[1] = uVar5;
    lVar16 = *param_4;
    *(long *)(puVar4 + 2) = lVar16;
    if (lVar16 != 0) {
      piVar3 = (int *)(lVar16 + 0x28);
      do {
        iVar9 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = iVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 == -1) {
LAB_00d11534:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    uVar13 = param_5[1];
    *(undefined8 *)(puVar4 + 4) = *param_5;
    *(undefined8 *)(puVar4 + 6) = uVar13;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    puVar8 = PTR_LAB_047d3900;
    local_78 = local_78 + 8;
    lVar16 = *param_1;
    if (param_1[1] == lVar16) {
      lVar11 = lVar16;
    }
    else {
      lVar11 = param_1[1];
      do {
        puVar4 = local_80;
        lVar15 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar8,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d11530;
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar15;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(lVar11 + -0x20);
        uVar13 = *(undefined8 *)(lVar11 + -0x18);
        *(undefined8 *)(lVar11 + -0x18) = 0;
        *(undefined8 *)(puVar4 + -6) = uVar13;
        lVar15 = lVar11 + -0x20;
        uVar13 = *(undefined8 *)(lVar11 + -8);
        *(undefined8 *)(puVar4 + -4) = *(undefined8 *)(lVar11 + -0x10);
        *(undefined8 *)(puVar4 + -2) = uVar13;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        local_80 = local_80 + -8;
        lVar11 = lVar15;
      } while (lVar16 != lVar15);
      lVar16 = *param_1;
      lVar11 = param_1[1];
    }
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    lVar15 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar16;
    local_80 = (undefined4 *)lVar16;
    local_78 = (undefined4 *)lVar11;
    local_70 = lVar15;
    FUN_00d11564(&local_88);
  }
  return;
}


