/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0118fe64; name: FUN_0118fe64
 */


void FUN_0118fe64(long param_1,undefined8 param_2,ulong *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = *(ulong *)(param_1 + 0x200);
  if (uVar7 != 0) {
    uVar5 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar4 = *param_3;
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar8 = uVar7 - 1 & uVar4;
    }
    else if (uVar4 < uVar7) {
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar4 / uVar7;
      }
      uVar8 = uVar4 - uVar8 * uVar7;
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x1f8) + uVar8 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar4) {
            if (plVar6[2] == uVar4) goto LAB_0118ff5c;
          }
          else if ((plVar6[1] & uVar7 - 1) != uVar8) {
            return;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar6[1];
          if (uVar5 == uVar4) {
            if (plVar6[2] == uVar4) {
LAB_0118ff5c:
              local_8 = (int)plVar6[0xe];
              local_4 = param_4;
              local_c = *(int *)((long)plVar6 + 0x74);
              piVar1 = &local_c;
              if (param_4 <= *(int *)((long)plVar6 + 0x74)) {
                piVar1 = &local_4;
              }
              piVar2 = &local_8;
              if ((int)plVar6[0xe] <= param_4) {
                piVar2 = piVar1;
              }
              if (*(int *)((long)plVar6 + 0x7c) == *piVar2) {
                return;
              }
              *(int *)((long)plVar6 + 0x7c) = *piVar2;
              *(undefined1 *)((long)plVar6 + 0x84) = 1;
              return;
            }
          }
          else {
            if (uVar7 <= uVar5) {
              uVar3 = 0;
              if (uVar7 != 0) {
                uVar3 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar3 * uVar7;
            }
            if (uVar5 != uVar8) {
              return;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return;
}


