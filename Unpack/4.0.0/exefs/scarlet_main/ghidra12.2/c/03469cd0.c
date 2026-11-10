/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03469cd0; name: FUN_03469cd0
 */


undefined8 FUN_03469cd0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_2 < 0x1d) {
    uVar12 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar12 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar12 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar12 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar12 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar12 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar12 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar12 = 0xc07;
  }
  else {
    uVar12 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar12 = 0x3001;
      }
      else {
        uVar12 = 0x6011;
        if ((((0x6010 < param_2) && (uVar12 = 0xc005, 0xc004 < param_2)) &&
            (uVar12 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar12 = 0x30005, 0x30004 < param_2 && (uVar12 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar12 = 0xc0001;
          }
          else {
            uVar12 = 0x180005;
            if (((((0x180004 < param_2) && (uVar12 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar12 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar12 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar12 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar12 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar12 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar12 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar12 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar12 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar12 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  lVar10 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047e2fd0;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar12 << 3);
  if (lVar6 == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (**(code **)(puVar5 + 0x30))(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    uVar7 = 2;
    *param_1 = lVar10;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  }
  else {
    uVar11 = (uint)uVar12;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar11;
    uVar8 = uVar11;
    while( true ) {
      uVar8 = uVar8 - 1;
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 < (uint)uVar12) {
        *(uint *)(param_1 + 1) = uVar3 + 1;
        if (*param_1 != 0) {
          *(undefined8 *)(*param_1 + (ulong)uVar3 * 8) = 0;
        }
      }
      if (uVar8 == 0) break;
      uVar12 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
    if (uVar1 != 0) {
      uVar12 = 0;
      do {
        piVar4 = *(int **)(lVar10 + uVar12 * 8);
        while (piVar4 != (int *)0x0) {
          uVar8 = 0;
          if (uVar11 != 0) {
            uVar8 = (uint)(piVar4[2] + *piVar4) / uVar11;
          }
          piVar9 = *(int **)(piVar4 + 4);
          uVar8 = (piVar4[2] + *piVar4) - uVar8 * uVar11;
          *(undefined8 *)(piVar4 + 4) = *(undefined8 *)(*param_1 + (ulong)uVar8 * 8);
          *(int **)(*param_1 + (ulong)uVar8 * 8) = piVar4;
          piVar4 = piVar9;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar1);
    }
    if (lVar10 != 0) {
      (**(code **)(puVar5 + 0x30))(0,lVar10);
    }
    uVar7 = 1;
  }
  return uVar7;
}


