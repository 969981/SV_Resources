/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a32780; name: FUN_00a32780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a32780(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  float *pfVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar33;
  undefined1 auVar28 [12];
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar43;
  undefined6 uVar44;
  byte bVar59;
  float fVar57;
  float fVar58;
  byte bVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar45 [12];
  float fVar63;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  float fVar64;
  undefined1 auVar65 [12];
  float fVar80;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar76 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  float fVar84;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  int iVar95;
  int iVar96;
  int iVar97;
  int iVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar13 = FUN_01104bd8(*param_2 + 0x108,&local_48);
  if (lVar13 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    return;
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00c43ef0(&local_48,lVar13 + 0x98);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  if (local_48[2] == lVar13 + 0x28) {
    FUN_00d6ca28(&local_58,&local_48);
  }
  puVar11 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_38 = *puVar11;
        FUN_00c44438(lVar16 + 0x8040,&local_38);
      }
    }
    else if (sVar4 == 0) goto LAB_00a32990;
  }
  if (((local_58 != (undefined8 *)0x0) && (*(short *)((long)local_58 + 0x1a) != 0)) &&
     (lVar16 = *(long *)(*(long *)(lVar13 + 0x138) + 0x70), lVar16 != 0)) {
    plVar15 = *(long **)(lVar16 + 0x30);
    if (plVar15 != *(long **)(lVar16 + 0x38)) {
LAB_00a32854:
      uVar17 = *(ulong *)(*plVar15 + 0x40);
      if (uVar17 != 0) {
        uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          uVar19 = uVar17 - 1 & 0xd36b2ac302427423;
        }
        else {
          uVar19 = 0xd36b2ac302427423;
          if (uVar17 < 0xd36b2ac302427424) {
            uVar19 = 0;
            if (uVar17 != 0) {
              uVar19 = 0xd36b2ac302427423 / uVar17;
            }
            uVar19 = 0xd36b2ac302427423 - uVar19 * uVar17;
          }
        }
        plVar20 = *(long **)(*(long *)(*plVar15 + 0x38) + uVar19 * 8);
        if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if (plVar20[1] == 0xd36b2ac302427423) {
                if (plVar20[2] == -0x2c94d53cfdbd8bdd) goto LAB_00a32948;
              }
              else if ((plVar20[1] & uVar17 - 1) != uVar19) break;
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
          else {
            do {
              uVar18 = plVar20[1];
              if (uVar18 == 0xd36b2ac302427423) {
                if (plVar20[2] == -0x2c94d53cfdbd8bdd) goto LAB_00a32948;
              }
              else {
                if (uVar17 <= uVar18) {
                  uVar7 = 0;
                  if (uVar17 != 0) {
                    uVar7 = uVar18 / uVar17;
                  }
                  uVar18 = uVar18 - uVar7 * uVar17;
                }
                if (uVar18 != uVar19) break;
              }
              plVar20 = (long *)*plVar20;
            } while (plVar20 != (long *)0x0);
          }
        }
      }
      goto LAB_00a32950;
    }
  }
