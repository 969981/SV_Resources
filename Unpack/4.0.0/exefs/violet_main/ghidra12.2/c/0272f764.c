/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272f764; name: FUN_0272f764
 */


void FUN_0272f764(long param_1,ulong param_2,ulong param_3)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  int *piVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined4 uVar33;
  long lVar34;
  long *plVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  long *plVar39;
  long *plVar40;
  long *plVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  float fStack_c4;
  float fStack_b4;
  float fStack_a4;
  long *local_a0;
  undefined1 local_98 [16];
  ulong local_88;
  long *local_78;
  
  if (*(long *)(param_1 + 0x310) == 0) {
    *(ulong *)(param_1 + 0x68) = param_2;
    *(ulong *)(param_1 + 0x70) = param_3;
    (*DAT_04859f60)(&local_a0,&DAT_04859f80);
    local_78 = local_a0;
    lVar34 = FUN_00cf3764(local_98,local_a0[1],&local_78);
    if (lVar34 == 0) {
      lVar38 = 0;
    }
    else {
      piVar4 = (int *)(lVar34 + 0x28);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = iVar8 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == -1) {
LAB_0272fdf0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar38 = lVar34;
    }
    lVar36 = *(long *)(*(long *)(lVar38 + 0x70) + 0x30);
    local_98._0_8_ = *(undefined8 *)(lVar36 + 8);
    local_98._8_8_ = *(undefined8 *)(lVar36 + 0x6098);
    local_88 = lVar36 + 0x10;
    local_98 = FUN_0117e498(*(undefined8 *)(lVar36 + 0x6140),local_98,(ulong *)(param_1 + 0x68),1,0)
    ;
    local_88 = local_88 & 0xffffffffffffff00;
    FUN_00d56380(lVar38 + 0x30,local_98);
    uVar33 = FUN_00d56320(lVar38 + 0x30);
    *(undefined4 *)(lVar38 + 0x78) = uVar33;
    plVar39 = (long *)(param_1 + 0x60);
    plVar35 = (long *)*plVar39;
    *plVar39 = 0;
    if (plVar35 != (long *)0x0) {
      plVar41 = plVar35 + 5;
      do {
        lVar38 = *plVar41;
        iVar8 = (int)lVar38 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar41,0x10);
        if (bVar7) {
          *(int *)plVar41 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar35 + 0x10))();
      }
      else if ((int)lVar38 == 0) goto LAB_0272fd00;
    }
    *(long *)(param_1 + 0x60) = lVar34;
    plVar35 = *(long **)(param_1 + 0x208);
    if (*(long **)(param_1 + 0x200) != plVar35) {
      plVar41 = *(long **)(param_1 + 0x200);
      do {
        plVar40 = *(long **)(*plVar41 + 0x58);
        if (plVar40 == (long *)0x0) {
          local_98._0_8_ = (ulong)(uint7)local_98._1_7_ << 8;
          FUN_00d8219c(0,0,plVar39,0xffffffff,local_98);
        }
        else {
          plVar5 = plVar40 + 5;
          do {
            lVar34 = *plVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *(int *)plVar5 = (int)lVar34 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar34 == -1) goto LAB_0272fdf0;
          local_98._0_8_ = (ulong)(uint7)local_98._1_7_ << 8;
          FUN_00d8219c(plVar40,0,plVar39,0xffffffff,local_98);
          do {
            lVar34 = *plVar5;
            iVar8 = (int)lVar34 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *(int *)plVar5 = iVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
          }
          else if ((int)lVar34 == 0) goto LAB_0272fd00;
        }
        plVar40 = *(long **)(*plVar41 + 0x58);
        if (plVar40 == (long *)0x0) {
          FUN_00d80894(0,0,(float)param_2,(float)param_3,0,0);
        }
        else {
          plVar5 = plVar40 + 5;
          do {
            lVar34 = *plVar5;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *(int *)plVar5 = (int)lVar34 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar34 == -1) goto LAB_0272fdf0;
          FUN_00d80894(0,0,(float)param_2,(float)param_3,plVar40,0);
          do {
            lVar34 = *plVar5;
            iVar8 = (int)lVar34 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar7) {
              *(int *)plVar5 = iVar8;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar8 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
          }
          else if ((int)lVar34 == 0) goto LAB_0272fd00;
        }
        plVar40 = plVar41 + 1;
        FUN_00d8037c(*plVar41,0,0,0,param_2 & 0xffffffff,param_3 & 0xffffffff);
        plVar41 = plVar40;
      } while (plVar40 != plVar35);
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
      pauVar1 = (undefined1 (*) [12])(param_1 + 0xc0);
      uVar19 = *(undefined8 *)(param_1 + 200);
      uVar17 = *(undefined8 *)*pauVar1;
      pauVar2 = (undefined1 (*) [12])(param_1 + 0xd0);
      uVar12 = *(undefined8 *)(param_1 + 0xd8);
      uVar9 = *(undefined8 *)*pauVar2;
      fStack_b4 = (float)((ulong)uVar12 >> 0x20);
      fStack_a4 = (float)((ulong)uVar19 >> 0x20);
      pauVar3 = (undefined1 (*) [12])(param_1 + 0xe0);
      uVar13 = *(undefined8 *)(param_1 + 0xe8);
      uVar10 = *(undefined8 *)*pauVar3;
      fStack_c4 = (float)((ulong)uVar13 >> 0x20);
      uVar20 = *(undefined8 *)(param_1 + 0xf8);
      uVar18 = *(undefined8 *)(param_1 + 0xf0);
      uVar22 = *(undefined8 *)(param_1 + 0x108);
      uVar21 = *(undefined8 *)(param_1 + 0x100);
      uVar26 = *(undefined8 *)(param_1 + 0x118);
      uVar25 = *(undefined8 *)(param_1 + 0x110);
      uVar14 = *(undefined8 *)(param_1 + 0x128);
      uVar11 = *(undefined8 *)(param_1 + 0x120);
      uVar30 = *(undefined8 *)(param_1 + 0x138);
      uVar29 = *(undefined8 *)(param_1 + 0x130);
      fVar48 = ((float)*(ulong *)(param_1 + 0x70) / (float)*(ulong *)(param_1 + 0x68)) *
               (float)((ulong)uVar25 >> 0x20);
      plVar35 = *(long **)(param_1 + 0x200);
      plVar39 = *(long **)(param_1 + 0x208);
      if (plVar35 != plVar39) {
        fVar42 = SUB124(*pauVar1,0);
        fVar44 = SUB124(*pauVar1,4);
        fVar46 = SUB124(*pauVar3,0);
        fVar47 = SUB124(*pauVar3,4);
        fVar43 = SUB124(*pauVar2,0);
        fVar45 = SUB124(*pauVar2,4);
        fVar52 = (float)uVar20;
        fVar53 = (float)((ulong)uVar20 >> 0x20);
        fVar49 = (float)uVar18;
        fVar51 = (float)((ulong)uVar18 >> 0x20);
        uVar24 = (ulong)(uint)fVar47;
        uVar23 = CONCAT44(fVar45,fVar44);
        uVar28 = (ulong)(uint)fVar46;
        uVar27 = CONCAT44(fVar43,fVar42);
        uVar16 = CONCAT44(0x3f800000,
                          -(fVar46 * fVar49 + fVar47 * fVar51 + SUB124(*pauVar3,8) * fVar52 +
                           fStack_c4 * fVar53));
        uVar15 = CONCAT44(-(fVar43 * fVar49 + fVar45 * fVar51 + SUB124(*pauVar2,8) * fVar52 +
                           fStack_b4 * fVar53),
                          -(fVar42 * fVar49 + fVar44 * fVar51 + SUB124(*pauVar1,8) * fVar52 +
                           fStack_a4 * fVar53));
        uVar32 = (ulong)(uint)SUB124(*pauVar3,8);
        uVar31 = CONCAT44(SUB124(*pauVar2,8),SUB124(*pauVar1,8));
        lVar38 = *plVar35;
        FUN_00d4a7f4(lVar38);
        puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
        puVar37[1] = uVar19;
        *puVar37 = uVar17;
        puVar37[3] = uVar12;
        puVar37[2] = uVar9;
        puVar37[5] = uVar13;
        puVar37[4] = uVar10;
        puVar37[7] = uVar20;
        puVar37[6] = uVar18;
        uVar33 = (undefined4)uVar25;
        lVar34 = *(long *)(lVar38 + 0x1e8);
        *(ulong *)(lVar34 + 0x48) = uVar28;
        *(undefined8 *)(lVar34 + 0x40) = uVar27;
        *(ulong *)(lVar34 + 0x58) = uVar24;
        *(undefined8 *)(lVar34 + 0x50) = uVar23;
        *(ulong *)(lVar34 + 0x68) = uVar32;
        *(undefined8 *)(lVar34 + 0x60) = uVar31;
        *(undefined8 *)(lVar34 + 0x78) = uVar16;
        *(undefined8 *)(lVar34 + 0x70) = uVar15;
        *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
        uVar50 = (undefined4)uVar11;
        uVar54 = (undefined4)uVar29;
        FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,*plVar35);
        if (plVar35 + 1 != plVar39) {
          lVar38 = plVar35[1];
          FUN_00d4a7f4(lVar38);
          puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
          puVar37[1] = uVar19;
          *puVar37 = uVar17;
          puVar37[3] = uVar12;
          puVar37[2] = uVar9;
          puVar37[5] = uVar13;
          puVar37[4] = uVar10;
          puVar37[7] = uVar20;
          puVar37[6] = uVar18;
          lVar34 = *(long *)(lVar38 + 0x1e8);
          *(ulong *)(lVar34 + 0x48) = uVar28;
          *(undefined8 *)(lVar34 + 0x40) = uVar27;
          *(ulong *)(lVar34 + 0x58) = uVar24;
          *(undefined8 *)(lVar34 + 0x50) = uVar23;
          *(ulong *)(lVar34 + 0x68) = uVar32;
          *(undefined8 *)(lVar34 + 0x60) = uVar31;
          *(undefined8 *)(lVar34 + 0x78) = uVar16;
          *(undefined8 *)(lVar34 + 0x70) = uVar15;
          *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
          FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,plVar35[1]);
          if (plVar35 + 2 != plVar39) {
            lVar38 = plVar35[2];
            FUN_00d4a7f4(lVar38);
            puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
            puVar37[1] = uVar19;
            *puVar37 = uVar17;
            puVar37[3] = uVar12;
            puVar37[2] = uVar9;
            puVar37[5] = uVar13;
            puVar37[4] = uVar10;
            puVar37[7] = uVar20;
            puVar37[6] = uVar18;
            lVar34 = *(long *)(lVar38 + 0x1e8);
            *(ulong *)(lVar34 + 0x48) = uVar28;
            *(undefined8 *)(lVar34 + 0x40) = uVar27;
            *(ulong *)(lVar34 + 0x58) = uVar24;
            *(undefined8 *)(lVar34 + 0x50) = uVar23;
            *(ulong *)(lVar34 + 0x68) = uVar32;
            *(undefined8 *)(lVar34 + 0x60) = uVar31;
            *(undefined8 *)(lVar34 + 0x78) = uVar16;
            *(undefined8 *)(lVar34 + 0x70) = uVar15;
            *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
            FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,plVar35[2]);
            if (plVar35 + 3 != plVar39) {
              lVar38 = plVar35[3];
              FUN_00d4a7f4(lVar38);
              puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
              puVar37[1] = uVar19;
              *puVar37 = uVar17;
              puVar37[3] = uVar12;
              puVar37[2] = uVar9;
              puVar37[5] = uVar13;
              puVar37[4] = uVar10;
              puVar37[7] = uVar20;
              puVar37[6] = uVar18;
              lVar34 = *(long *)(lVar38 + 0x1e8);
              *(ulong *)(lVar34 + 0x48) = uVar28;
              *(undefined8 *)(lVar34 + 0x40) = uVar27;
              *(ulong *)(lVar34 + 0x58) = uVar24;
              *(undefined8 *)(lVar34 + 0x50) = uVar23;
              *(ulong *)(lVar34 + 0x68) = uVar32;
              *(undefined8 *)(lVar34 + 0x60) = uVar31;
              *(undefined8 *)(lVar34 + 0x78) = uVar16;
              *(undefined8 *)(lVar34 + 0x70) = uVar15;
              *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
              FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,plVar35[3]);
              if (plVar35 + 4 != plVar39) {
                lVar38 = plVar35[4];
                FUN_00d4a7f4(lVar38);
                puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
                puVar37[1] = uVar19;
                *puVar37 = uVar17;
                puVar37[3] = uVar12;
                puVar37[2] = uVar9;
                puVar37[5] = uVar13;
                puVar37[4] = uVar10;
                puVar37[7] = uVar20;
                puVar37[6] = uVar18;
                lVar34 = *(long *)(lVar38 + 0x1e8);
                *(ulong *)(lVar34 + 0x48) = uVar28;
                *(undefined8 *)(lVar34 + 0x40) = uVar27;
                *(ulong *)(lVar34 + 0x58) = uVar24;
                *(undefined8 *)(lVar34 + 0x50) = uVar23;
                *(ulong *)(lVar34 + 0x68) = uVar32;
                *(undefined8 *)(lVar34 + 0x60) = uVar31;
                *(undefined8 *)(lVar34 + 0x78) = uVar16;
                *(undefined8 *)(lVar34 + 0x70) = uVar15;
                *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
                FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,plVar35[4]);
                for (plVar35 = plVar35 + 5; plVar35 != plVar39; plVar35 = plVar35 + 1) {
                  lVar38 = *plVar35;
                  FUN_00d4a7f4(lVar38);
                  puVar37 = *(undefined8 **)(lVar38 + 0x1e8);
                  puVar37[1] = uVar19;
                  *puVar37 = uVar17;
                  puVar37[3] = uVar12;
                  puVar37[2] = uVar9;
                  puVar37[5] = uVar13;
                  puVar37[4] = uVar10;
                  puVar37[7] = uVar20;
                  puVar37[6] = uVar18;
                  lVar34 = *(long *)(lVar38 + 0x1e8);
                  *(ulong *)(lVar34 + 0x48) = uVar28;
                  *(undefined8 *)(lVar34 + 0x40) = uVar27;
                  *(ulong *)(lVar34 + 0x58) = uVar24;
                  *(undefined8 *)(lVar34 + 0x50) = uVar23;
                  *(ulong *)(lVar34 + 0x68) = uVar32;
                  *(undefined8 *)(lVar34 + 0x60) = uVar31;
                  *(undefined8 *)(lVar34 + 0x78) = uVar16;
                  *(undefined8 *)(lVar34 + 0x70) = uVar15;
                  *(undefined1 *)(*(long *)(lVar38 + 0x1e8) + 0x180) = 1;
                  FUN_00d4a568(fVar48,uVar33,uVar50,uVar54,*plVar35);
                }
              }
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0xb8) = 1;
      *(undefined8 *)(param_1 + 200) = uVar19;
      *(undefined8 *)(param_1 + 0xc0) = uVar17;
      *(undefined8 *)(param_1 + 0xd8) = uVar12;
      *(undefined8 *)(param_1 + 0xd0) = uVar9;
      *(undefined8 *)(param_1 + 0xe8) = uVar13;
      *(undefined8 *)(param_1 + 0xe0) = uVar10;
      *(undefined8 *)(param_1 + 0xf8) = uVar20;
      *(undefined8 *)(param_1 + 0xf0) = uVar18;
      *(undefined8 *)(param_1 + 0x108) = uVar22;
      *(ulong *)(param_1 + 0x100) = CONCAT44((int)((ulong)uVar21 >> 0x20),fVar48);
      *(undefined8 *)(param_1 + 0x118) = uVar26;
      *(undefined8 *)(param_1 + 0x110) = uVar25;
      *(undefined8 *)(param_1 + 0x128) = uVar14;
      *(undefined8 *)(param_1 + 0x120) = uVar11;
      *(undefined8 *)(param_1 + 0x138) = uVar30;
      *(undefined8 *)(param_1 + 0x130) = uVar29;
    }
    if (local_a0 != (long *)0x0) {
      plVar35 = local_a0 + 5;
      do {
        lVar34 = *plVar35;
        iVar8 = (int)lVar34 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar35,0x10);
        if (bVar7) {
          *(int *)plVar35 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*local_a0 + 0x10))();
      }
      else if ((int)lVar34 == 0) {
LAB_0272fd00:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


