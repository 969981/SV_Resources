/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f518c; name: FUN_011f518c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011f518c(long param_1)

{
  short *psVar1;
  long *plVar2;
  long **pplVar3;
  undefined2 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  bool bVar15;
  byte bVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  size_t sVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  ulong uVar27;
  char *pcVar28;
  undefined8 uVar29;
  char *pcVar30;
  char *pcVar31;
  char *pcVar32;
  int *piVar33;
  ushort *puVar34;
  undefined8 *puVar35;
  byte *pbVar36;
  short sVar37;
  long lVar38;
  long lVar39;
  bool bVar40;
  long lVar41;
  long *plVar42;
  byte *pbVar43;
  long *plVar44;
  undefined1 auVar45 [16];
  uint uVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  long *local_3b0;
  long *local_3a8;
  long *local_3a0;
  byte *pbStack_398;
  size_t local_390;
  long *plStack_388;
  long *local_380;
  byte *pbStack_378;
  undefined1 *local_370;
  long *local_368;
  long *local_360;
  ulong uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  code *local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 auStack_320 [96];
  undefined8 local_2c0;
  undefined8 local_2b0;
  code *local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined1 auStack_290 [96];
  undefined8 local_230;
  code *local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 auStack_210 [96];
  undefined8 local_1b0;
  long *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  long local_190;
  long *local_188;
  long *local_178;
  long **local_170;
  size_t local_168;
  long *local_160;
  long *local_158;
  char *local_150;
  byte *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  byte *pbStack_128;
  size_t local_120;
  long *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  
  switch(*(undefined4 *)(param_1 + 0x120)) {
  case 0:
    uVar27 = FUN_00de1730(*(undefined8 *)(param_1 + 0x128));
    if ((uVar27 & 1) != 0) {
      uVar17 = 1;
      goto LAB_011f57f0;
    }
    break;
  case 1:
    if (((*(short *)(param_1 + 0x130) == 0x3e6) || (*(short *)(param_1 + 0x130) == 999)) &&
       (*(short *)(param_1 + 0x132) == 1)) {
      bVar40 = true;
    }
    else {
      bVar40 = false;
    }
    lVar38 = *(long *)(param_1 + 0x128);
    FUN_00c9e664(&local_3b0,param_1 + 0xe8);
    plVar25 = local_3b0;
    if (local_3b0 != (long *)0x0) {
      (**(code **)(*local_3b0 + 0x58))(local_3b0);
    }
    cVar8 = *(char *)(param_1 + 0x135);
    iVar18 = *(int *)(param_1 + 0x140);
    uVar27 = FUN_00de1730(lVar38);
    if ((uVar27 & 1) == 0) {
      plVar42 = (long *)0x0;
    }
    else {
      plVar42 = (long *)FUN_011f91a0(plVar25,plVar25[1],lVar38 + 0x48);
      piVar33 = (int *)plVar42[0x2c];
      if (piVar33 != (int *)0x0) {
        puVar34 = (ushort *)((long)piVar33 - (long)*piVar33);
        if (*puVar34 < 7) {
          fVar47 = 1.2;
          fVar49 = 0.8;
        }
        else {
          if ((ulong)puVar34[3] == 0) {
            fVar49 = 0.8;
          }
          else {
            fVar49 = *(float *)((long)piVar33 + (ulong)puVar34[3]);
          }
          if ((*puVar34 < 9) || ((ulong)puVar34[4] == 0)) {
            fVar47 = 1.2;
          }
          else {
            fVar47 = *(float *)((long)piVar33 + (ulong)puVar34[4]);
          }
        }
        fVar50 = (float)(**(code **)PTR_PTR_047d9248)();
        *(float *)(plVar42 + 0x40) = fVar49 + (fVar47 - fVar49) * fVar50;
      }
      plVar42[0x1e] = plVar25[0x6d];
      plVar42[0x1f] = plVar25[0x6e];
      plVar42[0x20] = plVar25[0x6f];
      plVar44 = (long *)plVar25[0x70];
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
      }
      plVar24 = (long *)plVar42[0x21];
      plVar42[0x21] = (long)plVar44;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))();
      }
      if ((char)plVar42[0x36] != '\0') {
        lVar22 = FUN_011f9ac8(plVar25,plVar25[1],plVar25 + 0x6d);
        *(ulong *)(*(long *)(lVar22 + 0x120) + 0x108) =
             *(ulong *)(*(long *)(lVar22 + 0x120) + 0x108) & 0xfffffffffffffffe;
        pbStack_378 = SUB168(*(undefined1 (*) [16])(plVar42 + 0x3a),8);
        local_380 = SUB168(*(undefined1 (*) [16])(plVar42 + 0x3a),0);
        FUN_011f85b8(lVar22,&local_380);
        auVar48 = FUN_011f8710(plVar42);
        pbStack_378 = auVar48._8_8_;
        local_380 = auVar48._0_8_;
        FUN_011f8664(lVar22,&local_380);
        *(undefined1 *)(lVar22 + 0x170) = 0;
      }
      (**(code **)(*plVar25 + 0x18))(&local_380,plVar25);
      local_158 = (long *)0x0;
      local_150 = (char *)0x0;
      plVar44 = (long *)0x0;
      if (plVar25 != (long *)0x0) {
        plVar44 = plVar25 + 5;
      }
      if ((long *)local_380[2] == plVar44) {
        FUN_00c9ea00(&local_158,&local_380);
      }
      plVar44 = local_380;
      if (local_380 != (long *)0x0) {
        plVar24 = local_380 + 3;
        do {
          sVar37 = (short)*plVar24;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar15) {
            *(short *)plVar24 = sVar37 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar37 == 1) {
          piVar33 = (int *)((long)local_380 + 0x1c);
          do {
            iVar19 = *piVar33;
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar33,0x10);
            if (bVar15) {
              *piVar33 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_178 = (long *)*plVar44;
            FUN_00c44438(lVar22 + 0x8040,&local_178);
          }
        }
        else if (sVar37 == 0) goto LAB_011f5900;
      }
      FUN_00d0a34c(lVar38 + 0x240,&local_158);
      plVar44 = local_158;
      if (local_158 != (long *)0x0) {
        plVar24 = local_158 + 3;
        do {
          sVar37 = (short)*plVar24;
          cVar6 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar15) {
            *(short *)plVar24 = sVar37 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar37 == 1) {
          piVar33 = (int *)((long)local_158 + 0x1c);
          do {
            iVar19 = *piVar33;
            cVar6 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(piVar33,0x10);
            if (bVar15) {
              *piVar33 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar19 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar22 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar22;
            local_380 = (long *)*plVar44;
            FUN_00c44438(lVar22 + 0x8040,&local_380);
          }
        }
        else if (sVar37 == 0) {
LAB_011f5900:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      puVar12 = PTR_DAT_047d3e28;
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      puVar13 = PTR_DAT_047d3e30;
      bVar15 = cVar8 != '\0';
      local_178 = *(long **)PTR_DAT_047d3e30;
      local_170 = *(long ***)(PTR_DAT_047d3e30 + 8);
      local_168 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      plVar44 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      local_160 = plVar44;
      if (plVar44 == (long *)0x0) {
        if (!(bool)(bVar40 | bVar15)) goto LAB_011f587c;
        local_170 = (long **)&DAT_03be27c8;
        local_178 = (long *)0x331c1e1671a5c0dd;
        local_168 = 4;
LAB_011f55e8:
        local_160 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        if (!(!bVar40 && !bVar15)) {
          local_178 = (long *)0x331c1e1671a5c0dd;
          local_170 = (long **)&DAT_03be27c8;
          local_168 = 4;
LAB_011f5868:
          local_160 = (long *)0x0;
          (**(code **)(*plVar44 + 0x20))(plVar44);
          goto LAB_011f55e8;
        }
LAB_011f587c:
        if (-1 < *(int *)(*(long *)(lVar38 + 0x40) + 0x130)) {
          local_170 = (long **)0x3c31ffa;
          local_178 = (long *)0xe5583797befa0b92;
          local_168 = 6;
          if (plVar44 == (long *)0x0) goto LAB_011f55e8;
          goto LAB_011f5868;
        }
      }
      plVar24 = (long *)&DAT_cbf29ce484222645;
      if ((*(long *)(lVar38 + 600) != 0) && ((*(byte *)(*(long *)(lVar38 + 600) + 0x1e8) & 1) != 0))
      {
        if (-1 < iVar18) {
          puVar26 = *(undefined8 **)(*(long *)(lVar38 + 600) + 0x210);
          puVar35 = *(undefined8 **)(*(long *)(lVar38 + 600) + 0x218);
          puVar23 = puVar26;
          if ((puVar26 != puVar35) && ((long *)*puVar26 != local_178)) {
            do {
              puVar23 = puVar23 + 0x19;
              if (puVar35 == puVar23) {
                puVar23 = puVar35;
                goto LAB_011f5960;
              }
            } while ((long *)*puVar23 != local_178);
          }
LAB_011f5960:
          if ((puVar35 == puVar23) ||
             ((int)((ulong)((long)puVar23 - (long)puVar26) >> 3) * -0x3d70a3d7 < 0)) {
            memset(&local_380,0,0x100);
            pcVar28 = "_flower";
            switch(iVar18) {
            case 1:
              pcVar28 = "_blueberry";
              break;
            case 2:
              pcVar28 = "_heart";
              break;
            case 3:
              pcVar28 = "_star";
              break;
            case 4:
              pcVar28 = "_clover";
              break;
            case 5:
              break;
            case 6:
              pcVar28 = "_ribbon";
              break;
            default:
              pcVar28 = "_strawberry";
            }
            local_380 = (long *)((ulong)local_380 & 0xffffffffffffff00);
            strcat((char *)&local_380,(char *)local_170);
            strcat((char *)&local_380,pcVar28);
            local_168 = strlen((char *)&local_380);
            plVar44 = local_160;
            local_178 = (long *)&DAT_cbf29ce484222645;
            if ((byte)local_380 != 0) {
              local_178 = (long *)&DAT_cbf29ce484222645;
              pbVar43 = (byte *)((ulong)&local_380 | 1);
              bVar16 = (byte)local_380;
              do {
                local_178 = (long *)(((ulong)local_178 ^ (ulong)bVar16) * 0x100000001b3);
                bVar16 = *pbVar43;
                pbVar43 = pbVar43 + 1;
              } while (bVar16 != 0);
            }
            local_160 = (long *)0x0;
            local_170 = &local_380;
            if (plVar44 != (long *)0x0) {
              (**(code **)(*plVar44 + 0x20))();
            }
            local_160 = (long *)0x0;
          }
        }
        plVar44 = *(long **)(lVar38 + 8);
        if (((DAT_04865a38 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar22 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar22 + 0x80)) {
LAB_011f75e0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar44;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
        lVar39 = (**(code **)(*plVar44 + 0x10))(plVar44,0x158,8);
        if (lVar39 == 0) {
          lVar38 = *plVar44;
LAB_011f75b8:
          (**(code **)(lVar38 + 0xe8))(plVar44);
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("ptr","Create",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
                     ,0x40);
        }
        FUN_0102f570(lVar39,&local_178);
        puVar23 = *(undefined8 **)(*(long *)(lVar38 + 600) + 0x210);
        lVar41 = *(long *)(*(long *)(lVar38 + 600) + 0x218) - (long)puVar23;
        if (lVar41 != 0) {
          uVar27 = (lVar41 >> 3) * -0x70a3d70a3d70a3d7;
          if (uVar27 < 2) {
            uVar27 = 1;
          }
          do {
            if ((long *)*puVar23 == local_178) {
              FUN_0102f6ec(lVar39);
              break;
            }
            uVar27 = uVar27 - 1;
            puVar23 = puVar23 + 0x19;
          } while (uVar27 != 0);
        }
        *(undefined4 *)(lVar39 + 0x18) = 0x80158;
        *(long **)(lVar39 + 8) = plVar44;
        *(long *)(lVar39 + 0x10) = lVar39;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        piVar33 = (int *)(lVar39 + 0x28);
        do {
          iVar18 = *piVar33;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(piVar33,0x10);
          if (bVar40) {
            *piVar33 = iVar18 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar18 == -1) goto LAB_011f6350;
        plVar44 = *(long **)(lVar38 + 0x290);
        *(undefined8 *)(lVar38 + 0x290) = 0;
        if (plVar44 != (long *)0x0) {
          plVar2 = plVar44 + 5;
          do {
            lVar22 = *plVar2;
            iVar18 = (int)lVar22 + -1;
            cVar8 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar40) {
              *(int *)plVar2 = iVar18;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar44 + 0x10))();
          }
          else if ((int)lVar22 == 0) goto LAB_011f7760;
        }
        *(long *)(lVar38 + 0x290) = lVar39;
      }
      local_380 = (long *)0x0;
      pbStack_378 = &DAT_cbf29ce484222645;
      local_370 = &DAT_03c886bc;
      local_368 = (long *)0x0;
      local_360 = (long *)0x0;
      uStack_358 = uStack_358 & 0xffffffff00000000;
      local_350 = CONCAT62(local_350._2_6_,0x101);
      local_2c0 = 0;
      local_1b0 = 0;
      local_1a8 = (long *)0x0;
      local_1a0 = &DAT_cbf29ce484222645;
      local_198 = &DAT_03c886bc;
      local_190 = 0;
      local_188 = (long *)0x0;
      local_340 = 0;
      local_338 = (code *)0x0;
      local_330 = 0;
      uStack_328 = 0;
      local_2b0 = 0;
      local_2a8 = (code *)0x0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_230 = 0;
      local_228 = (code *)0x0;
      local_220 = 0;
      uStack_218 = 0;
      plVar44 = *(long **)(lVar38 + 0x298);
      if (plVar44 == (long *)0x0) {
      }
      else {
        (**(code **)(*plVar44 + 0x18))(plVar44);
        if (local_380 != (long *)0x0) {
          lVar22 = *local_380;
          local_380 = plVar44;
          (**(code **)(lVar22 + 0x20))();
          plVar44 = local_380;
        }
      }
      local_380 = plVar44;
      pbStack_378 = *(byte **)(lVar38 + 0x2a0);
      local_370 = *(undefined1 **)(lVar38 + 0x2a8);
      local_368 = *(long **)(lVar38 + 0x2b0);
      plVar44 = *(long **)(lVar38 + 0x2b8);
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
      }
      if (local_360 != (long *)0x0) {
        lVar22 = *local_360;
        local_360 = plVar44;
        (**(code **)(lVar22 + 0x20))();
        plVar44 = local_360;
      }
      local_360 = plVar44;
      uStack_358 = CONCAT44(uStack_358._4_4_,*(undefined4 *)(lVar38 + 0x2c0));
      local_350 = CONCAT71(local_350._1_7_,1);
      plVar44 = *(long **)(lVar38 + 0x290);
      if (plVar44 != (long *)0x0) {
        plVar2 = plVar44 + 5;
        do {
          lVar22 = *plVar2;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar40) {
            *(int *)plVar2 = (int)lVar22 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((int)lVar22 == -1) {
LAB_011f6350:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      if (local_1a8 != (long *)0x0) {
        plVar2 = local_1a8 + 5;
        do {
          lVar22 = *plVar2;
          iVar18 = (int)lVar22 + -1;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar40) {
            *(int *)plVar2 = iVar18;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar18 == 0) {
          lVar22 = *local_1a8;
          local_1a8 = plVar44;
          (**(code **)(lVar22 + 0x10))();
          plVar44 = local_1a8;
        }
        else {
          local_1a8 = plVar44;
          if ((int)lVar22 == 0) goto LAB_011f7760;
        }
      }
      local_1a8 = plVar44;
      local_1a0 = (undefined1 *)plVar25[0x6d];
      local_198 = (undefined1 *)plVar25[0x6e];
      local_190 = plVar25[0x6f];
      plVar44 = (long *)plVar25[0x70];
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
      }
      if (local_188 != (long *)0x0) {
        lVar22 = *local_188;
        local_188 = plVar44;
        (**(code **)(lVar22 + 0x20))();
        plVar44 = local_188;
      }
      local_188 = plVar44;
      plVar44 = (long *)(lVar38 + 0x50);
      piVar33 = (int *)0x0;
      if (*plVar44 != 0) {
        if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
          piVar33 = (int *)0x0;
        }
        else {
          puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
          piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
        }
      }
      if (((*(ushort *)((long)piVar33 - (long)*piVar33) < 0x31) ||
          (uVar27 = (ulong)((ushort *)((long)piVar33 - (long)*piVar33))[0x18], uVar27 == 0)) ||
         (*(char *)((long)piVar33 + uVar27) == '\0')) {
LAB_011f5fe0:
        bVar16 = (**(code **)(*plVar42 + 0x130))(plVar42);
        if (((*plVar44 == 0) || ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0)) ||
           (lVar22 = (**(code **)(*(long *)*plVar44 + 0x70))(), lVar22 == 0)) {
LAB_011f60b8:
          if (bVar16 != 4) {
            pbVar43 = (&PTR_DAT_04545080)[bVar16];
            goto LAB_011f6464;
          }
          if (((*puVar12 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar18 != 0)
             ) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          plVar24 = *(long **)puVar13;
          pbVar43 = *(byte **)(puVar13 + 8);
          sVar21 = *(size_t *)(puVar13 + 0x10);
          plVar44 = *(long **)(puVar13 + 0x18);
          local_3a0 = plVar24;
          pbStack_398 = pbVar43;
          local_390 = sVar21;
          plStack_388 = plVar44;
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 0x18))(plVar44);
          }
        }
        else {
          piVar33 = (int *)0x0;
          if (*plVar44 != 0) {
            if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
              piVar33 = (int *)0x0;
            }
            else {
              puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
              piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
            }
          }
          if (((*(ushort *)((long)piVar33 - (long)*piVar33) < 0x2d) ||
              (uVar27 = (ulong)((ushort *)((long)piVar33 - (long)*piVar33))[0x16], uVar27 == 0)) ||
             (*(char *)((long)piVar33 + uVar27) == '\0')) goto LAB_011f60b8;
          piVar33 = (int *)0x0;
          if (*plVar44 != 0) {
            if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
              piVar33 = (int *)0x0;
            }
            else {
              puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
              piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
            }
          }
          if ((0x2e < *(ushort *)((long)piVar33 - (long)*piVar33)) &&
             (uVar27 = (ulong)((ushort *)((long)piVar33 - (long)*piVar33))[0x17], uVar27 != 0)) {
            bVar16 = *(byte *)((long)piVar33 + uVar27);
            goto LAB_011f60b8;
          }
          pbVar43 = &DAT_03c4720a;
LAB_011f6464:
          sVar21 = strlen((char *)pbVar43);
          bVar16 = *pbVar43;
          if (bVar16 != 0) {
            plVar24 = (long *)&DAT_cbf29ce484222645;
            pbVar36 = pbVar43;
            do {
              pbVar36 = pbVar36 + 1;
              plVar24 = (long *)(((ulong)plVar24 ^ (ulong)bVar16) * 0x100000001b3);
              bVar16 = *pbVar36;
            } while (bVar16 != 0);
          }
          plVar44 = (long *)0x0;
          plStack_388 = (long *)0x0;
          local_3a0 = plVar24;
          pbStack_398 = pbVar43;
          local_390 = sVar21;
        }
        uVar29 = *(undefined8 *)(lVar38 + 8);
        local_158 = (long *)((ulong)local_158 & 0xffffffffffff0000);
        local_100 = 0;
        local_150 = (char *)0x75159f85934c919e;
        local_148 = (byte *)0x3c03b3b;
        local_f8 = &DAT_cbf29ce484222645;
        puStack_f0 = &DAT_03c886bc;
        local_e8 = 0;
        local_e0 = (long *)0x0;
        local_d8 = &DAT_cbf29ce484222645;
        puStack_d0 = &DAT_03c886bc;
        local_c8 = 0;
        local_c0 = (long *)0x0;
        local_98 = &DAT_cbf29ce484222645;
        puStack_90 = &DAT_03c886bc;
        local_88 = 0;
        local_80 = (long *)0x0;
        local_140 = (long *)0x7;
        local_138 = (long *)0x0;
        local_118 = (long *)0x0;
        local_130 = plVar24;
        pbStack_128 = pbVar43;
        local_120 = sVar21;
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x18))(plVar44);
        }
        local_118 = plVar44;
        FUN_0102e1b0(&local_380,uVar29,&local_158);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x20))();
        }
        if (local_118 != (long *)0x0) {
          (**(code **)(*local_118 + 0x20))();
        }
        if (local_138 != (long *)0x0) {
          (**(code **)(*local_138 + 0x20))();
        }
        if (plVar44 != (long *)0x0) {
          lVar38 = *plVar44;
LAB_011f6430:
          (**(code **)(lVar38 + 0x20))(plVar44);
        }
      }
      else {
        piVar33 = (int *)0x0;
        if (*plVar44 != 0) {
          if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
            piVar33 = (int *)0x0;
          }
          else {
            puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
            piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
          }
        }
        if (((*(ushort *)((long)piVar33 - (long)*piVar33) < 0x33) || (piVar33 == (int *)0x0)) ||
           (((ushort *)((long)piVar33 - (long)*piVar33))[0x19] == 0)) goto LAB_011f5fe0;
        uVar27 = (ulong)local_158 >> 8;
        local_150 = (char *)0x75159f85934c919e;
        local_148 = (byte *)0x3c03b3b;
        local_100 = 0;
        local_158 = (long *)CONCAT71((uint7)uVar27 & 0xffffffffffff00,3);
        local_130 = (long *)&DAT_cbf29ce484222645;
        pbStack_128 = &DAT_03c886bc;
        local_120 = 0;
        local_118 = (long *)0x0;
        local_f8 = &DAT_cbf29ce484222645;
        puStack_f0 = &DAT_03c886bc;
        local_e8 = 0;
        local_e0 = (long *)0x0;
        local_d8 = &DAT_cbf29ce484222645;
        puStack_d0 = &DAT_03c886bc;
        local_c8 = 0;
        local_c0 = (long *)0x0;
        local_98 = &DAT_cbf29ce484222645;
        puStack_90 = &DAT_03c886bc;
        local_88 = 0;
        local_80 = (long *)0x0;
        local_140 = (long *)0x7;
        local_138 = (long *)0x0;
        if (*plVar44 != 0) {
          if (((*(byte *)(*plVar44 + 0x1e8) & 1) != 0) &&
             (lVar22 = (**(code **)(*(long *)*plVar44 + 0x70))(), lVar22 != 0)) {
            piVar33 = (int *)0x0;
            if (*plVar44 != 0) {
              if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                piVar33 = (int *)0x0;
              }
              else {
                puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
              }
            }
            if (((0x32 < *(ushort *)((long)piVar33 - (long)*piVar33)) && (piVar33 != (int *)0x0)) &&
               (((ushort *)((long)piVar33 - (long)*piVar33))[0x19] != 0)) {
              piVar33 = (int *)0x0;
              if (*plVar44 != 0) {
                if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                  piVar33 = (int *)0x0;
                }
                else {
                  puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                  piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
                }
              }
              local_110 = *(undefined4 *)
                           ((long)piVar33 +
                           (ulong)*(ushort *)((long)piVar33 + (0x32 - (long)*piVar33)));
            }
          }
          if (*plVar44 != 0) {
            if (((*(byte *)(*plVar44 + 0x1e8) & 1) != 0) &&
               (lVar22 = (**(code **)(*(long *)*plVar44 + 0x70))(), lVar22 != 0)) {
              piVar33 = (int *)0x0;
              if (*plVar44 != 0) {
                if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                  piVar33 = (int *)0x0;
                }
                else {
                  puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                  piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
                }
              }
              if (((0x32 < *(ushort *)((long)piVar33 - (long)*piVar33)) && (piVar33 != (int *)0x0))
                 && (((ushort *)((long)piVar33 - (long)*piVar33))[0x19] != 0)) {
                piVar33 = (int *)0x0;
                if (*plVar44 != 0) {
                  if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                    piVar33 = (int *)0x0;
                  }
                  else {
                    puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                    piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
                  }
                }
                local_10c = *(undefined4 *)
                             ((long)piVar33 +
                             (ulong)*(ushort *)((long)piVar33 + (0x32 - (long)*piVar33)) + 4);
              }
            }
            if (((*plVar44 != 0) && ((*(byte *)(*plVar44 + 0x1e8) & 1) != 0)) &&
               (lVar22 = (**(code **)(*(long *)*plVar44 + 0x70))(), lVar22 != 0)) {
              piVar33 = (int *)0x0;
              if (*plVar44 != 0) {
                if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                  piVar33 = (int *)0x0;
                }
                else {
                  puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                  piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
                }
              }
              if (((0x32 < *(ushort *)((long)piVar33 - (long)*piVar33)) && (piVar33 != (int *)0x0))
                 && (((ushort *)((long)piVar33 - (long)*piVar33))[0x19] != 0)) {
                piVar33 = (int *)0x0;
                if (*plVar44 != 0) {
                  if ((*(byte *)(*plVar44 + 0x1e8) & 1) == 0) {
                    piVar33 = (int *)0x0;
                  }
                  else {
                    puVar20 = (uint *)(**(code **)(*(long *)*plVar44 + 0x70))();
                    piVar33 = (int *)((long)puVar20 + (ulong)*puVar20);
                  }
                }
                local_108 = *(undefined4 *)
                             ((long)piVar33 +
                             (ulong)*(ushort *)((long)piVar33 + (0x32 - (long)*piVar33)) + 8);
              }
            }
          }
        }
        FUN_0102e1b0(&local_380,*(undefined8 *)(lVar38 + 8),&local_158);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (local_c0 != (long *)0x0) {
          (**(code **)(*local_c0 + 0x20))();
        }
        if (local_e0 != (long *)0x0) {
          (**(code **)(*local_e0 + 0x20))();
        }
        if (local_118 != (long *)0x0) {
          (**(code **)(*local_118 + 0x20))();
        }
        if (local_138 != (long *)0x0) {
          lVar38 = *local_138;
          plVar44 = local_138;
          goto LAB_011f6430;
        }
      }
      lVar38 = FUN_010278b0(plVar25,plVar25[1],&local_380);
      *(long *)(lVar38 + 0xf0) = plVar25[0x6d];
      *(long *)(lVar38 + 0xf8) = plVar25[0x6e];
      *(long *)(lVar38 + 0x100) = plVar25[0x6f];
      plVar44 = (long *)plVar25[0x70];
      if (plVar44 != (long *)0x0) {
        (**(code **)(*plVar44 + 0x18))(plVar44);
      }
      plVar24 = *(long **)(lVar38 + 0x108);
      *(long **)(lVar38 + 0x108) = plVar44;
      if (plVar24 != (long *)0x0) {
        (**(code **)(*plVar24 + 0x20))();
      }
      if (local_188 != (long *)0x0) {
        (**(code **)(*local_188 + 0x20))();
      }
      if (local_1a8 != (long *)0x0) {
        plVar44 = local_1a8 + 5;
        do {
          lVar38 = *plVar44;
          iVar18 = (int)lVar38 + -1;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar44,0x10);
          if (bVar40) {
            *(int *)plVar44 = iVar18;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*local_1a8 + 0x10))();
        }
        else if ((int)lVar38 == 0) goto LAB_011f7760;
      }
      pcVar14 = local_228;
      if (local_228 != (code *)0x0) {
        local_220 = 0;
        uStack_218 = 0;
        local_230 = 0;
        local_228 = (code *)0x0;
        (*pcVar14)(auStack_210);
      }
      pcVar14 = local_2a8;
      if (local_2a8 != (code *)0x0) {
        local_2a0 = 0;
        uStack_298 = 0;
        local_2b0 = 0;
        local_2a8 = (code *)0x0;
        (*pcVar14)(auStack_290);
      }
      pcVar14 = local_338;
      if (local_338 != (code *)0x0) {
        local_330 = 0;
        uStack_328 = 0;
        local_340 = 0;
        local_338 = (code *)0x0;
        (*pcVar14)(auStack_320);
      }
      if (local_360 != (long *)0x0) {
        (**(code **)(*local_360 + 0x20))();
      }
      if (local_380 != (long *)0x0) {
        (**(code **)(*local_380 + 0x20))();
      }
      if (local_160 != (long *)0x0) {
        (**(code **)(*local_160 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x148) = plVar42;
    if (plVar25 != (long *)0x0) {
      (**(code **)(*plVar25 + 0x60))(plVar25);
    }
    if (local_3a8 != (long *)0x0) {
      plVar25 = local_3a8 + 5;
      do {
        lVar38 = *plVar25;
        iVar18 = (int)lVar38 + -1;
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar40) {
          *(int *)plVar25 = iVar18;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar18 == 0) {
        (**(code **)(*local_3a8 + 0x10))();
      }
      else if ((int)lVar38 == 0) {
LAB_011f7760:
        pcVar28 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar30 = "DecrementReferenceInternal";
        pcVar31 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar32 = "Reference counter underflows.";
LAB_011f7780:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar28,pcVar30,pcVar31,0x58,pcVar32);
      }
    }
    if (local_3b0 != (long *)0x0) {
      (**(code **)(*local_3b0 + 0x60))();
    }
    if (*(long *)(param_1 + 0x148) == 0) {
      return 1;
    }
    uVar17 = 2;
LAB_011f57f0:
    *(undefined4 *)(param_1 + 0x120) = uVar17;
    return 0;
  case 2:
    FUN_00c9e664(&local_380,param_1 + 0xe8);
    if (pbStack_378 == (byte *)0x0) {
      lVar38 = 0;
    }
    else {
      lVar38 = *(long *)(pbStack_378 + 0x48);
    }
    plVar25 = (long *)(lVar38 + 0x110);
    lVar39 = *plVar25;
    lVar22 = nn::os::GetCurrentThread();
    if (lVar22 != lVar39) {
      lVar22 = nn::os::GetCurrentThread();
LAB_011f520c:
      if (*plVar25 == 0) goto code_r0x011f5214;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x118));
      do {
        if (*plVar25 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x118));
            while (*plVar25 == 0) {
              cVar8 = '\x01';
              bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar40) {
                *plVar25 = lVar22;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_011f521c;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar40) {
          *plVar25 = lVar22;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_011f521c:
      bVar40 = false;
      goto LAB_011f5220;
    }
    bVar40 = true;