LAB_00a3295c:
  uVar103 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00a32964:
  puVar11 = local_58;
  *(undefined1 *)(param_1 + 2) = uVar103;
  if (local_58 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_58 + 3);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar12 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) {
LAB_00a32990:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_00a32948:
  if (-1 < (short)plVar20[6]) {
    uVar3 = (uint)*(ushort *)((long)plVar15 + 10) + (int)(short)plVar20[6];
    if ((~uVar3 & 0xffff) != 0) {
      FUN_01420cb8(lVar13,uVar3);
      lVar16 = *(long *)(lVar13 + 0x148);
      auVar29._8_8_ = _UNK_03cabe58;
      auVar29._0_8_ = _DAT_03cabe50;
      auVar28 = auVar29._0_12_;
      goto joined_r0x00a32a04;
    }
    goto LAB_00a3295c;
  }
LAB_00a32950:
  plVar15 = plVar15 + 2;
  if (plVar15 == *(long **)(lVar16 + 0x38)) goto LAB_00a3295c;
  goto LAB_00a32854;
joined_r0x00a32a04:
  if (lVar16 == *(long *)(lVar13 + 0x150)) goto LAB_00a32a28;
  if ((uint)*(ushort *)(lVar16 + 0x40) == (uVar3 & 0xffff)) {
    auVar28 = SUB1612(*(undefined1 (*) [16])(lVar16 + 0x30),0);
    goto LAB_00a32a28;
  }
  lVar16 = lVar16 + 0x50;
  goto joined_r0x00a32a04;
LAB_00a32a28:
  fVar27 = auVar28._0_4_ + (float)_DAT_03cab820;
  fVar33 = auVar28._4_4_ + (float)((ulong)_DAT_03cab820 >> 0x20);
  fVar34 = auVar28._8_4_ + (float)_UNK_03cab828;
  pfVar14 = (float *)(**(code **)(*(long *)*param_2 + 0x68))();
  fVar35 = *pfVar14;
  fVar39 = pfVar14[1];
  fVar40 = pfVar14[2];
  fVar41 = pfVar14[3];
  fVar42 = pfVar14[4];
  fVar57 = pfVar14[5];
  fVar61 = pfVar14[6];
  fVar63 = pfVar14[7];
  fVar62 = (float)*(undefined8 *)(pfVar14 + 10);
  fVar84 = (float)((ulong)*(undefined8 *)(pfVar14 + 10) >> 0x20);
  fVar43 = (float)*(undefined8 *)(pfVar14 + 8);
  fVar58 = (float)((ulong)*(undefined8 *)(pfVar14 + 8) >> 0x20);
  fVar84 = fVar84 * fVar84;
  auVar21._0_4_ = fVar42 * fVar42 + fVar57 * fVar57;
  auVar21._4_4_ = fVar61 * fVar61 + fVar63 * fVar63;
  auVar21._8_4_ = fVar42 * fVar42 + fVar57 * fVar57;
  auVar21._12_4_ = fVar61 * fVar61 + fVar63 * fVar63;
  auVar22._0_4_ = fVar43 * fVar43 + fVar58 * fVar58;
  auVar22._4_4_ = fVar62 * fVar62 + fVar84;
  auVar22._8_4_ = fVar43 * fVar43 + fVar58 * fVar58;
  auVar22._12_4_ = fVar62 * fVar62 + fVar84;
  auVar23._0_4_ = fVar35 * fVar35 + fVar39 * fVar39;
  auVar23._4_4_ = fVar40 * fVar40 + fVar41 * fVar41;
  auVar23._8_4_ = fVar35 * fVar35 + fVar39 * fVar39;
  auVar23._12_4_ = fVar40 * fVar40 + fVar41 * fVar41;
  auVar66 = NEON_ext(auVar21,auVar21,4,1);
  auVar81 = NEON_ext(auVar22,auVar22,4,1);
  auVar29 = NEON_ext(auVar23,auVar23,4,1);
  auVar24._0_4_ = auVar66._0_4_ + auVar66._4_4_;
  auVar24._4_4_ = auVar66._8_4_ + auVar66._12_4_;
  auVar24._8_4_ = auVar66._0_4_ + auVar66._4_4_;
  auVar24._12_4_ = auVar66._8_4_ + auVar66._12_4_;
  auVar25._0_4_ = auVar81._0_4_ + auVar81._4_4_;
  auVar25._4_4_ = auVar81._8_4_ + auVar81._12_4_;
  auVar25._8_4_ = auVar81._0_4_ + auVar81._4_4_;
  auVar25._12_4_ = auVar81._8_4_ + auVar81._12_4_;
  auVar26._0_4_ = auVar29._0_4_ + auVar29._4_4_;
  auVar26._4_4_ = auVar29._8_4_ + auVar29._12_4_;
  auVar26._8_4_ = auVar29._0_4_ + auVar29._4_4_;
  auVar26._12_4_ = auVar29._8_4_ + auVar29._12_4_;
  auVar66 = NEON_frsqrte(auVar24,4);
  auVar81 = NEON_frsqrte(auVar25,4);
  iVar89 = -(uint)(auVar26._0_4_ == 0.0);
  iVar90 = -(uint)(auVar26._4_4_ == 0.0);
  iVar91 = -(uint)(auVar26._8_4_ == 0.0);
  iVar92 = -(uint)(auVar26._12_4_ == 0.0);
  auVar29 = NEON_frsqrte(auVar26,4);
  auVar109._0_4_ = auVar24._0_4_ * auVar66._0_4_;
  auVar109._4_4_ = auVar24._4_4_ * auVar66._4_4_;
  auVar109._8_4_ = auVar24._8_4_ * auVar66._8_4_;
  auVar109._12_4_ = auVar24._12_4_ * auVar66._12_4_;
  iVar95 = -(uint)(auVar24._0_4_ == 0.0);
  iVar96 = -(uint)(auVar24._4_4_ == 0.0);
  iVar97 = -(uint)(auVar24._8_4_ == 0.0);
  iVar98 = -(uint)(auVar24._12_4_ == 0.0);
  iVar12 = -(uint)(auVar25._0_4_ == 0.0);
  iVar8 = -(uint)(auVar25._4_4_ == 0.0);
  iVar9 = -(uint)(auVar25._8_4_ == 0.0);
  auVar107._0_4_ = auVar26._0_4_ * auVar29._0_4_;
  auVar107._4_4_ = auVar26._4_4_ * auVar29._4_4_;
  auVar107._8_4_ = auVar26._8_4_ * auVar29._8_4_;
  auVar107._12_4_ = auVar26._12_4_ * auVar29._12_4_;
  auVar108 = NEON_frsqrts(auVar29,auVar107,4);
  auVar85._0_4_ = auVar29._0_4_ * auVar108._0_4_;
  auVar85._4_4_ = auVar29._4_4_ * auVar108._4_4_;
  auVar85._8_4_ = auVar29._8_4_ * auVar108._8_4_;
  auVar85._12_4_ = auVar29._12_4_ * auVar108._12_4_;
  auVar29 = NEON_frsqrts(auVar66,auVar109,4);
  auVar108._4_4_ = auVar25._4_4_ * auVar81._4_4_;
  auVar108._0_4_ = auVar25._0_4_ * auVar81._0_4_;
  auVar108._8_4_ = auVar25._8_4_ * auVar81._8_4_;
  auVar108._12_4_ = auVar25._12_4_ * auVar81._12_4_;
  auVar108 = NEON_frsqrts(auVar81,auVar108,4);
  auVar30._0_4_ = auVar26._0_4_ * auVar85._0_4_;
  auVar30._4_4_ = auVar26._4_4_ * auVar85._4_4_;
  auVar30._8_4_ = auVar26._8_4_ * auVar85._8_4_;
  auVar30._12_4_ = auVar26._12_4_ * auVar85._12_4_;
  auVar93._0_4_ = auVar66._0_4_ * auVar29._0_4_;
  auVar93._4_4_ = auVar66._4_4_ * auVar29._4_4_;
  auVar93._8_4_ = auVar66._8_4_ * auVar29._8_4_;
  auVar93._12_4_ = auVar66._12_4_ * auVar29._12_4_;
  auVar99._0_4_ = auVar81._0_4_ * auVar108._0_4_;
  auVar99._4_4_ = auVar81._4_4_ * auVar108._4_4_;
  auVar99._8_4_ = auVar81._8_4_ * auVar108._8_4_;
  auVar99._12_4_ = auVar81._12_4_ * auVar108._12_4_;
  auVar108 = NEON_frsqrts(auVar85,auVar30,4);
  auVar29 = NEON_fmov(0x3f800000,4);
  auVar67._0_4_ = auVar24._0_4_ * auVar93._0_4_;
  auVar67._4_4_ = auVar24._4_4_ * auVar93._4_4_;
  auVar67._8_4_ = auVar24._8_4_ * auVar93._8_4_;
  auVar67._12_4_ = auVar24._12_4_ * auVar93._12_4_;
  auVar82._0_4_ = auVar25._0_4_ * auVar99._0_4_;
  auVar82._4_4_ = auVar25._4_4_ * auVar99._4_4_;
  auVar82._8_4_ = auVar25._8_4_ * auVar99._8_4_;
  auVar82._12_4_ = auVar25._12_4_ * auVar99._12_4_;
  auVar66 = NEON_frsqrts(auVar93,auVar67,4);
  auVar81 = NEON_frsqrts(auVar99,auVar82,4);
  fVar35 = fVar35 * auVar85._0_4_ * auVar108._0_4_;
  fVar39 = fVar39 * auVar85._4_4_ * auVar108._4_4_;
  fVar40 = fVar40 * auVar85._8_4_ * auVar108._8_4_;
  fVar41 = fVar41 * auVar85._12_4_ * auVar108._12_4_;
  auVar100 = NEON_fmov(0x40800000,4);
  fVar42 = fVar42 * auVar93._0_4_ * auVar66._0_4_;
  fVar57 = fVar57 * auVar93._4_4_ * auVar66._4_4_;
  fVar61 = fVar61 * auVar93._8_4_ * auVar66._8_4_;
  fVar63 = fVar63 * auVar93._12_4_ * auVar66._12_4_;
  fVar64 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar89 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar89)));
  auVar65._0_8_ =
       CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10),
                         CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar90 >> 8),
                                  CONCAT14(SUB41(fVar39,0) & ~(byte)iVar90,fVar64))));
  auVar65[8] = SUB41(fVar40,0) & ~(byte)iVar91;
  auVar65[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar91 >> 8);
  auVar65[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
  auVar65[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
  auVar68[0xc] = SUB41(fVar41,0) & ~(byte)iVar92;
  auVar68._0_12_ = auVar65;
  auVar68[0xd] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar92 >> 8);
  auVar68[0xe] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10);
  auVar68[0xf] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18);
  fVar84 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar95 >> 0x18),
                           CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar95 >> 0x10),
                                    CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar95 >> 8),
                                             SUB41(fVar42,0) & ~(byte)iVar95)));
  auVar36._0_8_ =
       CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar96 >> 0x18),
                CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar96 >> 0x10),
                         CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar96 >> 8),
                                  CONCAT14(SUB41(fVar57,0) & ~(byte)iVar96,fVar84))));
  auVar36[8] = SUB41(fVar61,0) & ~(byte)iVar97;
  auVar36[9] = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar97 >> 8);
  auVar36[10] = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar97 >> 0x10);
  auVar36[0xb] = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar97 >> 0x18);
  auVar36[0xc] = SUB41(fVar63,0) & ~(byte)iVar98;
  auVar36[0xd] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar98 >> 8);
  auVar36[0xe] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar98 >> 0x10);
  auVar36[0xf] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18);
  fVar43 = fVar43 * auVar99._0_4_ * auVar81._0_4_;
  fVar58 = fVar58 * auVar99._4_4_ * auVar81._4_4_;
  fVar62 = fVar62 * auVar99._8_4_ * auVar81._8_4_;
  fVar35 = (float)((ulong)auVar36._0_8_ >> 0x20);
  fVar57 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                    CONCAT11((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                             SUB41(fVar43,0) & ~(byte)iVar12)));
  uVar44 = CONCAT15((byte)((uint)fVar58 >> 8) & ~(byte)((uint)iVar8 >> 8),
                    CONCAT14(SUB41(fVar58,0) & ~(byte)iVar8,fVar57));
  bVar59 = (byte)((uint)fVar58 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10);
  bVar60 = (byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18);
  auVar45._0_8_ = CONCAT17(bVar60,CONCAT16(bVar59,uVar44));
  auVar45[8] = SUB41(fVar62,0) & ~(byte)iVar9;
  auVar45[9] = (byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar9 >> 8);
  auVar45[10] = (byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar9 >> 0x10);
  auVar45[0xb] = (byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18);
  auVar66 = NEON_ext(auVar36,auVar36,8,1);
  fVar42 = auVar45._8_4_;
  fVar39 = auVar29._0_4_ + (float)_DAT_03cab3a0 * fVar64 + (float)_DAT_03cac210 * fVar35 +
           (float)_DAT_03cabb00 * fVar42;
  fVar40 = auVar29._4_4_ + (float)((ulong)_DAT_03cab3a0 >> 0x20) * fVar64 +
           (float)((ulong)_DAT_03cac210 >> 0x20) * fVar35 +
           (float)((ulong)_DAT_03cabb00 >> 0x20) * fVar42;
  fVar41 = auVar29._8_4_ + (float)_UNK_03cab3a8 * fVar64 + (float)_UNK_03cac218 * fVar35 +
           (float)_UNK_03cabb08 * fVar42;
  fVar42 = auVar29._12_4_ + (float)((ulong)_UNK_03cab3a8 >> 0x20) * fVar64 +
           (float)((ulong)_UNK_03cac218 >> 0x20) * fVar35 +
           (float)((ulong)_UNK_03cabb08 >> 0x20) * fVar42;
  fVar63 = (float)((ulong)auVar45._0_8_ >> 0x20);
  auVar108 = NEON_ext(auVar68,auVar68,8,1);
  fVar35 = auVar66._0_4_;
  fVar80 = (float)((ulong)auVar65._0_8_ >> 0x20);
  auVar101._0_4_ = SQRT(fVar39) * 0.5 * auVar100._0_4_;
  auVar101._4_4_ = SQRT(fVar40) * 0.5 * auVar100._4_4_;
  auVar101._8_4_ = SQRT(fVar41) * 0.5 * auVar100._8_4_;
  auVar101._12_4_ = SQRT(fVar42) * 0.5 * auVar100._12_4_;
  fVar64 = fVar80 - fVar84;
  auVar66 = NEON_frecpe(auVar101,4);
  auVar29 = NEON_frecps(auVar66,auVar101,4);
  auVar46._0_4_ = auVar66._0_4_ * auVar29._0_4_;
  auVar46._4_4_ = auVar66._4_4_ * auVar29._4_4_;
  auVar46._8_4_ = auVar66._8_4_ * auVar29._8_4_;
  auVar46._12_4_ = auVar66._12_4_ * auVar29._12_4_;
  auVar86._4_4_ = fVar41;
  auVar86._0_4_ = fVar41;
  auVar86._8_4_ = fVar41;
  auVar86._12_4_ = fVar41;
  uVar103 = SUB41(fVar39,0);
  uVar104 = (undefined1)((uint)fVar39 >> 8);
  uVar105 = (undefined1)((uint)fVar39 >> 0x10);
  uVar106 = (undefined1)((uint)fVar39 >> 0x18);
  auVar69._4_4_ = fVar40;
  auVar69._0_4_ = fVar40;
  auVar69._8_4_ = fVar40;
  auVar69._12_4_ = fVar40;
  auVar29 = NEON_frecps(auVar46,auVar101,4);
  auVar81[4] = uVar103;
  auVar81._0_4_ = fVar39;
  auVar81[5] = uVar104;
  auVar81[6] = uVar105;
  auVar81[7] = uVar106;
  auVar81[8] = uVar103;
  auVar81[9] = uVar104;
  auVar81[10] = uVar105;
  auVar81[0xb] = uVar106;
  auVar81[0xc] = uVar103;
  auVar81[0xd] = uVar104;
  auVar81[0xe] = uVar105;
  auVar81[0xf] = uVar106;
  auVar100._4_4_ = -(uint)(fVar39 <= fVar40);
  auVar100._0_4_ = -(uint)(fVar39 <= fVar40);
  auVar100._8_4_ = -(uint)(fVar39 <= fVar40);
  auVar100._12_4_ = -(uint)(fVar39 <= fVar40);
  auVar69 = auVar69 ^ (auVar69 ^ auVar81) & ~auVar100;
  auVar94._0_4_ = -(uint)(auVar69._0_4_ <= fVar41);
  auVar94._4_4_ = -(uint)(auVar69._4_4_ <= fVar41);
  auVar94._8_4_ = -(uint)(auVar69._8_4_ <= fVar41);
  auVar94._12_4_ = -(uint)(auVar69._12_4_ <= fVar41);
  auVar69 = auVar69 ^ (auVar69 ^ auVar86) & auVar94;
  auVar31._0_4_ = -(uint)(auVar69._0_4_ <= fVar42);
  auVar31._4_4_ = -(uint)(auVar69._4_4_ <= fVar42);
  auVar31._8_4_ = -(uint)(auVar69._8_4_ <= fVar42);
  auVar31._12_4_ = -(uint)(auVar69._12_4_ <= fVar42);
  fVar61 = auVar46._0_4_ * auVar29._0_4_;
  fVar43 = auVar46._4_4_ * auVar29._4_4_;
  fVar58 = auVar46._8_4_ * auVar29._8_4_;
  fVar62 = auVar46._12_4_ * auVar29._12_4_;
  auVar37._0_4_ = (fVar80 + fVar84) * fVar43;
  auVar37._4_4_ = fVar43 * 0.0;
  auVar37._8_4_ = (fVar35 + fVar63) * fVar43;
  auVar37._12_4_ = (fVar57 + -auVar65._8_4_) * fVar43;
  auVar28._4_8_ = auVar86._8_8_;
  auVar28._0_4_ = (fVar80 + fVar84) * fVar61;
  auVar87._0_8_ = auVar28._0_8_ << 0x20;
  auVar87._8_4_ = (auVar108._0_4_ + fVar57) * fVar61;
  auVar87._12_4_ =
       (fVar35 + -(float)CONCAT13(bVar60,CONCAT12(bVar59,(short)((uint6)uVar44 >> 0x20)))) * fVar61;
  auVar38._8_8_ = auVar37._8_8_;
  auVar38._4_4_ = SQRT(fVar40) * 0.5;
  auVar38._0_4_ = auVar37._0_4_;
  auVar88._4_12_ = auVar87._4_12_;
  auVar88._0_4_ = SQRT(fVar39) * 0.5;
  auVar83._0_4_ = (auVar108._0_4_ + fVar57) * fVar58;
  auVar83._4_4_ = (fVar35 + fVar63) * fVar58;
  auVar83._12_4_ =
       (float)(CONCAT17((char)((uint)fVar64 >> 0x18),
                        CONCAT16((char)((uint)fVar64 >> 0x10),
                                 CONCAT15((char)((uint)fVar64 >> 8),CONCAT14(SUB41(fVar64,0),fVar64)
                                         ))) >> 0x20) * fVar58;
  auVar47._0_4_ = (fVar35 - fVar63) * fVar62;
  auVar47._4_4_ = (fVar57 - auVar65._8_4_) * fVar62;
  auVar47._8_4_ = fVar64 * fVar62;
  auVar83._8_4_ = SQRT(fVar41) * 0.5;
  auVar10._4_4_ = -(uint)(fVar39 <= fVar40);
  auVar10._0_4_ = -(uint)(fVar39 <= fVar40);
  auVar10._8_4_ = -(uint)(fVar39 <= fVar40);
  auVar10._12_4_ = -(uint)(fVar39 <= fVar40);
  auVar38 = auVar38 ^ (auVar38 ^ auVar88) & ~auVar10;
  auVar47._12_4_ = SQRT(fVar42) * 0.5;
  auVar38 = auVar38 ^ (auVar38 ^ auVar83) & auVar94;
  auVar70._4_4_ = fVar34;
  auVar70._0_4_ = fVar34;
  auVar70._8_4_ = fVar34;
  auVar70._12_4_ = fVar34;
  auVar38 = auVar38 ^ (auVar38 ^ auVar47) & auVar31;
  fVar39 = auVar38._0_4_;
  fVar57 = -fVar39;
  fVar40 = auVar38._4_4_;
  fVar61 = -fVar40;
  fVar41 = auVar38._8_4_;
  fVar63 = -fVar41;
  fVar42 = auVar38._12_4_;
  auVar48._4_4_ = fVar41;
  auVar48._0_4_ = fVar41;
  auVar48._8_4_ = fVar41;
  auVar48._12_4_ = fVar41;
  auVar71._4_12_ = auVar70._4_12_;
  auVar71._0_4_ = fVar27;
  auVar73._0_8_ = auVar71._0_8_;
  auVar73._8_4_ = fVar33;
  auVar73._12_4_ = fVar34;
  auVar72._8_8_ = auVar73._8_8_;
  auVar72._4_4_ = fVar34;
  auVar72._0_4_ = fVar27;
  auVar74._0_12_ = auVar72._0_12_;
  auVar74._12_4_ = fVar34;
  auVar102._4_4_ = fVar40;
  auVar102._0_4_ = fVar40;
  auVar102._8_4_ = fVar40;
  auVar102._12_4_ = fVar40;
  auVar66 = NEON_ext(auVar48,auVar38,0xc,1);
  auVar81 = NEON_ext(auVar74,auVar74,8,1);
  fVar35 = auVar81._0_4_;
  auVar75._4_12_ = auVar74._4_12_;
  auVar75._0_4_ = fVar35;
  auVar77._0_8_ = auVar75._0_8_;
  auVar77._8_4_ = auVar81._8_4_;
  auVar77._12_4_ = fVar34;
  auVar76._8_8_ = auVar77._8_8_;
  auVar76._4_4_ = fVar27;
  auVar76._0_4_ = fVar35;
  auVar78._0_12_ = auVar76._0_12_;
  auVar78._12_4_ = fVar33;
  auVar29 = NEON_ext(auVar78,auVar81,8,1);
  auVar108 = NEON_ext(auVar102,auVar66,0xc,1);
  fVar43 = (float)_DAT_03cab640;
  fVar58 = (float)((ulong)_DAT_03cab640 >> 0x20);
  fVar62 = (float)_UNK_03cab648;
  fVar64 = (float)((ulong)_UNK_03cab648 >> 0x20);
  auVar29 = NEON_ext(auVar29,auVar29,0xc,1);
  auVar51._12_4_ = auVar66._12_4_;
  fVar84 = (fVar27 * fVar42 + fVar39 * fVar43 * 0.0 + auVar29._0_4_ * auVar108._0_4_ * fVar43) -
           auVar66._0_4_ * fVar35;
  fVar40 = (fVar33 * fVar42 + fVar40 * fVar58 * 0.0 + auVar29._4_4_ * auVar108._4_4_ * fVar58) -
           auVar66._4_4_ * auVar81._4_4_;
  fVar41 = (fVar34 * fVar42 + fVar41 * fVar62 * 0.0 + auVar29._8_4_ * auVar108._8_4_ * fVar62) -
           auVar66._8_4_ * auVar81._8_4_;
  fVar39 = (fVar42 * 0.0 + fVar27 * fVar39 * fVar64 + auVar29._12_4_ * auVar108._12_4_ * fVar64) -
           auVar51._12_4_ * auVar81._12_4_;
  auVar32._4_4_ = fVar41;
  auVar32._0_4_ = fVar41;
  auVar32._8_4_ = fVar41;
  auVar32._12_4_ = fVar41;
  auVar79._4_4_ = fVar40;
  auVar79._0_4_ = fVar40;
  auVar79._8_4_ = fVar40;
  auVar79._12_4_ = fVar40;
  auVar49._4_12_ = auVar66._4_12_;
  auVar49._0_4_ = fVar57;
  auVar51._0_8_ = auVar49._0_8_;
  auVar51._8_4_ = fVar61;
  auVar50._8_8_ = auVar51._8_8_;
  auVar50._4_4_ = fVar63;
  auVar50._0_4_ = fVar57;
  auVar52._0_12_ = auVar50._0_12_;
  auVar52._12_4_ = fVar63;
  auVar66._4_4_ = fVar40;
  auVar66._0_4_ = fVar84;
  auVar66._8_4_ = fVar41;
  auVar66._12_4_ = fVar39;
  auVar29 = NEON_ext(auVar32,auVar66,0xc,1);
  auVar81 = NEON_ext(auVar79,auVar29,0xc,1);
  auVar108 = NEON_ext(auVar52,auVar52,8,1);
  fVar35 = auVar108._0_4_;
  auVar53._4_12_ = auVar52._4_12_;
  auVar53._0_4_ = fVar35;
  auVar55._0_8_ = auVar53._0_8_;
  auVar55._8_4_ = auVar108._8_4_;
  auVar55._12_4_ = fVar63;
  auVar54._8_8_ = auVar55._8_8_;
  auVar54._4_4_ = fVar57;
  auVar54._0_4_ = fVar35;
  auVar56._0_12_ = auVar54._0_12_;
  auVar56._12_4_ = fVar61;
  auVar66 = NEON_ext(auVar56,auVar108,8,1);
  auVar66 = NEON_ext(auVar66,auVar66,0xc,1);
  uVar103 = 1;
  param_1[1] = (ulong)(uint)((fVar63 * fVar39 + fVar42 * fVar41 * fVar62 +
                             auVar66._8_4_ * auVar81._8_4_ * fVar62) -
                            auVar29._8_4_ * auVar108._8_4_);
  *param_1 = CONCAT44((fVar61 * fVar39 + fVar42 * fVar40 * fVar58 +
                      auVar66._4_4_ * auVar81._4_4_ * fVar58) - auVar29._4_4_ * auVar108._4_4_,
                      (fVar57 * fVar39 + fVar42 * fVar84 * fVar43 +
                      auVar66._0_4_ * auVar81._0_4_ * fVar43) - auVar29._0_4_ * fVar35);
  goto LAB_00a32964;
}


