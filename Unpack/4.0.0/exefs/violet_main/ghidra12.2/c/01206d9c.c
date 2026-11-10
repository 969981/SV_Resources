/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01206d9c; name: FUN_01206d9c
 */


undefined8 FUN_01206d9c(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_38;
  
  if (*(long *)(param_1 + 0x370) != 0) {
    plVar7 = *(long **)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_012070e4;
    }
    plVar7 = *(long **)(param_1 + 8);
    uVar12 = *(undefined8 *)(param_1 + 0x378);
    uVar13 = *(undefined8 *)(param_1 + 0x3a8);
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar7;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0x178,8);
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 0xe8))(plVar7);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_0120799c(lVar8,uVar12,uVar13,*(undefined8 *)(param_1 + 0x370));
    *(undefined4 *)(lVar8 + 0x18) = 0x80178;
    *(long **)(lVar8 + 8) = plVar7;
    *(long *)(lVar8 + 0x10) = lVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    lVar10 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar12;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    plVar7 = *(long **)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x460) = 0;
    if (plVar7 != (long *)0x0) {
      lVar10 = plVar7[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_012070e4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x460) = lVar8;
    FUN_0120710c(lVar8);
    FUN_012071e0(*(undefined8 *)(param_1 + 0x460),param_1 + 0x3e0);
    lVar10 = param_1 + 0x4a0;
    uVar9 = FUN_0172c3c8(lVar10,param_2);
    if (((uVar9 & 1) != 0) || (uVar9 = FUN_00dc5c18(lVar10,0,param_2,0,0), (uVar9 & 1) != 0)) {
      FUN_00f37cdc(*(undefined8 *)(param_1 + 0x460),lVar10);
      uVar9 = FUN_0148d170(*(undefined8 *)(param_1 + 0x460));
      if ((uVar9 & 1) != 0) {
        local_38 = param_1;
        FUN_012072b8(*(undefined8 *)(param_1 + 0x460),&local_38);
        plVar7 = *(long **)(param_1 + 0x28);
        plVar3 = *(long **)(param_1 + 0x30);
        if (plVar7 == plVar3) {
          return 1;
        }
        *(undefined1 *)(*plVar7 + 0x138) = 1;
        if (plVar7 + 1 == plVar3) {
          return 1;
        }
        plVar11 = plVar7 + 2;
        *(undefined1 *)(plVar7[1] + 0x138) = 1;
        if (plVar11 == plVar3) {
          return 1;
        }
        do {
          plVar7 = plVar11 + 1;
          *(undefined1 *)(*plVar11 + 0x138) = 1;
          plVar11 = plVar7;
        } while (plVar3 != plVar7);
        return 1;
      }
    }
  }
  return 0;
}


