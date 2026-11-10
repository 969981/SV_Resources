/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f060a8; name: FUN_00f060a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f060a8(long param_1,ulong *param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  
  if (param_3 == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x158));
  uVar5 = *(ulong *)(param_1 + 0xb8);
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar4 / uVar5;
      }
      uVar6 = uVar4 - uVar6 * uVar5;
    }
    plVar3 = *(long **)(*(long *)(param_1 + 0xb0) + uVar6 * 8);
    if ((plVar3 != (long *)0x0) && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar3[1] == uVar4) {
            if (plVar3[2] == uVar4) goto LAB_00f06164;
          }
          else if ((plVar3[1] & uVar5 - 1) != uVar6) break;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar3[1];
          if (uVar2 == uVar4) {
            if (plVar3[2] == uVar4) goto LAB_00f06164;
          }
          else {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != uVar6) break;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
    }
  }
  goto LAB_00f06210;
LAB_00f061ec:
  FUN_00f0682c((float)*param_4 + (float)_DAT_03cabe60 * *(float *)(plVar3 + 4),plVar7[3],param_3);
  goto LAB_00f06210;
LAB_00f06164:
  uVar5 = *(ulong *)(param_1 + 0x50);
  if (uVar5 != 0) {
    uVar2 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar4 = plVar3[3];
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar6 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar6 = uVar4;
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar4 / uVar5;
      }
      uVar6 = uVar4 - uVar6 * uVar5;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x48) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (plVar7[2] == uVar4) goto LAB_00f061ec;
          }
          else if ((plVar7[1] & uVar5 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar7[1];
          if (uVar2 == uVar4) {
            if (plVar7[2] == uVar4) goto LAB_00f061ec;
          }
          else {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
LAB_00f06210:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x158));
  return;
}


