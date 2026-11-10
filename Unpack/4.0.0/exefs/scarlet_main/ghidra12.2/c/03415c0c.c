/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03415c0c; name: FUN_03415c0c
 */


void FUN_03415c0c(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  
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
              return;
            }
          }
        }
      }
    }
  }
  lVar8 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047e2fd0;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(10,0,uVar10 << 3);
  if (lVar6 == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (**(code **)(puVar5 + 0x30))(10);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = lVar8;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  }
  else {
    uVar9 = (uint)uVar10;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar9;
    uVar4 = uVar9;
    while( true ) {
      uVar4 = uVar4 - 1;
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 < (uint)uVar10) {
        *(uint *)(param_1 + 1) = uVar3 + 1;
        if (*param_1 != 0) {
          *(undefined8 *)(*param_1 + (ulong)uVar3 * 8) = 0;
        }
      }
      if (uVar4 == 0) break;
      uVar10 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
    if (uVar1 != 0) {
      uVar10 = 0;
      do {
        lVar6 = *(long *)(lVar8 + uVar10 * 8);
        while (lVar6 != 0) {
          uVar4 = 0;
          if (uVar9 != 0) {
            uVar4 = *(uint *)(lVar6 + 0x70) / uVar9;
          }
          lVar7 = *(long *)(lVar6 + 0x78);
          uVar4 = *(uint *)(lVar6 + 0x70) - uVar4 * uVar9;
          *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(*param_1 + (ulong)uVar4 * 8);
          *(long *)(*param_1 + (ulong)uVar4 * 8) = lVar6;
          lVar6 = lVar7;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar1);
    }
    if (lVar8 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03415ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5 + 0x30))(10,lVar8);
      return;
    }
  }
  return;
}


