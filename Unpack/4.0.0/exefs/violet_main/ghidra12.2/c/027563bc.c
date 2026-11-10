/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027563bc; name: FUN_027563bc
 */


void FUN_027563bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 (*pauVar21) [16];
  float *pfVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  long *local_68;
  
  plVar18 = DAT_0485a0e8;
  if (*(char *)(param_1 + 0x450) != '\0') {
    if (DAT_0485a0e8 != (long *)0x0) {
      plVar25 = DAT_0485a0e8 + 5;
      do {
        lVar17 = *plVar25;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar3) {
          *(int *)plVar25 = (int)lVar17 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar17 == -1) goto LAB_02756794;
    }
    lVar17 = param_1 + 0x450;
    if (*(char *)(param_1 + 0x40) == '\0') {
      FUN_027567e4(plVar18,lVar17);
      lVar24 = (**(code **)(*(long *)*param_4 + 0x68))();
      auVar30._0_12_ = SUB1612(*(undefined1 (*) [16])(lVar24 + 0x30),0);
      auVar30._12_4_ = 0;
      FUN_0275697c(auVar30,plVar18,lVar17);
    }
    else {
      puVar20 = (undefined8 *)FUN_01df7f84(*(undefined8 *)(param_1 + 0x38));
      plVar25 = (long *)*puVar20;
      if (plVar25 != (long *)0x0) {
        plVar1 = plVar25 + 5;
        do {
          lVar24 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar24 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar24 == -1) {
LAB_02756794:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      pauVar21 = (undefined1 (*) [16])FUN_00c4c40c(plVar25,*(undefined2 *)(param_1 + 0x42));
      auVar30 = *pauVar21;
      uVar23 = *(undefined8 *)pauVar21[1];
      uVar5 = *(undefined8 *)(pauVar21[1] + 8);
      uVar6 = *(undefined8 *)pauVar21[2];
      uVar7 = *(undefined8 *)(pauVar21[2] + 8);
      auVar4 = pauVar21[3];
      pfVar22 = (float *)(**(code **)(*(long *)*param_4 + 0x68))();
      fVar8 = *pfVar22;
      fVar9 = pfVar22[1];
      fVar10 = pfVar22[2];
      fVar11 = pfVar22[3];
      fVar12 = pfVar22[4];
      fVar13 = pfVar22[5];
      fVar14 = pfVar22[6];
      fVar15 = pfVar22[7];
      fVar47 = auVar30._0_4_;
      fVar48 = auVar30._4_4_;
      fVar49 = auVar30._8_4_;
      fVar35 = (float)*(undefined8 *)(pfVar22 + 8);
      fVar36 = (float)((ulong)*(undefined8 *)(pfVar22 + 8) >> 0x20);
      fVar37 = (float)*(undefined8 *)(pfVar22 + 10);
      fVar38 = (float)((ulong)*(undefined8 *)(pfVar22 + 10) >> 0x20);
      fVar50 = auVar30._12_4_;
      fVar39 = (float)*(undefined8 *)(pfVar22 + 0xc);
      fVar40 = (float)((ulong)*(undefined8 *)(pfVar22 + 0xc) >> 0x20);
      fVar41 = (float)*(undefined8 *)(pfVar22 + 0xe);
      fVar42 = (float)((ulong)*(undefined8 *)(pfVar22 + 0xe) >> 0x20);
      fVar31 = fVar8 * fVar47 + fVar12 * fVar48 + fVar35 * fVar49 + fVar39 * fVar50;
      fVar32 = fVar9 * fVar47 + fVar13 * fVar48 + fVar36 * fVar49 + fVar40 * fVar50;
      fVar33 = fVar10 * fVar47 + fVar14 * fVar48 + fVar37 * fVar49 + fVar41 * fVar50;
      fVar34 = fVar11 * fVar47 + fVar15 * fVar48 + fVar38 * fVar49 + fVar42 * fVar50;
      fVar47 = (float)uVar23;
      fVar48 = (float)((ulong)uVar23 >> 0x20);
      fVar49 = (float)uVar5;
      fVar50 = (float)((ulong)uVar5 >> 0x20);
      fVar43 = fVar8 * fVar47 + fVar12 * fVar48 + fVar35 * fVar49 + fVar39 * fVar50;
      fVar44 = fVar9 * fVar47 + fVar13 * fVar48 + fVar36 * fVar49 + fVar40 * fVar50;
      fVar45 = fVar10 * fVar47 + fVar14 * fVar48 + fVar37 * fVar49 + fVar41 * fVar50;
      fVar46 = fVar11 * fVar47 + fVar15 * fVar48 + fVar38 * fVar49 + fVar42 * fVar50;
      fVar50 = (float)uVar6;
      fVar51 = (float)((ulong)uVar6 >> 0x20);
      fVar31 = fVar31 * fVar31;
      fVar32 = fVar32 * fVar32;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar52 = (float)uVar7;
      fVar53 = (float)((ulong)uVar7 >> 0x20);
      fVar47 = fVar8 * fVar50 + fVar12 * fVar51 + fVar35 * fVar52 + fVar39 * fVar53;
      fVar48 = fVar9 * fVar50 + fVar13 * fVar51 + fVar36 * fVar52 + fVar40 * fVar53;
      fVar49 = fVar10 * fVar50 + fVar14 * fVar51 + fVar37 * fVar52 + fVar41 * fVar53;
      fVar50 = fVar11 * fVar50 + fVar15 * fVar51 + fVar38 * fVar52 + fVar42 * fVar53;
      fVar51 = auVar4._0_4_;
      fVar52 = auVar4._4_4_;
      auVar26._0_4_ = fVar31 + fVar32;
      auVar26._4_4_ = fVar33 + fVar34;
      auVar26._8_4_ = fVar31 + fVar32;
      auVar26._12_4_ = fVar33 + fVar34;
      NEON_ext(auVar26,auVar26,4,1);
      fVar43 = fVar43 * fVar43;
      fVar44 = fVar44 * fVar44;
      fVar45 = fVar45 * fVar45;
      fVar46 = fVar46 * fVar46;
      auVar27._0_4_ = fVar43 + fVar44;
      auVar27._4_4_ = fVar45 + fVar46;
      auVar27._8_4_ = fVar43 + fVar44;
      auVar27._12_4_ = fVar45 + fVar46;
      NEON_ext(auVar27,auVar27,4,1);
      fVar47 = fVar47 * fVar47;
      fVar48 = fVar48 * fVar48;
      fVar49 = fVar49 * fVar49;
      fVar50 = fVar50 * fVar50;
      fVar31 = auVar4._8_4_;
      auVar28._0_4_ = fVar47 + fVar48;
      auVar28._4_4_ = fVar49 + fVar50;
      auVar28._8_4_ = fVar47 + fVar48;
      auVar28._12_4_ = fVar49 + fVar50;
      NEON_ext(auVar28,auVar28,4,1);
      fVar47 = auVar4._12_4_;
      auVar4._12_4_ = fVar11 * fVar51 + fVar15 * fVar52 + fVar38 * fVar31 + fVar42 * fVar47;
      auVar4._8_4_ = fVar10 * fVar51 + fVar14 * fVar52 + fVar37 * fVar31 + fVar41 * fVar47;
      auVar4._4_4_ = fVar9 * fVar51 + fVar13 * fVar52 + fVar36 * fVar31 + fVar40 * fVar47;
      auVar4._0_4_ = fVar8 * fVar51 + fVar12 * fVar52 + fVar35 * fVar31 + fVar39 * fVar47;
      FUN_027567e4(plVar18,lVar17);
      auVar29._0_12_ = auVar4._0_12_;
      auVar29._12_4_ = 0;
      FUN_0275697c(auVar29,plVar18,lVar17);
      if (plVar25 != (long *)0x0) {
        plVar1 = plVar25 + 5;
        do {
          lVar24 = *plVar1;
          iVar19 = (int)lVar24 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar19;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar19 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
        }
        else if ((int)lVar24 == 0) goto LAB_027567bc;
      }
    }
    puVar20 = (undefined8 *)PTR_DAT_047d4248;
    puVar16 = (undefined8 *)PTR_DAT_047d4250;
    for (plVar25 = *(long **)(param_1 + 0x120); PTR_DAT_047d4248 = (undefined *)puVar20,
        PTR_DAT_047d4250 = (undefined *)puVar16, plVar25 != (long *)0x0; plVar25 = (long *)*plVar25)
    {
      FUN_00c420c4(plVar18,lVar17,plVar25 + 2);
      puVar20 = (undefined8 *)PTR_DAT_047d4248;
      puVar16 = (undefined8 *)PTR_DAT_047d4250;
    }
    for (plVar25 = *(long **)(param_1 + 0x188); plVar25 != (long *)0x0; plVar25 = (long *)*plVar25)
    {
      if (((*PTR_DAT_047d4240 & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar19 != 0)) {
        FUN_00100190(PTR_LAB_047d4510,puVar20,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4240);
      }
      uVar23 = *puVar20;
      *puVar16 = uVar23;
      FUN_00cf9884(&local_68,uVar23,"Color");
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      FUN_00c5f008(plVar18,lVar17,plVar25 + 2);
    }
    FUN_02756b14(param_1,param_2,param_3);
    if (plVar18 != (long *)0x0) {
      plVar25 = plVar18 + 5;
      do {
        lVar17 = *plVar25;
        iVar19 = (int)lVar17 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar3) {
          *(int *)plVar25 = iVar19;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar19 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02756744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar18 + 0x10))(plVar18);
        return;
      }
      if ((int)lVar17 == 0) {
LAB_027567bc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


