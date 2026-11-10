/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a5d18; name: FUN_029a5d18
 */


void FUN_029a5d18(undefined4 *param_1,long param_2,long *param_3)

{
  ulong *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  puVar1 = (ulong *)PTR_DAT_047d8b70;
  if (*param_3 != 0) {
    puVar1 = (ulong *)(*param_3 + 0x30);
  }
  uVar5 = *(ulong *)(param_2 + 0x30);
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *puVar1;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar8 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar4 / uVar5;
      }
      uVar8 = uVar4 - uVar8 * uVar5;
    }
    plVar7 = *(long **)(*(long *)(param_2 + 0x28) + uVar8 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar4) goto LAB_029a5e4c;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar8) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar7[1];
          if (uVar6 == uVar4) {
            if (plVar7[2] == uVar4) goto LAB_029a5e4c;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar3 = 0;
              if (uVar5 != 0) {
                uVar3 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar3 * uVar5;
            }
            if (uVar6 != uVar8) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  param_1[2] = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  param_1[4] = *(undefined4 *)(param_2 + 0x18);
  param_1[5] = uVar2;
  plVar7 = (long *)(param_2 + 0x20);
LAB_029a5e80:
  param_1[6] = (int)*plVar7;
  return;
LAB_029a5e4c:
  *param_1 = (int)plVar7[3];
  param_1[1] = *(undefined4 *)((long)plVar7 + 0x1c);
  param_1[2] = (int)plVar7[4];
  param_1[3] = *(undefined4 *)((long)plVar7 + 0x24);
  param_1[4] = (int)plVar7[5];
  param_1[5] = *(undefined4 *)((long)plVar7 + 0x2c);
  plVar7 = plVar7 + 6;
  goto LAB_029a5e80;
}


