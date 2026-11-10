/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b3230; name: FUN_029b3230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029b3230(undefined1 param_1 [16],long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 *local_18;
  
  puVar5 = PTR_DAT_047ddf68;
  uVar14 = param_1._8_8_;
  auVar13._0_8_ = param_1._0_8_;
  fVar10 = param_1._0_4_;
  if ((((0.0 < fVar10) && (param_2[0xd] != 0)) && (param_2[0xb] != 0)) &&
     ((lVar8 = *(long *)(*(long *)(param_2[0xb] + 0x30) + 0xe8), lVar8 != 0 &&
      (plVar6 = *(long **)(lVar8 + 0x48), plVar6 != (long *)0x0)))) {
    lVar8 = (**(code **)(*plVar6 + 0x68))();
    fVar11 = *(float *)(lVar8 + 0x30);
    fVar16 = *(float *)(lVar8 + 0x34);
    fVar15 = fVar11 - (float)param_2[0x24];
    fVar17 = fVar16 - (float)((ulong)param_2[0x24] >> 0x20);
    fVar18 = *(float *)(lVar8 + 0x38) - (float)param_2[0x25];
    fVar19 = 0.0 - (float)((ulong)param_2[0x25] >> 0x20);
    param_2[0x25] = (ulong)(uint)*(float *)(lVar8 + 0x38);
    *(float *)(param_2 + 0x24) = fVar11;
    *(float *)((long)param_2 + 0x124) = fVar16;
    fVar15 = fVar15 * fVar15;
    fVar17 = fVar17 * fVar17;
    fVar18 = fVar18 * fVar18;
    fVar19 = fVar19 * fVar19;
    fVar16 = *(float *)(puVar5 + 0x18);
    auVar12._0_4_ = fVar15 + fVar17;
    auVar12._4_4_ = fVar18 + fVar19;
    auVar12._8_4_ = fVar15 + fVar17;
    auVar12._12_4_ = fVar18 + fVar19;
    auVar12 = NEON_ext(auVar12,auVar12,4,1);
    fVar11 = (auVar12._0_4_ + auVar12._4_4_) / (fVar10 * fVar10);
    *(float *)(param_2 + 0x26) = fVar11;
    if (fVar16 * fVar16 <= fVar11) {
      auVar13._8_8_ = uVar14;
      FUN_00d22848(auVar13,param_2[0xd]);
    }
  }
  if ((param_3 & 1) == 0) {
    uVar9 = (uint)*(byte *)(param_2[0xb] + 0x1fc);
    if ((int)(uVar9 * uVar9) <= *(int *)((long)param_2 + 0x134)) {
      *(undefined4 *)((long)param_2 + 0x134) = 0;
      *(undefined4 *)(param_2 + 0x27) = 0;
      lVar8 = FUN_00c8dda0(*(undefined8 *)(param_2[0xb] + 0x30));
      if ((lVar8 == 0) || (plVar6 = *(long **)(lVar8 + 0x120), plVar6 == (long *)0x0)) {
        iVar7 = _DAT_00000194;
      }
      else {
        plVar1 = plVar6 + 5;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        iVar7 = *(int *)((long)plVar6 + 0x194);
        do {
          lVar8 = *plVar1;
          iVar4 = (int)lVar8 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (*(int *)(puVar5 + 8) <= iVar7) {
        return;
      }
      if (((char)param_2[0x22] != '\0') && ((code *)param_2[0x12] != (code *)0x0)) {
        lVar8 = param_2[0xd];
        uStack_58 = SUB168(*(undefined1 (*) [16])(lVar8 + 0x180),8);
        local_60 = SUB168(*(undefined1 (*) [16])(lVar8 + 0x180),0);
        local_50 = *(undefined4 *)(lVar8 + 400);
        local_48 = *(undefined4 *)(lVar8 + 0x19c);
        local_4c = *(undefined4 *)(lVar8 + 0x194);
        local_18 = &local_60;
        (*(code *)param_2[0x12])(param_2 + 0x16,&local_18);
        lVar8 = param_2[0xd];
        *(undefined8 *)(lVar8 + 0x188) = uStack_58;
        *(undefined8 *)(lVar8 + 0x180) = local_60;
        *(undefined4 *)(param_2[0xd] + 400) = local_50;
        *(undefined4 *)(param_2[0xd] + 0x19c) = local_48;
        *(undefined4 *)(param_2[0xd] + 0x194) = local_4c;
      }
      if ((char)param_2[0x11] == '\0') {
        return;
      }
      (**(code **)(*param_2 + 0xb8))(param_2,param_3 & 1);
      return;
    }
    *(int *)((long)param_2 + 0x134) = *(int *)((long)param_2 + 0x134) + 1;
  }
  *(float *)(param_2 + 0x27) = *(float *)(param_2 + 0x27) + fVar10;
  return;
}


