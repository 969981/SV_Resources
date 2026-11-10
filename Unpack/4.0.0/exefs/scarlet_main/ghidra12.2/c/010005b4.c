/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010005b4; name: FUN_010005b4
 */


/* WARNING: Removing unreachable block (ram,0x01000828) */
/* WARNING: Removing unreachable block (ram,0x01000830) */
/* WARNING: Removing unreachable block (ram,0x01000838) */
/* WARNING: Removing unreachable block (ram,0x01000840) */
/* WARNING: Removing unreachable block (ram,0x010008f0) */
/* WARNING: Removing unreachable block (ram,0x01000848) */

void FUN_010005b4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  short sVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  long *plVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  undefined8 uVar25;
  long local_68;
  
  plVar18 = (long *)(param_1 + 0xe8);
  uVar16 = *(long *)(param_1 + 0xf0) - *plVar18 >> 3;
  uVar21 = (ulong)param_2;
  *(uint *)(param_1 + 0x120) = param_2;
  if (uVar16 < param_2) {
    FUN_00c6e61c(plVar18,uVar21 - uVar16);
  }
  else if (uVar21 < uVar16) {
    *(ulong *)(param_1 + 0xf0) = *plVar18 + uVar21 * 8;
  }
  if (param_2 == 0) {
    uVar16 = 0;
  }
  else {
    *(undefined8 *)*plVar18 = 0;
    if (param_2 == 1) {
      uVar16 = 1;
    }
    else {
      *(undefined8 *)(*plVar18 + 8) = 1;
      if (param_2 == 2) {
        uVar16 = 5;
      }
      else {
        *(undefined8 *)(*plVar18 + 0x10) = 5;
        if (param_2 == 3) {
          uVar16 = 0x15;
        }
        else {
          *(undefined8 *)(*plVar18 + 0x18) = 0x15;
          if (param_2 == 4) {
            uVar16 = 0x55;
          }
          else {
            uVar17 = 4;
            uVar16 = 0x55;
            do {
              *(ulong *)(*plVar18 + uVar17 * 8) = uVar16;
              uVar4 = uVar17 & 0x3f;
              uVar15 = uVar17 & 0x3f;
              uVar17 = uVar17 + 1;
              uVar16 = ((1L << uVar4) << uVar15) + uVar16;
            } while (uVar21 != uVar17);
          }
        }
      }
    }
  }
  plVar18 = (long *)(param_1 + 0xb0);
  lVar14 = *plVar18;
  plVar23 = *(long **)(param_1 + 0xb8);
  uVar21 = (long)plVar23 - lVar14 >> 3;
  if (uVar21 < uVar16) {
    if (uVar16 - uVar21 <= (ulong)(*(long *)(param_1 + 0xc0) - (long)plVar23 >> 3)) {
      FUN_0100b5a4(plVar18);
LAB_01000780:
      plVar20 = *(long **)(param_1 + 0xb8);
LAB_01000784:
      puVar10 = PTR_LAB_047dbdd8;
      puVar9 = PTR_DAT_047d88e0;
      puVar8 = PTR_DAT_047d88d8;
      puVar7 = PTR_DAT_047d88d0;
      plVar18 = (long *)*plVar18;
      do {
        if (plVar18 == plVar20) {
          return;
        }
        if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
          FUN_00100190(puVar10,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar7);
        }
        *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
        FUN_01000b2c(&local_68);
        plVar23 = (long *)*plVar18;
        *plVar18 = 0;
        if (plVar23 != (long *)0x0) {
          lVar14 = plVar23[6];
          psVar2 = (short *)(lVar14 + 0x1a);
          do {
            sVar3 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar14 + 0x10) = 0;
            (**(code **)(*plVar23 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_0100084c;
        }
        *plVar18 = local_68;
        local_68 = 0;
        plVar18 = plVar18 + 1;
      } while( true );
    }
    uVar17 = *(ulong *)(param_1 + 0xd0);
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = *(long *)(param_1 + 0xc0) - lVar14;
    uVar15 = lVar14 >> 2;
    uVar4 = uVar16;
    if (uVar16 <= uVar15) {
      uVar4 = uVar15;
    }
    puVar1 = (undefined8 *)(param_1 + 200);
    if (uVar17 >> 1 <= (ulong)(lVar14 >> 3)) {
      uVar4 = uVar17;
    }
    if (uVar4 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar4 << 3,8);
      if (lVar14 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar19 = (undefined8 *)(lVar14 + uVar21 * 8);
    lVar24 = uVar16 * 8 + uVar21 * -8;
    puVar22 = puVar19;
    do {
      uVar25 = *puVar1;
      if (((DAT_04865a38 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_04865a38), iVar11 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar12 == 0) {
        *puVar22 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar25;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        *puVar22 = 0;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      puVar22 = puVar22 + 1;
      lVar24 = lVar24 + -8;
    } while (lVar24 != 0);
    plVar23 = *(long **)(param_1 + 0xb0);
    plVar20 = *(long **)(param_1 + 0xb8);
    if (plVar20 == plVar23) {
      plVar20 = plVar23;
    }
    else {
      do {
        puVar19 = puVar19 + -1;
        plVar20 = plVar20 + -1;
        FUN_0100afbc(puVar1,puVar19,plVar20);
      } while (plVar23 != plVar20);
      plVar23 = *(long **)(param_1 + 0xb0);
      plVar20 = *(long **)(param_1 + 0xb8);
    }
    *(undefined8 **)(param_1 + 0xb0) = puVar19;
    *(ulong *)(param_1 + 0xb8) = lVar14 + uVar16 * 8;
    lVar24 = *(long *)(param_1 + 0xc0);
    *(ulong *)(param_1 + 0xc0) = lVar14 + uVar4 * 8;
    do {
      while( true ) {
        do {
          if (plVar20 == plVar23) {
            if (plVar23 != (long *)0x0) {
              plVar20 = (long *)*puVar1;
              lVar24 = lVar24 - (long)plVar23;
              uVar16 = (**(code **)(*plVar20 + 0xf8))(plVar20);
              if (((uVar16 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
                (**(code **)(*plVar20 + 0x18))(plVar20,plVar23,lVar24,8);
              }
              else {
                FUN_00c48fe8(plVar20,plVar23,lVar24,8);
              }
            }
            goto LAB_01000780;
          }
          plVar20 = plVar20 + -1;
          plVar13 = (long *)*plVar20;
        } while (plVar13 == (long *)0x0);
        lVar14 = plVar13[6];
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 != 1) break;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
    } while (sVar3 != 0);
  }
  else {
    plVar20 = plVar23;
    if (uVar21 <= uVar16) goto LAB_01000784;
    plVar20 = (long *)(lVar14 + uVar16 * 8);
    do {
      while( true ) {
        do {
          if (plVar20 == plVar23) {
            *(long **)(param_1 + 0xb8) = plVar20;
            goto LAB_01000784;
          }
          plVar23 = plVar23 + -1;
          plVar13 = (long *)*plVar23;
        } while (plVar13 == (long *)0x0);
        lVar14 = plVar13[6];
        psVar2 = (short *)(lVar14 + 0x1a);
        do {
          sVar3 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar3 != 1) break;
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))();
      }
    } while (sVar3 != 0);
  }
LAB_0100084c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
}


