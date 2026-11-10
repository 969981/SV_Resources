/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015d7938; name: FUN_015d7938
 */


long * FUN_015d7938(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *__s;
  long *plVar11;
  undefined8 uVar12;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_015d7c10:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x218,8);
  if (plVar9 == (long *)0x0) {
    lVar8 = *param_1;
  }
  else {
    param_3 = (long *)*param_3;
    FUN_00e86a58(plVar9,param_2,param_3);
    plVar9[0x41] = 0;
    plVar9[0x40] = 0;
    puVar6 = PTR_DAT_047dd9a8;
    puVar1 = PTR_DAT_047dd9a8 + 0x10;
    plVar9[0x42] = 0;
    plVar9[0x3e] = 0;
    plVar9[0x3f] = 0;
    *plVar9 = (long)puVar1;
    plVar9[4] = (long)(puVar6 + 0xa8);
    plVar9[5] = (long)(puVar6 + 0xf8);
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_015d7c10;
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_3;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    __s = (void *)(**(code **)(*param_3 + 0x10))(param_3,0x200,0x10);
    if (__s != (void *)0x0) {
      memset(__s,0,0x200);
      FUN_015d7c98(__s);
      *(undefined4 *)((long)__s + 0x18) = 0x100200;
      *(long **)((long)__s + 8) = param_3;
      *(void **)((long)__s + 0x10) = __s;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      lVar10 = *(long *)((long)__s + 0x30);
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar12;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      plVar11 = (long *)plVar9[0x42];
      plVar9[0x42] = 0;
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[6];
        psVar2 = (short *)(lVar10 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar9[0x42] = (long)__s;
      plVar9[1] = (long)param_1;
      plVar9[2] = (long)plVar9;
      *(undefined4 *)(plVar9 + 3) = 0x80218;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      return plVar9;
    }
    lVar8 = *param_3;
    param_1 = param_3;
  }
  (**(code **)(lVar8 + 0xe8))(param_1);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("ptr","Create",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
             ,0x40);
}


