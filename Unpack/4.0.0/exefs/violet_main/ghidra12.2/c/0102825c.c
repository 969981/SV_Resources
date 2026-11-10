/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0102825c; name: FUN_0102825c
 */


void FUN_0102825c(long param_1,undefined4 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  
  *(undefined4 *)(param_1 + 0x280) = *param_2;
  if (*(ulong *)(param_1 + 0x290) < *(ulong *)(param_1 + 0x298)) {
    FUN_01030680(param_1 + 0x288,param_2 + 0x24);
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x2a8);
    lVar20 = (long)(*(ulong *)(param_1 + 0x290) - *(long *)(param_1 + 0x288)) >> 7;
    uVar7 = lVar20 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = *(ulong *)(param_1 + 0x298) - *(long *)(param_1 + 0x288);
    uVar9 = lVar8 >> 6;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar15 >> 1 <= (ulong)(lVar8 >> 7)) {
      uVar7 = uVar15;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(**(long **)(param_1 + 0x2a0) + 0x10))
                        (*(long **)(param_1 + 0x2a0),uVar7 << 7,0x10);
      if (lVar8 == 0) {
        (**(code **)(**(long **)(param_1 + 0x2a0) + 0xe8))();
      }
    }
    uVar21 = *(undefined8 *)(param_1 + 0x2a0);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01028874;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar21;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar19 = (undefined8 *)(lVar8 + lVar20 * 0x80);
    puVar19[2] = 0;
    puVar19[3] = 0;
    *puVar19 = 0;
    puVar19[1] = 0;
    if (*(code **)(param_2 + 0x28) != (code *)0x0) {
      (**(code **)(param_2 + 0x28))(param_2 + 0x2c,puVar19 + 4);
      uVar21 = *(undefined8 *)(param_2 + 0x2a);
      puVar19[1] = *(undefined8 *)(param_2 + 0x26);
      puVar19[3] = uVar21;
      uVar21 = *(undefined8 *)(param_2 + 0x24);
      puVar19[2] = *(undefined8 *)(param_2 + 0x28);
      *puVar19 = uVar21;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar10 = *(undefined8 **)(param_1 + 0x288);
    puVar17 = *(undefined8 **)(param_1 + 0x290);
    if (puVar17 == puVar10) {
      puVar17 = puVar19;
      puVar22 = puVar10;
    }
    else {
      lVar20 = 0;
      do {
        uVar21 = *(undefined8 *)(param_1 + 0x2a0);
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01028874;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar21;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        puVar22 = (undefined8 *)((long)puVar19 + lVar20 + -0x80);
        *puVar22 = 0;
        *(undefined8 *)((long)puVar19 + lVar20 + -0x70) = 0;
        *(undefined8 *)((long)puVar19 + lVar20 + -0x68) = 0;
        *(undefined8 *)((long)puVar19 + lVar20 + -0x78) = 0;
        pcVar11 = *(code **)((long)puVar17 + lVar20 + -0x68);
        if (pcVar11 != (code *)0x0) {
          lVar16 = (long)puVar17 + lVar20 + -0x60;
          (*pcVar11)(lVar16,(long)puVar19 + lVar20 + -0x60);
          puVar12 = (undefined8 *)((long)puVar17 + lVar20 + -0x80);
          uVar21 = *puVar12;
          uVar13 = *(undefined8 *)((long)puVar17 + lVar20 + -0x78);
          *(undefined8 *)((long)puVar19 + lVar20 + -0x68) =
               *(undefined8 *)((long)puVar17 + lVar20 + -0x68);
          uVar14 = *(undefined8 *)((long)puVar17 + lVar20 + -0x70);
          *(undefined8 *)((long)puVar19 + lVar20 + -0x78) = uVar13;
          *(undefined8 *)((long)puVar19 + lVar20 + -0x70) = uVar14;
          *puVar22 = uVar21;
          pcVar11 = *(code **)((long)puVar17 + lVar20 + -0x78);
          if (pcVar11 != (code *)0x0) {
            *(undefined8 *)((long)puVar17 + lVar20 + -0x70) = 0;
            *(undefined8 *)((long)puVar17 + lVar20 + -0x68) = 0;
            *puVar12 = 0;
            *(undefined8 *)((long)puVar17 + lVar20 + -0x78) = 0;
            (*pcVar11)(lVar16);
          }
        }
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x80;
      } while ((long)puVar10 - (long)puVar17 != lVar20);
      puVar22 = *(undefined8 **)(param_1 + 0x288);
      puVar17 = (undefined8 *)((long)puVar19 + lVar20);
      puVar10 = *(undefined8 **)(param_1 + 0x290);
    }
    lVar20 = *(long *)(param_1 + 0x298);
    *(undefined8 **)(param_1 + 0x288) = puVar17;
    *(undefined8 **)(param_1 + 0x290) = puVar19 + 0x10;
    *(ulong *)(param_1 + 0x298) = lVar8 + uVar7 * 0x80;
    if (puVar10 != puVar22) {
      pcVar11 = (code *)puVar10[-0xf];
      puVar19 = puVar10 + -0x10;
      if (pcVar11 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        *puVar19 = 0;
        puVar10[-0xf] = 0;
        (*pcVar11)(puVar10 + -0xc);
      }
      while (puVar10 = puVar19, puVar10 != puVar22) {
        pcVar11 = (code *)puVar10[-0xf];
        puVar19 = puVar10 + -0x10;
        if (pcVar11 != (code *)0x0) {
          puVar10[-0xe] = 0;
          puVar10[-0xd] = 0;
          puVar10[-0x10] = 0;
          puVar10[-0xf] = 0;
          (*pcVar11)(puVar10 + -0xc);
        }
      }
    }
    if (puVar22 != (undefined8 *)0x0) {
      plVar18 = *(long **)(param_1 + 0x2a0);
      lVar20 = lVar20 - (long)puVar22;
      uVar7 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,puVar22,lVar20,0x10);
      }
      else {
        FUN_00c48fe8(plVar18,puVar22,lVar20,0x10);
      }
    }
  }
  lVar20 = *(long *)(param_1 + 0x1c8);
  if (lVar20 == 0) {
    plVar18 = *(long **)(param_1 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01028874:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar18;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar20 = (**(code **)(*plVar18 + 0x10))(plVar18,0xc0,0x10);
    if (lVar20 == 0) {
      (**(code **)(*plVar18 + 0xe8))(plVar18);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_010288d4();
    *(undefined4 *)(lVar20 + 0x18) = 0x1000c0;
    *(long **)(lVar20 + 8) = plVar18;
    *(long *)(lVar20 + 0x10) = lVar20;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    piVar1 = (int *)(lVar20 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    plVar18 = *(long **)(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if (plVar18 != (long *)0x0) {
      plVar2 = plVar18 + 5;
      do {
        lVar8 = *plVar2;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x1c8) = lVar20;
  }
  if (param_2[1] == 0) {
    pcVar11 = *(code **)(lVar20 + 0x38);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      *(undefined8 *)(lVar20 + 0x30) = 0;
      *(undefined8 *)(lVar20 + 0x38) = 0;
      (*pcVar11)(lVar20 + 0x50);
    }
    *(undefined1 **)(lVar20 + 0x30) = &LAB_0199c144;
    *(undefined1 **)(lVar20 + 0x38) = &LAB_02bd869c;
    *(undefined1 **)(lVar20 + 0x40) = &LAB_02bd86a0;
    *(undefined1 **)(lVar20 + 0x48) = &LAB_02bd86a4;
  }
  else if (param_2[1] == 1) {
    pcVar11 = *(code **)(lVar20 + 0x38);
    if (pcVar11 != (code *)0x0) {
      *(undefined8 *)(lVar20 + 0x40) = 0;
      *(undefined8 *)(lVar20 + 0x48) = 0;
      *(undefined8 *)(lVar20 + 0x30) = 0;
      *(undefined8 *)(lVar20 + 0x38) = 0;
      (*pcVar11)(lVar20 + 0x50);
    }
    if (*(code **)(param_2 + 8) != (code *)0x0) {
      (**(code **)(param_2 + 8))(param_2 + 0xc,lVar20 + 0x50);
      uVar21 = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(lVar20 + 0x38) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(lVar20 + 0x48) = uVar21;
      uVar21 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(lVar20 + 0x40) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(lVar20 + 0x30) = uVar21;
    }
  }
  return;
}


