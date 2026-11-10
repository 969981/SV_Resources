/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f7054; name: FUN_010f7054
 */


void FUN_010f7054(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ushort uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong *puVar18;
  long lVar19;
  long *plVar20;
  char *pcVar21;
  long *plVar22;
  long *local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar19 = *(long *)(DAT_0485a0d8 + 0x38);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x20) + 0x10))();
  }
  plVar20 = *(long **)(lVar19 + 0xd048);
  if (plVar20 != (long *)0x0) {
    plVar1 = plVar20 + 5;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_00c5ecb4(&local_a8,lVar19,param_2);
    if (local_a8 != (long *)0x0) {
      puVar18 = (ulong *)(param_2 + 8);
      uVar13 = *puVar18;
      uVar14 = *(ulong *)(param_1 + 0x240);
      if (uVar14 != 0) {
        uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
        uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar15 < 2) {
          uVar16 = uVar14 - 1 & uVar13;
        }
        else if (uVar13 < uVar14) {
          uVar16 = uVar13;
        }
        else {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = uVar13 / uVar14;
          }
          uVar16 = uVar13 - uVar16 * uVar14;
        }
        plVar17 = *(long **)(*(long *)(param_1 + 0x238) + uVar16 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          if (uVar15 < 2) {
            do {
              if (plVar17[1] == uVar13) {
                if (plVar17[2] == uVar13) goto LAB_010f7554;
              }
              else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar15 = plVar17[1];
              if (uVar15 == uVar13) {
                if (plVar17[2] == uVar13) goto LAB_010f7554;
              }
              else {
                if (uVar14 <= uVar15) {
                  uVar7 = 0;
                  if (uVar14 != 0) {
                    uVar7 = uVar15 / uVar14;
                  }
                  uVar15 = uVar15 - uVar7 * uVar14;
                }
                if (uVar15 != uVar16) break;
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
        }
      }
      FUN_010f8374((long *)(param_1 + 0x238),puVar18);
      FUN_00fff1a4(&local_b0,lVar19,param_2);
      puVar9 = PTR_DAT_047d3e30;
      puVar8 = PTR_DAT_047d3e28;
      plVar17 = (long *)plVar20[0xc];
      if (plVar17 != (long *)0x0) {
        iVar4 = *(int *)(local_b0[0x11] + 0xb8);
        do {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar8);
          }
          local_80 = *(undefined8 *)puVar9;
          pcVar21 = *(char **)(puVar9 + 8);
          local_70 = *(undefined8 *)(puVar9 + 0x10);
          plVar3 = *(long **)(puVar9 + 0x18);
          local_78 = pcVar21;
          local_68 = plVar3;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
          lVar12 = plVar17[10];
          plVar2 = plVar17 + 2;
          if (lVar12 == 0x1b2c6594dd097990) {
LAB_010f72ec:
            if (((iVar4 == 0) || (*plVar2 == 0xbad51c2e071c243)) || (*plVar2 == -0x69251bd9901e9766)
               ) {
              lVar12 = *(long *)(param_1 + 0x40);
            }
            else {
LAB_010f73e0:
              lVar12 = *(long *)(param_1 + 0x50);
            }
            local_80 = *(undefined8 *)(lVar12 + 0x38);
            pcVar21 = *(char **)(lVar12 + 0x40);
            local_70 = *(undefined8 *)(lVar12 + 0x48);
            plVar22 = *(long **)(lVar12 + 0x50);
            local_78 = pcVar21;
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x18))(plVar22);
            }
            local_68 = plVar22;
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x20))(plVar3);
            }
          }
          else {
            if (lVar12 == 0x45a6fa210a564d58) goto LAB_010f73e0;
            if (lVar12 == 0x6723799257d05608) goto LAB_010f72ec;
            if ((*plVar2 == -0x61896429c8371ead) || (*plVar2 == 0x47c00760e1d27e23))
            goto LAB_010f73e0;
          }
          if (*pcVar21 != '\0') {
            if ((param_3 & 1) == 0) {
              local_a0 = &DAT_cbf29ce484222645;
              local_98 = &DAT_03c886bc;
              local_90 = 0;
              local_88 = (long *)0x0;
              FUN_010f76e8(local_a8,plVar2,&local_80,&local_a0);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
            }
            else {
              FUN_010f8ab0(local_a8,plVar2,&local_80);
            }
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      puVar8 = PTR_s_Shadow_047e11f0;
      if ((param_3 & 1) == 0) {
        local_80 = 0xe7d5621586e83d61;
        local_78 = PTR_s_Shadow_047e11f0;
        local_70 = 0x1f;
        local_68 = (long *)0x0;
        uVar10 = FUN_010f8714(local_a8,&local_80);
        if (((uVar10 & 0xff) != 0) && (0xff < uVar10)) {
          FUN_010f8374(param_1 + 0x2a0,puVar18);
          local_80 = 0xe7d5621586e83d61;
          local_78 = puVar8;
          local_70 = 0x1f;
          local_68 = (long *)0x0;
          FUN_010f7f40(local_a8,0,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          local_80 = 0xeed0538c14eaa7d2;
          local_78 = PTR_s_ShadowCascaded1_047e11f8;
          local_70 = 0x1f;
          local_68 = (long *)0x0;
          FUN_010f7f40(local_a8,0,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          local_80 = 0xeed0528c14eaa61f;
          local_78 = PTR_s_ShadowCascaded2_047e1200;
          local_70 = 0x1f;
          local_68 = (long *)0x0;
          FUN_010f7f40(local_a8,0,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          local_80 = 0xeed0518c14eaa46c;
          local_78 = PTR_s_ShadowCascaded3_047e1208;
          local_70 = 0x1f;
          local_68 = (long *)0x0;
          FUN_010f7f40(local_a8,0,&local_80);
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
        }
      }
      if (local_b0 != (long *)0x0) {
        plVar17 = local_b0 + 5;
        do {
          lVar12 = *plVar17;
          iVar4 = (int)lVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
        else if ((int)lVar12 == 0) goto LAB_010f75dc;
      }
LAB_010f7554:
      if (local_a8 != (long *)0x0) {
        plVar17 = local_a8 + 5;
        do {
          lVar12 = *plVar17;
          iVar4 = (int)lVar12 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *(int *)plVar17 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_a8 + 0x10))();
        }
        else if ((int)lVar12 == 0) goto LAB_010f75dc;
      }
    }
    do {
      lVar12 = *plVar1;
      iVar4 = (int)lVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
    else if ((int)lVar12 == 0) {
LAB_010f75dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x20) + 0x18))((long *)(lVar19 + 0x20));
  }
  return;
}


