/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8a258; name: FUN_00e8a258
 */


void FUN_00e8a258(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  *(undefined1 *)(param_1 + 0x62a) = 1;
  puVar6 = PTR_DAT_047d8b70;
  puVar5 = PTR_PTR_047d4508;
  lVar10 = *(long *)(param_1 + 0x670);
  lVar16 = *(long *)(param_1 + 0x668);
  if (lVar10 != lVar16) {
    plVar11 = *(long **)(lVar16 + 8);
    plVar13 = (long *)PTR_DAT_047d8b70;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 6;
    }
    local_70 = *plVar13;
    plVar13 = (long *)PTR_PTR_047d4508;
    if (plVar11 != (long *)0x0) {
      plVar13 = plVar11 + 7;
    }
    lStack_68 = *plVar13;
    local_58 = plVar11;
    if (plVar11 == (long *)0x0) {
      local_60 = 0;
      FUN_00e8b2b8(*(undefined4 *)(lVar16 + 0x10),param_1,&local_70);
    }
    else {
      local_60 = plVar11[8];
      (**(code **)(*plVar11 + 0x18))(plVar11);
      FUN_00e8b2b8(*(undefined4 *)(*(long *)(param_1 + 0x668) + 0x10),param_1,&local_70);
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    lVar10 = *(long *)(param_1 + 0x670);
    lVar16 = *(long *)(param_1 + 0x668);
    if (1 < (ulong)((lVar10 - lVar16 >> 3) * -0x5555555555555555)) {
      lVar17 = 0;
      uVar15 = 1;
      do {
        plVar12 = *(long **)(lVar16 + lVar17 + 0x20);
        plVar13 = (long *)puVar5;
        plVar11 = (long *)puVar6;
        if (plVar12 != (long *)0x0) {
          plVar13 = plVar12 + 7;
          plVar11 = plVar12 + 6;
        }
        local_70 = *plVar11;
        lStack_68 = *plVar13;
        if (plVar12 == (long *)0x0) {
          local_60 = 0;
          local_58 = plVar12;
          FUN_00e8b2b8(*(undefined4 *)(lVar16 + lVar17 + 0x28),param_1,&local_70);
        }
        else {
          local_60 = plVar12[8];
          (**(code **)(*plVar12 + 0x18))(plVar12);
          local_58 = plVar12;
          FUN_00e8b2b8(*(undefined4 *)(*(long *)(param_1 + 0x668) + lVar17 + 0x28),param_1,&local_70
                      );
          (**(code **)(*plVar12 + 0x20))(plVar12);
        }
        lVar10 = *(long *)(param_1 + 0x670);
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x18;
        lVar16 = *(long *)(param_1 + 0x668);
      } while (uVar15 < (ulong)((lVar10 - lVar16 >> 3) * -0x5555555555555555));
    }
  }
  if (lVar16 != lVar10) {
    if (*(long **)(lVar10 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar10 + -0x10) + 0x20))();
    }
    if (lVar10 + -0x18 != lVar16) {
      do {
        if (*(long **)(lVar10 + -0x28) != (long *)0x0) {
          (**(code **)(**(long **)(lVar10 + -0x28) + 0x20))();
        }
        lVar10 = lVar10 + -0x18;
      } while (lVar16 + 0x18 != lVar10);
    }
  }
  *(long *)(param_1 + 0x670) = lVar16;
  puVar8 = *(uint **)(param_1 + 0x638);
  local_78 = param_1;
  if (puVar8 != *(uint **)(param_1 + 0x630)) {
    uVar15 = (ulong)**(uint **)(param_1 + 0x630);
    (*(code *)(&PTR_LAB_045cfb38)[uVar15 * 2])
              ((long)&local_78 + (*(long *)(&DAT_045cfb40 + uVar15 * 0x10) >> 1));
    puVar8 = *(uint **)(param_1 + 0x630);
    if (1 < (ulong)((*(long *)(param_1 + 0x638) - (long)puVar8 >> 3) * -0x5555555555555555)) {
      uVar15 = 1;
      lVar10 = 0x18;
      do {
        (*(code *)(&PTR_LAB_045cfb38)[(ulong)*(uint *)((long)puVar8 + lVar10) * 2])
                  ((long)&local_78 +
                   (*(long *)(&DAT_045cfb40 + (ulong)*(uint *)((long)puVar8 + lVar10) * 0x10) >> 1))
        ;
        uVar15 = uVar15 + 1;
        lVar10 = lVar10 + 0x18;
        puVar8 = *(uint **)(param_1 + 0x630);
      } while (uVar15 < (ulong)((*(long *)(param_1 + 0x638) - (long)puVar8 >> 3) *
                               -0x5555555555555555));
    }
  }
  plVar13 = *(long **)(param_1 + 0x2c8);
  *(uint **)(param_1 + 0x638) = puVar8;
  for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
    uVar15 = plVar13[2];
    if ((uVar15 < *(ulong *)(param_1 + 0x290)) &&
       ((*(ulong *)(param_1 + 0x228) <= uVar15 ||
        ((*(ulong *)(*(long *)(param_1 + 0x220) + (uVar15 >> 3 & 0x1ffffffffffffff8)) >>
          (uVar15 & 0x3f) & 1) == 0)))) {
      lVar10 = *(long *)(param_1 + 0x1e8) + uVar15 * 0x20;
      lVar16 = *(long *)(*(long *)(param_1 + 0x28) + *(long *)(lVar10 + 0x18) * 8);
      if (*(char *)(lVar16 + 0x138) == '\0') {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("false","Remove",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/haxe_lua.bindings/script_execution_manager.cpp"
                   ,0x59e);
      }
      FUN_00e8a830(lVar16,*(undefined8 *)(lVar10 + 8));
      if (uVar15 < (ulong)(*(long *)(param_1 + 0x1f0) - *(long *)(param_1 + 0x1e8) >> 5)) {
        FUN_011d7000(param_1 + 0x1e8,uVar15);
      }
    }
  }
  if (*(long *)(param_1 + 0x2f0) != 0) {
    plVar13 = (long *)(param_1 + 0x298);
    FUN_00e8b220(plVar13,*(undefined8 *)(param_1 + 0x2c8));
    uVar15 = *(ulong *)(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    if (uVar15 != 0) {
      uVar14 = uVar15 & 3;
      if (uVar15 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          *(undefined8 *)(*plVar13 + uVar9 * 8) = 0;
          *(undefined8 *)(*plVar13 + uVar9 * 8 + 8) = 0;
          *(undefined8 *)(*plVar13 + uVar9 * 8 + 0x10) = 0;
          lVar10 = uVar9 * 8;
          uVar9 = uVar9 + 4;
          *(undefined8 *)(*plVar13 + lVar10 + 0x18) = 0;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar9);
      }
      if (uVar14 != 0) {
        lVar10 = uVar9 << 3;
        do {
          *(undefined8 *)(*plVar13 + lVar10) = 0;
          uVar14 = uVar14 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar14 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
  }
  lVar10 = *(long *)(param_1 + 0x178);
  if (*(long *)(param_1 + 0x180) != lVar10) {
    uVar15 = 0;
    do {
      plVar13 = *(long **)(*(long *)(param_1 + 0x28) + *(long *)(lVar10 + uVar15 * 0x10) * 8);
      if (plVar13 != (long *)0x0) {
        lVar10 = plVar13[6];
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
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar7;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      if (plVar13[0x22] != 0) {
        lVar10 = 0;
        uVar14 = 0;
        do {
          if ((((*(char *)(plVar13[0xd] + lVar10 + 0x28) != '\0') ||
               (lVar16 = *(long *)(plVar13[0xd] + lVar10 + 0x30), lVar16 == 0)) ||
              (*(short *)(lVar16 + 0x1a) == 0)) &&
             (((ulong)plVar13[0x15] <= uVar14 ||
              ((*(ulong *)(plVar13[0x14] + (uVar14 >> 3 & 0x1ffffffffffffff8)) >> (uVar14 & 0x3f) &
               1) == 0)))) {
            FUN_00e8a830(plVar13,uVar14);
          }
          uVar14 = uVar14 + 1;
          lVar10 = lVar10 + 0x48;
        } while (uVar14 < (ulong)plVar13[0x22]);
      }
      lVar10 = plVar13[6];
      psVar1 = (short *)(lVar10 + 0x1a);
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
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      lVar10 = *(long *)(param_1 + 0x178);
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(*(long *)(param_1 + 0x180) - lVar10 >> 4));
  }
  *(undefined1 *)(param_1 + 0x62a) = 0;
  return;
}


