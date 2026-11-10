/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4db90; name: FUN_00c4db90
 */


void FUN_00c4db90(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  long *local_70;
  long *local_68;
  
  puVar16 = *(undefined8 **)(param_1 + 0x1c0);
  local_84 = param_6;
  local_80 = param_5;
  uStack_7c = param_4;
  local_78 = param_3;
  uStack_74 = param_2;
  if (puVar16 == (undefined8 *)0x0) {
    plVar15 = *(long **)(param_1 + 8);
    puVar16 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0xd8,8);
    if (puVar16 == (undefined8 *)0x0) {
      plVar15 = (long *)0x0;
      uVar14 = 0;
      uVar12 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar15;
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = plVar15;
      puVar16[7] = 0;
      puVar16[8] = 0;
      *(undefined4 *)(puVar16 + 6) = 0;
      puVar16[0xf] = 0;
      *(undefined4 *)(puVar16 + 0x10) = 0;
      puVar16[4] = 0x555555555555555;
      puVar16[5] = 0;
      puVar16[0xb] = 0;
      puVar16[0xc] = 0x400000010;
      puVar16[9] = 0;
      puVar16[10] = 0;
      puVar16[0xd] = 0xbf800000bf800000;
      puVar16[0xe] = 0;
      memset(puVar16 + 0x11,0,0x49);
      *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      uVar12 = 8;
      uVar14 = 0xd8;
    }
    lVar13 = *(long *)(param_1 + 0x1c0);
    *(undefined8 **)(param_1 + 0x1c0) = puVar16;
    if (lVar13 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar11 = FUN_00c4e600();
      iVar4 = *(int *)(lVar11 + 0x12c8);
      iVar8 = iVar4 + 1;
      *(int *)(lVar11 + 0x12c8) = iVar8;
      if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
        *(int *)(lVar11 + 0x12cc) = iVar8;
      }
      FUN_00ee9b24(lVar13);
      plVar10 = *(long **)(param_1 + 0x1c8);
      uVar3 = *(undefined8 *)(param_1 + 0x1d0);
      uVar18 = *(undefined8 *)(param_1 + 0x1d8);
      uVar9 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar9 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,uVar3,uVar18);
      }
      else {
        FUN_00c48fe8(plVar10,lVar13,uVar3,uVar18);
      }
      lVar13 = FUN_00c4e600();
      iVar8 = *(int *)(lVar13 + 0x12c8) + -1;
      *(int *)(lVar13 + 0x12c8) = iVar8;
      if (iVar8 == 0) {
        plVar10 = (long *)FUN_00c4e600();
        if (plVar10[600] != 0) {
          local_70 = plVar10 + plVar10[600] * 3;
          local_68 = plVar10;
          FUN_00c4ea30(&local_68,&local_70);
          plVar19 = (long *)*plVar10;
          plVar2 = plVar10;
          if (plVar10[600] != 0) {
            plVar2 = plVar10 + plVar10[600] * 3;
          }
          if (plVar2 == plVar10) {
            uVar20 = 0;
            uVar9 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar10 + 0xd0))();
            if ((long *)*plVar10 != plVar19) {
              (**(code **)(*plVar19 + 0x100))(plVar19,plVar10,plVar10);
              plVar19 = (long *)*plVar10;
            }
            plVar1 = plVar10 + 3;
            if (plVar2 == plVar1) {
              uVar20 = 0;
              uVar9 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar1 + 0xd0))();
              bVar6 = (long *)*plVar1 != plVar19;
              if (bVar6) {
                (**(code **)(*plVar19 + 0x100))(plVar19,plVar10,plVar10 + 3);
                plVar19 = (long *)plVar10[3];
              }
              uVar20 = (ulong)bVar6;
              plVar1 = plVar10 + 6;
              if (plVar2 == plVar1) {
                uVar9 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                if ((long *)*plVar1 != plVar19) {
                  (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar10 + 6);
                  plVar19 = (long *)plVar10[6];
                  uVar20 = 2;
                }
                plVar1 = plVar10 + 9;
                if (plVar2 == plVar1) {
                  uVar9 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar19) {
                    (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar10 + 9);
                    plVar19 = (long *)plVar10[9];
                    uVar20 = 3;
                  }
                  plVar1 = plVar10 + 0xc;
                  if (plVar2 == plVar1) {
                    uVar9 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar19) {
                      (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar10 + 0xc);
                      plVar19 = (long *)plVar10[0xc];
                      uVar20 = 4;
                    }
                    plVar1 = plVar10 + 0xf;
                    if (plVar2 == plVar1) {
                      uVar9 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar19) {
                        (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar10 + 0xf);
                        plVar19 = (long *)plVar10[0xf];
                        uVar20 = 5;
                      }
                      uVar9 = 6;
                      for (plVar1 = plVar10 + 0x12; plVar2 != plVar1; plVar1 = plVar1 + 3) {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar19) {
                          (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar1);
                          plVar19 = (long *)*plVar1;
                          uVar20 = uVar9;
                        }
                        uVar9 = uVar9 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar19 + 0x100))(plVar19,plVar10 + uVar20 * 3,plVar10 + uVar9 * 3);
          plVar10[600] = 0;
        }
        *(undefined4 *)(lVar13 + 0x12cc) = 0;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x1c0);
    }
    uVar17 = 0;
    *(long **)(param_1 + 0x1c8) = plVar15;
    *(undefined8 *)(param_1 + 0x1d0) = uVar14;
    *(undefined8 *)(param_1 + 0x1d8) = uVar12;
  }
  else {
    uVar17 = 1;
  }
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  uVar7 = FUN_00c4e220(0,puVar16 + 0x11,&local_68,puVar16 + 0x13,&local_70,puVar16 + 0xe,&uStack_74,
                       (long)puVar16 + 0x74,&local_78,(long)puVar16 + 0x7c,&uStack_7c,puVar16 + 0xf,
                       &local_80,puVar16 + 0x10,&local_84);
  if (local_70 != (long *)0x0) {
    plVar15 = local_70 + 5;
    do {
      lVar13 = *plVar15;
      iVar8 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar13 == 0) goto LAB_00c4defc;
  }
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 5;
    do {
      lVar13 = *plVar15;
      iVar8 = (int)lVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar13 == 0) {
LAB_00c4defc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if ((uVar17 & (uVar7 ^ 1)) == 0) {
    lVar13 = *(long *)(param_1 + 0x208);
    lVar11 = *(long *)(param_1 + 0x210);
    if (((lVar13 != lVar11) && (*(undefined1 *)(lVar13 + 0x10) = 1, lVar13 + 0x18 != lVar11)) &&
       (*(undefined1 *)(lVar13 + 0x28) = 1, lVar13 + 0x30 != lVar11)) {
      *(undefined1 *)(lVar13 + 0x40) = 1;
      for (lVar13 = lVar13 + 0x48; lVar13 != lVar11; lVar13 = lVar13 + 0x18) {
        *(undefined1 *)(lVar13 + 0x10) = 1;
      }
    }
  }
  return;
}


