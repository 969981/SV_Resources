/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03469838; name: FUN_03469838
 */


void FUN_03469838(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  
  if (param_2 < 0x1d) {
    uVar9 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar9 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar9 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar9 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar9 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar9 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar9 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar9 = 0xc07;
  }
  else {
    uVar9 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar9 = 0x3001;
      }
      else {
        uVar9 = 0x6011;
        if ((((0x6010 < param_2) && (uVar9 = 0xc005, 0xc004 < param_2)) &&
            (uVar9 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar9 = 0x30005, 0x30004 < param_2 && (uVar9 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar9 = 0xc0001;
          }
          else {
            uVar9 = 0x180005;
            if (((((0x180004 < param_2) && (uVar9 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar9 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar9 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar9 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar9 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar9 = 0x6000017, 0x6000016 < param_2 && (uVar9 = 0xc000013, 0xc000012 < param_2)
                 ))) && ((uVar9 = 0x18000005, 0x18000004 < param_2 &&
                         ((uVar9 = 0x30000059, 0x30000058 < param_2 &&
                          (uVar9 = 0x60000005, 0x60000004 < param_2)))))) {
              return;
            }
          }
        }
      }
    }
  }
  plVar10 = (long *)(param_1 + 8);
  lVar7 = *plVar10;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *plVar10 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar5 = PTR_DAT_047e2fd0;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,0,uVar9 << 3);
  if (lVar6 == 0) {
    if (*plVar10 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)(puVar5 + 0x30))(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(long *)(param_1 + 8) = lVar7;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  else {
    iVar8 = (int)uVar9;
    *(long *)(param_1 + 8) = lVar6;
    *(int *)(param_1 + 0x14) = iVar8;
    while( true ) {
      iVar8 = iVar8 + -1;
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 < (uint)uVar9) {
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
        if (*(long *)(param_1 + 8) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = 0;
        }
      }
      if (iVar8 == 0) break;
      uVar9 = (ulong)*(uint *)(param_1 + 0x14);
    }
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        plVar10 = (long *)*(long *)(lVar7 + uVar9 * 8);
        while (plVar10 != (long *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x10);
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = *(uint *)(plVar10 + 1) / uVar3;
          }
          uVar3 = *(uint *)(plVar10 + 1) - uVar4 * uVar3;
          lVar6 = *plVar10;
          *plVar10 = *(undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8);
          *(long **)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8) = plVar10;
          plVar10 = (long *)lVar6;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03469ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar5 + 0x30))(0,lVar7);
      return;
    }
  }
  return;
}


