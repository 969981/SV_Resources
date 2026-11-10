/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029d1220; name: FUN_029d1220
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029d1220(undefined8 *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  
  uVar6 = (**(code **)(*param_2 + 0x90))();
  uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  if (uVar6 < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x029d1584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xa0))(param_1,param_2,uVar6);
    return;
  }
  plVar15 = (long *)param_2[8];
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_029d168c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar15;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xf0,0x10);
  puVar5 = PTR_DAT_047d66f8;
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar15 + 0xe8))(plVar15);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  lVar16 = param_2[8];
  plVar10[2] = 0;
  *(undefined4 *)(plVar10 + 3) = 0;
  *plVar10 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar11 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar14 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  *plVar10 = (long)(PTR_DAT_047d8c78 + 0x10);
  plVar10[1] = lVar14;
  plVar10[4] = (long)(puVar5 + 0x88);
  plVar12 = plVar10 + 5;
  *plVar12 = (long)(puVar5 + 0xd8);
  plVar10[7] = 0;
  plVar10[6] = 0;
  FUN_00d1a3f4(plVar10 + 6,plVar12);
  *plVar10 = (long)&PTR_FUN_04607e30;
  plVar10[4] = (long)&PTR_LAB_04607f90;
  *plVar12 = (long)&DAT_04607fe0;
  plVar10[8] = lVar16;
  plVar10[9] = *param_3;
  plVar10[10] = param_3[1];
  plVar10[0xb] = param_3[2];
  plVar12 = (long *)param_3[3];
  plVar10[0xc] = (long)plVar12;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))();
  }
  lVar11 = _UNK_03cabe68;
  lVar16 = _DAT_03cabe60;
  plVar10[0xd] = (long)param_2;
  plVar10[0xe] = 0;
  *(undefined1 *)(plVar10 + 0x16) = 1;
  *(undefined8 *)((long)plVar10 + 0xb4) = 0x3f8000003f800000;
  *(undefined8 *)((long)plVar10 + 0xbc) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar10 + 0xc4) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar10 + 0xcc) = 0xffffffff;
  *(undefined8 *)((long)plVar10 + 0xd4) = 0x42b40000;
  *(undefined2 *)(plVar10 + 0x1d) = 0xffff;
  *(undefined1 *)(plVar10 + 0x12) = 0;
  plVar10[0xf] = 0;
  *(undefined1 *)(plVar10 + 0x10) = 0;
  *(undefined1 *)(plVar10 + 0x1a) = 0;
  plVar10[0x1c] = 0;
  *(undefined4 *)(plVar10 + 3) = 0x1000f0;
  plVar10[1] = (long)plVar15;
  plVar10[2] = (long)plVar10;
  plVar10[0x15] = lVar11;
  plVar10[0x14] = lVar16;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) != 0) {
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar13;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_029d16b0;
    plVar15 = (long *)(**(code **)(*(long *)param_2[0xc] + 0x10))((long *)param_2[0xc],0x18,8);
    if (plVar15 == (long *)0x0) {
      (**(code **)(*(long *)param_2[0xc] + 0xe8))();
    }
    *plVar15 = 0;
    lVar9 = param_2[0xc];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar16 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar16 != 0) {
      if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_029d168c;
      *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar9;
      *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    }
    plVar15[2] = (long)plVar10;
    lVar9 = plVar10[6];
    if (*(long *)(lVar9 + 0x10) != 0) {
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar13 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar13;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_029d16b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      if (lVar16 != 0) {
        *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
      }
      plVar15[1] = (long)(param_2 + 9);
      lVar9 = param_2[9];
      *plVar15 = lVar9;
      *(long **)(lVar9 + 8) = plVar15;
      param_2[9] = (long)plVar15;
      param_2[0xb] = param_2[0xb] + 1;
      *param_1 = plVar10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


