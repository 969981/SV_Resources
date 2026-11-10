/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c88fc0; name: FUN_00c88fc0
 */


void FUN_00c88fc0(long param_1)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  long *local_58;
  
  if ((*(char *)(param_1 + 200) != '\0') && (*(char *)(param_1 + 0x148) != '\0')) {
    uVar15 = 3;
    if (*(byte *)(param_1 + 0x179) != 0) {
      uVar15 = 0;
    }
    uVar17 = (uint)*(byte *)(param_1 + 0x17a);
    if (uVar17 != 0) {
      uVar15 = *(byte *)(param_1 + 0x179) ^ 1;
    }
    if (*(char *)(param_1 + 0x17b) != '\0') {
      uVar17 = 2;
    }
    if (1 < uVar15 && *(char *)(param_1 + 0x17b) != '\0') {
      uVar15 = 2;
    }
    uVar4 = *(uint *)(param_1 + 0x140);
    if ((int)*(uint *)(param_1 + 0x140) <= (int)uVar15) {
      uVar4 = uVar15;
    }
    (*DAT_04859f60)(&local_58,&DAT_04859f80);
    uVar18 = local_58[0x22];
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 5;
      do {
        lVar16 = *plVar2;
        iVar10 = (int)lVar16 + -1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *(int *)plVar2 = iVar10;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    lVar16 = *(long *)(param_1 + (uVar18 & 1) * 8 + 0xf0);
    lVar20 = *(long *)(lVar16 + 0x38);
    if (lVar20 != 0) {
      lVar19 = *(long *)(lVar16 + 0x30);
      plVar2 = (long *)(lVar19 + 0x30);
      lVar16 = nn::os::GetCurrentThread();
      while (*plVar2 == 0) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar16;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') goto LAB_00c890a8;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x38));
            while (*plVar2 == 0) {
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar9) {
                *plVar2 = lVar16;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_00c890a8;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar9) {
          *plVar2 = lVar16;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_00c890a8:
      lVar16 = *(long *)(lVar19 + 0x60);
      pcVar13 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30
                                    );
      if (*pcVar13 == '\0' || *(long *)(pcVar13 + 8) == 0) {
        lVar14 = 0;
      }
      else {
        if (*(long *)(*(long *)(pcVar13 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_buffer","Map",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\gfx2/core_nvn/internal/resource.h"
                     ,0x31);
        }
        lVar14 = (**(code **)PTR_DAT_047d8da8)();
      }
      bVar5 = *(byte *)(param_1 + 0x31);
      iVar10 = *(int *)(param_1 + 0x170);
      bVar6 = *(byte *)(param_1 + 0x30);
      bVar7 = *(byte *)(param_1 + 0x174);
      puVar3 = (undefined4 *)(lVar14 + *(long *)(lVar20 + 0x30));
      *puVar3 = 0;
      puVar3[1] = (uint)bVar5 | iVar10 << 1 | (uint)bVar6 << 2 | (uint)bVar7 << 3;
      puVar3[2] = *(undefined4 *)(param_1 + 0xc4);
      puVar3[3] = (int)((ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88)) >> 4);
      puVar3[4] = uVar17;
      if ((*(char *)(param_1 + 0x17b) == '\0') ||
         (fVar21 = *(float *)(param_1 + 0x38), fVar21 <= 0.0)) {
        fVar21 = INFINITY;
        puVar3[6] = 0x7f800000;
      }
      else {
        puVar3[6] = fVar21;
      }
      if ((*(char *)(param_1 + 0x17a) == '\0') || (*(float *)(param_1 + 0x34) <= 0.0)) {
        puVar3[5] = fVar21;
      }
      else {
        puVar3[5] = *(float *)(param_1 + 0x34);
      }
      puVar3[7] = *(undefined4 *)(param_1 + 0x2c);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x120);
      uVar22 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20);
      auVar23._12_4_ = uVar22;
      auVar23._0_12_ = *pauVar1;
      auVar11._12_4_ = uVar22;
      auVar11._0_12_ = *pauVar1;
      auVar23 = NEON_ext(auVar23,auVar11,8,1);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)*pauVar1;
      *(long *)(puVar3 + 10) = auVar23._0_8_;
      if (*(char *)(param_1 + 0x150) == '\0') {
        uVar22 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(param_1 + 0x168);
        *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(param_1 + 0x160);
        puVar3[0xe] = (int)uVar12;
        uVar22 = 0x3f800000;
      }
      puVar3[0xf] = uVar22;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = uVar4;
      *(undefined8 *)(puVar3 + 0x10) = 0;
      *(undefined8 *)(puVar3 + 0x12) = 0;
      *(undefined8 *)(puVar3 + 0x14) = 0;
      *(undefined8 *)(puVar3 + 0x16) = 0;
      *(undefined8 *)(puVar3 + 0x18) = 0;
      *(undefined8 *)(puVar3 + 0x1a) = 0;
      puVar3[0x1e] = (int)*(undefined8 *)(param_1 + 0x130);
      puVar3[0x1f] = (int)*(undefined8 *)(param_1 + 0x138);
      FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar16 + 0x70) + 0x110),lVar16 + 0x30);
      *(undefined8 *)(lVar19 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x38));
    }
  }
  return;
}


