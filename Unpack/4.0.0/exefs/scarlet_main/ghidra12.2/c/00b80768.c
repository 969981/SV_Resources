/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b80768; name: FUN_00b80768
 */


void FUN_00b80768(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  string *psVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  string *this;
  
  puVar2 = PTR_DAT_047dabb0;
  psVar7 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar2) {
    FUN_00b6eb88();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar7);
  }
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar13 = 0;
    lVar14 = 0;
    do {
      lVar9 = param_1[6];
      piVar10 = *(int **)(param_2 + 0x30);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x28);
        iVar12 = *(int *)(param_2 + 0x2c);
LAB_00b80830:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x20,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0x30);
        }
        iVar12 = *piVar10;
LAB_00b8084c:
        *piVar10 = iVar12 + 1;
        uVar8 = FUN_00ba8a8c(0,*(undefined8 *)(param_2 + 0x20));
        iVar6 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar6 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x30) + (long)iVar6 * 8 + 8) = uVar8;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x28);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0x2c)) goto LAB_00b80830;
          goto LAB_00b8084c;
        }
        *(int *)(param_2 + 0x28) = iVar6 + 1;
        uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      FUN_00b8160c(lVar9 + lVar13,uVar8);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x90;
    } while (lVar14 < *(int *)((long)param_1 + 0x2c));
  }
  puVar5 = PTR_DAT_047dac20;
  lVar14 = tpidr_el0;
  if (0 < *(int *)(param_1 + 7)) {
    lVar9 = 0;
    lVar13 = 0;
    puVar1 = PTR_DAT_047dac28 + 0x10;
    do {
      lVar17 = param_1[8];
      piVar10 = *(int **)(param_2 + 0xa8);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0xa0);
        iVar12 = *(int *)(param_2 + 0xa4);
LAB_00b80918:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x98,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0xa8);
        }
        iVar12 = *piVar10;
LAB_00b80934:
        *piVar10 = iVar12 + 1;
        lVar15 = FUN_00ba8b8c(0,*(undefined8 *)(param_2 + 0x98));
        iVar6 = *(int *)(param_2 + 0xa0);
        *(int *)(param_2 + 0xa0) = iVar6 + 1;
        *(long *)(*(long *)(param_2 + 0xa8) + (long)iVar6 * 8 + 8) = lVar15;
      }
      else {
        iVar6 = *(int *)(param_2 + 0xa0);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0xa4)) goto LAB_00b80918;
          goto LAB_00b80934;
        }
        *(int *)(param_2 + 0xa0) = iVar6 + 1;
        lVar15 = *(long *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      psVar7 = *(string **)(lVar17 + lVar9);
      *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 1;
      if (*(string **)(lVar15 + 0x18) == *(string **)puVar2) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(lVar15 + 0x18),psVar7);
      }
      lVar17 = lVar17 + lVar9;
      lVar18 = *(long *)(lVar17 + 0x28);
      lVar11 = *(long *)puVar5;
      if (lVar11 == 0) {
        FUN_00bb5d70();
        lVar11 = *(long *)puVar5;
      }
      if (lVar18 != lVar11) {
        plVar19 = *(long **)(lVar15 + 0x20);
        *(uint *)(lVar15 + 0x10) = *(uint *)(lVar15 + 0x10) | 2;
        if (plVar19 == (long *)0x0) {
          plVar19 = *(long **)(lVar14 + 0x30);
          if (plVar19 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar19 = DAT_04859430;
            *(long **)(lVar14 + 0x30) = DAT_04859430;
          }
          plVar19 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x50,8);
          plVar19[2] = 0;
          plVar19[3] = 0;
          plVar19[4] = 0;
          plVar19[9] = 0;
          *plVar19 = (long)puVar1;
          plVar19[1] = (long)(plVar19 + 2);
          plVar19[5] = 0;
          plVar19[6] = 0;
          plVar19[7] = 0;
          plVar19[8] = 0;
          *(long **)(lVar15 + 0x20) = plVar19;
        }
        plVar16 = *(long **)(lVar17 + 0x28);
        if (plVar16 != plVar19) {
          (**(code **)(*plVar19 + 0x38))(plVar19);
          FUN_00bc7888(plVar19,plVar16);
        }
      }
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0x30;
    } while (lVar13 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)(param_1 + 9)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      lVar17 = param_1[10];
      piVar10 = *(int **)(param_2 + 0x60);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x58);
        iVar12 = *(int *)(param_2 + 0x5c);
LAB_00b80b30:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x50,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0x60);
        }
        iVar12 = *piVar10;
