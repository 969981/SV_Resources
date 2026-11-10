/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f87e7c; name: FUN_00f87e7c
 */


bool FUN_00f87e7c(long param_1,ulong *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  long *plStack_80;
  undefined1 auStack_78 [24];
  long *local_60;
  ulong local_58;
  ulong uStack_50;
  long *local_48;
  
  uVar7 = *param_2;
  uVar5 = *(ulong *)(param_1 + 0x108);
  if (uVar5 != 0) {
    uVar3 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar3 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar3 < 2) {
      uVar4 = uVar5 - 1 & uVar7;
    }
    else {
      uVar4 = uVar7;
      if (uVar5 <= uVar7) {
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = uVar7 / uVar5;
        }
        uVar4 = uVar7 - uVar4 * uVar5;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 0x100) + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar3 < 2) {
        do {
          if (plVar6[1] == uVar7) {
            if (plVar6[2] == uVar7) goto LAB_00f87f94;
          }
          else if ((plVar6[1] & uVar5 - 1) != uVar4) goto LAB_00f87f9c;
          plVar6 = (long *)*plVar6;
          plVar8 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar3 = plVar6[1];
          if (uVar3 == uVar7) {
            if (plVar6[2] == uVar7) goto LAB_00f87f94;
          }
          else {
            if (uVar5 <= uVar3) {
              uVar2 = 0;
              if (uVar5 != 0) {
                uVar2 = uVar3 / uVar5;
              }
              uVar3 = uVar3 - uVar2 * uVar5;
            }
            if (uVar3 != uVar4) goto LAB_00f87f9c;
          }
          plVar6 = (long *)*plVar6;
          plVar8 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_00f87fa0;
    }
  }
LAB_00f87f9c:
  plVar8 = (long *)0x0;
  goto LAB_00f87fa0;
LAB_00f87f94:
  plVar8 = plVar6;
LAB_00f87fa0:
  uVar5 = param_2[1];
  uVar3 = param_2[2];
  plVar6 = (long *)param_2[3];
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (plVar8 == (long *)0x0) {
    bVar1 = false;
  }
  else {
    local_98 = uVar7;
    uStack_90 = uVar5;
    local_88 = uVar3;
    plStack_80 = plVar6;
    if (plVar6 == (long *)0x0) {
      FUN_00f834a4(auStack_78,param_1,&local_98);
    }
    else {
      (**(code **)(*plVar6 + 0x18))(plVar6);
      FUN_00f834a4(auStack_78,param_1,&local_98);
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    bVar1 = uStack_50 < local_58;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  if (bVar1) {
    *(long *)(param_1 + 0x240) = plVar8[6];
  }
  return bVar1;
}


