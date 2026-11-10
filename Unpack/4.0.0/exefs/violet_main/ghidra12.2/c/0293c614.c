/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293c614; name: FUN_0293c614
 */


void FUN_0293c614(long param_1,uint param_2,char param_3)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0xd0);
  uVar1 = *(ushort *)(lVar7 + 0x70);
  uVar3 = (ulong)uVar1;
  if ((uVar3 != 0xee) && (uVar4 = *(ulong *)(lVar7 + 0x10), uVar4 != 0)) {
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = (int)uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(lVar7 + 8) + uVar6 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar8[1] == uVar3) {
            if (*(ushort *)(plVar8 + 2) == uVar1) goto LAB_0293c6bc;
          }
          else if ((plVar8[1] & uVar4 - 1) != uVar6) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar8[1];
          if (uVar5 == uVar3) {
            if (*(ushort *)(plVar8 + 2) == uVar1) {
LAB_0293c6bc:
              plVar8 = plVar8 + 3;
              do {
                if ((*(uint *)(plVar8 + 7) == (param_2 & 0xffff)) && ((char)plVar8[5] == param_3)) {
                  FUN_0293c780(plVar8);
                }
                plVar8 = (long *)FUN_0107ba54(plVar8[1],*(undefined2 *)((long)plVar8 + 0x14));
              } while (plVar8 != (long *)0x0);
              return;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar2 * uVar4;
            }
            if (uVar5 != uVar6) {
              return;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


