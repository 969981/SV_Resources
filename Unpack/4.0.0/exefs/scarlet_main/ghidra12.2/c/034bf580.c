/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bf580; name: FUN_034bf580
 */


undefined8 FUN_034bf580(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 < 0x1d) {
    uVar10 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar10 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar10 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar10 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar10 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar10 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar10 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar10 = 0xc07;
  }
  else {
    uVar10 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar10 = 0x3001;
      }
      else {
        uVar10 = 0x6011;
        if ((((0x6010 < param_2) && (uVar10 = 0xc005, 0xc004 < param_2)) &&
            (uVar10 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar10 = 0x30005, 0x30004 < param_2 && (uVar10 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar10 = 0xc0001;
          }
          else {
            uVar10 = 0x180005;
            if (((((0x180004 < param_2) && (uVar10 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar10 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar10 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar10 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar10 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar10 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar10 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar10 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar10 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar10 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  plVar11 = (long *)(param_1 + 8);
  lVar9 = *plVar11;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *plVar11 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar5 = PTR_DAT_047e2fd0;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar10 << 3);
  if (lVar6 == 0) {
    if (*plVar11 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(puVar5 + 0x30))(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar7 = 2;
    *(long *)(param_1 + 8) = lVar9;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  else {
    iVar8 = (int)uVar10;
    *(long *)(param_1 + 8) = lVar6;
    *(int *)(param_1 + 0x14) = iVar8;
    while( true ) {
      iVar8 = iVar8 + -1;
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 < (uint)uVar10) {
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
        if (*(long *)(param_1 + 8) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = 0;
        }
      }
      if (iVar8 == 0) break;
      uVar10 = (ulong)*(uint *)(param_1 + 0x14);
    }
    if (uVar1 != 0) {
      uVar10 = 0;
      do {
        plVar11 = (long *)*(long *)(lVar9 + uVar10 * 8);
        while (plVar11 != (long *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x10);
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = *(uint *)(plVar11 + 1) / uVar3;
          }
          uVar3 = *(uint *)(plVar11 + 1) - uVar4 * uVar3;
          lVar6 = *plVar11;
          *plVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8);
          *(long **)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = plVar11;
          plVar11 = (long *)lVar6;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar1);
    }
    if (lVar9 != 0) {
      (**(code **)(puVar5 + 0x30))(0,lVar9);
    }
    uVar7 = 1;
  }
  return uVar7;
}


