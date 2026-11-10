/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02dfa2d8; name: FUN_02dfa2d8
 */


bool FUN_02dfa2d8(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  bool bVar6;
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
  uVar4 = *(ulong *)(param_1 + 0x108);
  if (uVar4 != 0) {
    uVar2 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar2 < 2) {
      uVar3 = uVar4 - 1 & uVar7;
    }
    else {
      uVar3 = uVar7;
      if (uVar4 <= uVar7) {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar7 / uVar4;
        }
        uVar3 = uVar7 - uVar3 * uVar4;
      }
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x100) + uVar3 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5 = (long *)*plVar5, plVar5 != (long *)0x0)) {
      if (uVar2 < 2) {
        do {
          if (plVar5[1] == uVar7) {
            if (plVar5[2] == uVar7) goto LAB_02dfa3f4;
          }
          else if ((plVar5[1] & uVar4 - 1) != uVar3) goto LAB_02dfa4e8;
          plVar5 = (long *)*plVar5;
          plVar8 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      else {
        do {
          uVar2 = plVar5[1];
          if (uVar2 == uVar7) {
            if (plVar5[2] == uVar7) goto LAB_02dfa3f4;
          }
          else {
            if (uVar4 <= uVar2) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar2 / uVar4;
              }
              uVar2 = uVar2 - uVar1 * uVar4;
            }
            if (uVar2 != uVar3) goto LAB_02dfa4e8;
          }
          plVar5 = (long *)*plVar5;
          plVar8 = (long *)0x0;
        } while (plVar5 != (long *)0x0);
      }
      goto LAB_02dfa3f8;
    }
  }
LAB_02dfa4e8:
  plVar8 = (long *)0x0;
  goto LAB_02dfa3f8;
LAB_02dfa3f4:
  plVar8 = plVar5;
LAB_02dfa3f8:
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (plVar8 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    local_98 = uVar7;
    uStack_90 = uVar4;
    local_88 = uVar2;
    plStack_80 = plVar5;
    if (plVar5 == (long *)0x0) {
      FUN_00f834a4(auStack_78,param_1,&local_98);
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      FUN_00f834a4(auStack_78,param_1,&local_98);
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    bVar6 = uStack_50 < local_58;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return bVar6;
}