LAB_00b80b4c:
        *piVar10 = iVar12 + 1;
        uVar8 = FUN_00ba8784(0,*(undefined8 *)(param_2 + 0x50));
        iVar6 = *(int *)(param_2 + 0x58);
        *(int *)(param_2 + 0x58) = iVar6 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x60) + (long)iVar6 * 8 + 8) = uVar8;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x58);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0x5c)) goto LAB_00b80b30;
          goto LAB_00b80b4c;
        }
        *(int *)(param_2 + 0x58) = iVar6 + 1;
        uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      FUN_00b80768(lVar17 + lVar9,uVar8);
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0xa8;
    } while (lVar13 < *(int *)(param_1 + 9));
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      lVar17 = param_1[0xc];
      piVar10 = *(int **)(param_2 + 0x78);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x70);
        iVar12 = *(int *)(param_2 + 0x74);
LAB_00b80bfc:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x68,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0x78);
        }
        iVar12 = *piVar10;
LAB_00b80c18:
        *piVar10 = iVar12 + 1;
        uVar8 = FUN_00ba888c(0,*(undefined8 *)(param_2 + 0x68));
        iVar6 = *(int *)(param_2 + 0x70);
        *(int *)(param_2 + 0x70) = iVar6 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x78) + (long)iVar6 * 8 + 8) = uVar8;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x70);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0x74)) goto LAB_00b80bfc;
          goto LAB_00b80c18;
        }
        *(int *)(param_2 + 0x70) = iVar6 + 1;
        uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      FUN_00b811f8(lVar17 + lVar9,uVar8);
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar13 < *(int *)(param_1 + 0xb));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      piVar10 = *(int **)(param_2 + 0x90);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x88);
        iVar12 = *(int *)(param_2 + 0x8c);
LAB_00b80cc0:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x80,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0x90);
        }
        iVar12 = *piVar10;
LAB_00b80cdc:
        *piVar10 = iVar12 + 1;
        lVar17 = FUN_00ba8e2c(0,*(undefined8 *)(param_2 + 0x80));
        iVar6 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar6 + 1;
        *(long *)(*(long *)(param_2 + 0x90) + (long)iVar6 * 8 + 8) = lVar17;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x88);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0x8c)) goto LAB_00b80cc0;
          goto LAB_00b80cdc;
        }
        *(int *)(param_2 + 0x88) = iVar6 + 1;
        lVar17 = *(long *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      lVar13 = lVar13 + 1;
      uVar3 = *(uint *)(lVar17 + 0x10);
      uVar4 = *(undefined4 *)(param_1[0xe] + lVar9);
      *(uint *)(lVar17 + 0x10) = uVar3 | 1;
      *(undefined4 *)(lVar17 + 0x18) = uVar4;
      lVar15 = param_1[0xe] + lVar9;
      lVar9 = lVar9 + 8;
      uVar4 = *(undefined4 *)(lVar15 + 4);
      *(uint *)(lVar17 + 0x10) = uVar3 | 3;
      *(undefined4 *)(lVar17 + 0x1c) = uVar4;
    } while (lVar13 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      lVar17 = param_1[0x10];
      piVar10 = *(int **)(param_2 + 0x48);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x40);
        iVar12 = *(int *)(param_2 + 0x44);
LAB_00b80db0:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0x38,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0x48);
        }
        iVar12 = *piVar10;
