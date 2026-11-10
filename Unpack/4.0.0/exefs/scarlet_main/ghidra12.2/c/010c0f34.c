/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c0f34; name: FUN_010c0f34
 */


void FUN_010c0f34(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  int *piVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  char *local_88;
  ulong local_80;
  long *local_78;
  long local_70;
  undefined1 auStack_68 [8];
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_045d6fb8;
  param_1[1] = lVar7;
  param_1[4] = (long)&PTR_LAB_045d7058;
  param_1[5] = 0x700000000;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = lVar7;
  param_1[0xc] = 0x1fffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  plVar19 = param_1 + 0x1d;
  *plVar19 = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] = lVar7;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x16] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x19] = lVar7;
  param_1[0x1a] = -1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = lVar7;
  param_1[0x23] = 0x38e38e38e38e38e;
  param_1[0x26] = lVar7;
  param_1[0x27] = 0;
  local_90 = 0x549808a32bfb596d;
  local_88 = PTR_s_Morphing2Pass1_047e1230;
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  local_b0 = (long *)&DAT_e343db16baefcc7;
  pcStack_a8 = "[PartialBlendShape_Pass1]";
  local_a0 = 0x19;
  local_98 = (long *)0x0;
  if (lVar7 == 0) {
    lVar7 = *(long *)(DAT_0485a0d0 + 8);
  }
  local_70 = DAT_0485a0d0;
  lVar7 = FUN_00dfee60(auStack_68,lVar7,&local_70,&local_b0);
  if (lVar7 != 0) {
    piVar12 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) {
      pcVar11 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      goto LAB_010c1764;
    }
  }
  if (*local_88 != '\0') {
    FUN_00eac828(lVar7,&local_90);
  }
  plVar8 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar9 = *plVar1;
      iVar6 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_010c1594;
  }
  param_1[0x1e] = lVar7;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  *(undefined4 *)(param_1[0x1e] + 0x100) = 3;
  FUN_00c973e4(*(undefined8 *)(param_1[0x1e] + 200),0);
  lVar7 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x20) + 0x10))();
  }
  local_90 = 0x16225f9fc77586f1;
  local_88 = PTR_s_PartialBlendShape_Pass1_047e1238;
  local_80 = 0x1f;
  local_78 = (long *)0x0;
  FUN_00eb0610(&local_b0,*(undefined8 *)(lVar7 + 0x40),&local_90);
  lVar9 = FUN_010bf4b8(&local_90,param_1[1],&local_b0);
  if (lVar9 == 0) {
LAB_010c11b8:
    plVar8 = (long *)*plVar19;
    *plVar19 = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        lVar3 = *plVar1;
        iVar6 = (int)lVar3 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar3 == 0) goto LAB_010c1594;
    }
    *plVar19 = lVar9;
    plVar19 = DAT_0485a0a0;
    if (DAT_0485a0a0 != (long *)0x0) {
      plVar8 = DAT_0485a0a0 + 5;
      do {
        lVar9 = *plVar8;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar9 == -1) goto LAB_010c1744;
    }
    plVar8 = (long *)plVar19[1];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0x90,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*plVar8 + 0xe8))(plVar8);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_00cf38a8(puVar10,plVar19);
    puVar10[2] = puVar10;
    *puVar10 = &DAT_045d7088;
    puVar10[1] = plVar8;
    puVar10[4] = &PTR_LAB_045d70c8;
    *(undefined4 *)(puVar10 + 3) = 0x80090;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    piVar12 = (int *)(puVar10 + 5);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 != -1) {
      local_80 = local_80 & 0xffffffff00000000;
      local_90 = 0x10;
      local_88 = (char *)0x100;
      FUN_00d560a0(puVar10,&local_90,2,0,0);
      plVar8 = (long *)param_1[0x27];
      param_1[0x27] = 0;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_010c1594;
      }
      param_1[0x27] = (long)puVar10;
      FUN_00c41540(puVar10);
      *(undefined8 *)((long)puVar10 + 0x84) = 0;
      *(undefined8 *)((long)puVar10 + 0x7c) = 0;
      lVar9 = *param_2;
      if (lVar9 != 0) {
        piVar12 = (int *)(lVar9 + 0x28);
        do {
          iVar6 = *piVar12;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar5) {
            *piVar12 = iVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == -1) goto LAB_010c1744;
      }
      plVar8 = (long *)param_1[7];
      param_1[7] = lVar9;
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar9 == 0) goto LAB_010c1594;
      }
      puVar13 = (undefined1 *)param_1[8];
      uVar14 = *(long *)(param_1[7] + 0x78) - *(long *)(param_1[7] + 0x70);
      uVar20 = uVar14 >> 3 & 0xffffffff;
      uVar18 = (uint)(uVar14 >> 3);
      uVar14 = uVar20;
      if (3 < uVar18) {
        uVar14 = 4;
      }
      puVar15 = (undefined1 *)param_1[9];
      uVar17 = (long)puVar15 - (long)puVar13 >> 3;
      if (uVar17 < uVar14) {
        FUN_010bfd08(param_1 + 8,uVar14 - uVar17);
        puVar13 = (undefined1 *)param_1[8];
        puVar15 = (undefined1 *)param_1[9];
      }
      else if (uVar14 < uVar17) {
        puVar15 = puVar13 + uVar14 * 8;
        param_1[9] = (long)puVar15;
      }
      uVar14 = (long)puVar15 - (long)puVar13;
      if ((((0 < (long)uVar14) && (*puVar13 = 0, 8 < uVar14)) && (puVar13[8] = 0, 0x10 < uVar14)) &&
         (((puVar13[0x10] = 0, 0x18 < uVar14 && (puVar13[0x18] = 0, 0x20 < uVar14)) &&
          (puVar13[0x20] = 0, 0x28 < uVar14)))) {
        lVar9 = (uVar14 >> 3) - 4;
        puVar13 = puVar13 + 0x28;
        do {
          lVar9 = lVar9 + -1;
          *puVar13 = 0;
          puVar13 = puVar13 + 8;
        } while (1 < lVar9);
      }
      puVar13 = (undefined1 *)param_1[0xf];
      puVar15 = (undefined1 *)param_1[0x10];
      uVar14 = (long)puVar15 - (long)puVar13 >> 3;
      if (uVar14 < uVar20) {
        FUN_010bfd08(param_1 + 0xf,uVar20 - uVar14);
        puVar13 = (undefined1 *)param_1[0xf];
        puVar15 = (undefined1 *)param_1[0x10];
      }
      else if (uVar20 < uVar14) {
        puVar15 = puVar13 + uVar20 * 8;
        param_1[0x10] = (long)puVar15;
      }
      if (puVar13 != puVar15) {
        uVar14 = ((ulong)(puVar15 + (-8 - (long)puVar13)) >> 3) + 1;
        uVar17 = uVar14 & 3;
        if (puVar15 + (-8 - (long)puVar13) < (undefined1 *)0x18) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          do {
            iVar6 = (int)uVar16;
            *(int *)(puVar13 + 0xc) = iVar6 + 1;
            *(int *)(puVar13 + 4) = iVar6;
            *puVar13 = 1;
            puVar13[8] = 1;
            *(int *)(puVar13 + 0x14) = iVar6 + 2;
            uVar16 = uVar16 + 4;
            puVar13[0x10] = 1;
            *(int *)(puVar13 + 0x1c) = iVar6 + 3;
            puVar13[0x18] = 1;
            puVar13 = puVar13 + 0x20;
          } while ((uVar14 & 0x3ffffffffffffffc) != uVar16);
        }
        if (uVar17 != 0) {
          piVar12 = (int *)(puVar13 + 4);
          lVar9 = -uVar17;
          do {
            *piVar12 = (int)uVar16;
            bVar5 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            uVar16 = (ulong)((int)uVar16 + 1);
            *(undefined1 *)(piVar12 + -1) = 1;
            piVar12 = piVar12 + 2;
          } while (bVar5);
        }
      }
      FUN_00d7684c(param_1 + 0x16,uVar20,0);
      if (uVar18 != 0) {
        uVar14 = 0;
        do {
          uVar17 = uVar14 >> 6;
          uVar16 = 1L << (uVar14 & 0x3f);
          lVar9 = param_1[0x16];
          if (*(float *)(*(long *)(*(long *)(param_1[7] + 0x70) + uVar14 * 8) + 0x90) == 0.0) {
            uVar16 = *(ulong *)(lVar9 + uVar17 * 8) & (uVar16 ^ 0xffffffffffffffff);
          }
          else {
            uVar16 = *(ulong *)(lVar9 + uVar17 * 8) | uVar16;
          }
          uVar14 = uVar14 + 1;
          *(ulong *)(lVar9 + uVar17 * 8) = uVar16;
        } while (uVar20 != uVar14);
      }
      if (plVar19 != (long *)0x0) {
        plVar8 = plVar19 + 5;
        do {
          lVar9 = *plVar8;
          iVar6 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *(int *)plVar8 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
        else if ((int)lVar9 == 0) goto LAB_010c1594;
      }
      if (local_b0 != (long *)0x0) {
        plVar19 = local_b0 + 5;
        do {
          lVar9 = *plVar19;
          iVar6 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
LAB_010c1594:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x20) + 0x18))((long *)(lVar7 + 0x20));
      }
      return;
    }
  }
  else {
    piVar12 = (int *)(lVar9 + 0x28);
    do {
      iVar6 = *piVar12;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar5) {
        *piVar12 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 != -1) goto LAB_010c11b8;
  }
LAB_010c1744:
  pcVar11 = 
  "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
  ;
LAB_010c1764:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != 0","IncrementReferenceInternal",pcVar11,0x53,"Reference counter overflows.");
}


