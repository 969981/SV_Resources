/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bb448; name: FUN_034bb448
 */


void FUN_034bb448(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_2 < 0x1d) {
    uVar11 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar11 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar11 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar11 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar11 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar11 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar11 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar11 = 0xc07;
  }
  else {
    uVar11 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar11 = 0x3001;
      }
      else {
        uVar11 = 0x6011;
        if ((((0x6010 < param_2) && (uVar11 = 0xc005, 0xc004 < param_2)) &&
            (uVar11 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar11 = 0x30005, 0x30004 < param_2 && (uVar11 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar11 = 0xc0001;
          }
          else {
            uVar11 = 0x180005;
            if (((((0x180004 < param_2) && (uVar11 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar11 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar11 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar11 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar11 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar11 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar11 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar11 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar11 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar11 = 0x60000005, 0x60000004 < param_2)))))) {
              return;
            }
          }
        }
      }
    }
  }
  lVar9 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047e2fd0;
  lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar11 << 3);
  if (lVar7 == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (**(code **)(puVar6 + 0x30))(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = lVar9;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  }
  else {
    uVar10 = (uint)uVar11;
    *param_1 = lVar7;
    *(uint *)((long)param_1 + 0xc) = uVar10;
    uVar4 = uVar10;
    while( true ) {
      uVar4 = uVar4 - 1;
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 < (uint)uVar11) {
        *(uint *)(param_1 + 1) = uVar3 + 1;
        if (*param_1 != 0) {
          *(undefined8 *)(*param_1 + (ulong)uVar3 * 8) = 0;
        }
      }
      if (uVar4 == 0) break;
      uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
    if (uVar1 != 0) {
      uVar11 = 0;
      do {
        puVar5 = *(uint **)(lVar9 + uVar11 * 8);
        while (puVar5 != (uint *)0x0) {
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = *puVar5 / uVar10;
          }
          puVar8 = *(uint **)(puVar5 + 2);
          uVar4 = *puVar5 - uVar4 * uVar10;
          *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*param_1 + (ulong)uVar4 * 8);
          *(uint **)(*param_1 + (ulong)uVar4 * 8) = puVar5;
          puVar5 = puVar8;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar1);
    }
    if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x034bb6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar6 + 0x30))(0,lVar9);
      return;
    }
  }
  return;
}