LAB_00b80dcc:
        *piVar10 = iVar12 + 1;
        uVar8 = FUN_00ba8a8c(0,*(undefined8 *)(param_2 + 0x38));
        iVar6 = *(int *)(param_2 + 0x40);
        *(int *)(param_2 + 0x40) = iVar6 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x48) + (long)iVar6 * 8 + 8) = uVar8;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x40);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0x44)) goto LAB_00b80db0;
          goto LAB_00b80dcc;
        }
        *(int *)(param_2 + 0x40) = iVar6 + 1;
        uVar8 = *(undefined8 *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      FUN_00b8160c(lVar17 + lVar9,uVar8);
      lVar13 = lVar13 + 1;
      lVar9 = lVar9 + 0x90;
    } while (lVar13 < *(int *)(param_1 + 0xf));
  }
  if (0 < *(int *)(param_1 + 0x11)) {
    lVar9 = 0;
    lVar13 = 0;
    do {
      piVar10 = *(int **)(param_2 + 200);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0xc0);
        iVar12 = *(int *)(param_2 + 0xc4);
LAB_00b80e74:
        if (iVar6 <= iVar12) {
          FUN_00c11f04(param_2 + 0xb8,(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 200);
        }
        iVar12 = *piVar10;
LAB_00b80e90:
        *piVar10 = iVar12 + 1;
        lVar17 = FUN_00ba8f4c(0,*(undefined8 *)(param_2 + 0xb8));
        iVar6 = *(int *)(param_2 + 0xc0);
        *(int *)(param_2 + 0xc0) = iVar6 + 1;
        *(long *)(*(long *)(param_2 + 200) + (long)iVar6 * 8 + 8) = lVar17;
      }
      else {
        iVar6 = *(int *)(param_2 + 0xc0);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0xc4)) goto LAB_00b80e74;
          goto LAB_00b80e90;
        }
        *(int *)(param_2 + 0xc0) = iVar6 + 1;
        lVar17 = *(long *)(piVar10 + (long)iVar6 * 2 + 2);
      }
      lVar13 = lVar13 + 1;
      uVar3 = *(uint *)(lVar17 + 0x10);
      uVar4 = *(undefined4 *)(param_1[0x12] + lVar9);
      *(uint *)(lVar17 + 0x10) = uVar3 | 1;
      *(undefined4 *)(lVar17 + 0x18) = uVar4;
      lVar15 = param_1[0x12] + lVar9;
      lVar9 = lVar9 + 8;
      uVar4 = *(undefined4 *)(lVar15 + 4);
      *(uint *)(lVar17 + 0x10) = uVar3 | 3;
      *(undefined4 *)(lVar17 + 0x1c) = uVar4;
    } while (lVar13 < *(int *)(param_1 + 0x11));
  }
  puVar2 = PTR_LAB_047dabf0;
  if (0 < *(int *)(param_1 + 0x13)) {
    lVar13 = 0;
    do {
      psVar7 = *(string **)(param_1[0x14] + lVar13 * 8);
      piVar10 = *(int **)(param_2 + 0xe0);
      if (piVar10 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0xd8);
        iVar12 = *(int *)(param_2 + 0xdc);
LAB_00b80f74:
        if (iVar6 <= iVar12) {
          FUN_00c11f04((long *)(param_2 + 0xd0),(iVar12 - iVar6) + 1);
          piVar10 = *(int **)(param_2 + 0xe0);
        }
        iVar12 = *piVar10;
LAB_00b80f90:
        *piVar10 = iVar12 + 1;
        lVar9 = *(long *)(param_2 + 0xd0);
        if (lVar9 == 0) {
          plVar19 = *(long **)(lVar14 + 0x30);
          if (plVar19 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar19 = DAT_04859430;
            *(long **)(lVar14 + 0x30) = DAT_04859430;
          }
          this = (string *)(**(code **)(*plVar19 + 0x10))(plVar19,0x18,8);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
        }
        else {
          this = (string *)FUN_00c0e238(lVar9,0,0x18);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          FUN_00c0e13c(lVar9,this,puVar2);
        }
        iVar6 = *(int *)(param_2 + 0xd8);
        *(int *)(param_2 + 0xd8) = iVar6 + 1;
        *(string **)(*(long *)(param_2 + 0xe0) + (long)iVar6 * 8 + 8) = this;
      }
      else {
        iVar6 = *(int *)(param_2 + 0xd8);
        iVar12 = *piVar10;
        if (iVar12 <= iVar6) {
          if (iVar12 == *(int *)(param_2 + 0xdc)) goto LAB_00b80f74;
          goto LAB_00b80f90;
        }
        *(int *)(param_2 + 0xd8) = iVar6 + 1;
        this = *(string **)(piVar10 + (long)iVar6 * 2 + 2);
      }
      std::string::operator=(this,psVar7);
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x13));
  }
  puVar2 = PTR_DAT_047dac30;
  lVar9 = param_1[4];
  lVar13 = *(long *)PTR_DAT_047dac30;
  if (lVar13 == 0) {
    FUN_00bb5d70();
    lVar13 = *(long *)puVar2;
  }
  if (lVar9 != lVar13) {
    plVar19 = *(long **)(param_2 + 0xb0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x80;
    if (plVar19 == (long *)0x0) {
      plVar19 = *(long **)(lVar14 + 0x30);
      if (plVar19 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar19 = DAT_04859430;
        *(long **)(lVar14 + 0x30) = DAT_04859430;
      }
      plVar19 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x58,8);
      plVar19[3] = 0;
      puVar2 = PTR_DAT_047dac38 + 0x10;
      plVar19[2] = 0;
      plVar19[4] = 0;
      plVar19[5] = 0;
      *(undefined4 *)(plVar19 + 10) = 0;
      plVar19[6] = 0;
      plVar19[7] = 0;
      *plVar19 = (long)puVar2;
      plVar19[1] = (long)(plVar19 + 2);
      plVar19[8] = 0;
      plVar19[9] = 0;
      *(long **)(param_2 + 0xb0) = plVar19;
    }
    plVar16 = (long *)param_1[4];
    if (plVar16 != plVar19) {
      (**(code **)(*plVar19 + 0x38))(plVar19);
      FUN_00bc2f58(plVar19,plVar16);
      return;
    }
  }
  return;
}


