/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7eb48; name: FUN_00c7eb48
 */


void FUN_00c7eb48(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x88);
  do {
    plVar2 = plVar7;
    if (plVar2 == (long *)(param_1 + 0x90)) {
      return;
    }
    uVar4 = plVar2[6];
    if (uVar4 != 0) {
      uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
      uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar5 < 2) {
        uVar6 = uVar4 - 1 & param_2;
      }
      else if (param_2 < uVar4) {
        uVar6 = param_2;
      }
      else {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = param_2 / uVar4;
        }
        uVar6 = param_2 - uVar6 * uVar4;
      }
      plVar7 = *(long **)(plVar2[5] + uVar6 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        if (uVar5 < 2) {
          do {
            if (plVar7[1] == param_2) {
              if (plVar7[2] == param_2) goto LAB_00c7ecb0;
            }
            else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar5 = plVar7[1];
            if (uVar5 == param_2) {
              if (plVar7[2] == param_2) {
LAB_00c7ecb0:
                *(byte *)(plVar7 + 3) = *(byte *)(plVar7 + 3) & 0xfe;
                return;
              }
            }
            else {
              if (uVar4 <= uVar5) {
                uVar1 = 0;
                if (uVar4 != 0) {
                  uVar1 = uVar5 / uVar4;
                }
                uVar5 = uVar5 - uVar1 * uVar4;
              }
              if (uVar5 != uVar6) break;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
    plVar7 = (long *)plVar2[1];
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)plVar2[2];
      if (*(long **)plVar2[2] != plVar2) {
        lVar3 = plVar2[2];
        plVar7 = *(long **)(lVar3 + 0x10);
        if (**(long **)(lVar3 + 0x10) != lVar3) {
          lVar3 = *(long *)(lVar3 + 0x10);
          while( true ) {
            plVar7 = *(long **)(lVar3 + 0x10);
            if (*plVar7 == lVar3) break;
            lVar3 = *(long *)(lVar3 + 0x10);
          }
        }
      }
    }
    else {
      for (plVar2 = (long *)*plVar7; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        plVar7 = plVar2;
      }
    }
  } while( true );
}


