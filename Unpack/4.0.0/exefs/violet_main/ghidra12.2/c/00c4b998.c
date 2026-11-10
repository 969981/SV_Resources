/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4b998; name: FUN_00c4b998
 */


void FUN_00c4b998(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int local_28;
  int iStack_24;
  
  plVar7 = (long *)(param_1 + 0x30);
  local_28 = param_2;
  iStack_24 = param_3;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar7 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00c4b9d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x38));
        while (*plVar7 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *plVar7 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00c4b9d4;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar4) {
      *plVar7 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00c4b9d4:
  if ((*param_4 != 0) && (uVar2 = *(uint *)(*param_4 + 0x78), uVar10 = (ulong)uVar2, 1 < uVar2)) {
    lVar11 = *(long *)(param_1 + 0x210) - *(long *)(param_1 + 0x208);
    lVar6 = lVar11 >> 3;
    uVar9 = lVar6 * -0x5555555555555555;
    if (uVar9 != uVar10) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar9 / uVar10;
      }
      if (uVar9 != uVar13 * uVar10) {
        if (uVar10 < uVar9) {
          uVar13 = uVar9;
          uVar14 = uVar10;
LAB_00c4bbcc:
          uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar15 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20);
          uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20);
          uVar14 = uVar14 >> (uVar15 & 0x3f);
          uVar13 = uVar13 >> (uVar12 & 0x3f);
          if ((uint)uVar15 <= (uint)uVar12) {
            uVar12 = uVar15;
          }
          if (uVar14 < 2) {
LAB_00c4bbf4:
            if (uVar14 == 1) {
              uVar13 = 1;
            }
          }
          else {
            while( true ) {
              uVar15 = 0;
              if (uVar14 != 0) {
                uVar15 = uVar13 / uVar14;
              }
              uVar15 = uVar13 - uVar15 * uVar14;
              uVar13 = uVar14 - uVar15;
              if (uVar15 == 0) goto LAB_00c4bbfc;
              if (uVar13 == 0) break;
              uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar15 >> (LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) & 0x3fU);
              uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar13 >> (LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) & 0x3fU);
              uVar13 = uVar15;
              if (uVar15 <= uVar14) {
                uVar13 = uVar14;
                uVar14 = uVar15;
              }
              if (uVar14 < 2) goto LAB_00c4bbf4;
            }
            uVar13 = uVar15;
          }
LAB_00c4bbfc:
          uVar13 = uVar13 << (uVar12 & 0x3f);
          if (uVar13 != 0) goto LAB_00c4bc04;
          uVar14 = 0;
LAB_00c4bc68:
          if (uVar14 < uVar9) {
            *(ulong *)(param_1 + 0x210) = *(long *)(param_1 + 0x208) + uVar14 * 0x18;
          }
        }
        else {
          uVar13 = uVar10;
          uVar14 = uVar9;
          if (lVar11 != 0) goto LAB_00c4bbcc;
LAB_00c4bc04:
          uVar14 = 0;
          if (uVar13 != 0) {
            uVar14 = uVar10 / uVar13;
          }
          uVar14 = uVar14 * uVar9;
          lVar6 = uVar14 + lVar6 * 0x5555555555555555;
          if (uVar14 < uVar9 || lVar6 == 0) goto LAB_00c4bc68;
          FUN_00e007a8(param_1 + 0x208,lVar6);
        }
        if (uVar14 <= *(uint *)(param_1 + 0x240)) {
          *(undefined4 *)(param_1 + 0x240) = 0;
        }
      }
    }
  }
  piVar8 = *(int **)(param_1 + 0x68);
  do {
    if (piVar8 == *(int **)(param_1 + 0x70)) {
      FUN_00c4c7ec((undefined8 *)(param_1 + 0x68),&local_28,&iStack_24,param_4);
LAB_00c4ba64:
      lVar6 = *(long *)(param_1 + 0x208);
      lVar11 = *(long *)(param_1 + 0x210);
      if (((lVar6 != lVar11) && (*(undefined1 *)(lVar6 + 0x10) = 1, lVar6 + 0x18 != lVar11)) &&
         (*(undefined1 *)(lVar6 + 0x28) = 1, lVar6 + 0x30 != lVar11)) {
        *(undefined1 *)(lVar6 + 0x40) = 1;
        for (lVar6 = lVar6 + 0x48; lVar6 != lVar11; lVar6 = lVar6 + 0x18) {
          *(undefined1 *)(lVar6 + 0x10) = 1;
        }
      }
LAB_00c4bad0:
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x38));
      return;
    }
    if ((*piVar8 == local_28) && (piVar8[1] == iStack_24)) {
      param_4 = (long *)*param_4;
      plVar7 = *(long **)(piVar8 + 2);
      if (plVar7 == param_4) goto LAB_00c4bad0;
      if (param_4 != (long *)0x0) {
        plVar7 = param_4 + 5;
        do {
          lVar6 = *plVar7;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar4) {
            *(int *)plVar7 = (int)lVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        plVar7 = *(long **)(piVar8 + 2);
      }
      *(long **)(piVar8 + 2) = param_4;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar6 = *plVar1;
          iVar5 = (int)lVar6 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      goto LAB_00c4ba64;
    }
    piVar8 = piVar8 + 4;
  } while( true );
}


