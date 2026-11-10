/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a5930; name: FUN_010a5930
 */


void FUN_010a5930(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  
  plVar14 = (long *)*param_2;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar8;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar7 = (long *)(**(code **)plVar14[5])();
  if (((*PTR_DAT_047e2f68 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047e2f68), iVar6 != 0))
  {
    uVar8 = FUN_029024a0();
    *(undefined8 *)PTR_DAT_047e2f70 = uVar8;
    __cxa_guard_release(PTR_DAT_047e2f68);
  }
  do {
    if (plVar7 == (long *)0x0) {
      bVar4 = false;
LAB_010a59c0:
      if (plVar14 != (long *)0x0) {
        lVar15 = plVar14[6];
        psVar1 = (short *)(lVar15 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
          (**(code **)(*plVar14 + 0x50))(plVar14);
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar14 = (long *)(param_1 + 0x40);
      if (!bVar4) {
        plVar14 = (long *)(param_1 + 0x78);
      }
      lVar15 = plVar14[1];
      plVar7 = plVar14 + 3;
      if (lVar15 == plVar14[2]) {
        uVar13 = plVar14[4];
        lVar15 = lVar15 - *plVar14 >> 3;
        uVar10 = lVar15 + 1;
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = plVar14[2] - *plVar14;
        uVar12 = lVar11 >> 2;
        if (uVar10 <= uVar12) {
          uVar10 = uVar12;
        }
        if (uVar13 >> 1 <= (ulong)(lVar11 >> 3)) {
          uVar10 = uVar13;
        }
        if (uVar10 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar10 << 3,8);
          if (lVar11 == 0) {
            (**(code **)(*(long *)*plVar7 + 0xe8))();
          }
        }
        lVar15 = lVar11 + lVar15 * 8;
        FUN_010a5e0c(plVar7,lVar15,param_2);
        plVar18 = (long *)*plVar14;
        plVar19 = (long *)plVar14[1];
        lVar16 = lVar15;
        if (plVar19 == plVar18) {
          plVar19 = plVar18;
        }
        else {
          do {
            lVar17 = *plVar7;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar9 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar9 == 0) {
              lVar17 = plVar19[-1];
              plVar19[-1] = 0;
              *(long *)(lVar16 + -8) = lVar17;
            }
            else {
              if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar17;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              lVar17 = plVar19[-1];
              plVar19[-1] = 0;
              *(long *)(lVar16 + -8) = lVar17;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            }
            plVar19 = plVar19 + -1;
            lVar16 = lVar16 + -8;
          } while (plVar18 != plVar19);
          plVar18 = (long *)*plVar14;
          plVar19 = (long *)plVar14[1];
        }
        lVar17 = plVar14[2];
        *plVar14 = lVar16;
        plVar14[1] = lVar15 + 8;
        plVar14[2] = lVar11 + uVar10 * 8;
        while (plVar19 != plVar18) {
          plVar19 = plVar19 + -1;
          plVar14 = (long *)*plVar19;
          if (plVar14 != (long *)0x0) {
            lVar15 = plVar14[6];
            psVar1 = (short *)(lVar15 + 0x1a);
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
              *(undefined8 *)(lVar15 + 0x10) = 0;
              (**(code **)(*plVar14 + 0x50))();
            }
            else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        if (plVar18 != (long *)0x0) {
          plVar7 = (long *)*plVar7;
          uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar10 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x010a5cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar7 + 0x18))(plVar7,plVar18,lVar17 - (long)plVar18,8);
            return;
          }
          FUN_00c48fe8(plVar7,plVar18,lVar17 - (long)plVar18,8);
          return;
        }
      }
      else {
        FUN_010a5e0c(plVar7,lVar15,param_2);
        plVar14[1] = lVar15 + 8;
      }
      return;
    }
    if (plVar7 == (long *)PTR_DAT_047e2f70) {
      bVar4 = true;
      goto LAB_010a59c0;
    }
    plVar7 = (long *)*plVar7;
  } while( true );
}


