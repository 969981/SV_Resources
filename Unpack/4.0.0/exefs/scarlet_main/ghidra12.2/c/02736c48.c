/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02736c48; name: FUN_02736c48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02736c48(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long *plVar14;
  char *pcVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  int iVar22;
  long *plVar23;
  ulong local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 local_90 [16];
  int local_80 [2];
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar8 = PTR_s_BlendBufferComposit_047e1500;
  uVar19 = *param_2;
  local_80[0] = -0x4a8a98ba;
  local_80[1] = 0xa51a3ff7;
  pcStack_78 = PTR_s_BlendBufferComposit_047e1500;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_01464dd0(&local_c8,local_80,*(undefined8 *)(param_1 + 0x380));
  FUN_012710b8(local_90,uVar19,&local_c8);
  plVar11 = *(long **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (plVar11 != (long *)0x0) {
    plVar21 = plVar11 + 5;
    do {
      lVar20 = *plVar21;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_027376c0;
  }
  uVar19 = local_90._0_8_;
  local_90._0_8_ = 0;
  *(undefined8 *)(param_1 + 0x428) = uVar19;
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  uVar19 = *(undefined8 *)(param_1 + 0x428);
  uVar10 = FUN_01464df0(0x84,*(undefined8 *)(param_1 + 0x380));
  FUN_01464e08(uVar19,uVar10);
  FUN_01271098(*(undefined8 *)(param_1 + 0x428),0x12);
  lVar20 = *(long *)(DAT_0485a0d0 + 0x58);
  if (*(char *)(lVar20 + 0x48) == '\0') {
    local_90 = FUN_0166cf98(lVar20,0,4);
    *(undefined1 (*) [16])(lVar20 + 0x48) = local_90;
  }
  else {
    local_90 = *(undefined1 (*) [16])(lVar20 + 0x48);
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x428) + 0x58);
  if (plVar11 != (long *)0x0) {
    plVar21 = plVar11 + 5;
    do {
      lVar20 = *plVar21;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = (int)lVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar20 == -1) goto LAB_027376e8;
  }
  puVar12 = (undefined8 *)FUN_00f351bc();
  puVar12 = (undefined8 *)FUN_00e514cc(*puVar12);
  plVar21 = (long *)*puVar12;
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 5;
    do {
      lVar20 = *plVar23;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = (int)lVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar20 == -1) goto LAB_027376e8;
  }
  local_c8 = 0x6b21fb462691e0eb;
  local_c0 = PTR_s_RefractionTarget_047e12c0;
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  FUN_00fff044(&local_98,plVar21,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  local_c8 = local_c8 & 0xffffffffffffff00;
  FUN_00d8219c(plVar11,0,&local_98,0xffffffff,&local_c8);
  uVar13 = (**(code **)(*DAT_0485a020 + 0x80))(DAT_0485a020,0);
  uVar10 = (**(code **)(*DAT_0485a020 + 0x78))();
  FUN_01343f00(*(undefined8 *)(param_1 + 0x428),uVar13 >> 0x20,uVar10);
  plVar23 = *(long **)(*(long *)(param_1 + 0x428) + 0x58);
  iVar22 = (int)(uVar13 >> 0x20);
  if (plVar23 == (long *)0x0) {
    local_80[0] = 2;
    local_a0 = CONCAT44(local_a0._4_4_,iVar22);
    local_c8 = (ulong)local_c8._1_7_ << 8;
    piVar16 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_027374c8:
      if ((*piVar16 != 2) || (piVar16[1] != iVar22)) goto LAB_027374e0;
      lVar20 = *(long *)(param_1 + 0x480);
      if (lVar20 != 0) {
        piVar4 = (int *)(lVar20 + 0x28);
        do {
          iVar5 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == -1) goto LAB_02737734;
      }
      plVar23 = *(long **)(piVar16 + 2);
      *(long *)(piVar16 + 2) = lVar20;
      if (plVar23 == (long *)0x0) goto LAB_02737550;
      plVar1 = plVar23 + 5;
      do {
        lVar20 = *plVar1;
        iVar5 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar23 + 0x10))();
        goto LAB_02737550;
      }
      if ((int)lVar20 != 0) goto LAB_02737550;
      goto LAB_02737710;
    }
