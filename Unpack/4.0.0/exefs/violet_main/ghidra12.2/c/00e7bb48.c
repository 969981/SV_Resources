/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e7bb48; name: FUN_00e7bb48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e7bb48(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  bool bVar16;
  float *pfVar17;
  undefined8 uVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  bool bVar24;
  long lVar25;
  short sVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar48;
  float fVar50;
  undefined1 auVar42 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar53;
  float fVar55;
  undefined8 uVar54;
  float fVar56;
  float fVar57;
  int iVar58;
  int iVar63;
  int iVar64;
  undefined1 auVar59 [16];
  int iVar65;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar66;
  int iVar71;
  undefined1 auVar67 [12];
  int iVar70;
  undefined1 in_q3 [16];
  undefined1 auVar68 [16];
  int iVar72;
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar81;
  undefined1 auVar80 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [12];
  float fVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  float fVar93;
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  undefined1 auVar96 [16];
  undefined2 local_b8;
  undefined1 local_b6;
  long *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  ulong local_78;
  long *local_68;
  
  lVar25 = *(long *)(param_1 + 0x120);
  if ((lVar25 == 0) || (*(short *)(lVar25 + 0x1a) == 0)) {
    plVar27 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar25 + 0x1a);
    sVar26 = *(short *)(lVar25 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar26) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00e7c42c;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e7c42c:
        bVar16 = false;
      }
      if (bVar16) {
        plVar27 = (long *)0x0;
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar27 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
        }
        break;
      }
      plVar27 = (long *)0x0;
      sVar26 = sVar3;
    } while (sVar3 != 0);
  }
  lVar25 = *(long *)(param_1 + 0x140);
  if ((lVar25 == 0) || (*(short *)(lVar25 + 0x1a) == 0)) {
    plVar28 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar25 + 0x1a);
    sVar26 = *(short *)(lVar25 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar26) {
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00e7c1fc;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e7c1fc:
        bVar16 = false;
      }
      if (bVar16) {
        plVar28 = (long *)0x0;
        if (*(long *)(lVar25 + 0x10) != 0) {
          plVar28 = (long *)(*(long *)(lVar25 + 0x10) + -0x28);
        }
        break;
      }
      plVar28 = (long *)0x0;
      sVar26 = sVar3;
    } while (sVar3 != 0);
  }
  if (plVar27 == (long *)0x0) {
LAB_00e7c01c:
    if (plVar28 != (long *)0x0) goto LAB_00e7c054;
  }
  else {
    if (plVar28 == (long *)0x0) goto LAB_00e7c024;
    plVar29 = (long *)plVar28[0xe];
    if (plVar29 != (long *)0x0) {
      lVar25 = plVar29[6];
      if (*(long *)(lVar25 + 0x10) == 0) {
LAB_00e7c71c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar26 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar26 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar26 == 0) {
        uVar18 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
        *(undefined8 *)(lVar25 + 8) = uVar18;
        *(undefined4 *)(lVar25 + 0x1c) = 0xfffffffe;
      }
      else if (sVar26 == -1) {
LAB_00e7c73c:
        pcVar20 = "count != 0";
        pcVar21 = "AddReference";
        pcVar22 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
        ;
        pcVar23 = "Reference counter overflows.";
        goto LAB_00e7c714;
      }
      *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(param_1 + 0x1d0);
      *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_1 + 0x1d8);
      (**(code **)(*plVar29 + 0xa0))(&local_68,plVar29,*(undefined4 *)(param_1 + 0x160));
      auVar59 = in_q3;
      if (local_68 != (long *)0x0) {
        local_b0 = (long *)&DAT_afc4d6c05abef19e;
        plStack_a8 = (long *)0x3c7b602;
        local_a0 = 7;
        plStack_98 = (long *)0x0;
        FUN_00e7c820(plVar27,*(undefined4 *)(param_1 + 0x164),&local_b0);
        auVar74._0_12_ = in_q3._0_12_;
        auVar74._12_4_ = 0;
        if (*(char *)(param_1 + 0x172) == '\0') {
          auVar92 = ZEXT816(0);
        }
        else {
          local_b0 = (long *)&DAT_afc4d6c05abef19e;
          plStack_a8 = (long *)0x3c7b602;
          local_a0 = 7;
          plStack_98 = (long *)0x0;
          auVar59 = auVar74;
          FUN_01f98e0c(plVar27,*(undefined4 *)(param_1 + 0x164),&local_b0);
          if (plStack_98 != (long *)0x0) {
            (**(code **)(*plStack_98 + 0x20))();
          }
          fVar40 = auVar59._4_4_;
          auVar92._0_4_ = (float)_DAT_03cabe60 * fVar40;
          auVar92._4_4_ = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar40;
          auVar92._8_4_ = (float)_UNK_03cabe68 * fVar40;
          auVar92._12_4_ = (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar40;
        }
        auVar59._12_4_ = 0;
        auVar59._0_12_ = auVar74._0_12_;
        *(ulong *)(param_1 + 0x1b8) = (ulong)in_q3._8_4_;
        *(long *)(param_1 + 0x1b0) = in_q3._0_8_;
        *(long *)(param_1 + 0x1d8) = auVar92._8_8_;
        *(long *)(param_1 + 0x1d0) = auVar92._0_8_;
        if (local_68 != (long *)0x0) {
          lVar25 = local_68[6];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar26 = *psVar1;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar26 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar26 == 0) goto LAB_00e7c078;
        }
      }
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1c0);
      *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0x1c8);
      *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(param_1 + 0x1e0);
      *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_1 + 0x1e8);
      (**(code **)(*plVar29 + 0xa0))(&local_68,plVar29,*(undefined4 *)(param_1 + 0x168));
      if (local_68 != (long *)0x0) {
        local_b0 = (long *)&DAT_afc4d6c05abef19e;
        plStack_a8 = (long *)0x3c7b602;
        local_a0 = 7;
        plStack_98 = (long *)0x0;
        FUN_00e7c820(plVar27,*(undefined4 *)(param_1 + 0x16c),&local_b0);
        auVar96._0_12_ = auVar59._0_12_;
        auVar96._12_4_ = 0;
        if (*(char *)(param_1 + 0x172) == '\0') {
          auVar42 = ZEXT816(0);
        }
        else {
          local_b0 = (long *)&DAT_afc4d6c05abef19e;
          plStack_a8 = (long *)0x3c7b602;
          local_a0 = 7;
          plStack_98 = (long *)0x0;
          FUN_01f98e0c(plVar27,*(undefined4 *)(param_1 + 0x16c),&local_b0);
          if (plStack_98 != (long *)0x0) {
            (**(code **)(*plStack_98 + 0x20))();
          }
          fVar40 = auVar96._4_4_;
          auVar42._0_4_ = (float)_DAT_03cabe60 * fVar40;
          auVar42._4_4_ = (float)((ulong)_DAT_03cabe60 >> 0x20) * fVar40;
          auVar42._8_4_ = (float)_UNK_03cabe68 * fVar40;
          auVar42._12_4_ = (float)((ulong)_UNK_03cabe68 >> 0x20) * fVar40;
        }
        *(ulong *)(param_1 + 0x1c8) = (ulong)auVar59._8_4_;
        *(long *)(param_1 + 0x1c0) = auVar59._0_8_;
        *(long *)(param_1 + 0x1e8) = auVar42._8_8_;
        *(long *)(param_1 + 0x1e0) = auVar42._0_8_;
        if (local_68 != (long *)0x0) {
          lVar25 = local_68[6];
          psVar1 = (short *)(lVar25 + 0x1a);
          do {
            sVar26 = *psVar1;
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar16) {
              *psVar1 = sVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar26 == 1) {
            *(undefined8 *)(lVar25 + 0x10) = 0;
            (**(code **)(*local_68 + 0x50))();
          }
          else if (sVar26 == 0) goto LAB_00e7c078;
        }
      }
      *(undefined1 *)(param_1 + 0x1a1) = *(undefined1 *)(param_1 + 0x1a2);
      FUN_00c9e664(&local_b0,param_1 + 0xe8);
      lVar25 = (**(code **)(*(long *)plStack_a8[9] + 0x68))();
      auVar59 = *(undefined1 (*) [16])(lVar25 + 0x30);
      *(ulong *)(param_1 + 0x188) = (ulong)auVar59._8_4_;
      *(long *)(param_1 + 0x180) = auVar59._0_8_;
      if (plStack_a8 != (long *)0x0) {
        plVar30 = plStack_a8 + 5;
        do {
          lVar25 = *plVar30;
          iVar58 = (int)lVar25 + -1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar16) {
            *(int *)plVar30 = iVar58;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar58 == 0) {
          (**(code **)(*plStack_a8 + 0x10))();
          goto LAB_00e7bd80;
        }
        if ((int)lVar25 != 0) goto LAB_00e7bd80;
LAB_00e7c6f4:
        pcVar20 = "count != std::numeric_limits<uint32_t>::max()";
        pcVar21 = "DecrementReferenceInternal";
        pcVar22 = 
        "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
        ;
        pcVar23 = "Reference counter underflows.";
LAB_00e7c714:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl(pcVar20,pcVar21,pcVar22,0x58,pcVar23);
      }
