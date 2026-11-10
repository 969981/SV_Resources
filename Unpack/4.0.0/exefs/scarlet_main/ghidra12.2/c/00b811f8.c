/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b811f8; name: FUN_00b811f8
 */


void FUN_00b811f8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  string *psVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  
  puVar2 = PTR_DAT_047dabb0;
  psVar7 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar2) {
    FUN_00b6eb88();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar7);
  }
  puVar5 = PTR_DAT_047dabe8;
  lVar4 = tpidr_el0;
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    lVar17 = 0;
    lVar11 = 0;
    puVar1 = PTR_DAT_047dac40 + 0x10;
    do {
      lVar14 = param_1[6];
      piVar8 = *(int **)(param_2 + 0x30);
      if (piVar8 == (int *)0x0) {
        iVar6 = *(int *)(param_2 + 0x28);
        iVar10 = *(int *)(param_2 + 0x2c);
LAB_00b812dc:
        if (iVar6 <= iVar10) {
          FUN_00c11f04(param_2 + 0x20,(iVar10 - iVar6) + 1);
          piVar8 = *(int **)(param_2 + 0x30);
        }
        iVar10 = *piVar8;
LAB_00b812f8:
        *piVar8 = iVar10 + 1;
        lVar12 = FUN_00ba906c(0,*(undefined8 *)(param_2 + 0x20));
        iVar6 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar6 + 1;
        *(long *)(*(long *)(param_2 + 0x30) + (long)iVar6 * 8 + 8) = lVar12;
      }
      else {
        iVar6 = *(int *)(param_2 + 0x28);
        iVar10 = *piVar8;
        if (iVar10 <= iVar6) {
          if (iVar10 == *(int *)(param_2 + 0x2c)) goto LAB_00b812dc;
          goto LAB_00b812f8;
        }
        *(int *)(param_2 + 0x28) = iVar6 + 1;
        lVar12 = *(long *)(piVar8 + (long)iVar6 * 2 + 2);
      }
      psVar7 = *(string **)(lVar14 + lVar17);
      *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 1;
      if (*(string **)(lVar12 + 0x18) == *(string **)puVar2) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(lVar12 + 0x18),psVar7);
      }
      lVar14 = lVar14 + lVar17;
      uVar3 = *(undefined4 *)(lVar14 + 0x10);
      *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 2;
      *(undefined4 *)(lVar12 + 0x28) = uVar3;
      lVar15 = *(long *)(lVar14 + 0x20);
      lVar9 = *(long *)puVar5;
      if (lVar9 == 0) {
        FUN_00bb5d70();
        lVar9 = *(long *)puVar5;
      }
      if (lVar15 != lVar9) {
        plVar16 = *(long **)(lVar12 + 0x20);
        *(uint *)(lVar12 + 0x10) = *(uint *)(lVar12 + 0x10) | 4;
        if (plVar16 == (long *)0x0) {
          plVar16 = *(long **)(lVar4 + 0x30);
          if (plVar16 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar16 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          plVar16 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x58,8);
          plVar16[3] = 0;
          plVar16[4] = 0;
          plVar16[2] = 0;
          *plVar16 = (long)puVar1;
          plVar16[1] = (long)(plVar16 + 2);
          plVar16[9] = 0;
          *(undefined1 *)(plVar16 + 10) = 0;
          plVar16[5] = 0;
          plVar16[6] = 0;
          plVar16[7] = 0;
          plVar16[8] = 0;
          *(long **)(lVar12 + 0x20) = plVar16;
        }
        plVar13 = *(long **)(lVar14 + 0x20);
        if (plVar13 != plVar16) {
          (**(code **)(*plVar16 + 0x38))(plVar16);
          FUN_00bcaea8(plVar16,plVar13);
        }
      }
      lVar11 = lVar11 + 1;
      lVar17 = lVar17 + 0x28;
    } while (lVar11 < *(int *)((long)param_1 + 0x2c));
  }
  puVar2 = PTR_DAT_047dac48;
  lVar17 = param_1[4];
  lVar11 = *(long *)PTR_DAT_047dac48;
  if (lVar11 == 0) {
    FUN_00bb5d70();
    lVar11 = *(long *)puVar2;
  }
  if (lVar17 != lVar11) {
    plVar16 = *(long **)(param_2 + 0x38);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    if (plVar16 == (long *)0x0) {
      plVar16 = *(long **)(lVar4 + 0x30);
      if (plVar16 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar16 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      plVar16 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x58,8);
      plVar16[3] = 0;
      puVar2 = PTR_DAT_047dac50 + 0x10;
      plVar16[2] = 0;
      plVar16[4] = 0;
      plVar16[5] = 0;
      *(undefined2 *)(plVar16 + 10) = 0;
      plVar16[6] = 0;
      plVar16[7] = 0;
      *plVar16 = (long)puVar2;
      plVar16[1] = (long)(plVar16 + 2);
      plVar16[8] = 0;
      plVar16[9] = 0;
      *(long **)(param_2 + 0x38) = plVar16;
    }
    plVar13 = (long *)param_1[4];
    if (plVar13 != plVar16) {
      (**(code **)(*plVar16 + 0x38))(plVar16);
      FUN_00bc943c(plVar16,plVar13);
      return;
    }
  }
  return;
}