LAB_027374ec:
    FUN_00d11148(0x110,local_80,&local_a0,(long *)(param_1 + 0x480),&local_c8);
LAB_02737550:
    local_80[0] = 2;
    local_a0 = CONCAT44(local_a0._4_4_,iVar22 + 1);
    local_c8 = local_c8 & 0xffffffffffffff00;
    piVar16 = _DAT_00000110;
    if (_DAT_00000110 != _DAT_00000118) {
LAB_02737580:
      if ((*piVar16 != 2) || (piVar16[1] != iVar22 + 1)) goto LAB_02737598;
      lVar20 = *(long *)(param_1 + 0x490);
      if (lVar20 != 0) {
        piVar4 = (int *)(lVar20 + 0x28);
        do {
          iVar5 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == -1) goto LAB_02737734;
      }
      plVar23 = *(long **)(piVar16 + 2);
      *(long *)(piVar16 + 2) = lVar20;
      if (plVar23 == (long *)0x0) goto LAB_02737608;
      plVar1 = plVar23 + 5;
      do {
        lVar20 = *plVar1;
        iVar5 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar23 + 0x10))();
        goto LAB_02737608;
      }
      if ((int)lVar20 != 0) goto LAB_02737608;
      goto LAB_02737710;
    }
LAB_027375a4:
    FUN_00d11148(0x110,local_80,&local_a0,(long *)(param_1 + 0x490),&local_c8);
LAB_02737608:
    local_c8 = CONCAT44(local_c8._4_4_,2);
    local_80[0] = iVar22;
    for (piVar16 = _DAT_00000110; piVar16 != _DAT_00000118; piVar16 = piVar16 + 8) {
      if ((*piVar16 == 2) && (piVar16[1] == iVar22)) {
        *(undefined1 (*) [16])(piVar16 + 4) = local_90;
        goto LAB_02737670;
      }
    }
    FUN_00ed5784(0x110,&local_c8,local_80,local_90);
LAB_02737670:
    FUN_00d81b84(0,0,0,0,0,0);
  }
  else {
    plVar1 = plVar23 + 5;
    do {
      lVar20 = *plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)lVar20 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar20 == -1) {
LAB_027376e8:
      pcVar15 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_02737708:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",pcVar15,0x53,
                 "Reference counter overflows.");
    }
    local_80[0] = 2;
    local_a0 = CONCAT44(local_a0._4_4_,iVar22);
    plVar2 = plVar23 + 0x22;
    local_c8 = (ulong)local_c8._1_7_ << 8;
    piVar16 = (int *)plVar23[0x22];
    if (piVar16 != (int *)plVar23[0x23]) {
LAB_02736e74:
      if ((*piVar16 != 2) || (piVar16[1] != iVar22)) goto LAB_02736e8c;
      lVar20 = *(long *)(param_1 + 0x480);
      if (lVar20 != 0) {
        piVar4 = (int *)(lVar20 + 0x28);
        do {
          iVar5 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == -1) goto LAB_02737734;
      }
      plVar14 = *(long **)(piVar16 + 2);
      *(long *)(piVar16 + 2) = lVar20;
      if (plVar14 == (long *)0x0) goto LAB_02736efc;
      plVar3 = plVar14 + 5;
      do {
        lVar20 = *plVar3;
        iVar5 = (int)lVar20 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar7) {
          *(int *)plVar3 = iVar5;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar14 + 0x10))();
        goto LAB_02736efc;
      }
      if ((int)lVar20 != 0) goto LAB_02736efc;
      goto LAB_02737710;
    }
LAB_02736e98:
    FUN_00d11148(plVar2,local_80,&local_a0,(long *)(param_1 + 0x480),&local_c8);
