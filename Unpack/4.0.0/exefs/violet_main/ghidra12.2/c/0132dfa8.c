/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132dfa8; name: FUN_0132dfa8
 */


void FUN_0132dfa8(long param_1,long param_2,long param_3)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long *local_78;
  long *local_70;
  long *local_68;
  
  plVar14 = *(long **)(param_1 + 8);
  lVar13 = *(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x30) + 0xe8);
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x48);
  }
  if (((*(long *)(param_2 + 8) != 0) && (lVar13 != 0)) &&
     (*(char *)(*(long *)(param_2 + 8) + 600) != '\0')) {
    plVar10 = *(long **)(lVar13 + 0x460);
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[6];
      if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
        *(undefined8 *)(lVar11 + 8) = uVar18;
        *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    uVar18 = *(undefined8 *)PTR_DAT_047d8c08;
    *(undefined8 *)PTR_DAT_047d8c10 = uVar18;
    FUN_012c1efc(uVar18,plVar10[8],plVar10[9]);
    if (plVar10 != (long *)0x0) {
      lVar11 = plVar10[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar4 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  plVar10 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x230,0x10);
  if (plVar10 == (long *)0x0) {
    plVar14 = (long *)0x0;
    uVar19 = 0;
    uVar18 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    *plVar10 = (long)(PTR_DAT_047e3128 + 0x10);
    plVar10[1] = lVar13;
    plVar10[2] = param_3;
    memset(plVar10 + 3,0,200);
    FUN_0132e6a8(plVar10 + 0x1c);
    plVar10[0x2d] = 0;
    plVar10[0x2b] = 0x3f8000003f800000;
    plVar10[0x2c] = 0x3f00000000000000;
    plVar10[0x29] = 0x3f8000003f800000;
    plVar10[0x2a] = 0x3f8000003f800000;
    plVar10[0x30] = 0;
    plVar10[0x31] = 0;
    *(undefined8 *)((long)plVar10 + 0x16d) = 0;
    plVar10[0x32] = 0x3f8000003f800000;
    *(undefined4 *)(plVar10 + 0x33) = 1;
    *(undefined8 *)((long)plVar10 + 0x19c) = 0x3f800000;
    *(undefined4 *)((long)plVar10 + 0x1a4) = 0;
    plVar10[0x36] = 0;
    plVar10[0x37] = 0;
    plVar10[0x38] = 0;
    plVar10[0x39] = 0;
    FUN_0132e8fc(plVar10,param_2,plVar14);
    uVar18 = 0x10;
    uVar19 = 0x230;
    *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  }
  lVar13 = *(long *)(param_1 + 0x68);
  *(long **)(param_1 + 0x68) = plVar10;
  if (lVar13 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar11 = FUN_00c4e600();
    iVar6 = *(int *)(lVar11 + 0x12c8);
    iVar9 = iVar6 + 1;
    *(int *)(lVar11 + 0x12c8) = iVar9;
    if (*(int *)(lVar11 + 0x12cc) <= iVar6) {
      *(int *)(lVar11 + 0x12cc) = iVar9;
    }
    FUN_0133424c(lVar13);
    plVar10 = *(long **)(param_1 + 0x70);
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    uVar15 = *(undefined8 *)(param_1 + 0x80);
    uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,uVar5,uVar15);
    }
    else {
      FUN_00c48fe8(plVar10,lVar13,uVar5,uVar15);
    }
    lVar13 = FUN_00c4e600();
    iVar9 = *(int *)(lVar13 + 0x12c8) + -1;
    *(int *)(lVar13 + 0x12c8) = iVar9;
    if (iVar9 == 0) {
      plVar10 = (long *)FUN_00c4e600();
      if (plVar10[600] != 0) {
        local_70 = plVar10 + plVar10[600] * 3;
        local_68 = plVar10;
        FUN_00c4ea30(&local_68,&local_70);
        plVar16 = (long *)*plVar10;
        plVar3 = plVar10;
        if (plVar10[600] != 0) {
          plVar3 = plVar10 + plVar10[600] * 3;
        }
        if (plVar3 == plVar10) {
          uVar17 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar10 + 0xd0))();
          if ((long *)*plVar10 != plVar16) {
            (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10);
            plVar16 = (long *)*plVar10;
          }
          plVar2 = plVar10 + 3;
          if (plVar3 == plVar2) {
            uVar17 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar2 + 0xd0))();
            bVar8 = (long *)*plVar2 != plVar16;
            if (bVar8) {
              (**(code **)(*plVar16 + 0x100))(plVar16,plVar10,plVar10 + 3);
              plVar16 = (long *)plVar10[3];
            }
            uVar17 = (ulong)bVar8;
            plVar2 = plVar10 + 6;
            if (plVar3 == plVar2) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar2 + 0xd0))();
              if ((long *)*plVar2 != plVar16) {
                (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 6);
                plVar16 = (long *)plVar10[6];
                uVar17 = 2;
              }
              plVar2 = plVar10 + 9;
              if (plVar3 == plVar2) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                if ((long *)*plVar2 != plVar16) {
                  (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 9);
                  plVar16 = (long *)plVar10[9];
                  uVar17 = 3;
                }
                plVar2 = plVar10 + 0xc;
                if (plVar3 == plVar2) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar16) {
                    (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xc);
                    plVar16 = (long *)plVar10[0xc];
                    uVar17 = 4;
                  }
                  plVar2 = plVar10 + 0xf;
                  if (plVar3 == plVar2) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar16) {
                      (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + 0xf);
                      plVar16 = (long *)plVar10[0xf];
                      uVar17 = 5;
                    }
                    uVar12 = 6;
                    for (local_78 = plVar10 + 0x12; plVar3 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar16) {
                        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,local_78);
                        plVar16 = (long *)*local_78;
                        uVar17 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar16 + 0x100))(plVar16,plVar10 + uVar17 * 3,plVar10 + uVar12 * 3);
        plVar10[600] = 0;
      }
      *(undefined4 *)(lVar13 + 0x12cc) = 0;
    }
  }
  *(long **)(param_1 + 0x70) = plVar14;
  *(undefined8 *)(param_1 + 0x78) = uVar19;
  *(undefined8 *)(param_1 + 0x80) = uVar18;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  return;
}


