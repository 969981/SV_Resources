/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe34dc; name: FUN_00fe34dc
 */


void FUN_00fe34dc(long *param_1,long param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_047dd668;
  if (*(char *)param_3[1] == '\0') {
    lVar8 = *(long *)(param_2 + 0x2c8);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_00fe36ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
joined_r0x00fe35e0:
      if (sVar2 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  else {
    plVar10 = *(long **)(param_2 + 0x298);
    for (plVar9 = *(long **)(param_2 + 0x290); plVar9 != plVar10; plVar9 = plVar9 + 1) {
      lVar8 = *plVar9;
      if (*param_3 == *(long *)(lVar8 + 0x40)) {
        puVar6 = (undefined8 *)
                 (*(code *)**(undefined8 **)(lVar8 + 0x28))((undefined8 *)(lVar8 + 0x28));
        FUN_00fe370c();
        if (puVar6 != (undefined8 *)0x0) {
LAB_00fe3580:
          if (puVar6 != (undefined8 *)puVar5) goto code_r0x00fe3588;
          *param_1 = lVar8;
          lVar8 = *(long *)(lVar8 + 0x30);
          if (*(long *)(lVar8 + 0x10) != 0) {
            psVar1 = (short *)(lVar8 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            goto joined_r0x00fe35e0;
          }
          goto LAB_00fe36ec;
        }
      }
LAB_00fe3590:
    }
    FUN_017e4ea0(&local_58,param_2);
    if (local_58 != (long *)0x0) {
      FUN_00fe34dc(&local_60,local_58,param_3);
      if (local_60 != (long *)0x0) {
        lVar8 = local_60[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*local_60 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x60))();
      }
    }
    *param_1 = 0;
  }
  return;
code_r0x00fe3588:
  puVar6 = (undefined8 *)*puVar6;
  if (puVar6 == (undefined8 *)0x0) goto LAB_00fe3590;
  goto LAB_00fe3580;
}


