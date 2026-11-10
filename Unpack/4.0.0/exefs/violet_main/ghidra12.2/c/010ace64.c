/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010ace64; name: FUN_010ace64
 */


void FUN_010ace64(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *local_78;
  long *local_70;
  long *local_68;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    plVar16 = (long *)0x0;
  }
  else {
    plVar16 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  plVar13 = param_1 + 6;
  *param_1 = (long)&PTR_FUN_045ed908;
  param_1[1] = (long)plVar16;
  param_1[4] = (long)&PTR_LAB_045ed940;
  memset(plVar13,0,0x58);
  *(undefined1 *)(param_1 + 0x11) = 5;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_010ad5d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  plVar9 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x88,8);
  if (plVar9 == (long *)0x0) {
    (**(code **)(*plVar16 + 0xe8))(plVar16);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[2] = 0;
  *(undefined4 *)(plVar9 + 3) = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar10 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar15 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  plVar9[1] = lVar15;
  plVar19 = plVar9 + 5;
  *(int *)plVar19 = 0;
  plVar9[6] = 0;
  puVar1 = PTR_DAT_047e25b0 + 0x10;
  puVar2 = PTR_DAT_047e25b0 + 0x518;
  *(undefined1 *)(plVar9 + 7) = 5;
  plVar9[8] = 0;
  plVar9[9] = 0;
  *plVar9 = (long)puVar1;
  plVar9[4] = (long)puVar2;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  puVar2 = PTR_DAT_047dcd38;
  puVar1 = PTR_DAT_047dcd38 + 0x10;
  plVar9[0xe] = -0x7d5d4e8add6295a5;
  plVar9[0xf] = 0;
  plVar9[0x10] = 0;
  plVar9[0xc] = (long)puVar1;
  plVar9[0xd] = 0xf4b17a579f18960;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_68,8);
  plVar9[0xf] = (long)local_68;
  plVar9[0x10] = 0;
  plVar9[0xd] = (long)local_68;
  plVar9[0xe] = -0x7d5d4e8add6295a5;
  plVar9[1] = (long)plVar16;
  plVar9[2] = (long)plVar9;
  *(undefined4 *)(plVar9 + 3) = 0x80088;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  do {
    lVar8 = *plVar19;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar6) {
      *(int *)plVar19 = (int)lVar8 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  plVar16 = (long *)*plVar13;
  *plVar13 = 0;
  if (plVar16 != (long *)0x0) {
    plVar13 = plVar16 + 5;
    do {
      lVar8 = *plVar13;
      iVar7 = (int)lVar8 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar16 = (long *)param_1[1];
  param_1[6] = (long)plVar9;
  puVar11 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16,0x68,8);
  if (puVar11 == (undefined8 *)0x0) {
    plVar16 = (long *)0x0;
    lVar10 = 0;
    lVar8 = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar15 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_010ad5d0;
    *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar16;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
    *puVar11 = &PTR_LAB_045ed970;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *(undefined2 *)(puVar11 + 3) = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    lVar8 = 8;
    lVar10 = 0x68;
    puVar11[0xc] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = puVar2 + 0x10;
    puVar11[9] = 0xf4b17a579f18960;
    puVar11[10] = 0x82a2b175229d6a5b;
    puVar11[0xb] = 0;
    *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  }
  puVar17 = (undefined8 *)param_1[0xb];
  param_1[0xb] = (long)puVar11;
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar15 = FUN_00c4e600();
    iVar4 = *(int *)(lVar15 + 0x12c8);
    iVar7 = iVar4 + 1;
    *(int *)(lVar15 + 0x12c8) = iVar7;
    if (*(int *)(lVar15 + 0x12cc) <= iVar4) {
      *(int *)(lVar15 + 0x12cc) = iVar7;
    }
    (**(code **)*puVar17)(puVar17);
    plVar13 = (long *)param_1[0xc];
    lVar15 = param_1[0xd];
    lVar18 = param_1[0xe];
    uVar12 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar12 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar17,lVar15,lVar18);
    }
    else {
      FUN_00c48fe8(plVar13,puVar17,lVar15,lVar18);
    }
    lVar15 = FUN_00c4e600();
    iVar7 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar7;
    if (iVar7 == 0) {
      plVar13 = (long *)FUN_00c4e600();
      if (plVar13[600] != 0) {
        local_70 = plVar13 + plVar13[600] * 3;
        local_68 = plVar13;
        FUN_00c4ea30(&local_68,&local_70);
        plVar19 = (long *)*plVar13;
        plVar9 = plVar13;
        if (plVar13[600] != 0) {
          plVar9 = plVar13 + plVar13[600] * 3;
        }
        if (plVar9 == plVar13) {
          uVar20 = 0;
          uVar12 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar13 + 0xd0))();
          if ((long *)*plVar13 != plVar19) {
            (**(code **)(*plVar19 + 0x100))(plVar19,plVar13,plVar13);
            plVar19 = (long *)*plVar13;
          }
          plVar3 = plVar13 + 3;
          if (plVar9 == plVar3) {
            uVar20 = 0;
            uVar12 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar6 = (long *)*plVar3 != plVar19;
            if (bVar6) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar13,plVar13 + 3);
              plVar19 = (long *)plVar13[3];
            }
            uVar20 = (ulong)bVar6;
            plVar3 = plVar13 + 6;
            if (plVar9 == plVar3) {
              uVar12 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar19) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,plVar13 + 6);
                plVar19 = (long *)plVar13[6];
                uVar20 = 2;
              }
              plVar3 = plVar13 + 9;
              if (plVar9 == plVar3) {
                uVar12 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,plVar13 + 9);
                  plVar19 = (long *)plVar13[9];
                  uVar20 = 3;
                }
                plVar3 = plVar13 + 0xc;
                if (plVar9 == plVar3) {
                  uVar12 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,plVar13 + 0xc);
                    plVar19 = (long *)plVar13[0xc];
                    uVar20 = 4;
                  }
                  plVar3 = plVar13 + 0xf;
                  if (plVar9 == plVar3) {
                    uVar12 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,plVar13 + 0xf);
                      plVar19 = (long *)plVar13[0xf];
                      uVar20 = 5;
                    }
                    uVar12 = 6;
                    for (local_78 = plVar13 + 0x12; plVar9 != local_78; local_78 = local_78 + 3) {
                      (**(code **)(*(long *)*local_78 + 0xd0))();
                      if ((long *)*local_78 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,local_78);
                        plVar19 = (long *)*local_78;
                        uVar20 = uVar12;
                      }
                      uVar12 = uVar12 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar19 + 0x100))(plVar19,plVar13 + uVar20 * 3,plVar13 + uVar12 * 3);
        plVar13[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  param_1[0xc] = (long)plVar16;
  param_1[0xd] = lVar10;
  param_1[0xe] = lVar8;
  return;
}


