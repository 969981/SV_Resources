/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02af796c; name: FUN_02af796c
 */


void FUN_02af796c(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  puVar2 = *(ulong **)(param_1 + 0x48);
  do {
    if (puVar1 == puVar2) {
      if (*(long *)(param_1 + 0x138) != 0) {
        plVar9 = (long *)(param_1 + 0xe0);
        FUN_01689388(plVar9,*(undefined8 *)(param_1 + 0x110));
        uVar4 = *(ulong *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0x110) = 0;
        if (uVar4 != 0) {
          uVar5 = uVar4 & 3;
          if (uVar4 - 1 < 3) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            do {
              *(undefined8 *)(*plVar9 + uVar7 * 8) = 0;
              *(undefined8 *)(*plVar9 + uVar7 * 8 + 8) = 0;
              *(undefined8 *)(*plVar9 + uVar7 * 8 + 0x10) = 0;
              lVar6 = uVar7 * 8;
              uVar7 = uVar7 + 4;
              *(undefined8 *)(*plVar9 + lVar6 + 0x18) = 0;
            } while ((uVar4 & 0xfffffffffffffffc) != uVar7);
          }
          if (uVar5 != 0) {
            lVar6 = uVar7 << 3;
            do {
              *(undefined8 *)(*plVar9 + lVar6) = 0;
              uVar5 = uVar5 - 1;
              lVar6 = lVar6 + 8;
            } while (uVar5 != 0);
          }
        }
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      return;
    }
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      uVar5 = *(ulong *)(param_1 + 0xe8);
      if (uVar5 != 0) {
        uVar7 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
        uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar7 < 2) {
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
        plVar9 = *(long **)(*(long *)(param_1 + 0xe0) + uVar8 * 8);
        if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
          if (uVar7 < 2) {
            do {
              if (plVar9[1] == uVar4) {
                if (plVar9[2] == uVar4) goto LAB_02af7a50;
              }
              else if ((plVar9[1] & uVar5 - 1) != uVar8) break;
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
          else {
            do {
              uVar7 = plVar9[1];
              if (uVar7 == uVar4) {
                if (plVar9[2] == uVar4) goto LAB_02af7a50;
              }
              else {
                if (uVar5 <= uVar7) {
                  uVar3 = 0;
                  if (uVar5 != 0) {
                    uVar3 = uVar7 / uVar5;
                  }
                  uVar7 = uVar7 - uVar3 * uVar5;
                }
                if (uVar7 != uVar8) break;
              }
              plVar9 = (long *)*plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
      }
      uVar4 = FUN_0181b4ec(param_1,puVar1);
      if ((uVar4 & 1) == 0) {
        *puVar1 = 0;
        puVar1[1] = 0;
      }
    }
LAB_02af7a50:
    puVar1 = puVar1 + 0x40;
  } while( true );
}


