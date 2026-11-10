/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cd3548; name: FUN_00cd3548
 */


void FUN_00cd3548(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00cd3a34();
  FUN_00cd39c4(param_1);
  lVar22 = param_1[1];
  lVar21 = 0;
  do {
    uVar17 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00cd3984:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar17;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar6 = (undefined8 *)(lVar22 + lVar21 * 0x78);
    uVar17 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    lVar18 = lVar22 + lVar21 * 0x78;
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    *(long *)(lVar18 + 0x40) = 0;
    *(undefined8 *)(lVar18 + 0x30) = 0;
    *(undefined4 *)(lVar18 + 0x38) = 0;
    *(undefined8 *)(lVar18 + 0x68) = uVar2;
    *(undefined8 *)(lVar18 + 0x20) = uVar1;
    *(undefined8 *)(lVar18 + 0x28) = uVar3;
    *(undefined8 *)(lVar18 + 0x48) = 0;
    *(undefined8 *)(lVar18 + 0x50) = uVar1;
    *(undefined8 *)(lVar18 + 0x58) = uVar3;
    *(undefined8 *)(lVar18 + 0x60) = uVar17;
    uVar12 = *(ulong *)(param_2 + 0x40);
    lVar10 = *(long *)(param_2 + 8);
    plVar14 = (long *)(lVar10 + (uVar12 >> 7 & 0x1fffffffffffff8));
    if (*(long *)(param_2 + 0x10) == lVar10) {
      puVar24 = (undefined4 *)0x0;
      puVar7 = (undefined4 *)0x0;
      plVar9 = (long *)(lVar10 + (*(long *)(param_2 + 0x48) + uVar12 >> 7 & 0x1fffffffffffff8));
    }
    else {
      puVar24 = (undefined4 *)(*plVar14 + (uVar12 & 0x3ff) * 4);
      uVar12 = *(long *)(param_2 + 0x48) + uVar12;
      plVar9 = (long *)(lVar10 + (uVar12 >> 7 & 0x1fffffffffffff8));
      puVar7 = (undefined4 *)(*plVar9 + (uVar12 & 0x3ff) * 4);
    }
    if (puVar7 == puVar24) {
      lVar10 = lVar22 + lVar21 * 0x78;
      puVar20 = (undefined4 *)0x0;
      lVar8 = 0;
      plVar15 = (long *)0x0;
      puVar7 = (undefined4 *)0x0;
      plVar16 = (long *)0x0;
      puVar6 = (undefined8 *)(lVar10 + 0x50);
      plVar9 = (long *)(lVar10 + 0x48);
    }
    else {
      lVar10 = (((long)puVar7 - *plVar9 >> 2) + ((long)plVar9 - (long)plVar14) * 0x80) -
               ((long)puVar24 - *plVar14 >> 2);
      lVar8 = lVar22 + lVar21 * 0x78;
      puVar6 = (undefined8 *)(lVar8 + 0x50);
      plVar9 = (long *)(lVar8 + 0x48);
      if (lVar10 == 0) {
        puVar20 = (undefined4 *)0x0;
        lVar8 = 0;
        plVar15 = (long *)0x0;
        puVar7 = (undefined4 *)0x0;
        plVar16 = (long *)0x0;
      }
      else {
        lVar19 = lVar22 + lVar21 * 0x78;
        FUN_00ceb804();
        lVar8 = *plVar9;
        uVar12 = *(long *)(lVar18 + 0x40) + lVar8;
        lVar18 = *(long *)(lVar19 + 8);
        plVar15 = (long *)(lVar18 + (uVar12 >> 7 & 0x1fffffffffffff8));
        if (*(long *)(lVar19 + 0x10) == lVar18) {
          lVar18 = *plVar15;
          puVar20 = (undefined4 *)0x0;
        }
        else {
          lVar18 = *plVar15;
          puVar20 = (undefined4 *)(lVar18 + (uVar12 & 0x3ff) * 4);
        }
        uVar12 = lVar10 + ((long)puVar20 - lVar18 >> 2);
        if ((long)uVar12 < 1) {
          uVar13 = 0x3ff - uVar12;
          uVar12 = 0x7fe - uVar12;
          if (-1 < (long)uVar13) {
            uVar12 = uVar13;
          }
          plVar16 = plVar15 + -((long)uVar12 >> 10);
          puVar7 = (undefined4 *)(*plVar16 + ((uVar12 & 0x3ffffffffffffc00) - uVar13) * 4 + 0xffc);
        }
        else {
          plVar16 = (long *)((long)plVar15 + (uVar12 >> 7 & 0x1fffffffffffff8));
          puVar7 = (undefined4 *)(*plVar16 + (uVar12 & 0x3ff) * 4);
        }
      }
    }
    while (puVar20 != puVar7) {
      if (plVar15 == plVar16) {
        puVar11 = puVar7;
      }
      else {
        puVar11 = (undefined4 *)(*plVar15 + 0x1000);
      }
      if (puVar11 == puVar20) {
        puVar11 = puVar20;
      }
      else {
        puVar23 = puVar20;
        do {
          uVar17 = *puVar6;
          if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 == 0) {
            *puVar23 = *puVar24;
          }
          else {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00cd3984;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar17;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
            *puVar23 = *puVar24;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          puVar24 = puVar24 + 1;
          puVar23 = puVar23 + 1;
          if ((long)puVar24 - *plVar14 == 0x1000) {
            plVar14 = plVar14 + 1;
            puVar24 = (undefined4 *)*plVar14;
          }
        } while (puVar11 != puVar23);
        lVar8 = *plVar9;
      }
      lVar8 = lVar8 + ((long)puVar11 - (long)puVar20 >> 2);
      *plVar9 = lVar8;
      if (plVar15 == plVar16) break;
      plVar15 = plVar15 + 1;
      puVar20 = (undefined4 *)*plVar15;
    }
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    lVar21 = lVar21 + 1;
    if (lVar21 == 4) {
      param_1[1] = lVar22 + 0x1e0;
      return;
    }
  } while( true );
}