LAB_02736efc:
    local_80[0] = 2;
    local_a0 = CONCAT44(local_a0._4_4_,iVar22 + 1);
    local_c8 = local_c8 & 0xffffffffffffff00;
    piVar16 = (int *)plVar23[0x22];
    if (piVar16 != (int *)plVar23[0x23]) {
LAB_02736f20:
      if ((*piVar16 != 2) || (piVar16[1] != iVar22 + 1)) goto LAB_02736f38;
      lVar20 = *(long *)(param_1 + 0x490);
      if (lVar20 != 0) {
        piVar4 = (int *)(lVar20 + 0x28);
        do {
          iVar5 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar5 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == -1) {
LAB_02737734:
          local_80[0] = 2;
          pcVar15 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_02737708;
        }
      }
      plVar14 = *(long **)(piVar16 + 2);
      *(long *)(piVar16 + 2) = lVar20;
      if (plVar14 != (long *)0x0) {
        plVar3 = plVar14 + 5;
        do {
          lVar20 = *plVar3;
          iVar5 = (int)lVar20 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar5;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar20 == 0) {
LAB_02737710:
          local_80[0] = 2;
          pcVar15 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          goto LAB_027376e0;
        }
      }
      goto LAB_02736fa8;
    }
LAB_02736f44:
    FUN_00d11148(plVar2,local_80,&local_a0,(long *)(param_1 + 0x490),&local_c8);
LAB_02736fa8:
    local_c8 = CONCAT44(local_c8._4_4_,2);
    for (piVar16 = (int *)plVar23[0x22]; local_80[0] = iVar22, piVar16 != (int *)plVar23[0x23];
        piVar16 = piVar16 + 8) {
      if ((*piVar16 == 2) && (piVar16[1] == iVar22)) {
        *(undefined1 (*) [16])(piVar16 + 4) = local_90;
        goto LAB_02737004;
      }
    }
    FUN_00ed5784(plVar2,&local_c8,local_80,local_90);
LAB_02737004:
    FUN_00d81b84(0,0,0,0,plVar23,0);
    do {
      lVar20 = *plVar1;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
    }
    else if ((int)lVar20 == 0) goto LAB_027376c0;
  }
  local_b8 = 0x1f;
  local_b0 = (long *)0x0;
  local_80[0] = 0x23cb9ee6;
  local_80[1] = 0x54fa7b7f;
  pcStack_78 = "[Blend Buffer Composit]";
  local_70 = 0x17;
  local_68 = (long *)0x0;
  local_c8 = 0xa51a3ff7b5756746;
  local_c0 = puVar8;
  FUN_01343d88(&local_a0,DAT_0485a0d0,&local_c8,local_80,0);
  plVar23 = *(long **)(param_1 + 0x548);
  *(undefined8 *)(param_1 + 0x548) = 0;
  if (plVar23 != (long *)0x0) {
    plVar1 = plVar23 + 5;
    do {
      lVar20 = *plVar1;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*plVar23 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_027376c0;
  }
  uVar19 = local_a0;
  local_a0 = 0;
  *(undefined8 *)(param_1 + 0x548) = uVar19;
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  plVar23 = (long *)FUN_00f351bc();
  lVar20 = *plVar23;
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x20) + 0x10))();
  }
  puVar12 = (undefined8 *)FUN_00e514cc(lVar20);
  local_80[0] = -0x4a8a98ba;
  local_80[1] = 0xa51a3ff7;
  pcStack_78 = PTR_s_BlendBufferComposit_047e12b8;
  local_70 = 0x1f;
  local_68 = (long *)0x0;
  FUN_01272358(&local_c8,*puVar12,local_80);
  plVar23 = local_a8;
  if (*(char *)(param_1 + 0x5a0) == '\0') {
    if ((char)local_c8 != '\0') {
      *(undefined **)(param_1 + 0x5a8) = local_c0;
      *(undefined8 *)(param_1 + 0x5b0) = local_b8;
      *(long **)(param_1 + 0x5b8) = local_b0;
      local_a8 = (long *)0x0;
      *(long **)(param_1 + 0x5c0) = plVar23;
      *(undefined1 *)(param_1 + 0x5a0) = 1;
      goto LAB_02737150;
    }
  }
  else {
    if ((char)local_c8 == '\0') {
      if (*(long **)(param_1 + 0x5c0) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x5c0) + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x5a0) = 0;
    }
    else {
      *(undefined **)(param_1 + 0x5a8) = local_c0;
      *(undefined8 *)(param_1 + 0x5b0) = local_b8;
      plVar23 = *(long **)(param_1 + 0x5c0);
      *(undefined8 *)(param_1 + 0x5c0) = 0;
      *(long **)(param_1 + 0x5b8) = local_b0;
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))();
      }
      plVar23 = local_a8;
      local_a8 = (long *)0x0;
      *(long **)(param_1 + 0x5c0) = plVar23;
    }