LAB_011f5220:
    plVar25 = (long *)FUN_011f7c10(*(undefined8 *)(lVar38 + 0x128),*(undefined8 *)(lVar38 + 0x130));
    if ((*(long **)(lVar38 + 0x130) == plVar25) || (*plVar25 == 0)) {
      plVar25 = (long *)FUN_011f7c10(*(undefined8 *)(lVar38 + 0x160),*(undefined8 *)(lVar38 + 0x168)
                                    );
      if (*(long **)(lVar38 + 0x168) == plVar25) {
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
        if (*plVar25 != 0) {
          lVar22 = *plVar25 + -0x20;
        }
      }
    }
    else {
      lVar22 = *plVar25 + -0x20;
    }
    if (!bVar40) {
      *(undefined8 *)(lVar38 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar38 + 0x118));
    }
    if (pbStack_378 != (byte *)0x0) {
      pbVar43 = pbStack_378 + 0x28;
      do {
        iVar18 = *(int *)pbVar43;
        iVar19 = iVar18 + -1;
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(pbVar43,0x10);
        if (bVar40) {
          *(int *)pbVar43 = iVar19;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*(long *)pbStack_378 + 0x10))();
      }
      else if (iVar18 == 0) goto LAB_011f7760;
    }
    if (local_380 != (long *)0x0) {
      (**(code **)(*local_380 + 0x60))();
    }
    if ((lVar22 != 0) && (*(int *)(lVar22 + 0x130) == 3)) {
      if (*(long *)(lVar22 + 0x120) != 0) {
        *(undefined1 *)(*(long *)(lVar22 + 0x120) + 0x213) = 0;
      }
      uVar17 = 3;
      goto LAB_011f57f0;
    }
    break;
  case 3:
    lVar22 = *(long *)(param_1 + 0x128);
    *(undefined2 *)(lVar22 + 0x3b8) = *(undefined2 *)(param_1 + 0x132);
    lVar38 = *(long *)(lVar22 + 0x240);
    if ((lVar38 != 0) && (*(short *)(lVar38 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar38 + 0x1a);
      sVar37 = *(short *)(lVar38 + 0x1a);
LAB_011f68e0:
      sVar5 = *psVar1;
      if (sVar5 == sVar37) {
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar40) {
          *psVar1 = sVar37 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_011f6904;
        bVar40 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011f6904:
        bVar40 = false;
      }
      if (!bVar40) goto code_r0x011f690c;
      lVar38 = *(long *)(lVar38 + 0x10);
      if (lVar38 == 0) goto LAB_011f5670;
      plVar25 = (long *)(lVar38 + -0x28);
      if ((*(long *)(lVar22 + 0x290) != 0) && (-1 < *(int *)(*(long *)(lVar22 + 0x40) + 0x130))) {
        local_380 = (long *)0xbf8b61f5d652cdd8;
        pbStack_378 = (byte *)0x3c429eb;
        local_370 = (undefined1 *)0x5;
        local_368 = (long *)0x0;
        lVar39 = FUN_0118aa4c(plVar25,*(undefined8 *)(lVar38 + -0x20));
        local_3a0 = *(long **)(lVar22 + 0x290);
        if (local_3a0 != (long *)0x0) {
          plVar44 = local_3a0 + 5;
          do {
            lVar41 = *plVar44;
            cVar8 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar40) {
              *(int *)plVar44 = (int)lVar41 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if ((int)lVar41 == -1) goto LAB_011f6350;
        }
        FUN_0102f200(lVar39,&local_3a0,0);
        if (local_3a0 != (long *)0x0) {
          plVar44 = local_3a0 + 5;
          do {
            lVar41 = *plVar44;
            iVar18 = (int)lVar41 + -1;
            cVar8 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar44,0x10);
            if (bVar40) {
              *(int *)plVar44 = iVar18;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*local_3a0 + 0x10))();
            goto LAB_011f763c;
          }
          if ((int)lVar41 != 0) goto LAB_011f763c;
          goto LAB_011f7760;
        }
LAB_011f763c:
        FUN_0118fe00(lVar39,&local_380,*(undefined4 *)(*(long *)(lVar22 + 0x40) + 0x130));
        *(undefined8 *)(lVar39 + 0xf0) = *(undefined8 *)(lVar38 + 0x340);
        *(undefined8 *)(lVar39 + 0xf8) = *(undefined8 *)(lVar38 + 0x348);
        *(undefined8 *)(lVar39 + 0x100) = *(undefined8 *)(lVar38 + 0x350);
        plVar44 = *(long **)(lVar38 + 0x358);
        if (plVar44 != (long *)0x0) {
          (**(code **)(*plVar44 + 0x18))(plVar44);
        }
        plVar42 = *(long **)(lVar39 + 0x108);
        *(long **)(lVar39 + 0x108) = plVar44;
        if (plVar42 != (long *)0x0) {
          (**(code **)(*plVar42 + 0x20))();
        }
        if (local_368 != (long *)0x0) {
          (**(code **)(*local_368 + 0x20))();
        }
      }
      if (*(long *)(lVar22 + 0x148) != 0) {
        FUN_0135d328(&local_178,*(undefined8 *)(lVar22 + 8),0);
        plVar44 = *(long **)(lVar22 + 0x120);
        if (plVar44 != (long *)0x0) {
          do {
            if (plVar44[3] != 0) {
              lVar39 = FUN_01188b88(plVar25,*(undefined8 *)(lVar38 + -0x20));
              local_158 = (long *)(plVar44[3] + 0x20);
              plVar42 = (long *)0x0;
              if (plVar44[3] != 0) {
                (**(code **)(*local_158 + 0x10))();
                plVar42 = local_158;
              }
              local_158 = plVar42;
              local_368 = (long *)0x0;
              local_380 = (long *)&DAT_afc4d6c05abef19e;
              pbStack_378 = (byte *)0x3c7b602;
              local_370 = (undefined1 *)0x7;
              FUN_01188090(lVar39,&local_158,&local_380,0);
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x20))();
              }
              if (local_158 != (long *)0x0) {
                (**(code **)(*local_158 + 0x18))();
              }
              std::to_string((uint)*(ushort *)(plVar44 + 2));
              pbVar43 = (byte *)((ulong)&local_158 | 1);
              if ((((ulong)local_158 & 1) == 0) || (pbVar43 = local_148, local_148 != (byte *)0x0))
              {
                local_370 = (undefined1 *)strlen((char *)pbVar43);
                bVar16 = *pbVar43;
                local_380 = (long *)&DAT_cbf29ce484222645;
                if (bVar16 != 0) {
                  local_380 = (long *)&DAT_cbf29ce484222645;
                  pbVar36 = pbVar43;
                  do {
                    pbVar36 = pbVar36 + 1;
                    local_380 = (long *)(((ulong)local_380 ^ (ulong)bVar16) * 0x100000001b3);
                    bVar16 = *pbVar36;
                  } while (bVar16 != 0);
                }
                local_368 = (long *)0x0;
                pbStack_378 = pbVar43;
              }
              else {
                if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                   (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar18 != 0)) {
                  FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3e28);
                }
                local_380 = *(long **)PTR_DAT_047d3e30;
                pbStack_378 = *(byte **)(PTR_DAT_047d3e30 + 8);
                local_370 = *(undefined1 **)(PTR_DAT_047d3e30 + 0x10);
                local_368 = *(long **)(PTR_DAT_047d3e30 + 0x18);
                if (local_368 != (long *)0x0) {
                  (**(code **)(*local_368 + 0x18))();
                }
              }
              FUN_01221800(&local_3b0,lVar38 + 0x340,&local_380);
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x20))();
              }
              pbVar43 = local_148;
              if ((((ulong)local_158 & 1) != 0) && (local_148 != (byte *)0x0)) {
                lVar41 = tpidr_el0;
                plVar42 = *(long **)(lVar41 + 0x30);
                if (plVar42 == (long *)0x0) {
                  if (((DAT_04859438 & 1) == 0) &&
                     (iVar18 = __cxa_guard_acquire(&DAT_04859438), iVar18 != 0)) {
                    DAT_04859430 = DAT_04859418;
                    __cxa_guard_release(&DAT_04859438);
                  }
                  plVar42 = DAT_04859430;
                  *(long **)(lVar41 + 0x30) = DAT_04859430;
                }
                uVar27 = (**(code **)(*plVar42 + 0xf8))(plVar42);
                if (((uVar27 & 1) == 0) || (lVar41 = FUN_00c4e600(), *(int *)(lVar41 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar42 + 0x18))(plVar42,pbVar43,0,8);
                }
                else {
                  FUN_00c48fe8(plVar42,pbVar43,0,8);
                }
              }
              FUN_0135d26c(&local_380,&local_3b0);
              plVar42 = local_368;
              *(long **)(lVar39 + 0xf0) = local_380;
              *(byte **)(lVar39 + 0xf8) = pbStack_378;
              *(undefined1 **)(lVar39 + 0x100) = local_370;
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x18))(local_368);
              }
              plVar24 = *(long **)(lVar39 + 0x108);
              *(long **)(lVar39 + 0x108) = plVar42;
              if (plVar24 != (long *)0x0) {
                (**(code **)(*plVar24 + 0x20))();
              }
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x20))();
              }
              if ((short)plVar44[2] != *(short *)(lVar22 + 0x3b8)) {
                FUN_018d3bd8(lVar39);
              }
              if (local_3b0 != (long *)0x0) {
                (**(code **)(*local_3b0 + 0x20))();
              }
            }
            plVar44 = (long *)*plVar44;
          } while (plVar44 != (long *)0x0);
        }
        FUN_0111b234(plVar25,*(undefined8 *)(lVar38 + -0x20));
        plVar44 = *(long **)(lVar38 + -0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_04865a38), iVar18 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar22 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_011f75e0;
        *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = plVar44;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
        plVar42 = (long *)(**(code **)(*plVar44 + 0x10))(plVar44,0x1e0,8);
        if (plVar42 == (long *)0x0) {
          lVar38 = *plVar44;
          goto LAB_011f75b8;
        }
        FUN_013e3b98(plVar42,*(undefined2 *)(param_1 + 0x130));
        *(undefined4 *)(plVar42 + 3) = 0x801e0;
        plVar42[1] = (long)plVar44;
        plVar42[2] = (long)plVar42;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        lVar22 = plVar42[0x13];
        if (*(long *)(lVar22 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar22 + 0x1a);
        do {
          sVar37 = *psVar1;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar40) {
            *psVar1 = sVar37 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (sVar37 == 0) {
          uVar29 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          *(undefined8 *)(lVar22 + 8) = uVar29;
          *(undefined4 *)(lVar22 + 0x1c) = 0xfffffffe;
        }
        else if (sVar37 == -1) {
          pcVar28 = "count != 0";
          pcVar30 = "AddReference";
          pcVar31 = 
          "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
          ;
          pcVar32 = "Reference counter overflows.";
          goto LAB_011f7780;
        }
        plVar44 = plVar42 + 4;
        (**(code **)(*plVar44 + 0xe8))(plVar44,plVar25);
        (**(code **)(*plVar44 + 0x68))(plVar44);
        local_380 = plVar42;
        FUN_00df8c30(lVar38 + 0xe0,&local_380);
        if (local_380 != (long *)0x0) {
          lVar22 = local_380[0x13];
          psVar1 = (short *)(lVar22 + 0x1a);
          do {
            sVar37 = *psVar1;
            cVar8 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar40) {
              *psVar1 = sVar37 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (sVar37 == 1) {
            *(undefined8 *)(lVar22 + 0x10) = 0;
            (**(code **)(*local_380 + 0x50))();
          }
          else if (sVar37 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        (**(code **)(*(long *)(lVar38 + -0x28) + 0x100))(plVar25,plVar44);
        plVar42 = (long *)(lVar38 + 0x418);
        lVar39 = *plVar42;
        lVar22 = nn::os::GetCurrentThread();
        if (lVar22 != lVar39) {
          lVar22 = nn::os::GetCurrentThread();
LAB_011f6c7c:
          if (*plVar42 == 0) goto code_r0x011f6c84;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x420));
          do {
            if (*plVar42 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x420));
                while (*plVar42 == 0) {
                  cVar8 = '\x01';
                  bVar40 = (bool)ExclusiveMonitorPass(plVar42,0x10);
                  if (bVar40) {
                    *plVar42 = lVar22;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') goto LAB_011f6c8c;
                }
              } while( true );
            }
            cVar8 = '\x01';
            bVar40 = (bool)ExclusiveMonitorPass(plVar42,0x10);
            if (bVar40) {
              *plVar42 = lVar22;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
LAB_011f6c8c:
          bVar40 = false;
          goto LAB_011f6c90;
        }
        plVar42 = (long *)0x0;
        bVar40 = true;
LAB_011f6c90:
        if ((*(byte *)(lVar38 + 0x430) >> 2 & 1) == 0) {
          FUN_00d37964(plVar25,0,0);
        }
        else {
          (**(code **)(*plVar44 + 0xf8))(plVar44);
        }
        if (!bVar40) {
          *plVar42 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar42 + 1));
        }
        FUN_0135d2ec(&local_178);
      }
      (**(code **)(*plVar25 + 0x60))(plVar25);
    }