LAB_00e7bd80:
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x60))();
      }
      FUN_00c9e664(&local_b0,param_1 + 0xe8);
      pfVar17 = (float *)(**(code **)(*(long *)plStack_a8[9] + 0x68))();
      fVar40 = *pfVar17;
      fVar48 = pfVar17[1];
      fVar50 = pfVar17[2];
      fVar52 = pfVar17[3];
      auVar32._0_4_ = fVar40 * fVar40 + fVar48 * fVar48;
      auVar32._4_4_ = fVar50 * fVar50 + fVar52 * fVar52;
      auVar32._8_4_ = fVar40 * fVar40 + fVar48 * fVar48;
      auVar32._12_4_ = fVar50 * fVar50 + fVar52 * fVar52;
      auVar59 = NEON_ext(auVar32,auVar32,4,1);
      auVar33._0_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar33._4_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar33._8_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar33._12_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar59 = NEON_frsqrte(auVar33,4);
      auVar73._0_4_ = auVar33._0_4_ * auVar59._0_4_;
      auVar73._4_4_ = auVar33._4_4_ * auVar59._4_4_;
      auVar73._8_4_ = auVar33._8_4_ * auVar59._8_4_;
      auVar73._12_4_ = auVar33._12_4_ * auVar59._12_4_;
      auVar74 = NEON_frsqrts(auVar59,auVar73,4);
      auVar68._0_4_ = auVar59._0_4_ * auVar74._0_4_;
      auVar68._4_4_ = auVar59._4_4_ * auVar74._4_4_;
      auVar68._8_4_ = auVar59._8_4_ * auVar74._8_4_;
      auVar68._12_4_ = auVar59._12_4_ * auVar74._12_4_;
      auVar75._0_4_ = auVar33._0_4_ * auVar68._0_4_;
      auVar75._4_4_ = auVar33._4_4_ * auVar68._4_4_;
      auVar75._8_4_ = auVar33._8_4_ * auVar68._8_4_;
      auVar75._12_4_ = auVar33._12_4_ * auVar68._12_4_;
      iVar58 = -(uint)(auVar33._0_4_ == 0.0);
      iVar63 = -(uint)(auVar33._4_4_ == 0.0);
      iVar64 = -(uint)(auVar33._8_4_ == 0.0);
      iVar65 = -(uint)(auVar33._12_4_ == 0.0);
      auVar59 = NEON_frsqrts(auVar68,auVar75,4);
      fVar40 = fVar40 * auVar68._0_4_ * auVar59._0_4_;
      fVar48 = fVar48 * auVar68._4_4_ * auVar59._4_4_;
      fVar50 = fVar50 * auVar68._8_4_ * auVar59._8_4_;
      fVar52 = fVar52 * auVar68._12_4_ * auVar59._12_4_;
      fVar53 = (float)*(undefined8 *)(pfVar17 + 4);
      fVar55 = (float)((ulong)*(undefined8 *)(pfVar17 + 4) >> 0x20);
      fVar56 = (float)*(undefined8 *)(pfVar17 + 6);
      fVar57 = (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20);
      auVar34._0_4_ = fVar53 * fVar53 + fVar55 * fVar55;
      auVar34._4_4_ = fVar56 * fVar56 + fVar57 * fVar57;
      auVar34._8_4_ = fVar53 * fVar53 + fVar55 * fVar55;
      auVar34._12_4_ = fVar56 * fVar56 + fVar57 * fVar57;
      auVar59 = NEON_ext(auVar34,auVar34,4,1);
      auVar35._0_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar35._4_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar35._8_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar35._12_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar59 = NEON_frsqrte(auVar35,4);
      auVar78._0_4_ = auVar35._0_4_ * auVar59._0_4_;
      auVar78._4_4_ = auVar35._4_4_ * auVar59._4_4_;
      auVar78._8_4_ = auVar35._8_4_ * auVar59._8_4_;
      auVar78._12_4_ = auVar35._12_4_ * auVar59._12_4_;
      auVar74 = NEON_frsqrts(auVar59,auVar78,4);
      auVar76._0_4_ = auVar59._0_4_ * auVar74._0_4_;
      auVar76._4_4_ = auVar59._4_4_ * auVar74._4_4_;
      auVar76._8_4_ = auVar59._8_4_ * auVar74._8_4_;
      auVar76._12_4_ = auVar59._12_4_ * auVar74._12_4_;
      auVar79._0_4_ = auVar35._0_4_ * auVar76._0_4_;
      auVar79._4_4_ = auVar35._4_4_ * auVar76._4_4_;
      auVar79._8_4_ = auVar35._8_4_ * auVar76._8_4_;
      auVar79._12_4_ = auVar35._12_4_ * auVar76._12_4_;
      iVar66 = -(uint)(auVar35._0_4_ == 0.0);
      iVar70 = -(uint)(auVar35._4_4_ == 0.0);
      iVar71 = -(uint)(auVar35._8_4_ == 0.0);
      iVar72 = -(uint)(auVar35._12_4_ == 0.0);
      auVar59 = NEON_frsqrts(auVar76,auVar79,4);
      fVar53 = fVar53 * auVar76._0_4_ * auVar59._0_4_;
      fVar55 = fVar55 * auVar76._4_4_ * auVar59._4_4_;
      fVar56 = fVar56 * auVar76._8_4_ * auVar59._8_4_;
      fVar57 = fVar57 * auVar76._12_4_ * auVar59._12_4_;
      fVar41 = pfVar17[8];
      fVar49 = pfVar17[9];
      fVar51 = pfVar17[10];
      fVar81 = pfVar17[0xb] * pfVar17[0xb];
      auVar36._0_4_ = fVar41 * fVar41 + fVar49 * fVar49;
      auVar36._4_4_ = fVar51 * fVar51 + fVar81;
      auVar36._8_4_ = fVar41 * fVar41 + fVar49 * fVar49;
      auVar36._12_4_ = fVar51 * fVar51 + fVar81;
      auVar59 = NEON_ext(auVar36,auVar36,4,1);
      auVar37._0_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar37._4_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar37._8_4_ = auVar59._0_4_ + auVar59._4_4_;
      auVar37._12_4_ = auVar59._8_4_ + auVar59._12_4_;
      auVar59 = NEON_frsqrte(auVar37,4);
      auVar87._0_4_ = auVar37._0_4_ * auVar59._0_4_;
      auVar87._4_4_ = auVar37._4_4_ * auVar59._4_4_;
      auVar87._8_4_ = auVar37._8_4_ * auVar59._8_4_;
      auVar87._12_4_ = auVar37._12_4_ * auVar59._12_4_;
      auVar74 = NEON_frsqrts(auVar59,auVar87,4);
      auVar82._0_4_ = auVar59._0_4_ * auVar74._0_4_;
      auVar82._4_4_ = auVar59._4_4_ * auVar74._4_4_;
      auVar82._8_4_ = auVar59._8_4_ * auVar74._8_4_;
      auVar82._12_4_ = auVar59._12_4_ * auVar74._12_4_;
      auVar88._0_4_ = auVar37._0_4_ * auVar82._0_4_;
      auVar88._4_4_ = auVar37._4_4_ * auVar82._4_4_;
      auVar88._8_4_ = auVar37._8_4_ * auVar82._8_4_;
      auVar88._12_4_ = auVar37._12_4_ * auVar82._12_4_;
      auVar59 = NEON_frsqrts(auVar82,auVar88,4);
      fVar81 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                               CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar40 >> 8) &
                                                  ~(byte)((uint)iVar58 >> 8),
                                                  SUB41(fVar40,0) & ~(byte)iVar58)));
      auVar86._0_8_ =
           CONCAT17((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                    CONCAT16((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                             CONCAT15((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                      CONCAT14(SUB41(fVar48,0) & ~(byte)iVar63,fVar81))));
      auVar86[8] = SUB41(fVar50,0) & ~(byte)iVar64;
      auVar86[9] = (byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar64 >> 8);
      auVar86[10] = (byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
      auVar86[0xb] = (byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
      auVar89[0xc] = SUB41(fVar52,0) & ~(byte)iVar65;
      auVar89._0_12_ = auVar86;
      auVar89[0xd] = (byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar65 >> 8);
      auVar89[0xe] = (byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
      auVar89[0xf] = (byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
      iVar58 = -(uint)(auVar37._0_4_ == 0.0);
      iVar63 = -(uint)(auVar37._4_4_ == 0.0);
      iVar64 = -(uint)(auVar37._8_4_ == 0.0);
      fVar53 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                               CONCAT12((byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar53 >> 8) &
                                                  ~(byte)((uint)iVar66 >> 8),
                                                  SUB41(fVar53,0) & ~(byte)iVar66)));
      auVar60._0_8_ =
           CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                    CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                             CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                      CONCAT14(SUB41(fVar55,0) & ~(byte)iVar70,fVar53))));
      auVar60[8] = SUB41(fVar56,0) & ~(byte)iVar71;
      auVar60[9] = (byte)((uint)fVar56 >> 8) & ~(byte)((uint)iVar71 >> 8);
      auVar60[10] = (byte)((uint)fVar56 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
      auVar60[0xb] = (byte)((uint)fVar56 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
      auVar60[0xc] = SUB41(fVar57,0) & ~(byte)iVar72;
      auVar60[0xd] = (byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar72 >> 8);
      auVar60[0xe] = (byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
      auVar60[0xf] = (byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
      fVar41 = fVar41 * auVar82._0_4_ * auVar59._0_4_;
      fVar49 = fVar49 * auVar82._4_4_ * auVar59._4_4_;
      fVar51 = fVar51 * auVar82._8_4_ * auVar59._8_4_;
      fVar55 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                               CONCAT12((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar41 >> 8) &
                                                  ~(byte)((uint)iVar58 >> 8),
                                                  SUB41(fVar41,0) & ~(byte)iVar58)));
      auVar67._0_8_ =
           CONCAT17((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                    CONCAT16((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                             CONCAT15((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                      CONCAT14(SUB41(fVar49,0) & ~(byte)iVar63,fVar55))));
      auVar67[8] = SUB41(fVar51,0) & ~(byte)iVar64;
      auVar67[9] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar64 >> 8);
      auVar67[10] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
      auVar67[0xb] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
      auVar59 = NEON_fmov(0x3f800000,4);
      fVar40 = (float)((ulong)auVar60._0_8_ >> 0x20);
      fVar41 = auVar67._8_4_;
      fVar48 = auVar59._0_4_ + (float)_DAT_03cab3a0 * fVar81 + (float)_DAT_03cac210 * fVar40 +
               (float)_DAT_03cabb00 * fVar41;
      fVar50 = auVar59._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar81 +
               (float)((ulong)_DAT_03cac210 >> 0x20) * fVar40 +
               (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar41;
      fVar52 = auVar59._8_4_ + (float)_UNK_03cab3a8 * fVar81 + (float)_UNK_03cac218 * fVar40 +
               (float)_UNK_03cabb08 * fVar41;
      fVar41 = auVar59._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar81 +
               (float)((ulong)_UNK_03cac218 >> 0x20) * fVar40 +
               (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar41;
      fVar49 = (float)((ulong)auVar67._0_8_ >> 0x20);
      auVar59 = NEON_fmov(0x40800000,4);
      auVar92 = NEON_ext(auVar60,auVar60,8,1);
      auVar77._0_4_ = SQRT(fVar48) * 0.5 * auVar59._0_4_;
      auVar77._4_4_ = SQRT(fVar50) * 0.5 * auVar59._4_4_;
      auVar77._8_4_ = SQRT(fVar52) * 0.5 * auVar59._8_4_;
      auVar77._12_4_ = SQRT(fVar41) * 0.5 * auVar59._12_4_;
      auVar96 = NEON_ext(auVar89,auVar89,8,1);
      auVar59 = NEON_frecpe(auVar77,4);
      auVar74 = NEON_frecps(auVar59,auVar77,4);
      fVar40 = auVar92._0_4_;
      auVar80._0_4_ = auVar59._0_4_ * auVar74._0_4_;
      auVar80._4_4_ = auVar59._4_4_ * auVar74._4_4_;
      auVar80._8_4_ = auVar59._8_4_ * auVar74._8_4_;
      auVar80._12_4_ = auVar59._12_4_ * auVar74._12_4_;
      auVar59 = NEON_frecps(auVar80,auVar77,4);
      fVar51 = auVar80._0_4_ * auVar59._0_4_;
      fVar56 = auVar80._4_4_ * auVar59._4_4_;
      fVar57 = auVar80._8_4_ * auVar59._8_4_;
      fVar81 = auVar80._12_4_ * auVar59._12_4_;
      fVar90 = (float)((ulong)auVar86._0_8_ >> 0x20);
      fVar85 = auVar96._0_4_ + fVar55;
      auVar8._8_4_ = fVar40 + -fVar49;
      auVar8._4_4_ = fVar85;
      fVar91 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)fVar50) & -(uint)(fVar48 <= fVar50));
      fVar93 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)fVar50) & -(uint)(fVar48 <= fVar50));
      fVar94 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)fVar50) & -(uint)(fVar48 <= fVar50));
      fVar95 = (float)((uint)fVar48 ^ ((uint)fVar48 ^ (uint)fVar50) & -(uint)(fVar48 <= fVar50));
      auVar8._0_4_ = (fVar90 + fVar53) * fVar51;
      auVar83._0_8_ = auVar8._0_8_ << 0x20;
      auVar83._8_4_ = fVar85 * fVar51;
      auVar83._12_4_ = (fVar40 + -fVar49) * fVar51;
      auVar84._4_12_ = auVar83._4_12_;
      auVar84._0_4_ = SQRT(fVar48) * 0.5;
      auVar69._0_4_ = (auVar96._0_4_ + fVar55) * fVar57;
      auVar69._4_4_ = (fVar40 + fVar49) * fVar57;
      auVar69._12_4_ = (fVar90 - fVar53) * fVar57;
      auVar61._0_4_ = (fVar40 - fVar49) * fVar81;
      auVar61._4_4_ = (fVar55 - auVar86._8_4_) * fVar81;
      auVar61._8_4_ = (fVar90 - fVar53) * fVar81;
      auVar5._4_4_ = SQRT(fVar50) * 0.5;
      auVar5._0_4_ = (fVar90 + fVar53) * fVar56;
      auVar5._8_4_ = (fVar40 + fVar49) * fVar56;
      auVar5._12_4_ = (fVar55 + -auVar86._8_4_) * fVar56;
      auVar7._4_4_ = -(uint)(fVar48 <= fVar50);
      auVar7._0_4_ = -(uint)(fVar48 <= fVar50);
      auVar7._8_4_ = -(uint)(fVar48 <= fVar50);
      auVar7._12_4_ = -(uint)(fVar48 <= fVar50);
      auVar69._8_4_ = SQRT(fVar52) * 0.5;
      auVar61._12_4_ = SQRT(fVar41) * 0.5;
      auVar6._4_4_ = -(uint)(fVar93 <= fVar52);
      auVar6._0_4_ = -(uint)(fVar91 <= fVar52);
      auVar6._8_4_ = -(uint)(fVar94 <= fVar52);
      auVar6._12_4_ = -(uint)(fVar95 <= fVar52);
      auVar69 = auVar69 ^ (auVar69 ^ auVar84 ^ (auVar84 ^ auVar5) & auVar7) & ~auVar6;
      auVar43._0_4_ =
           -(uint)((float)((uint)fVar91 ^ ((uint)fVar91 ^ (uint)fVar52) & -(uint)(fVar91 <= fVar52))
                  <= fVar41);
      auVar43._4_4_ =
           -(uint)((float)((uint)fVar93 ^ ((uint)fVar93 ^ (uint)fVar52) & -(uint)(fVar93 <= fVar52))
                  <= fVar41);
      auVar43._8_4_ =
           -(uint)((float)((uint)fVar94 ^ ((uint)fVar94 ^ (uint)fVar52) & -(uint)(fVar94 <= fVar52))
                  <= fVar41);
      auVar43._12_4_ =
           -(uint)((float)((uint)fVar95 ^ ((uint)fVar95 ^ (uint)fVar52) & -(uint)(fVar95 <= fVar52))
                  <= fVar41);
      auVar69 = auVar69 ^ (auVar69 ^ auVar61) & auVar43;
      *(long *)(param_1 + 0x198) = auVar69._8_8_;
      *(long *)(param_1 + 400) = auVar69._0_8_;
      if (plStack_a8 != (long *)0x0) {
        plVar30 = plStack_a8 + 5;
        do {
          lVar25 = *plVar30;
          iVar58 = (int)lVar25 + -1;
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar30,0x10);
          if (bVar16) {
            *(int *)plVar30 = iVar58;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar58 == 0) {
          (**(code **)(*plStack_a8 + 0x10))();
        }
        else if ((int)lVar25 == 0) goto LAB_00e7c6f4;
      }
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x60))();
      }
      lVar25 = *(long *)(param_1 + 0x140);
      if ((lVar25 != 0) && (*(short *)(lVar25 + 0x1a) != 0)) {
        psVar1 = (short *)(lVar25 + 0x1a);
        sVar26 = *(short *)(lVar25 + 0x1a);
LAB_00e7c224:
        sVar3 = *psVar1;
        if (sVar3 == sVar26) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar16) {
            *psVar1 = sVar26 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00e7c248;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00e7c248:
          bVar16 = false;
        }
        if (!bVar16) goto code_r0x00e7c250;
        lVar25 = *(long *)(lVar25 + 0x10);
        if (lVar25 != 0) {
          plVar30 = *(long **)(lVar25 + 0x48);
          if (plVar30 == (long *)0x0) {
            bVar16 = true;
          }
          else {
            lVar31 = plVar30[6];
            if (*(long *)(lVar31 + 0x10) == 0) goto LAB_00e7c71c;
            psVar1 = (short *)(lVar31 + 0x1a);
            do {
              sVar26 = *psVar1;
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar16) {
                *psVar1 = sVar26 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar26 != 0) {
              if (sVar26 != -1) goto LAB_00e7c2b0;
              goto LAB_00e7c73c;
            }
            uVar18 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
            *(undefined8 *)(lVar31 + 8) = uVar18;
            *(undefined4 *)(lVar31 + 0x1c) = 0xfffffffe;
LAB_00e7c2b0:
            fVar40 = (float)(**(code **)(*plVar30 + 0xc0))(plVar30);
            lVar31 = plVar30[6];
            psVar1 = (short *)(lVar31 + 0x1a);
            bVar16 = fVar40 < 0.001;
            do {
              sVar26 = *psVar1;
              cVar4 = '\x01';
              bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar24) {
                *psVar1 = sVar26 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar26 == 1) {
              *(undefined8 *)(lVar31 + 0x10) = 0;
              (**(code **)(*plVar30 + 0x50))(plVar30);
            }
            else if (sVar26 == 0) goto LAB_00e7c078;
          }
          lVar31 = *(long *)(lVar25 + 8);
          psVar1 = (short *)(lVar31 + 0x1a);
          do {
            sVar26 = *psVar1;
            cVar4 = '\x01';
            bVar24 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar24) {
              *psVar1 = sVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar26 == 1) {
            *(undefined8 *)(lVar31 + 0x10) = 0;
            (**(code **)(*(long *)(lVar25 + -0x28) + 0x50))();
          }
          else if (sVar26 == 0) goto LAB_00e7c078;
          *(bool *)(param_1 + 0x1a2) = bVar16;
          if (bVar16 != false) goto LAB_00e7bfcc;
          if (*(char *)(param_1 + 0x1a1) == '\0') {
            iVar58 = *(int *)(param_1 + 0x1a4) + -1;
            if ((*(int *)(param_1 + 0x1a4) < 1) || (*(int *)(param_1 + 0x1a4) = iVar58, iVar58 == 0)
               ) {
              auVar59 = *(undefined1 (*) [16])(param_1 + 0x1b0);
              fVar40 = (*(float *)(param_1 + 0x210) + (float)*(undefined8 *)(param_1 + 0x1f0)) -
                       ((float)*(undefined8 *)(param_1 + 0x1d0) + auVar59._0_4_);
              fVar48 = (*(float *)(param_1 + 0x214) +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x1f0) >> 0x20)) -
                       ((float)((ulong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20) + auVar59._4_4_);
              fVar50 = (*(float *)(param_1 + 0x218) + (float)*(undefined8 *)(param_1 + 0x1f8)) -
                       ((float)*(undefined8 *)(param_1 + 0x1d8) + auVar59._8_4_);
              fVar40 = fVar40 * fVar40;
              fVar48 = fVar48 * fVar48;
              fVar50 = fVar50 * fVar50;
              auVar38._0_4_ = fVar40 + fVar48;
              auVar38._4_4_ = fVar50 + 0.0;
              auVar38._8_4_ = fVar40 + fVar48;
              auVar38._12_4_ = fVar50 + 0.0;
              auVar59 = NEON_ext(auVar38,auVar38,4,1);
              if (auVar59._0_4_ + auVar59._4_4_ <= 0.00025) {
                auVar59 = *(undefined1 (*) [16])(param_1 + 0x1c0);
                fVar40 = (*(float *)(param_1 + 0x220) + (float)*(undefined8 *)(param_1 + 0x200)) -
                         ((float)*(undefined8 *)(param_1 + 0x1e0) + auVar59._0_4_);
                fVar48 = (*(float *)(param_1 + 0x224) +
                         (float)((ulong)*(undefined8 *)(param_1 + 0x200) >> 0x20)) -
                         ((float)((ulong)*(undefined8 *)(param_1 + 0x1e0) >> 0x20) + auVar59._4_4_);
                fVar50 = (*(float *)(param_1 + 0x228) + (float)*(undefined8 *)(param_1 + 0x208)) -
                         ((float)*(undefined8 *)(param_1 + 0x1e8) + auVar59._8_4_);
                fVar40 = fVar40 * fVar40;
                fVar48 = fVar48 * fVar48;
                fVar50 = fVar50 * fVar50;
                auVar39._0_4_ = fVar40 + fVar48;
                auVar39._4_4_ = fVar50 + 0.0;
                auVar39._8_4_ = fVar40 + fVar48;
                auVar39._12_4_ = fVar50 + 0.0;
                auVar59 = NEON_ext(auVar39,auVar39,4,1);
                if (auVar59._0_4_ + auVar59._4_4_ <= 0.00025) goto LAB_00e7bfcc;
              }
              goto LAB_00e7c3cc;
            }
          }
          else {
LAB_00e7c3cc:
            *(undefined4 *)(param_1 + 0x1a4) = 2;
          }
          uVar14 = _UNK_03cabe68;
          uVar13 = _DAT_03cabe60;
          *(undefined1 *)(param_1 + 0x1a0) = 1;
          puVar15 = PTR_DAT_047d8c08;
          uVar18 = _DAT_03caaf50;
          lVar25 = 0;
          bVar16 = true;
          do {
            bVar24 = bVar16;
            (**(code **)(*plVar29 + 0xa0))
                      (&local_68,plVar29,*(undefined4 *)(param_1 + lVar25 * 8 + 0x160));
            if (local_68 != (long *)0x0) {
              lVar31 = param_1 + lVar25 * 0x10;
              uVar54 = *(undefined8 *)(lVar31 + 0x1b0);
              auVar44._0_4_ = *(float *)(lVar31 + 0x1d0) + (float)uVar54;
              auVar44._4_4_ = *(float *)(lVar31 + 0x1d4) + (float)((ulong)uVar54 >> 0x20);
              auVar44._8_4_ = *(float *)(lVar31 + 0x1d8) + (float)*(undefined8 *)(lVar31 + 0x1b8);
              auVar44._12_4_ =
                   *(float *)(lVar31 + 0x1dc) +
                   (float)((ulong)*(undefined8 *)(lVar31 + 0x1b8) >> 0x20);
              (**(code **)(*local_68 + 0xb0))(auVar44,uVar54);
              auVar45._8_8_ = _UNK_03d5efe8;
              auVar45._0_8_ = _DAT_03d5efe0;
              (**(code **)(*local_68 + 200))(auVar45);
              lVar25 = param_1 + lVar25 * 4;
              piVar2 = (int *)(lVar25 + 0x230);
              auVar62._0_8_ =
                   CONCAT44(*(float *)(lVar31 + 0x1b4) + (float)((ulong)uVar13 >> 0x20),
                            *(float *)(lVar31 + 0x1b0) + (float)uVar13);
              auVar62._8_4_ = *(float *)(lVar31 + 0x1b8) + (float)uVar14;
              auVar62._12_4_ = *(float *)(lVar31 + 0x1bc) + (float)((ulong)uVar14 >> 0x20);
              uVar54 = CONCAT44(*(float *)(lVar31 + 0x1b4) + (float)((ulong)uVar18 >> 0x20),
                                *(float *)(lVar31 + 0x1b0) + (float)uVar18);
              *(undefined4 *)(lVar25 + 0x230) = 0;
              if (*(char *)(param_1 + 0x173) == '\0') {
LAB_00e7c5cc:
                if (((*PTR_DAT_047d8c00 & 1) == 0) &&
                   (iVar58 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar58 != 0)) {
                  FUN_00100190(PTR_LAB_047d8d08,puVar15,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8c00);
                }
                lVar25 = *(long *)puVar15;
                *(long *)PTR_DAT_047d8c10 = lVar25;
                lVar25 = *(long *)(lVar25 + 0x70);
                if (lVar25 != 0) {
                  auVar10._8_8_ = auVar62._8_8_;
                  auVar10._0_8_ = auVar62._0_8_;
                  local_78 = 0;
                  local_80 = 0;
                  local_b0 = (long *)0x0;
                  plStack_a8 = (long *)0x0;
                  local_b6 = 0;
                  local_b8 = 1;
                  local_a0 = 0;
                  plStack_98 = (long *)0x0;
                  local_90 = 0;
                  uStack_88 = 0;
                  uVar19 = FUN_00d6fedc(auVar10,uVar54,lVar25,0x42,&local_b0,0,&local_b8);
                  if ((uVar19 & 1) != 0) {
                    *piVar2 = 1;
                    auVar46._0_4_ = *(float *)(lVar31 + 0x1d0) + SUB84(local_b0,0);
                    auVar46._4_4_ = *(float *)(lVar31 + 0x1d4) + (float)((ulong)local_b0 >> 0x20);
                    auVar46._8_4_ = *(float *)(lVar31 + 0x1d8) + SUB84(plStack_a8,0);
                    auVar46._12_4_ = *(float *)(lVar31 + 0x1dc) + (float)((ulong)plStack_a8 >> 0x20)
                    ;
                    (**(code **)(*local_68 + 0xb0))(auVar46,local_b0);
                    auVar11._8_8_ = plStack_98;
                    auVar11._0_8_ = local_a0;
                    (**(code **)(*local_68 + 200))(auVar11);
                  }
                  if ((local_78 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 - 1,0);
                  }
                }
              }
              else {
                if (((*PTR_DAT_047d8c00 & 1) == 0) &&
                   (iVar58 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar58 != 0)) {
                  FUN_00100190(PTR_LAB_047d8d08,puVar15,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d8c00);
                }
                lVar25 = *(long *)puVar15;
                *(long *)PTR_DAT_047d8c10 = lVar25;
                lVar25 = *(long *)(lVar25 + 0x70);
                if (lVar25 != 0) {
                  auVar9._8_8_ = auVar62._8_8_;
                  auVar9._0_8_ = auVar62._0_8_;
                  local_78 = 0;
                  local_80 = 0;
                  local_b0 = (long *)0x0;
                  plStack_a8 = (long *)0x0;
                  local_b6 = 0;
                  local_b8 = 1;
                  local_a0 = 0;
                  plStack_98 = (long *)0x0;
                  local_90 = 0;
                  uStack_88 = 0;
                  uVar19 = FUN_00d6fedc(auVar9,uVar54,lVar25,0x800,&local_b0,0,&local_b8);
                  if ((uVar19 & 1) != 0) {
                    *piVar2 = 2;
                    auVar47._0_4_ = *(float *)(lVar31 + 0x1d0) + SUB84(local_b0,0);
                    auVar47._4_4_ = *(float *)(lVar31 + 0x1d4) + (float)((ulong)local_b0 >> 0x20);
                    auVar47._8_4_ = *(float *)(lVar31 + 0x1d8) + SUB84(plStack_a8,0);
                    auVar47._12_4_ = *(float *)(lVar31 + 0x1dc) + (float)((ulong)plStack_a8 >> 0x20)
                    ;
                    (**(code **)(*local_68 + 0xb0))(auVar47,local_b0);
                    auVar12._8_8_ = plStack_98;
                    auVar12._0_8_ = local_a0;
                    (**(code **)(*local_68 + 200))(auVar12);
                  }
                  if ((local_78 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_78 - 1,0);
                  }
                  if (*piVar2 == 0) goto LAB_00e7c5cc;
                }
              }
              if (local_68 != (long *)0x0) {
                lVar25 = local_68[6];
                psVar1 = (short *)(lVar25 + 0x1a);
                do {
                  sVar26 = *psVar1;
                  cVar4 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar16) {
                    *psVar1 = sVar26 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar26 == 1) {
                  *(undefined8 *)(lVar25 + 0x10) = 0;
                  (**(code **)(*local_68 + 0x50))();
                }
                else if (sVar26 == 0) goto LAB_00e7c078;
              }
            }
            lVar25 = 1;
            bVar16 = false;
          } while (bVar24);
          goto LAB_00e7bfd0;
        }
      }