LAB_02737150:
    if ((char)local_c8 != '\0') {
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      local_c8 = local_c8 & 0xffffffffffffff00;
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  FUN_00d10690(*(undefined8 *)(*(long *)(param_1 + 0x548) + 200),0,(undefined1 *)(param_1 + 0x5a0));
  FUN_00eb2008(*(undefined8 *)(*(long *)(param_1 + 0x548) + 200),4);
  FUN_00eacd1c(*(undefined8 *)(param_1 + 0x548),0,2,0);
  lVar9 = DAT_0485a0f0;
  lVar17 = *(long *)(param_1 + 0x548);
  if (*(long *)(DAT_0485a0f0 + 0x38) != *(long *)(DAT_0485a0f0 + 0x30)) {
    *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffe;
    lVar17 = *(long *)(param_1 + 0x548);
    if (1 < (ulong)((*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 4) * -0x5555555555555555))
    {
      *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffd;
      lVar17 = *(long *)(param_1 + 0x548);
      if (2 < (ulong)((*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 4) * -0x5555555555555555
                     )) {
        *(ulong *)(lVar17 + 0xd0) = *(ulong *)(lVar17 + 0xd0) & 0xfffffffb;
        lVar17 = *(long *)(param_1 + 0x548);
        if (3 < (ulong)((*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 4) *
                       -0x5555555555555555)) {
          uVar13 = 3;
          do {
            uVar18 = (uint)uVar13;
            uVar13 = uVar13 + 1;
            *(ulong *)(lVar17 + 0xd0) =
                 *(ulong *)(lVar17 + 0xd0) & (ulong)(uint)~(1 << (ulong)(uVar18 & 0x1f));
            lVar17 = *(long *)(param_1 + 0x548);
          } while (uVar13 < (ulong)((*(long *)(lVar9 + 0x38) - *(long *)(lVar9 + 0x30) >> 4) *
                                   -0x5555555555555555));
        }
      }
    }
  }
  *(ulong *)(lVar17 + 0xd0) =
       (ulong)(*(uint *)(lVar17 + 0xd0) | 1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f));
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x20) + 0x18))((long *)(lVar20 + 0x20));
  }
  if (local_98 != (long *)0x0) {
    plVar23 = local_98 + 5;
    do {
      lVar20 = *plVar23;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar20 == 0) goto LAB_027376c0;
  }
  if (plVar21 != (long *)0x0) {
    plVar23 = plVar21 + 5;
    do {
      lVar20 = *plVar23;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar7) {
        *(int *)plVar23 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
    }
    else if ((int)lVar20 == 0) goto LAB_027376c0;
  }
  if (plVar11 != (long *)0x0) {
    plVar21 = plVar11 + 5;
    do {
      lVar20 = *plVar21;
      iVar22 = (int)lVar20 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar22;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar22 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    else if ((int)lVar20 == 0) {
LAB_027376c0:
      pcVar15 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_027376e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar15,0x58,"Reference counter underflows.");
    }
  }
  return;
LAB_027374e0:
  piVar16 = piVar16 + 8;
  if (_DAT_00000118 == piVar16) goto LAB_027374ec;
  goto LAB_027374c8;
LAB_02737598:
  piVar16 = piVar16 + 8;
  if (_DAT_00000118 == piVar16) goto LAB_027375a4;
  goto LAB_02737580;
LAB_02736e8c:
  piVar16 = piVar16 + 8;
  if ((int *)plVar23[0x23] == piVar16) goto LAB_02736e98;
  goto LAB_02736e74;
LAB_02736f38:
  piVar16 = piVar16 + 8;
  if ((int *)plVar23[0x23] == piVar16) goto LAB_02736f44;
  goto LAB_02736f20;
}


