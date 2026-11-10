/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e8a830; name: FUN_00e8a830
 */


long FUN_00e8a830(long param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  unkuint9 Var9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong *puVar20;
  ulong local_58;
  
  lVar19 = *(long *)(param_1 + 0x68);
  lVar13 = *(long *)(lVar19 + param_2 * 0x48 + 0x30);
  if ((lVar13 == 0) || (*(short *)(lVar13 + 0x1a) == 0)) {
    *(undefined1 *)(lVar19 + param_2 * 0x48 + 0x28) = 1;
  }
  if ((*(long *)(lVar19 + param_2 * 0x48 + 8) != -1) &&
     (*(long *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 8) != -1)) {
    FUN_010b4850(*(undefined8 *)(param_1 + 0x118));
    *(undefined8 *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 8) = 0xffffffffffffffff;
  }
  if ((*(long *)(lVar19 + param_2 * 0x48 + 0x10) != -1) &&
     (*(long *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 0x10) != -1)) {
    FUN_010b4850(*(undefined8 *)(param_1 + 0x120));
    *(undefined8 *)(*(long *)(param_1 + 0x68) + param_2 * 0x48 + 0x10) = 0xffffffffffffffff;
  }
  uVar14 = *(ulong *)(param_1 + 0x110);
  if (uVar14 <= param_2) goto LAB_00e8ab04;
  lVar18 = *(long *)(param_1 + 0x68);
  lVar13 = lVar18 + param_2 * 0x48;
  puVar20 = *(ulong **)(lVar13 + 0x30);
  *(undefined8 *)(lVar13 + 0x30) = 0;
  if (puVar20 != (ulong *)0x0) {
    puVar2 = puVar20 + 3;
    do {
      sVar6 = (short)*puVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar3 = (int *)((long)puVar20 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58 = *puVar20;
        FUN_00c44438(lVar13 + 0x8040,&local_58);
      }
    }
    else if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  lVar13 = lVar18 + param_2 * 0x48;
  *(undefined8 *)(lVar13 + 0x38) = 0;
  plVar12 = *(long **)(lVar13 + 0x18);
  *(undefined8 *)(lVar13 + 0x18) = 0;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar13 = *plVar1;
      iVar11 = (int)lVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_00e8ab68;
  }
  lVar18 = lVar18 + param_2 * 0x48;
  plVar12 = *(long **)(lVar18 + 0x20);
  *(undefined8 *)(lVar18 + 0x20) = 0;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 5;
    do {
      lVar13 = *plVar1;
      iVar11 = (int)lVar13 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = iVar11;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_00e8ab68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  local_58 = param_2;
  if ((*(ulong *)(param_1 + 0xa8) <= param_2) ||
     ((*(ulong *)(*(long *)(param_1 + 0xa0) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
       (param_2 & 0x3f) & 1) == 0)) {
    uVar14 = *(long *)(param_1 + 0x110) - 1;
    if (uVar14 == param_2) {
      do {
        *(ulong *)(param_1 + 0x110) = uVar14;
        if ((uVar14 == 0) || (uVar14 = uVar14 - 1, *(ulong *)(param_1 + 0xa8) <= uVar14)) break;
      } while ((*(ulong *)(*(long *)(param_1 + 0xa0) + (uVar14 >> 3 & 0x1ffffffffffffff8)) >>
                (uVar14 & 0x3f) & 1) != 0);
    }
    plVar12 = (long *)(param_1 + 0xd8);
    puVar20 = (ulong *)*plVar12;
    lVar13 = *(long *)(param_1 + 0xe0) - (long)puVar20;
    if (lVar13 == 0) {
LAB_00e8ac44:
      FUN_00e8adcc(plVar12,&local_58);
    }
    else if (lVar13 == 8) {
      if (param_2 < *puVar20) goto LAB_00e8ac44;
      FUN_00c6e61c(plVar12,1);
      ((undefined8 *)*plVar12)[1] = *(undefined8 *)*plVar12;
      *(ulong *)*plVar12 = param_2;
    }
    else {
      uVar14 = lVar13 >> 3;
      if (lVar13 == -8) {
        *(ulong **)(param_1 + 0xe0) = puVar20;
LAB_00e8a9a4:
        uVar16 = (ulong)((float)uVar14 * 0.5);
        uVar17 = uVar16;
        uVar15 = uVar14;
        uVar4 = uVar14 - uVar16;
        if (puVar20[uVar16] <= param_2) {
          uVar17 = 0;
          uVar15 = uVar16;
          uVar4 = uVar16;
        }
        if (2 < uVar4) {
          uVar16 = uVar17 + (long)((float)uVar4 * 0.5);
          uVar5 = uVar16;
          uVar10 = uVar15 - uVar16;
          if (puVar20[uVar16] <= param_2) {
            uVar5 = uVar17;
            uVar15 = uVar16;
            uVar10 = (long)((float)uVar4 * 0.5);
          }
          uVar17 = uVar5;
          if (2 < uVar10) {
            uVar4 = uVar5 + (long)((float)uVar10 * 0.5);
            uVar17 = uVar4;
            uVar16 = uVar15 - uVar4;
            if (puVar20[uVar4] <= param_2) {
              uVar17 = uVar5;
              uVar15 = uVar4;
              uVar16 = (long)((float)uVar10 * 0.5);
            }
            if (2 < uVar16) {
              uVar4 = uVar17 + (long)((float)uVar16 * 0.5);
              uVar10 = uVar4;
              uVar5 = uVar15 - uVar4;
              if (puVar20[uVar4] <= param_2) {
                uVar10 = uVar17;
                uVar15 = uVar4;
                uVar5 = (long)((float)uVar16 * 0.5);
              }
              while (uVar17 = uVar10, 2 < uVar5) {
                Var9 = (unkuint9)uVar5;
                uVar4 = uVar17 + (long)((float)(unkint9)Var9 * 0.5);
                uVar10 = uVar4;
                uVar5 = uVar15 - uVar4;
                if (puVar20[uVar4] <= param_2) {
                  uVar10 = uVar17;
                  uVar15 = uVar4;
                  uVar5 = (long)((float)(unkint9)Var9 * 0.5);
                }
              }
            }
          }
        }
        if (uVar17 <= uVar15 && uVar15 < uVar14) {
          while (puVar20[uVar15] <= param_2) {
            uVar15 = uVar15 - 1;
            if ((uVar15 < uVar17) || (uVar14 <= uVar15)) goto LAB_00e8aa98;
          }
          uVar15 = uVar15 + 1;
        }
LAB_00e8aa98:
        if (uVar15 != uVar14) {
          if (uVar15 < uVar14 && uVar17 <= uVar15) {
            uVar17 = uVar15;
          }
          if (uVar17 + 1 < uVar14 + 1) {
            memmove(puVar20 + uVar17 + 1,puVar20 + uVar17,(uVar14 - uVar17) * 8);
          }
          uVar14 = uVar17;
        }
      }
      else {
        FUN_00c6e61c(plVar12,1);
        if (2 < uVar14) {
          puVar20 = (ulong *)*plVar12;
          goto LAB_00e8a9a4;
        }
      }
      *(ulong *)(*plVar12 + uVar14 * 8) = param_2;
    }
    if (*(ulong *)(param_1 + 0xa8) <= param_2) {
      FUN_00d7684c((long *)(param_1 + 0xa0),param_2 + 1,0);
    }
    lVar13 = *(long *)(param_1 + 0xa0);
    uVar14 = param_2 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar13 + uVar14) = *(ulong *)(lVar13 + uVar14) | 1L << (param_2 & 0x3f);
  }
  uVar14 = *(ulong *)(param_1 + 0x110);
LAB_00e8ab04:
  if (uVar14 == 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(*(long **)(param_1 + 0x58),0);
    (**(code **)(**(long **)(param_1 + 0x60) + 0x68))(*(long **)(param_1 + 0x60),0);
  }
  return lVar19 + param_2 * 0x48;
}


