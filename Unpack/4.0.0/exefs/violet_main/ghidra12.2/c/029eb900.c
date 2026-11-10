/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029eb900; name: FUN_029eb900
 */


void FUN_029eb900(long *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  puVar1 = (ulong *)(param_1 + 1);
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_029eb770(puVar1);
    }
    *puVar1 = 0;
  }
  else {
    lVar3 = (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],param_2 << 3,0x10);
    if (lVar3 == 0) {
      (**(code **)(*(long *)param_1[2] + 0xe8))();
    }
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      FUN_029eb770(puVar1);
    }
    uVar2 = param_2 - 1;
    uVar10 = param_2;
    if (param_2 == 0 || uVar2 == 0) {
      uVar10 = 1;
    }
    uVar5 = uVar10 & 3;
    *puVar1 = param_2;
    if (uVar10 - 1 < 3) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar7 * 8 + 0x10) = 0;
        lVar3 = uVar7 * 8;
        uVar7 = uVar7 + 4;
        *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
      } while ((uVar10 & 0xfffffffffffffffc) != uVar7);
    }
    if (uVar5 != 0) {
      lVar3 = uVar7 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar5 = uVar5 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar5 != 0);
    }
    plVar6 = (long *)param_1[6];
    if (plVar6 != (long *)0x0) {
      uVar10 = param_2 - (param_2 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar5 = plVar6[1];
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar5 = uVar5 & uVar2;
      }
      else if (param_2 <= uVar5) {
        uVar7 = 0;
        if (param_2 != 0) {
          uVar7 = uVar5 / param_2;
        }
        uVar5 = uVar5 - uVar7 * param_2;
      }
      *(long **)(*param_1 + uVar5 * 8) = param_1 + 6;
      plVar8 = (long *)*plVar6;
      if (plVar8 != (long *)0x0) {
        if (uVar10 < 2) {
          do {
            uVar10 = plVar8[1] & uVar2;
            if (uVar10 == uVar5) {
              uVar10 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar6;
                uVar10 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar10;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar8[1];
            if (param_2 <= uVar10) {
              uVar2 = 0;
              if (param_2 != 0) {
                uVar2 = uVar10 / param_2;
              }
              uVar10 = uVar10 - uVar2 * param_2;
            }
            if (uVar10 == uVar5) {
              uVar10 = uVar5;
            }
            else {
              plVar9 = plVar8;
              if (*(long *)(*param_1 + uVar10 * 8) == 0) {
                *(long **)(*param_1 + uVar10 * 8) = plVar6;
              }
              else {
                do {
                  plVar11 = plVar9;
                  plVar9 = (long *)*plVar11;
                  if (plVar9 == (long *)0x0) break;
                } while (plVar8[2] == plVar9[2]);
                *plVar6 = (long)plVar9;
                *plVar11 = **(long **)(*param_1 + uVar10 * 8);
                **(undefined8 **)(*param_1 + uVar10 * 8) = plVar8;
                plVar8 = plVar6;
                uVar10 = uVar5;
              }
            }
            plVar9 = (long *)*plVar8;
            plVar6 = plVar8;
            uVar5 = uVar10;
            plVar8 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
  }
  return;
}


