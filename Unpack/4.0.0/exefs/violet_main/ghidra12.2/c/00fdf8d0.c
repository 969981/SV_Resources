/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fdf8d0; name: FUN_00fdf8d0
 */


void FUN_00fdf8d0(long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long *plVar10;
  bool bVar11;
  long *plVar12;
  byte bVar13;
  undefined8 uVar14;
  undefined4 local_68 [2];
  
  plVar10 = *(long **)(param_1 + 0x1e0);
  local_68[0] = param_7;
  if (plVar10 == (long *)0x0) {
    plVar12 = *(long **)(param_1 + 8);
    plVar10 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x78,8);
    if (plVar10 == (long *)0x0) {
      plVar12 = (long *)0x0;
      uVar8 = 0;
      uVar14 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *plVar10 = 0;
      *(undefined1 *)(plVar10 + 1) = 0;
      *(undefined4 *)(plVar10 + 4) = 1;
      *(undefined8 *)((long)plVar10 + 0x24) = 0;
      *(undefined8 *)((long)plVar10 + 0x2c) = 0;
      uVar14 = 8;
      uVar8 = 0x78;
      plVar10[0xb] = 0;
      plVar10[0xd] = 0;
      *(undefined4 *)(plVar10 + 0xe) = 0;
      plVar10[3] = 0x100000001;
      *(undefined8 *)((long)plVar10 + 0x31) = 0;
      plVar10[9] = 0x100000001;
      plVar10[10] = 1;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    lVar6 = *(long *)(param_1 + 0x1e0);
    *(long **)(param_1 + 0x1e0) = plVar10;
    if (lVar6 != 0) {
      FUN_00eeae00(param_1 + 0x1e8);
      plVar10 = *(long **)(param_1 + 0x1e0);
    }
    bVar13 = 0;
    *(long **)(param_1 + 0x1e8) = plVar12;
    *(undefined8 *)(param_1 + 0x1f0) = uVar8;
    *(undefined8 *)(param_1 + 0x1f8) = uVar14;
  }
  else {
    bVar13 = 1;
  }
  bVar2 = *(int *)((long)plVar10 + 0x74) != 0;
  if (bVar2) {
    *(undefined4 *)((long)plVar10 + 0x74) = 0;
  }
  plVar12 = (long *)*plVar10;
  param_2 = (long *)*param_2;
  bVar11 = bVar2;
  if (plVar12 != param_2) {
    if (param_2 != (long *)0x0) {
      plVar12 = param_2 + 5;
      do {
        lVar6 = *plVar12;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar11) {
          *(int *)plVar12 = (int)lVar6 + 1;
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
      plVar12 = (long *)*plVar10;
    }
    *plVar10 = (long)param_2;
    if (plVar12 != (long *)0x0) {
      plVar1 = plVar12 + 5;
      do {
        iVar5 = (int)*plVar1;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *(int *)plVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 1) {
        (**(code **)(*plVar12 + 0x10))();
      }
      else if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    bVar11 = true;
  }
  bVar9 = bVar11;
  if (plVar10[0xd] != *param_3) {
    bVar9 = true;
    plVar10[0xd] = *param_3;
  }
  bVar4 = FUN_00d814d0(bVar9,plVar10 + 6,param_4,plVar10 + 7,param_5,plVar10 + 9,param_6,
                       plVar10 + 0xe,local_68);
  if ((bVar13 & ((bVar2 | bVar11 | bVar9 | bVar4) ^ 1)) == 0) {
    lVar6 = *(long *)(param_1 + 0x208);
    lVar7 = *(long *)(param_1 + 0x210);
    if (((lVar6 != lVar7) && (*(undefined1 *)(lVar6 + 0x10) = 1, lVar6 + 0x18 != lVar7)) &&
       (*(undefined1 *)(lVar6 + 0x28) = 1, lVar6 + 0x30 != lVar7)) {
      *(undefined1 *)(lVar6 + 0x40) = 1;
      for (lVar6 = lVar6 + 0x48; lVar6 != lVar7; lVar6 = lVar6 + 0x18) {
        *(undefined1 *)(lVar6 + 0x10) = 1;
      }
    }
  }
  return;
}