LAB_011f5670:
    FUN_00c9e664(&local_380,param_1 + 0xe8);
    if (pbStack_378 == (byte *)0x0) {
      lVar38 = 0;
    }
    else {
      lVar38 = *(long *)(pbStack_378 + 0x48);
    }
    plVar25 = (long *)(lVar38 + 0x110);
    lVar39 = *plVar25;
    lVar22 = nn::os::GetCurrentThread();
    if (lVar22 != lVar39) {
      lVar22 = nn::os::GetCurrentThread();
LAB_011f56a4:
      if (*plVar25 == 0) goto code_r0x011f56ac;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x118));
      do {
        if (*plVar25 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0x118));
            while (*plVar25 == 0) {
              cVar8 = '\x01';
              bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar40) {
                *plVar25 = lVar22;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_011f56b4;
            }
          } while( true );
        }
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar40) {
          *plVar25 = lVar22;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_011f56b4:
      bVar40 = false;
      goto LAB_011f56b8;
    }
    bVar40 = true;
LAB_011f56b8:
    plVar25 = (long *)FUN_011f7c10(*(undefined8 *)(lVar38 + 0x128),*(undefined8 *)(lVar38 + 0x130));
    if ((*(long **)(lVar38 + 0x130) == plVar25) || (*plVar25 == 0)) {
      plVar25 = (long *)FUN_011f7c10(*(undefined8 *)(lVar38 + 0x160),*(undefined8 *)(lVar38 + 0x168)
                                    );
      if (*(long **)(lVar38 + 0x168) == plVar25) {
        lVar22 = 0;
      }
      else {
        lVar22 = 0;
        if (*plVar25 != 0) {
          lVar22 = *plVar25 + -0x20;
        }
      }
    }
    else {
      lVar22 = *plVar25 + -0x20;
    }
    if (!bVar40) {
      *(undefined8 *)(lVar38 + 0x110) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar38 + 0x118));
    }
    if (pbStack_378 != (byte *)0x0) {
      pbVar43 = pbStack_378 + 0x28;
      do {
        iVar18 = *(int *)pbVar43;
        iVar19 = iVar18 + -1;
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(pbVar43,0x10);
        if (bVar40) {
          *(int *)pbVar43 = iVar19;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*(long *)pbStack_378 + 0x10))();
      }
      else if (iVar18 == 0) goto LAB_011f7760;
    }
    if (local_380 != (long *)0x0) {
      (**(code **)(*local_380 + 0x60))();
    }
    if ((lVar22 != 0) && (*(long *)(lVar22 + 0x120) != 0)) {
      *(undefined1 *)(*(long *)(lVar22 + 0x120) + 0x210) = *(undefined1 *)(param_1 + 0x170);
    }
    uVar17 = 4;
    goto LAB_011f57f0;
  case 4:
    lVar38 = *(long *)(param_1 + 0x128);
    if (*(long *)(lVar38 + 0x148) != 0) {
      lVar38 = *(long *)(lVar38 + 0x240);
      if (lVar38 == 0) {
        return 0;
      }
      if (*(short *)(lVar38 + 0x1a) == 0) {
        return 0;
      }
      psVar1 = (short *)(lVar38 + 0x1a);
      sVar37 = *(short *)(lVar38 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar37) {
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar40) {
            *psVar1 = sVar37 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_011f531c;
          bVar40 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011f531c:
          bVar40 = false;
        }
        if (bVar40) {
          lVar38 = *(long *)(lVar38 + 0x10);
          if (lVar38 == 0) {
            return 0;
          }
          plVar25 = (long *)(lVar38 + 0xe8);
          lVar39 = *plVar25;
          lVar22 = nn::os::GetCurrentThread();
          if (lVar22 == lVar39) {
            bVar40 = true;
            goto LAB_011f67c4;
          }
          lVar22 = nn::os::GetCurrentThread();
          goto LAB_011f67b0;
        }
        sVar37 = sVar5;
        if (sVar5 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_011f6e28:
    lVar22 = *(long *)(lVar38 + 0x240);
    if ((lVar22 != 0) && (*(short *)(lVar22 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar22 + 0x1a);
      sVar37 = *(short *)(lVar22 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar37) {
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar40) {
            *psVar1 = sVar37 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_011f709c;
          bVar40 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_011f709c:
          bVar40 = false;
        }
        if (bVar40) {
          lVar22 = *(long *)(lVar22 + 0x10);
          if (lVar22 != 0) {
            plVar25 = (long *)(lVar22 + 0xe8);
            lVar41 = *plVar25;
            lVar39 = nn::os::GetCurrentThread();
            if (lVar39 != lVar41) {
              lVar39 = nn::os::GetCurrentThread();
              goto LAB_011f772c;
            }
            bVar15 = true;
            goto LAB_011f70d4;
          }
          break;
        }
        sVar37 = sVar5;
      } while (sVar5 != 0);
    }
LAB_011f6e30:
    lVar38 = param_1 + 0xe8;
    uVar46 = *(uint *)(*(long *)(param_1 + 0x148) + 0x200);
    auVar48._0_8_ = CONCAT44(uVar46,uVar46);
    auVar48._8_4_ = uVar46;
    auVar48._12_4_ = 0;
    *(ulong *)(param_1 + 0x168) = (ulong)uVar46;
    *(undefined8 *)(param_1 + 0x160) = auVar48._0_8_;
    FUN_00c9e664(&local_178,lVar38);
    if (local_170 == (long **)0x0) {
      plVar25 = (long *)0x0;
    }
    else {
      plVar25 = local_170[9];
    }
    local_148 = (byte *)0x1e;
    local_140 = (long *)0x0;
    local_158 = (long *)0x2af5476e236ce01b;
    local_150 = "PokemonModelComponentLayerNode";
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x160);
    auVar52._0_8_ = auVar48._4_8_ << 0x20;
    auVar52._12_4_ = auVar48._12_4_;
    auVar52._8_4_ = 0;
    auVar10._4_8_ = auVar52._8_8_;
    auVar10._0_4_ = auVar9._0_4_;
    auVar53._0_8_ = auVar10._0_8_ << 0x20;
    auVar53._8_4_ = auVar9._4_4_;
    auVar53._12_4_ = auVar9._4_4_;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = auVar53._8_8_;
    auVar54._0_12_ = SUB1612(auVar55 << 0x40,0);
    auVar54._12_4_ = 0;
    auVar48 = NEON_ext(ZEXT816(0),auVar9,4,1);
    auVar48 = NEON_ext(auVar48,ZEXT816(0),0xc,1);
    auVar55 = NEON_ext(auVar54,ZEXT816(0),4,1);
    pbStack_378 = auVar48._8_8_;
    local_380 = auVar48._0_8_;
    local_368 = auVar55._8_8_;
    local_370 = auVar55._0_8_;
    auVar11._4_8_ = 0;
    auVar11._0_4_ = auVar9._8_4_;
    auVar9._12_4_ = auVar9._12_4_;
    auVar9._0_12_ = auVar11 << 0x20;
    auVar48 = NEON_ext(ZEXT816(0),auVar9,0xc,1);
    uStack_358 = auVar48._8_8_;
    local_360 = auVar48._0_8_;
    uStack_348 = _UNK_03cabe58;
    local_350 = _DAT_03cabe50;
    FUN_011f87e8(plVar25,&local_158,0,&local_380,0);
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_170 != (long **)0x0) {
      pplVar3 = local_170 + 5;
      do {
        iVar18 = *(int *)pplVar3;
        iVar19 = iVar18 + -1;
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
        if (bVar40) {
          *(int *)pplVar3 = iVar19;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar19 == 0) {
        (*(code *)(*local_170)[2])();
      }
      else if (iVar18 == 0) goto LAB_011f7760;
    }
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 0x60))();
    }
    fVar47 = *(float *)(param_1 + 0x160) * *(float *)(param_1 + 0x160);
    fVar49 = *(float *)(param_1 + 0x164) * *(float *)(param_1 + 0x164);
    fVar50 = *(float *)(param_1 + 0x168) * *(float *)(param_1 + 0x168);
    fVar51 = *(float *)(param_1 + 0x16c) * *(float *)(param_1 + 0x16c);
    auVar45._0_4_ = fVar47 + fVar49;
    auVar45._4_4_ = fVar50 + fVar51;
    auVar45._8_4_ = fVar47 + fVar49;
    auVar45._12_4_ = fVar50 + fVar51;
    NEON_ext(auVar45,auVar45,4,1);
    FUN_00e030fc(param_1);
    FUN_011f8338(param_1,*(undefined2 *)(param_1 + 0x132));
    FUN_00c9e664(&local_380,lVar38);
    lVar22 = 0;
    if (pbStack_378 != (byte *)0x0) {
      lVar22 = *(long *)(pbStack_378 + 0x48);
    }
    lVar22 = FUN_011f7ce8(lVar22 + 0x108,&local_158);
    if (pbStack_378 != (byte *)0x0) {
      pbVar43 = pbStack_378 + 0x28;
      do {
        iVar18 = *(int *)pbVar43;
        iVar19 = iVar18 + -1;
        cVar8 = '\x01';
        bVar40 = (bool)ExclusiveMonitorPass(pbVar43,0x10);
        if (bVar40) {
          *(int *)pbVar43 = iVar19;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar19 == 0) {
        (**(code **)(*(long *)pbStack_378 + 0x10))();
      }
      else if (iVar18 == 0) goto LAB_011f7760;
    }
    if (local_380 != (long *)0x0) {
      (**(code **)(*local_380 + 0x60))();
    }
    if (lVar22 == 0) {
      FUN_00c9e664(&local_380,lVar38);
      if (pbStack_378 == (byte *)0x0) {
        lVar38 = 0;
      }
      else {
        lVar38 = *(long *)(pbStack_378 + 0x48);
      }
      local_158 = (long *)((ulong)local_158 & 0xffffffffffffff00);
      FUN_011f7f50(lVar38,*(undefined8 *)(lVar38 + 8),&local_158);
      if (pbStack_378 != (byte *)0x0) {
        pbVar43 = pbStack_378 + 0x28;
        do {
          iVar18 = *(int *)pbVar43;
          iVar19 = iVar18 + -1;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(pbVar43,0x10);
          if (bVar40) {
            *(int *)pbVar43 = iVar19;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar19 == 0) {
          (**(code **)(*(long *)pbStack_378 + 0x10))();
        }
        else if (iVar18 == 0) goto LAB_011f7760;
      }
      if (local_380 != (long *)0x0) {
        (**(code **)(*local_380 + 0x60))();
      }
    }
    *(undefined4 *)(param_1 + 0x120) = 5;
    return 1;
  }
  return 0;
LAB_011f67b0:
  if (*plVar25 == 0) goto code_r0x011f67b8;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0xf0));
  do {
    if (*plVar25 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar38 + 0xf0));
        while (*plVar25 == 0) {
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar40) {
            *plVar25 = lVar22;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_011f67c0;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar40) {
      *plVar25 = lVar22;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_011f67c0:
  bVar40 = false;
LAB_011f67c4:
  puVar13 = PTR_DAT_047d8e30;
  puVar12 = PTR_DAT_047d8e28;
  plVar25 = *(long **)(lVar38 + 0x100);
  plVar44 = *(long **)(lVar38 + 0x108);
  if (plVar25 == plVar44) {
    iVar18 = 0;
    bVar15 = true;
  }
  else {
    iVar18 = 0;
    bVar15 = true;
    do {
      lVar22 = *plVar25;
      if (lVar22 != 0) {
        puVar23 = (undefined8 *)(*(code *)**(undefined8 **)(lVar22 + 8))((undefined8 *)(lVar22 + 8))
        ;
        if (((*puVar12 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar12), iVar19 != 0)) {
          if (((*PTR_DAT_047d3980 & 1) == 0) &&
             (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar19 != 0)) {
            uVar29 = FUN_01adab84();
            *(undefined8 *)PTR_DAT_047d3988 = uVar29;
            __cxa_guard_release(PTR_DAT_047d3980);
          }
          *(undefined **)puVar13 = PTR_DAT_047d3988;
          __cxa_guard_release(puVar12);
        }
        for (; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
          if (puVar23 == (undefined8 *)puVar13) {
            uVar27 = (**(code **)(*(long *)*plVar25 + 0xc0))();
            if ((uVar27 & 1) == 0) {
              iVar18 = iVar18 + 1;
              if (((*PTR_DAT_047d3e28 & 1) == 0) &&
                 (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
                FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3e28);
              }
              if ((*(byte *)(lVar22 + 600) & 1) == 0) {
LAB_011f7870:
                bVar15 = false;
              }
              else {
                plVar24 = *(long **)(lVar22 + 0x160);
                for (plVar42 = *(long **)(lVar22 + 0x158); plVar42 != plVar24; plVar42 = plVar42 + 1
                    ) {
                  lVar39 = *plVar42;
                  plVar2 = (long *)(lVar39 + 0x60);
                  lVar22 = nn::os::GetCurrentThread();
LAB_011f6850:
                  if (*plVar2 == 0) goto code_r0x011f6858;
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent((LightEventType *)(lVar39 + 0x68));
                  do {
                    if (*plVar2 != 0) {
                      do {
                        ClearExclusiveLocal();
                        nn::os::WaitLightEvent((LightEventType *)(lVar39 + 0x68));
                        while (*plVar2 == 0) {
                          cVar8 = '\x01';
                          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                          if (bVar7) {
                            *plVar2 = lVar22;
                            cVar8 = ExclusiveMonitorsStatus();
                          }
                          if (cVar8 == '\0') goto LAB_011f6860;
                        }
                      } while( true );
                    }
                    cVar8 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                    if (bVar7) {
                      *plVar2 = lVar22;
                      cVar8 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar8 != '\0');
LAB_011f6860:
                  cVar8 = *(char *)(lVar39 + 0xeb);
                  *(undefined8 *)(lVar39 + 0x60) = 0;
                  nn::os::SignalLightEvent((LightEventType *)(lVar39 + 0x68));
                  if (cVar8 == '\0') goto LAB_011f7870;
                }
              }
            }
            break;
          }
        }
      }
      plVar25 = plVar25 + 1;
    } while (plVar25 != plVar44);
  }
  plVar44 = *(long **)(lVar38 + 0x140);
  for (plVar25 = *(long **)(lVar38 + 0x138); plVar25 != plVar44; plVar25 = plVar25 + 1) {
    lVar22 = *plVar25;
    if (lVar22 != 0) {
      puVar23 = (undefined8 *)(*(code *)**(undefined8 **)(lVar22 + 8))((undefined8 *)(lVar22 + 8));
      if (((*puVar12 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar12), iVar19 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar19 != 0)) {
          uVar29 = FUN_01adab84();
          *(undefined8 *)PTR_DAT_047d3988 = uVar29;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)puVar13 = PTR_DAT_047d3988;
        __cxa_guard_release(puVar12);
      }
      for (; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
        if (puVar23 == (undefined8 *)puVar13) {
          uVar27 = (**(code **)(*(long *)*plVar25 + 0xc0))();
          if ((uVar27 & 1) == 0) {
            iVar18 = iVar18 + 1;
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar19 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            if ((*(byte *)(lVar22 + 600) & 1) == 0) {
LAB_011f7878:
              bVar15 = false;
            }
            else {
              plVar24 = *(long **)(lVar22 + 0x160);
              for (plVar42 = *(long **)(lVar22 + 0x158); plVar42 != plVar24; plVar42 = plVar42 + 1)
              {
                lVar39 = *plVar42;
                plVar2 = (long *)(lVar39 + 0x60);
                lVar22 = nn::os::GetCurrentThread();
LAB_011f6d5c:
                if (*plVar2 == 0) goto code_r0x011f6d64;
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(lVar39 + 0x68));
                do {
                  if (*plVar2 != 0) {
                    do {
                      ClearExclusiveLocal();
                      nn::os::WaitLightEvent((LightEventType *)(lVar39 + 0x68));
                      while (*plVar2 == 0) {
                        cVar8 = '\x01';
                        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar7) {
                          *plVar2 = lVar22;
                          cVar8 = ExclusiveMonitorsStatus();
                        }
                        if (cVar8 == '\0') goto LAB_011f6d6c;
                      }
                    } while( true );
                  }
                  cVar8 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar7) {
                    *plVar2 = lVar22;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                } while (cVar8 != '\0');
LAB_011f6d6c:
                cVar8 = *(char *)(lVar39 + 0xeb);
                *(undefined8 *)(lVar39 + 0x60) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar39 + 0x68));
                if (cVar8 == '\0') goto LAB_011f7878;
              }
            }
          }
          break;
        }
      }
    }
  }
  if (!bVar40) {
    *(undefined8 *)(lVar38 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar38 + 0xf0));
  }
  (**(code **)(*(long *)(lVar38 + -0x28) + 0x60))((long *)(lVar38 + -0x28));
  if (iVar18 < 1) {
    return 0;
  }
  if (!bVar15) {
    return 0;
  }
  lVar38 = *(long *)(param_1 + 0x128);
  goto LAB_011f6e28;
