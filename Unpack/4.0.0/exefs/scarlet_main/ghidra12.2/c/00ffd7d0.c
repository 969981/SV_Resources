/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ffd7d0; name: FUN_00ffd7d0
 */


void FUN_00ffd7d0(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte *__s;
  int iVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  long *local_78;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar12 = *(long *)(param_1 + 0x38);
  if (lVar12 == 0) {
    uVar14 = 0;
  }
  else {
    iVar4 = *(int *)(lVar12 + 0x24c);
    iVar9 = iVar4 + 0xf;
    if (-1 < iVar4) {
      iVar9 = iVar4;
    }
    uVar14 = iVar9 >> 4;
  }
  if (uVar14 < 4) {
    uVar15 = 0;
  }
  else if (uVar14 < 8) {
    uVar15 = 1;
  }
  else if (uVar14 < 0x10) {
    uVar15 = 2;
  }
  else if (uVar14 < 0x20) {
    uVar15 = 3;
  }
  else if (uVar14 < 0x40) {
    uVar15 = 4;
  }
  else {
    uVar15 = 4;
    uVar14 = uVar14 >> 5;
    do {
      uVar15 = uVar15 + 1;
      bVar7 = 3 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar7);
  }
  if (uVar15 < 6) {
    uVar15 = 5;
  }
  *(int *)(param_1 + 0x90) = 0x10 << (ulong)(uVar15 - 5 & 0x1f);
  if (lVar12 == 0) {
    plVar11 = (long *)FUN_00da5204();
  }
  else {
    plVar11 = (long *)(lVar12 + 0x40);
  }
  puVar3 = (undefined8 *)PTR_PTR_047d4508;
  if (*plVar11 != 0) {
    puVar3 = (undefined8 *)(*plVar11 + 0x38);
  }
  pcVar10 = strrchr((char *)*puVar3,0x2f);
  if (pcVar10 == (char *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_68 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    __s = (byte *)(pcVar10 + 1);
    puVar18 = &DAT_cbf29ce484222645;
    local_60 = strlen((char *)__s);
    bVar5 = *__s;
    if (bVar5 != 0) {
      pbVar13 = (byte *)(pcVar10 + 2);
      do {
        puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar5) * 0x100000001b3);
        bVar5 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar5 != 0);
    }
    local_58 = (long *)0x0;
    local_70 = puVar18;
    pbStack_68 = __s;
  }
  lVar12 = FUN_00ecad28(&local_50,*(undefined8 *)(param_1 + 8));
  if (lVar12 != 0) {
    piVar1 = (int *)(lVar12 + 0x28);
    do {
      iVar9 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == -1) goto LAB_00ffdd10;
  }
  plVar11 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar11 != (long *)0x0) {
    plVar2 = plVar11 + 5;
    do {
      lVar16 = *plVar2;
      iVar9 = (int)lVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar16 == 0) goto LAB_00ffdcc8;
  }
  *(long *)(param_1 + 0x78) = lVar12;
  FUN_00ecae50(lVar12 + 0x30,1);
  lVar16 = *(long *)(DAT_0485a0d8 + 0x30);
  lVar12 = *(long *)(param_1 + 8);
  if (lVar12 == 0) {
    lVar12 = *(long *)(lVar16 + 8);
  }
  local_78 = (long *)FUN_00f3d7a0(&local_50,lVar12,&local_70);
  if (local_78 != (long *)0x0) {
    plVar11 = local_78 + 5;
    do {
      lVar12 = *plVar11;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = (int)lVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar12 == -1) goto LAB_00ffdd10;
  }
  plVar11 = (long *)(*(long *)(lVar16 + 0x30) + 0x30);
  (**(code **)(*plVar11 + 0x10))(plVar11,&local_78);
  FUN_00fffe4c(&DAT_0485a0a0,&local_78,*(undefined4 *)(param_1 + 0x90));
  lVar12 = *(long *)(param_1 + 0x38);
  if (lVar12 == 0) {
    FUN_02173ef4(0,0,&local_50);
  }
  else {
    local_38 = *(undefined8 *)(lVar12 + 0x328);
    uStack_48 = *(undefined8 *)(lVar12 + 0x318);
    local_50 = *(undefined8 *)(lVar12 + 0x310);
    uStack_40 = *(undefined8 *)(lVar12 + 800);
  }
  fVar20 = (float)((ulong)local_50 >> 0x20);
  fVar23 = (float)((ulong)uStack_40 >> 0x20);
  fVar19 = (float)uStack_40 - (float)local_50;
  fVar21 = fVar23 - fVar20;
  fVar22 = fVar21 / fVar19;
  fVar22 = fVar22 * fVar22;
  auVar24._0_4_ = fVar22 + 1.0;
  auVar24._4_4_ = 0x3f800000;
  auVar24._8_4_ = fVar22 + 1.0;
  auVar24._12_4_ = 0x3f800000;
  auVar24 = NEON_ext(auVar24,auVar24,4,1);
  local_78[0x35] =
       CONCAT44(SQRT(auVar24._0_4_ + auVar24._4_4_) * 0.5,
                (((float)uStack_48 + (float)local_38) * 0.5) / ((float)local_38 - (float)uStack_48))
  ;
  local_78[0x34] =
       CONCAT44(((fVar20 + fVar23) * 0.5) / fVar21,
                (((float)local_50 + (float)uStack_40) * 0.5) / fVar19);
  plVar11 = (long *)(*(long *)(*(long *)(DAT_0485a0d8 + 0x30) + 0x30) + 0x30);
  (**(code **)(*plVar11 + 0x20))(plVar11,&local_78);
  lVar12 = *(long *)(param_1 + 0x78);
  plVar11 = (long *)(**(code **)(**(long **)(lVar12 + 0x80) + 0x10))
                              (*(long **)(lVar12 + 0x80),0x18,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(**(long **)(lVar12 + 0x80) + 0xe8))();
  }
  *plVar11 = 0;
  uVar17 = *(undefined8 *)(lVar12 + 0x80);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar16 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar16 != 0) {
    if (0xf < *(ulong *)(lVar16 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar17;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  }
  plVar11[2] = (long)local_78;
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 5;
    do {
      lVar8 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar8 == -1) {
LAB_00ffdd10:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  if (lVar16 != 0) {
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  }
  plVar11[1] = lVar12 + 0x68;
  lVar16 = *(long *)(lVar12 + 0x68);
  *plVar11 = lVar16;
  *(long **)(lVar16 + 8) = plVar11;
  *(long **)(lVar12 + 0x68) = plVar11;
  *(long *)(lVar12 + 0x78) = *(long *)(lVar12 + 0x78) + 1;
  if (local_78 != (long *)0x0) {
    plVar11 = local_78 + 5;
    do {
      lVar12 = *plVar11;
      iVar9 = (int)lVar12 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar7) {
        *(int *)plVar11 = iVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_00ffdcc8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


