/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300e194; name: FUN_0300e194
 */


uint FUN_0300e194(long *param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  char cVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long *local_120;
  uint local_118;
  undefined2 local_114;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  ulong local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_68;
  
  uVar12 = *(uint *)((long)param_1 + 0x24) & 0xffffff;
  if (uVar12 != 0xffffff) {
    puVar1 = (uint *)((long)param_1 + 0x24);
    uVar17 = *(uint *)((long)param_1 + 0x24);
    do {
      uVar3 = *puVar1;
      if (uVar3 == uVar17) {
        cVar15 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar17 + 0x1000000 & 0xff000000 |
                    *(uint *)(param_1[1] + (ulong)uVar12 * 0x10 + 0xc) & 0xffffff;
          cVar15 = ExclusiveMonitorsStatus();
        }
        if (cVar15 == '\0') {
          uVar18 = (ulong)uVar12;
          plVar7 = param_1 + 5;
          do {
            cVar15 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *(int *)plVar7 = (int)*plVar7 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
          } while (cVar15 != '\0');
          uVar17 = *(uint *)((long)param_1 + 0x2c);
          if (uVar17 + 1 <= uVar12) {
            puVar1 = (uint *)((long)param_1 + 0x2c);
            uVar3 = uVar17;
            if (uVar17 + 1 <= uVar12 + 1) {
              uVar3 = uVar12;
            }
            do {
              if (*puVar1 != uVar17) {
                do {
                  ClearExclusiveLocal();
                  uVar3 = *puVar1;
                  uVar17 = uVar3;
                  if (uVar3 + 1 <= uVar12 + 1) {
                    uVar17 = uVar12;
                  }
                  while (*puVar1 == uVar3) {
                    cVar15 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar4) {
                      *puVar1 = uVar17;
                      cVar15 = ExclusiveMonitorsStatus();
                    }
                    if (cVar15 == '\0') goto LAB_0300e2a8;
                  }
                } while( true );
              }
              cVar15 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar3;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
          }
LAB_0300e2a8:
          *(undefined8 *)(param_1[1] + uVar18 * 0x10) = 0;
          puVar6 = PTR_DAT_047d1a08;
          local_120 = (long *)0x1700;
          uVar12 = *(int *)(param_1[1] + uVar18 * 0x10 + 8) + 0x1000000U & 0xff000000 | uVar12;
          plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_120,0);
          if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
            (**(code **)(puVar6 + 0x10))(plVar7,"hknpParticlesCollider");
          }
          FUN_03006e94(plVar7,*param_1,param_2,uVar12,param_1[7]);
          plVar9 = (long *)(param_1[1] + uVar18 * 0x10);
          plVar8 = (long *)*plVar9;
          if (((plVar8 != plVar7) && (*plVar9 = (long)plVar7, plVar8 != (long *)0x0)) &&
             (plVar8[1] != 0)) {
            plVar9 = plVar8 + 2;
            do {
              lVar16 = *plVar9;
              cVar15 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar4) {
                *plVar9 = lVar16 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (lVar16 + -1 == 0) {
              (**(code **)(*plVar8 + 0x18))();
            }
          }
          local_120 = (long *)0x0;
          local_118 = 0;
          local_114 = 0;
          local_110 = 0;
          local_10c = 0;
          local_10a = 0xff;
          local_f8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_108 = 0;
          local_100 = 0;
          local_e0 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x230);
          uStack_d8 = *(undefined8 *)(PTR_DAT_047d19b0 + 0x238);
          local_8c = 0;
          local_88 = 0;
          local_80 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_b0 = 0xbf800000;
          local_98 = 0xffff;
          local_94 = 0x7fffffff00ffffff;
          local_68 = 0x58;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          plVar9 = (long *)(**(code **)puVar6)(0,&local_68,0);
          if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
            (**(code **)(puVar6 + 0x10))(plVar9,"hknpParticlesColliderShape");
          }
          *(undefined4 *)(plVar9 + 4) = 0;
          plVar9[2] = 1;
          *(undefined4 *)(plVar9 + 3) = 0x10;
          plVar9[5] = 0;
          plVar9[6] = 0;
          puVar2 = PTR_DAT_047e3520 + 0x10;
          *(undefined1 *)((long)plVar9 + 0x1c) = 1;
          plVar9[7] = 0;
          plVar9[8] = 0;
          plVar9[9] = 0;
          plVar9[10] = (long)plVar7;
          *plVar9 = (long)puVar2;
          plVar9[1] = 0xffffffff;
          iVar13 = (int)plVar7[699];
          if (iVar13 != 0) {
            cVar15 = '\x01';
            do {
              iVar13 = iVar13 >> 1;
              cVar15 = cVar15 + '\x01';
            } while (iVar13 != 0);
            *(char *)((long)plVar9 + 0x1c) = cVar15;
          }
          if ((local_120 != (long *)0x0) && (local_120[1] != 0)) {
            plVar8 = local_120 + 2;
            do {
              lVar16 = *plVar8;
              cVar15 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = lVar16 + -1;
                cVar15 = ExclusiveMonitorsStatus();
              }
            } while (cVar15 != '\0');
            if (lVar16 + -1 == 0) {
              lVar16 = *local_120;
              local_120 = plVar9;
              (**(code **)(lVar16 + 0x18))();
              plVar9 = local_120;
            }
          }
          local_120 = plVar9;
          uVar11 = local_108;
          local_f8 = 0;
          local_110 = *(undefined4 *)(param_2 + 0x8c);
          local_100 = *(undefined8 *)(param_2 + 0x90);
          local_10c = *(undefined2 *)(param_2 + 0x88);
          local_118 = local_118 | 0x10;
          if ((char *)(local_108 & 0xfffffffffffffffe) != "hknpParticlesCollider") {
            pcVar10 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x16)
            ;
            uVar5 = CONCAT26(s_hknpParticlesCollider_03c9a73a._14_2_,
                             s_hknpParticlesCollider_03c9a73a._8_6_);
            *(undefined8 *)pcVar10 = s_hknpParticlesCollider_03c9a73a._0_8_;
            *(undefined8 *)(pcVar10 + 8) = uVar5;
            *(ulong *)(pcVar10 + 0xe) =
                 CONCAT62(s_hknpParticlesCollider_03c9a73a._16_6_,
                          s_hknpParticlesCollider_03c9a73a._14_2_);
            local_108 = (ulong)pcVar10 | 1;
            if ((uVar11 & 1) != 0) {
              (**(code **)(puVar6 + 8))(0,uVar11 - 1,0);
            }
          }
          lVar16 = (**(code **)(*(long *)*param_1 + 0xc0))
                             ((long *)*param_1,&local_120,0xffffffffffffffff);
          plVar7[0x28] = lVar16;
          if (lVar16 < 0) {
            uVar14 = (undefined4)lVar16;
          }
          else {
            uVar11 = FUN_00dbb6c8(*param_1 + 0x960,lVar16,&local_68);
            uVar14 = (undefined4)local_68;
            if ((uVar11 & 1) == 0) {
              uVar14 = 0xffffff;
            }
          }
          *(undefined4 *)(plVar7 + 0x29) = uVar14;
          *(uint *)(param_1[1] + uVar18 * 0x10 + 8) = uVar12;
          FUN_02f3bb18(*param_1 + 0x7b8,*param_1,uVar12);
          FUN_00cb081c(&local_120);
          return uVar12;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      uVar12 = uVar3 & 0xffffff;
      uVar17 = uVar3;
    } while (uVar12 != 0xffffff);
  }
  return 0xffffff;
}