code_r0x011f67b8:
  cVar8 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar40) {
    *plVar25 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f67c0;
  goto LAB_011f67b0;
code_r0x011f6858:
  cVar8 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar7) {
    *plVar2 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f6860;
  goto LAB_011f6850;
code_r0x011f6d64:
  cVar8 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar7) {
    *plVar2 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f6d6c;
  goto LAB_011f6d5c;
LAB_011f772c:
  if (*plVar25 == 0) goto code_r0x011f7734;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
  do {
    if (*plVar25 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0xf0));
        while (*plVar25 == 0) {
          bVar15 = false;
          cVar8 = '\x01';
          bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar40) {
            *plVar25 = lVar39;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_011f70d4;
        }
      } while( true );
    }
    bVar15 = false;
    cVar8 = '\x01';
    bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
    if (bVar40) {
      *plVar25 = lVar39;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_011f70d4:
  puVar13 = PTR_DAT_047d8e30;
  puVar12 = PTR_DAT_047d8e28;
  plVar44 = *(long **)(lVar22 + 0x108);
  plVar25 = *(long **)(lVar22 + 0x100);
  pbVar43 = PTR_DAT_047d8e28;
  puVar23 = (undefined8 *)PTR_DAT_047d8e30;
  while( true ) {
    PTR_DAT_047d8e28 = pbVar43;
    PTR_DAT_047d8e30 = (undefined *)puVar23;
    if (plVar25 == plVar44) break;
    lVar39 = *plVar25;
    if (lVar39 != 0) {
      puVar23 = (undefined8 *)(*(code *)**(undefined8 **)(lVar39 + 8))((undefined8 *)(lVar39 + 8));
      if (((*puVar12 & 1) == 0) && (iVar18 = __cxa_guard_acquire(puVar12), iVar18 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar18 != 0)) {
          uVar29 = FUN_01adab84();
          *(undefined8 *)PTR_DAT_047d3988 = uVar29;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *(undefined **)puVar13 = PTR_DAT_047d3988;
        __cxa_guard_release(puVar12);
      }
      for (; puVar23 != (undefined8 *)0x0; puVar23 = (undefined8 *)*puVar23) {
        if (puVar23 == (undefined8 *)puVar13) {
          uVar27 = (**(code **)(*(long *)*plVar25 + 0xc0))();
          if ((uVar27 & 1) == 0) {
            plVar42 = *(long **)(lVar39 + 0x158);
            lVar41 = *plVar42;
            if ((plVar42 != *(long **)(lVar39 + 0x160)) &&
               (*(undefined1 **)(lVar41 + 0x1d0) != &DAT_afc4d6c05abef19e)) {
              do {
                plVar42 = plVar42 + 1;
                lVar41 = *plVar42;
              } while (*(undefined1 **)(lVar41 + 0x1d0) != &DAT_afc4d6c05abef19e);
            }
            plVar42 = *(long **)(lVar41 + 0x40);
            if (plVar42 != (long *)0x0) {
              (**(code **)(*plVar42 + 0x10))(plVar42);
              local_380 = (long *)0xbc071098b7443d50;
              pbStack_378 = (byte *)0x3c9872e;
              local_370 = (undefined1 *)0xe;
              local_368 = (long *)0x0;
              (**(code **)(*plVar42 + 0x110))(plVar42,&local_380,lVar38 + 0x1c0);
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x20))();
              }
              (**(code **)(*plVar42 + 0x18))(plVar42);
            }
          }
          break;
        }
      }
    }
    plVar25 = plVar25 + 1;
    pbVar43 = PTR_DAT_047d8e28;
    puVar23 = (undefined8 *)PTR_DAT_047d8e30;
  }
  plVar44 = *(long **)(lVar22 + 0x140);
  for (plVar25 = *(long **)(lVar22 + 0x138); plVar25 != plVar44; plVar25 = plVar25 + 1) {
    lVar39 = *plVar25;
    if (lVar39 != 0) {
      puVar26 = (undefined8 *)(*(code *)**(undefined8 **)(lVar39 + 8))((undefined8 *)(lVar39 + 8));
      if (((*pbVar43 & 1) == 0) && (iVar18 = __cxa_guard_acquire(pbVar43), iVar18 != 0)) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar18 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar18 != 0)) {
          uVar29 = FUN_01adab84();
          *(undefined8 *)PTR_DAT_047d3988 = uVar29;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        *puVar23 = PTR_DAT_047d3988;
        __cxa_guard_release(pbVar43);
      }
      for (; puVar26 != (undefined8 *)0x0; puVar26 = (undefined8 *)*puVar26) {
        if (puVar26 == puVar23) {
          uVar27 = (**(code **)(*(long *)*plVar25 + 0xc0))();
          if ((uVar27 & 1) == 0) {
            plVar42 = *(long **)(lVar39 + 0x158);
            lVar41 = *plVar42;
            if ((plVar42 != *(long **)(lVar39 + 0x160)) &&
               (*(undefined1 **)(lVar41 + 0x1d0) != &DAT_afc4d6c05abef19e)) {
              do {
                plVar42 = plVar42 + 1;
                lVar41 = *plVar42;
              } while (*(undefined1 **)(lVar41 + 0x1d0) != &DAT_afc4d6c05abef19e);
            }
            plVar42 = *(long **)(lVar41 + 0x40);
            if (plVar42 != (long *)0x0) {
              (**(code **)(*plVar42 + 0x10))(plVar42);
              local_368 = (long *)0x0;
              local_380 = (long *)0xbc071098b7443d50;
              pbStack_378 = (byte *)0x3c9872e;
              local_370 = (undefined1 *)0xe;
              (**(code **)(*plVar42 + 0x110))(plVar42,&local_380,lVar38 + 0x1c0);
              if (local_368 != (long *)0x0) {
                (**(code **)(*local_368 + 0x20))();
              }
              (**(code **)(*plVar42 + 0x18))(plVar42);
            }
          }
          break;
        }
      }
    }
  }
  if (!bVar15) {
    *(undefined8 *)(lVar22 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0xf0));
  }
  uVar4 = *(undefined2 *)(lVar38 + 0x3b8);
  uVar17 = FUN_01e24054(lVar38);
  FUN_015191e8(lVar38,uVar4,uVar17);
  (**(code **)(*(long *)(lVar22 + -0x28) + 0x60))((long *)(lVar22 + -0x28));
  goto LAB_011f6e30;
code_r0x011f7734:
  bVar15 = false;
  cVar8 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar40) {
    *plVar25 = lVar39;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f70d4;
  goto LAB_011f772c;
code_r0x011f690c:
  sVar37 = sVar5;
  if (sVar5 == 0) goto LAB_011f5670;
  goto LAB_011f68e0;
code_r0x011f6c84:
  cVar8 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar42,0x10);
  if (bVar40) {
    *plVar42 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f6c8c;
  goto LAB_011f6c7c;
code_r0x011f56ac:
  cVar8 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar40) {
    *plVar25 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f56b4;
  goto LAB_011f56a4;
code_r0x011f5214:
  cVar8 = '\x01';
  bVar40 = (bool)ExclusiveMonitorPass(plVar25,0x10);
  if (bVar40) {
    *plVar25 = lVar22;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_011f521c;
  goto LAB_011f520c;
}


