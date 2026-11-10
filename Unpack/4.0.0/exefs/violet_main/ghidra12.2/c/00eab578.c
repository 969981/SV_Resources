/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00eab578; name: FUN_00eab578
 */


void FUN_00eab578(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *local_38;
  
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    lVar1 = *(long *)(param_1 + 0xb8);
    for (lVar9 = *(long *)(param_1 + 0xb0); plVar11 = (long *)(*(long *)(param_1 + 0x38) + 0x30),
        lVar9 != lVar1; lVar9 = lVar9 + 0x28) {
      FUN_00fff1a4(&local_38,*(undefined8 *)(param_1 + 0x30),lVar9);
      (**(code **)(*plVar11 + 0x10))(plVar11,&local_38);
      if (local_38 != (long *)0x0) {
        plVar11 = local_38 + 5;
        do {
          lVar5 = *plVar11;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    (**(code **)(*plVar11 + 0x10))(plVar11,param_1 + 0xa8);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    if (*(long *)(param_1 + 0x228) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x200);
      if (puVar10 != (undefined8 *)0x0) {
        plVar11 = (long *)*puVar10;
        if ((long *)puVar10[5] != (long *)0x0) {
          (**(code **)(*(long *)puVar10[5] + 0x20))();
        }
        plVar12 = *(long **)(param_1 + 0x208);
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,0x30,8);
        }
        else {
          FUN_00c48fe8(plVar12,puVar10,0x30,8);
        }
        if (plVar11 != (long *)0x0) {
          plVar12 = (long *)*plVar11;
          if ((long *)plVar11[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar11[5] + 0x20))();
          }
          plVar13 = *(long **)(param_1 + 0x208);
          uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x30,8);
          }
          else {
            FUN_00c48fe8(plVar13,plVar11,0x30,8);
          }
          while (plVar12 != (long *)0x0) {
            plVar11 = (long *)*plVar12;
            if ((long *)plVar12[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar12[5] + 0x20))();
            }
            plVar13 = *(long **)(param_1 + 0x208);
            uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x30,8);
              plVar12 = plVar11;
            }
            else {
              FUN_00c48fe8(plVar13,plVar12,0x30,8);
              plVar12 = plVar11;
            }
          }
        }
      }
      uVar6 = *(ulong *)(param_1 + 0x1d8);
      *(undefined8 *)(param_1 + 0x200) = 0;
      if (uVar6 != 0) {
        uVar7 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar8 * 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar8 * 8 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x1d0) + uVar8 * 8 + 0x10) = 0;
            lVar9 = uVar8 * 8;
            uVar8 = uVar8 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar9 + 0x18) = 0;
          } while ((uVar6 & 0xfffffffffffffffc) != uVar8);
        }
        if (uVar7 != 0) {
          lVar9 = uVar8 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar9) = 0;
            uVar7 = uVar7 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar7 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x228) = 0;
    }
    if (*(long *)(param_1 + 0x290) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x268);
      if (puVar10 != (undefined8 *)0x0) {
        plVar11 = (long *)*puVar10;
        if ((long *)puVar10[5] != (long *)0x0) {
          (**(code **)(*(long *)puVar10[5] + 0x20))();
        }
        plVar12 = *(long **)(param_1 + 0x270);
        uVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,puVar10,0x30,8);
        }
        else {
          FUN_00c48fe8(plVar12,puVar10,0x30,8);
        }
        if (plVar11 != (long *)0x0) {
          plVar12 = (long *)*plVar11;
          if ((long *)plVar11[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar11[5] + 0x20))();
          }
          plVar13 = *(long **)(param_1 + 0x270);
          uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
          if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar13 + 0x18))(plVar13,plVar11,0x30,8);
          }
          else {
            FUN_00c48fe8(plVar13,plVar11,0x30,8);
          }
          while (plVar12 != (long *)0x0) {
            plVar11 = (long *)*plVar12;
            if ((long *)plVar12[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar12[5] + 0x20))();
            }
            plVar13 = *(long **)(param_1 + 0x270);
            uVar6 = (**(code **)(*plVar13 + 0xf8))(plVar13);
            if (((uVar6 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
              (**(code **)(*plVar13 + 0x18))(plVar13,plVar12,0x30,8);
              plVar12 = plVar11;
            }
            else {
              FUN_00c48fe8(plVar13,plVar12,0x30,8);
              plVar12 = plVar11;
            }
          }
        }
      }
      uVar6 = *(ulong *)(param_1 + 0x240);
      *(undefined8 *)(param_1 + 0x268) = 0;
      if (uVar6 != 0) {
        uVar7 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x238) + uVar8 * 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x238) + uVar8 * 8 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x238) + uVar8 * 8 + 0x10) = 0;
            lVar9 = uVar8 * 8;
            uVar8 = uVar8 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x238) + lVar9 + 0x18) = 0;
          } while ((uVar6 & 0xfffffffffffffffc) != uVar8);
        }
        if (uVar7 != 0) {
          lVar9 = uVar8 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x238) + lVar9) = 0;
            uVar7 = uVar7 - 1;
            lVar9 = lVar9 + 8;
          } while (uVar7 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x290) = 0;
    }
  }
  return;
}


