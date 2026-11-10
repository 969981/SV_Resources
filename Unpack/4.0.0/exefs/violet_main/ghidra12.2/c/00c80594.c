/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c80594; name: FUN_00c80594
 */


void FUN_00c80594(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  if (iVar2 == 0) {
    lVar9 = **(long **)(param_1 + 0x40);
    puVar1 = (undefined8 *)PTR_DAT_047d8b70;
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + 0x30);
    }
    if ((undefined1 *)*puVar1 == &DAT_cbf29ce484222645) {
      return;
    }
    FUN_00c80968(*(undefined8 *)(param_1 + (ulong)(*(int *)(param_1 + 0xa0) == 0) * 0x20 + 0x60),
                 *(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xd0));
    if (*(code **)(param_1 + 0x160) != (code *)0x0) {
      (**(code **)(param_1 + 0x160))(param_1 + 0x180,param_1 + 0xa8);
    }
    plVar10 = *(long **)(param_1 + 0x40);
    plVar7 = (long *)*plVar10;
    *plVar10 = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = (long *)plVar10[4];
    *plVar10 = 0;
    plVar10[1] = (long)&DAT_cbf29ce484222645;
    plVar10[4] = 0;
    plVar10[2] = (long)&DAT_03c886bc;
    plVar10[3] = 0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar10[4] = 0;
    uVar8 = 1;
    *(undefined4 *)(plVar10 + 5) = 0;
    *(undefined4 *)(plVar10 + 6) = 0;
LAB_00c8076c:
    *(undefined4 *)(param_1 + 0xa4) = uVar8;
  }
  else {
    if (iVar2 == 1) {
      lVar9 = *(long *)(*(long *)(param_1 + (ulong)(*(int *)(param_1 + 0xa0) == 0) * 0x20 + 0x60) +
                       0x10);
      if (lVar9 == 0) {
        return;
      }
      if ((*(byte *)(lVar9 + 0x1e8) & 1) == 0) {
        return;
      }
      puVar1 = (undefined8 *)PTR_DAT_047d8b70;
      if (**(long **)(param_1 + 0x40) != 0) {
        puVar1 = (undefined8 *)(**(long **)(param_1 + 0x40) + 0x30);
      }
      if ((undefined1 *)*puVar1 == &DAT_cbf29ce484222645) {
        FUN_00c80b68(*(undefined8 *)(param_1 + 0x60 + (ulong)(*(int *)(param_1 + 0xa0) == 0) * 0x20)
                     ,*(undefined8 *)(param_1 + 8));
        FUN_00c8082c(*(undefined8 *)(param_1 + 0x60 + (ulong)(*(int *)(param_1 + 0xa0) == 0) * 0x20)
                     ,param_1 + 0xa8,*(undefined4 *)(param_1 + 0xc0));
        if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
          (**(code **)(param_1 + 0xe0))(param_1 + 0x100,param_1 + 0xa8);
        }
        if (1 < *(uint *)(param_1 + 0xa0)) {
                    /* WARNING: Subroutine does not return */
          FUN_0216dd60();
        }
        lVar9 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xa0) * 0x20 + 0x60);
        if (*(long *)(lVar9 + 0x58) != -1) {
          plVar7 = *(long **)(lVar9 + 0x48);
          *(undefined8 *)(lVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(lVar9 + 0x48) = 0;
          if (plVar7 != (long *)0x0) {
            plVar10 = plVar7 + 5;
            do {
              lVar6 = *plVar10;
              iVar2 = (int)lVar6 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar4) {
                *(int *)plVar10 = iVar2;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
            else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
        if (*(long *)(lVar9 + 0x10) != 0) {
          FUN_00faf010(lVar9 + 8);
        }
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) ^ 1;
        uVar8 = 2;
        *(undefined4 *)(param_1 + 0x1e0) = 2;
        goto LAB_00c8076c;
      }
    }
    else {
      if (iVar2 != 2) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x1e0);
      iVar5 = iVar2 + -1;
      *(int *)(param_1 + 0x1e0) = iVar5;
      if (iVar5 != 0 && 0 < iVar2) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}


