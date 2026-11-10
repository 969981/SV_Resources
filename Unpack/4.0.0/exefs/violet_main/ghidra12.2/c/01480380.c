/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01480380; name: FUN_01480380
 */


void FUN_01480380(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  
  uVar4 = *(ulong *)(param_1 + 0x30);
  if (uVar4 != 0) {
    uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & param_3;
    }
    else {
      uVar7 = param_3;
      if (uVar4 <= param_3) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = param_3 / uVar4;
        }
        uVar7 = param_3 - uVar7 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x28) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == param_3) {
            if (plVar8[2] == param_3) goto LAB_0148041c;
          }
          else if ((plVar8[1] & uVar4 - 1) != uVar7) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == param_3) {
            if (plVar8[2] == param_3) {
LAB_0148041c:
              uVar4 = FUN_00cf4cfc(*(undefined8 *)(param_2 + 0x70));
              if ((uVar4 & 1) != 0) {
                return;
              }
              if ((*(ushort *)(*(long *)(*(long *)(param_2 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) {
                return;
              }
              uVar3 = FUN_0131c054();
              iVar2 = FUN_01480500(uVar3,param_2,plVar8 + 3);
              uVar5 = iVar2 + (int)uVar3;
              uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar5) {
                uVar5 = 0xff;
              }
              if (0xfe < uVar5) {
                uVar5 = 0xff;
              }
              FUN_00ef7530(*(undefined8 *)(param_2 + 0x70),uVar5);
              FUN_00f13b9c(param_2,1);
              return;
            }
          }
          else {
            if (uVar4 <= uVar6) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar1 * uVar4;
            }
            if (uVar6 != uVar7) {
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