LAB_00e7bfc4:
      *(undefined1 *)(param_1 + 0x1a2) = 1;
LAB_00e7bfcc:
      *(undefined1 *)(param_1 + 0x1a0) = 0;
LAB_00e7bfd0:
      if (*(char *)(param_1 + 0x171) == '\0') {
        lVar25 = *plVar29;
      }
      else {
        (**(code **)(*plVar29 + 0xc0))(plVar29);
        lVar25 = *plVar29;
      }
      (**(code **)(lVar25 + 0xb0))(plVar29);
      lVar25 = plVar29[6];
      psVar1 = (short *)(lVar25 + 0x1a);
      do {
        sVar26 = *psVar1;
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar16) {
          *psVar1 = sVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar26 == 1) {
        *(undefined8 *)(lVar25 + 0x10) = 0;
        (**(code **)(*plVar29 + 0x50))(plVar29);
      }
      else if (sVar26 == 0) goto LAB_00e7c078;
      goto LAB_00e7c01c;
    }
LAB_00e7c054:
    lVar25 = plVar28[6];
    psVar1 = (short *)(lVar25 + 0x1a);
    do {
      sVar26 = *psVar1;
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar16) {
        *psVar1 = sVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar26 == 1) {
      *(undefined8 *)(lVar25 + 0x10) = 0;
      (**(code **)(*plVar28 + 0x50))(plVar28);
    }
    else if (sVar26 == 0) {
LAB_00e7c078:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (plVar27 == (long *)0x0) {
    return;
  }
LAB_00e7c024:
  (**(code **)(*plVar27 + 0x60))(plVar27);
  return;
code_r0x00e7c250:
  sVar26 = sVar3;
  if (sVar3 == 0) goto LAB_00e7bfc4;
  goto LAB_00e7c224;
}


