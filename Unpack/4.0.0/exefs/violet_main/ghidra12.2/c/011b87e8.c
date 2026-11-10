/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b87e8; name: FUN_011b87e8
 */


void FUN_011b87e8(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ulong uVar19;
  long *local_28;
  
  uVar19 = (ulong)param_2;
  if (((*PTR_DAT_047d8c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c98), iVar8 != 0))
  {
    FUN_00100190(param_4,PTR_LAB_047dae08,PTR_DAT_047d8ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c98);
  }
  lVar9 = *(long *)PTR_DAT_047d8ca0;
  *(long *)PTR_DAT_047d8ca8 = lVar9;
  uVar4 = *(undefined4 *)(lVar9 + 0x2b0);
  plVar10 = *(long **)(param_1 + 0x50);
  local_28 = plVar10;
  if (plVar10 == (long *)0x0) {
    FUN_0131cc8c(&local_28,param_3,param_4,uVar4);
  }
  else {
    plVar2 = plVar10 + 5;
    do {
      lVar9 = *plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)lVar9 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_0131cc8c(&local_28,param_3,param_4,uVar4);
    if (plVar10 != (long *)0x0) {
      plVar2 = plVar10 + 5;
      do {
        lVar9 = *plVar2;
        iVar8 = (int)lVar9 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (param_2 < *(uint *)(param_1 + 0x58)) {
    lVar13 = *(long *)(param_1 + 0x50);
    lVar9 = uVar19 * 2 + (ulong)param_2;
    *(ulong *)(*(long *)(param_1 + 0x60) + lVar9 * 8 + 8) =
         (ulong)(uint)(param_6 << 0x12) & 0x1c0000 | (ulong)(param_5 & 3);
    lVar11 = *(long *)(param_1 + 0x60);
    lVar9 = *(long *)(lVar11 + lVar9 * 8);
    if (*(char *)(lVar9 + 0x54) != '\0') {
      uVar12 = (uint)*(ushort *)(lVar9 + 0x50);
      if (*(ushort *)(lVar9 + 0x50) == 0) {
        iVar8 = 0;
      }
      else {
        puVar16 = *(ushort **)(lVar13 + 0x30);
        iVar8 = 0;
        puVar14 = *(ushort **)(lVar9 + 0x30);
        do {
          uVar5 = *puVar16;
          *puVar14 = uVar5;
          if (uVar5 == 0) goto LAB_011b8a60;
          if (uVar5 == 0x10) {
            puVar18 = puVar16 + 1;
            uVar5 = *puVar18;
            uVar1 = uVar5 + 2;
            bVar7 = uVar12 < uVar1;
            uVar12 = uVar12 - uVar1;
            if (bVar7 || uVar12 == 0) {
              *puVar14 = 0;
              goto LAB_011b8a60;
            }
            uVar17 = uVar5 + 1;
            uVar3 = uVar17 & 7;
            puVar15 = puVar14 + 1;
            *puVar15 = uVar5;
            if (uVar3 != 0) {
              lVar11 = 0;
              do {
                lVar13 = lVar11;
                uVar17 = uVar17 - 1;
                uVar3 = uVar3 - 1;
                *(undefined2 *)((long)puVar14 + lVar13 + 4) =
                     *(undefined2 *)((long)puVar16 + lVar13 + 4);
                lVar11 = lVar13 + 2;
              } while (uVar3 != 0);
              puVar14 = (ushort *)((long)puVar14 + lVar13 + 4);
              puVar16 = (ushort *)((long)puVar16 + lVar13 + 2);
              puVar18 = puVar16 + 1;
              puVar15 = puVar14;
            }
            if (6 < uVar5) {
              do {
                puVar15[1] = puVar16[2];
                puVar15[2] = puVar18[2];
                puVar15[3] = puVar18[3];
                puVar15[4] = puVar18[4];
                puVar15[5] = puVar18[5];
                puVar15[6] = puVar18[6];
                puVar16 = puVar18 + 7;
                puVar15[7] = *puVar16;
                puVar18 = puVar18 + 8;
                uVar17 = uVar17 - 8;
                puVar15 = puVar15 + 8;
                *puVar15 = *puVar18;
                puVar14 = puVar15;
              } while (uVar17 != 0);
            }
            puVar16 = puVar18;
            iVar8 = uVar1 + iVar8;
          }
          else {
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
            iVar8 = iVar8 + 1;
            uVar12 = uVar12 - 1;
          }
        } while (uVar12 != 0);
        if (iVar8 != 0) {
          iVar8 = iVar8 + -1;
          puVar14[-1] = 0;
        }
      }
LAB_011b8a60:
      *(short *)(lVar9 + 0x52) = (short)iVar8;
      lVar11 = *(long *)(param_1 + 0x60);
    }
    *(undefined2 *)(lVar11 + uVar19 * 0x18 + 0x10) = 0;
    lVar9 = *(long *)(param_1 + 0x60) + uVar19 * 0x18;
    *(ushort *)(lVar9 + 0x12) = *(ushort *)(lVar9 + 0x12) & 0xfffe;
  }
  return;
}


