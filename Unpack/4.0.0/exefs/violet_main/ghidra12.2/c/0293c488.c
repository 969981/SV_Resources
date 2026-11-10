/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293c488; name: FUN_0293c488
 */


void FUN_0293c488(long param_1)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
  uVar1 = *(ushort *)(lVar8 + 0x70);
  uVar4 = (ulong)uVar1;
  if ((uVar4 != 0xee) && (uVar5 = *(ulong *)(lVar8 + 0x10), uVar5 != 0)) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = (int)uVar5 - 1 & uVar4;
    }
    else {
      uVar7 = uVar4;
      if (uVar5 <= uVar4) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar4 / uVar5;
        }
        uVar7 = uVar4 - uVar7 * uVar5;
      }
    }
    plVar9 = *(long **)(*(long *)(lVar8 + 8) + uVar7 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar9[1] == uVar4) {
            if (*(ushort *)(plVar9 + 2) == uVar1) goto LAB_0293c530;
          }
          else if ((plVar9[1] & uVar5 - 1) != uVar7) {
            return;
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar9[1];
          if (uVar6 == uVar4) {
            if (*(ushort *)(plVar9 + 2) == uVar1) {
LAB_0293c530:
              plVar9 = plVar9 + 3;
              do {
                plVar3 = (long *)FUN_0107ba54(plVar9[1],*(undefined2 *)((long)plVar9 + 0x14));
                if (((char)plVar9[5] == '\a') && (*(char *)((long)plVar9 + 0x44) != '\0')) {
                  if (*(char *)((long)plVar9 + 0x3f) == '\0') {
                    FUN_014608e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0),plVar9);
                  }
                  else {
                    FUN_01460cdc(plVar9,1);
                  }
                }
                plVar9 = plVar3;
              } while (plVar3 != (long *)0x0);
              return;
            }
          }
          else {
            if (uVar5 <= uVar6) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar2 * uVar5;
            }
            if (uVar6 != uVar7) {
              return;
            }
          }
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


