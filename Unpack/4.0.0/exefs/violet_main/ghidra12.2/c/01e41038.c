/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e41038; name: FUN_01e41038
 */


void FUN_01e41038(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_04546de8;
  param_1[4] = (long)&PTR_LAB_04546e60;
  param_1[5] = (long)&PTR_LAB_04546eb0;
  FUN_01e41308(param_1 + 0x20a);
  FUN_01e413a8(param_1 + 0x1e6);
  FUN_01e413e0(param_1 + 0x1df);
  FUN_01e413a8(param_1 + 0x1bb);
  FUN_01e413a8(param_1 + 0x18d);
  FUN_01e41480(param_1 + 0x186);
  FUN_01e413a8(param_1 + 0x162);
  FUN_01e41520(param_1 + 0x15b);
  FUN_01e413a8(param_1 + 0x137);
  FUN_01e415c0(param_1 + 0x130);
  FUN_01e413a8(param_1 + 0x10c);
  FUN_01e41660(param_1 + 0x105);
  FUN_01e413a8(param_1 + 0xe1);
  FUN_01e41700(param_1 + 0xda);
  FUN_01e413a8(param_1 + 0xb6);
  lVar13 = param_1[0xaf];
  if (lVar13 != 0) {
    lVar11 = param_1[0xb1];
    param_1[0xb0] = lVar13;
    plVar14 = (long *)param_1[0xb2];
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar14,lVar13,lVar11 - lVar13,4);
        goto LAB_01e4112c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar11 - lVar13,4);
  }
LAB_01e4112c:
  FUN_01e413a8(param_1 + 0x8b);
  FUN_01e417a0(param_1 + 0x84);
  FUN_01e413a8(param_1 + 0x60);
  lVar13 = param_1[0x59];
  if (lVar13 != 0) {
    lVar11 = param_1[0x5b];
    param_1[0x5a] = lVar13;
    plVar14 = (long *)param_1[0x5c];
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar14,lVar13,lVar11 - lVar13,4);
        goto LAB_01e4118c;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar13,lVar11 - lVar13,4);
  }
LAB_01e4118c:
  FUN_01e413a8(param_1 + 0x35);
  FUN_01e413a8(param_1 + 8);
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar12 = (undefined8 *)param_1[6];
  if (puVar12 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar12 + 3);
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
      piVar4 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_38 = *puVar12;
        FUN_00c44438(lVar13 + 0x8040,&local_38);
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
  return;
}


