/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c9f8a8; name: FUN_00c9f8a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00c9f8a8(long param_1,uint param_2)

{
  long *plVar1;
  short *psVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_e0;
  float fStack_d8;
  undefined8 local_d0;
  float fStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float fStack_68;
  undefined8 local_60;
  float fStack_58;
  long *local_50;
  long *local_48;
  
  uVar12 = 0;
  uVar14 = 0;
  if (((((int)param_2 < 0) ||
       ((int)((ulong)(*(long *)(param_1 + 0x2a8) - *(long *)(param_1 + 0x2a0)) >> 4) * -0x3030303 <=
        (int)param_2)) ||
      (iVar3 = *(int *)(*(long *)(param_1 + 0x2a0) + (ulong)param_2 * 0x550 + 0x450), iVar3 < 0)) ||
     (*(long *)(param_1 + 0x2d8) == 0)) goto LAB_00c9f8fc;
  uVar14 = (ulong)param_2;
  lVar8 = FUN_00c472c8(0,*(long *)(param_1 + 0x2d8),iVar3);
  lVar10 = *(long *)(param_1 + 0x2a0);
  fStack_68 = (float)*(undefined8 *)(lVar8 + 0x28);
  local_70 = *(undefined8 *)(lVar8 + 0x20);
  if (*(char *)(lVar10 + uVar14 * 0x550 + 0x60) == '\0') {
    if ((*(char *)(lVar10 + uVar14 * 0x550 + 0x360) != '\0') &&
       (*(char *)(lVar10 + uVar14 * 0x550 + 0x410) != '\0')) {
      lVar10 = lVar10 + uVar14 * 0x550;
      fStack_68 = (float)*(undefined8 *)(lVar10 + 0x408);
      local_70 = *(undefined8 *)(lVar10 + 0x400);
    }
  }
  else {
    lVar10 = lVar10 + uVar14 * 0x550;
    uVar12 = *(undefined8 *)(lVar10 + 0xd0);
    local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) + (float)((ulong)uVar12 >> 0x20),
                        (float)local_70 + (float)uVar12);
    fStack_68 = fStack_68 + (float)*(undefined8 *)(lVar10 + 0xd8);
  }
  sVar7 = FUN_00c9edd0(*(undefined8 *)(param_1 + 0x2d8),iVar3);
  if (sVar7 < 0) {
    uStack_78 = _UNK_03cabe58;
    local_80 = _DAT_03cabe50;
    uStack_88 = _UNK_03caa5b8;
    local_90 = _DAT_03caa5b0;
    uStack_98 = _UNK_03cabe68;
    local_a0 = _DAT_03cabe60;
    uStack_a8 = DAT_03cab628;
    local_b0 = DAT_03cab620;
  }
  else {
    puVar9 = (undefined8 *)FUN_00c4c40c(*(undefined8 *)(param_1 + 0x2d8));
    uStack_a8 = puVar9[1];
    local_b0 = *puVar9;
    uStack_98 = puVar9[3];
    local_a0 = puVar9[2];
    uStack_88 = puVar9[5];
    local_90 = puVar9[4];
    uStack_78 = puVar9[7];
    local_80 = puVar9[6];
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x58) + 0x30);
  if (*(char *)(lVar8 + 0x246) == '\0') {
    FUN_00c9e664(&local_50,lVar8 + 0xe8);
    plVar11 = local_50;
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x58))(local_50);
    }
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 5;
      do {
        lVar8 = *plVar1;
        iVar3 = (int)lVar8 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x60))();
    }
    if (plVar11 == (long *)0x0) goto LAB_00c9fb24;
LAB_00c9fa20:
    puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x68))(plVar11);
    fStack_d8 = (float)puVar9[1];
    local_e0 = *puVar9;
    fStack_c8 = (float)puVar9[3];
    local_d0 = puVar9[2];
    fStack_58 = (float)puVar9[5];
    local_60 = puVar9[4];
    fStack_b8 = (float)puVar9[7];
    local_c0 = puVar9[6];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x60))(plVar11);
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x130);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar8 + 0x1a);
      sVar7 = *(short *)(lVar8 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar7) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar7 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_00c9fbd0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00c9fbd0:
          bVar6 = false;
        }
        if (bVar6) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            plVar11 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
            goto LAB_00c9fa20;
          }
          break;
        }
        sVar7 = sVar4;
      } while (sVar4 != 0);
    }
LAB_00c9fb24:
    fStack_58 = (float)_UNK_03caa5b8;
    local_60 = _DAT_03caa5b0;
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
    fStack_c8 = (float)_UNK_03cabe68;
    local_d0 = _DAT_03cabe60;
    fStack_d8 = (float)DAT_03cab628;
    local_e0 = DAT_03cab620;
    fStack_b8 = (float)_UNK_03cabe58;
    local_c0 = _DAT_03cabe50;
    if ((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x48), plVar11 != (long *)0x0)) {
      (**(code **)(*plVar11 + 0x58))(plVar11);
      goto LAB_00c9fa20;
    }
  }
  fVar19 = (float)local_70;
  fVar16 = (float)((ulong)local_70 >> 0x20);
  fVar15 = (float)local_80 +
           (float)local_b0 * fVar19 + (float)local_a0 * fVar16 + (float)local_90 * fStack_68;
  fVar17 = (float)((ulong)local_80 >> 0x20) +
           (float)((ulong)local_b0 >> 0x20) * fVar19 + (float)((ulong)local_a0 >> 0x20) * fVar16 +
           (float)((ulong)local_90 >> 0x20) * fStack_68;
  fVar18 = (float)uStack_78 +
           (float)uStack_a8 * fVar19 + (float)uStack_98 * fVar16 + (float)uStack_88 * fStack_68;
  fVar19 = (float)((ulong)uStack_78 >> 0x20) +
           (float)((ulong)uStack_a8 >> 0x20) * fVar19 + (float)((ulong)uStack_98 >> 0x20) * fVar16 +
           (float)((ulong)uStack_88 >> 0x20) * fStack_68;
  uVar12 = CONCAT44((float)((ulong)local_e0 >> 0x20) * fVar15 +
                    (float)((ulong)local_d0 >> 0x20) * fVar17 +
                    (float)((ulong)local_60 >> 0x20) * fVar18 +
                    (float)((ulong)local_c0 >> 0x20) * fVar19,
                    (float)local_e0 * fVar15 + (float)local_d0 * fVar17 + (float)local_60 * fVar18 +
                    (float)local_c0 * fVar19);
  uVar14 = (ulong)(uint)(fStack_d8 * fVar15 + fStack_c8 * fVar17 + fStack_58 * fVar18 +
                        fStack_b8 * fVar19);
LAB_00c9f8fc:
  auVar13._8_8_ = uVar14;
  auVar13._0_8_ = uVar12;
  return auVar13;
}


