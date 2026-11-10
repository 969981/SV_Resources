/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350b104; name: FUN_0350b104
 */


int FUN_0350b104(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  code *pcVar16;
  int *piVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  byte bVar21;
  uint uVar22;
  long lVar23;
  undefined8 local_d8;
  char local_d0;
  undefined4 local_cf;
  undefined2 local_cb;
  long *local_c8 [2];
  undefined8 local_b8;
  undefined4 local_b0 [2];
  long *local_a8 [9];
  
  lVar23 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
  *(undefined8 *)(param_1 + 0x140) = 0x500000000;
  puVar2 = PTR_DAT_047e2fd0;
  uVar12 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xa0);
  *(undefined8 *)(param_1 + 0x138) = uVar12;
  local_a8[0] = *(long **)(param_1 + 0x118);
  local_b8 = *(undefined8 *)(lVar23 + 600);
  local_b0[0] = *(undefined4 *)(lVar23 + 0x260);
  uVar3 = *(undefined4 *)PTR_DAT_047e6fa0;
  uVar13 = (**(code **)(*local_a8[0] + 0xb0))();
  bVar21 = 1;
  if ((uVar13 & 1) == 0) {
    plVar14 = (long *)(**(code **)(puVar2 + 0x10))(5,0xf8);
    if (plVar14 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x128) = 0;
      return 0x34;
    }
    *(undefined4 *)(plVar14 + 0xf) = 0;
    puVar2 = PTR_DAT_047e7470;
    *(undefined1 *)(plVar14 + 0xd) = 0;
    plVar14[6] = 0;
    plVar14[7] = 0;
    *plVar14 = (long)(puVar2 + 0x10);
    plVar14[1] = 0;
    plVar14[8] = 0x10000;
    plVar14[9] = 0;
    plVar14[0xe] = 0x3f80000000000000;
    *(undefined1 *)((long)plVar14 + 0x7e) = 1;
    plVar14[0x1c] = param_1;
    *(undefined4 *)(plVar14 + 0x12) = 0;
    *(undefined8 *)((long)plVar14 + 0x94) = 0;
    *(undefined8 *)((long)plVar14 + 0xa4) = 0x1ffffffff;
    plVar14[0x16] = 0;
    *(undefined4 *)(plVar14 + 0x17) = 0;
    *(undefined4 *)((long)plVar14 + 0xbc) = 0x2b;
    *(undefined4 *)(plVar14 + 0x18) = 0;
    *(undefined8 *)((long)plVar14 + 0xc4) = 0;
    *(undefined8 *)((long)plVar14 + 0xd4) = 0x1ffffffff;
    plVar14[0x10] = 0;
    plVar14[0x11] = 0x2b00000000;
    *(undefined8 *)((long)plVar14 + 0x9c) = 0x3f800000ffffffff;
    *(undefined8 *)((long)plVar14 + 0xcc) = 0x3f800000ffffffff;
    *(long **)(param_1 + 0x128) = plVar14;
    plVar14[0x1d] = lVar23;
    *(undefined1 *)(plVar14 + 0x1e) = 0;
    *(undefined1 *)((long)plVar14 + 0xf2) = 1;
    iVar11 = FUN_034f6060(plVar14 + 2,&local_b8,uVar3);
    if (iVar11 != 1) {
      return 2;
    }
    local_a8[1] = *(long **)(param_1 + 0x128);
    bVar21 = 2;
  }
  puVar7 = PTR_DAT_047e7478;
  puVar6 = PTR_PTR_047e71e0;
  puVar5 = PTR_DAT_047e6f70;
  uVar13 = 0;
  *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) | 2;
  puVar9 = PTR_DAT_047e7490;
  puVar8 = PTR_DAT_047e7488;
  local_b8 = CONCAT44(local_b8._4_4_,uVar3);
  puVar2 = PTR_DAT_047e7480 + 0x10;
  do {
    local_c8[0] = (long *)0x0;
    if ((*(byte *)(lVar23 + 0x1b0) >> 6 & 1) == 0) {
      (**(code **)(**(long **)(lVar23 + 0x188) + 0x1c8))
                (*(long **)(lVar23 + 0x188),uVar13 & 0xffffffff,local_c8,
                 *(undefined8 *)(lVar23 + 0x28));
      if (local_c8[0] != (long *)0x0) {
        piVar17 = *(int **)puVar5;
        local_d8 = 0;
        local_d0 = '\x01';
        uVar22 = *(uint *)(puVar5 + 8);
        local_cf = 0;
        local_cb = 1;
        if ((uVar22 == 0) || (*piVar17 == (int)local_c8[0][6])) {
          piVar19 = piVar17;
        }
        else {
          lVar18 = (ulong)uVar22 * 0x20;
          piVar20 = piVar17;
          do {
            lVar18 = lVar18 + -0x20;
            if (lVar18 == 0) goto LAB_0350b460;
            piVar19 = piVar20 + 8;
            piVar1 = piVar20 + 8;
            piVar20 = piVar19;
          } while (*piVar1 != (int)local_c8[0][6]);
        }
        if (piVar19 == piVar17 + (ulong)uVar22 * 8) {
LAB_0350b460:
          uVar22 = 8;
          iVar11 = 0x58;
        }
        else {
          plVar14 = (long *)(**(code **)(piVar19 + 2))(puVar6);
          if (plVar14 == (long *)0x0) {
            iVar11 = 2;
          }
          else {
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_d8);
            if ((((local_d8._4_4_ == 0x7e501) && ((int)local_d8 == 3)) &&
                (local_d0 == '\0' || (char)local_cf == '\0')) && (local_cf._3_1_ == '\0')) {
              if (local_cf._2_1_ == '\0') {
                if (local_d0 == '\0') {
                  plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0x138);
                  if (plVar15 != (long *)0x0) {
                    memset(plVar15 + 1,0,0x130);
                    plVar15[4] = 0;
                    plVar15[5] = 0;
                    plVar15[2] = (long)(puVar7 + 0x10);
                    *(undefined1 *)(plVar15 + 0xd) = 0xff;
                    *(undefined1 *)(plVar15 + 0xe) = 0xff;
                    plVar15[8] = 0;
                    plVar15[9] = 0;
                    *(undefined4 *)(plVar15 + 3) = 0;
                    *(undefined4 *)(plVar15 + 0xc) = 0;
                    plVar15[10] = 0;
                    *(undefined4 *)(plVar15 + 0xb) = 0;
                    *(undefined4 *)(plVar15 + 0x19) = 0;
                    *(undefined8 *)((long)plVar15 + 0xcc) = 0;
                    *(undefined4 *)(plVar15 + 0x1f) = 0;
                    *(undefined8 *)((long)plVar15 + 0xfc) = 0;
                    plVar15[0xf] = 0;
                    plVar15[0x10] = 0;
                    plVar15[0x11] = 0;
                    plVar15[0x12] = 0;
                    plVar15[6] = 0;
                    plVar15[7] = (long)&PTR_LAB_047c67a8;
                    *(undefined4 *)(plVar15 + 0x13) = 0xffffffff;
                    *plVar15 = (long)puVar2;
                    plVar15[0x17] = 0;
                    plVar15[0x18] = 0x2b00000000;
                    plVar15[0x1d] = 0;
                    plVar15[0x1e] = 0x2b00000000;
                  }
                }
                else {
                  plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xc0);
                  if (plVar15 != (long *)0x0) {
                    memset(plVar15 + 1,0,0xb8);
                    *(undefined4 *)(plVar15 + 3) = 0;
                    plVar15[4] = 0;
                    plVar15[5] = 0;
                    plVar15[2] = (long)(PTR_DAT_047e7478 + 0x10);
                    plVar15[8] = 0;
                    plVar15[9] = 0;
                    *(undefined1 *)(plVar15 + 0xd) = 0xff;
                    *(undefined1 *)(plVar15 + 0xe) = 0xff;
                    *(undefined4 *)(plVar15 + 0xc) = 0;
                    plVar15[10] = 0;
                    *(undefined4 *)(plVar15 + 0xb) = 0;
                    *(undefined4 *)(plVar15 + 0x17) = 0;
                    plVar15[0xf] = 0;
                    plVar15[0x10] = 0;
                    plVar15[0x11] = 0;
                    plVar15[0x12] = 0;
                    plVar15[6] = 0;
                    plVar15[7] = (long)&PTR_LAB_047c67a8;
                    *(undefined4 *)(plVar15 + 0x13) = 0xffffffff;
                    puVar4 = puVar8;
                    goto LAB_0350b550;
                  }
                }
LAB_0350b554:
                if (plVar15 != (long *)0x0) {
                  iVar11 = (**(code **)(*plVar15 + 0x60))
                                     (plVar15,plVar14,local_c8,uVar13 & 0xffffffff,param_1,&local_b8
                                     );
                  if (iVar11 == 1) {
                    *(long **)(param_1 + uVar13 * 8 + 0xe0) = plVar15;
                    local_a8[bVar21] = plVar15;
                    bVar21 = bVar21 + 1;
                    uVar22 = 0;
                  }
                  else {
                    (**(code **)(*plVar15 + 0x68))(plVar15);
                    (**(code **)*plVar15)(plVar15);
                    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,plVar15);
                    uVar22 = 8;
                  }
                  goto LAB_0350b490;
                }
              }
              else if (local_d0 != '\0') {
                plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,0xc0);
                if (plVar15 != (long *)0x0) {
                  memset(plVar15 + 1,0,0xb8);
                  *(undefined4 *)(plVar15 + 3) = 0;
                  plVar15[4] = 0;
                  plVar15[5] = 0;
                  plVar15[2] = (long)(PTR_DAT_047e7478 + 0x10);
                  plVar15[8] = 0;
                  plVar15[9] = 0;
                  *(undefined1 *)(plVar15 + 0xd) = 0xff;
                  *(undefined1 *)(plVar15 + 0xe) = 0xff;
                  *(undefined4 *)(plVar15 + 0xc) = 0;
                  plVar15[10] = 0;
                  *(undefined4 *)(plVar15 + 0xb) = 0;
                  *(undefined4 *)(plVar15 + 0x17) = 0;
                  plVar15[0xf] = 0;
                  plVar15[0x10] = 0;
                  plVar15[0x11] = 0;
                  plVar15[0x12] = 0;
                  plVar15[6] = 0;
                  plVar15[7] = (long)&PTR_LAB_047c67a8;
                  *(undefined4 *)(plVar15 + 0x13) = 0xffffffff;
                  puVar4 = puVar9;
LAB_0350b550:
                  *plVar15 = (long)(puVar4 + 0x10);
                }
                goto LAB_0350b554;
              }
              (**(code **)(*plVar14 + 0x10))(plVar14,puVar6);
              iVar11 = 2;
              uVar22 = 9;
              goto LAB_0350b490;
            }
            (**(code **)(*plVar14 + 0x10))(plVar14,puVar6);
            iVar11 = 1;
          }
          uVar22 = 8;
        }
LAB_0350b490:
        if (local_c8[0] != (long *)0x0) {
          (**(code **)(*local_c8[0] + 0x18))();
          local_c8[0] = (long *)0x0;
        }
        if ((uVar22 | 8) != 8) {
          return iVar11;
        }
      }
    }
    else {
      local_c8[0] = (long *)0x0;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == 4) {
      *(undefined4 *)(param_1 + 0x188) = local_b8._4_4_;
      iVar11 = FUN_034faa74(param_1 + 0x78);
      if (iVar11 == 1) {
        local_a8[bVar21] = (long *)(param_1 + 0x68);
        *(long *)(param_1 + 0x110) = lVar23;
        plVar14 = (long *)(param_1 + 0x100);
        uVar13 = (ulong)(bVar21 + 1) & 0xff;
        local_a8[uVar13] = plVar14;
        if ((bVar21 + 1 >> 8 == 0) &&
           ((**(code **)(*plVar14 + 0x58))(plVar14,local_a8[(int)uVar13 - 1]), bVar21 != 0)) {
          do {
            lVar23 = uVar13 * 2;
            iVar11 = (int)uVar13;
            uVar13 = uVar13 - 1;
            (**(code **)(**(long **)(local_b0 + lVar23) + 0x58))
                      (*(long **)(local_b0 + lVar23),local_a8[iVar11 - 2]);
          } while (((uint)uVar13 & 0xff) != 1);
        }
        lVar23 = *(long *)(param_1 + 0x128);
        if (((lVar23 != 0) &&
            (pcVar16 = (code *)(**(code **)(**(long **)(lVar23 + 8) + 0x50))(),
            pcVar16 != (code *)0x0)) && (local_b8._4_1_ != '\0')) {
          uVar13 = 0;
          do {
            uVar10 = (*pcVar16)((ulong)&local_b8 | 4,uVar13 & 0xffffffff);
            *(undefined1 *)(*(long *)(lVar23 + 0x60) + uVar13) = uVar10;
            uVar13 = uVar13 + 1;
          } while (uVar13 < (local_b8 >> 0x20 & 0xff));
        }
        FUN_0350c6bc(param_1);
        iVar11 = 1;
      }
      return iVar11;
    }
  } while( true );
}


