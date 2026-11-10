/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014237e0; name: FUN_014237e0
 */


void FUN_014237e0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[0xb] != 0) {
    plVar8 = (long *)param_1[6];
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)param_1[7];
      plVar7 = (long *)*plVar8;
      uVar1 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar9,plVar8,0x20,8);
      }
      while (plVar7 != (long *)0x0) {
        plVar8 = (long *)param_1[7];
        plVar9 = (long *)*plVar7;
        uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar1 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x20,8);
          plVar7 = plVar9;
        }
        else {
          FUN_00c48fe8(plVar8,plVar7,0x20,8);
          plVar7 = plVar9;
        }
      }
    }
    uVar1 = param_1[1];
    param_1[6] = 0;
    if (uVar1 != 0) {
      uVar5 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar4 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar4 * 8 + 0x10) = 0;
          lVar3 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar5 != 0) {
        lVar3 = uVar4 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar3) = 0;
          uVar5 = uVar5 - 1;
          lVar3 = lVar3 + 8;
        } while (uVar5 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  lVar6 = *param_1;
  *param_1 = lVar3;
  if (lVar6 != 0) {
    lVar3 = param_1[1];
    plVar8 = (long *)param_1[2];
    uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar6,lVar3 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar8,lVar6,lVar3 << 3,8);
    }
  }
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar3 = param_2[2];
  lVar6 = param_2[3];
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  param_1[2] = lVar3;
  param_1[3] = lVar6;
  lVar3 = param_2[7];
  lVar6 = param_2[8];
  lVar2 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar2;
  param_1[7] = lVar3;
  param_1[8] = lVar6;
  lVar6 = param_2[0xb];
  param_1[0xb] = lVar6;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  if (lVar6 != 0) {
    uVar5 = param_1[1];
    uVar1 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar1 = uVar5 - 1 & uVar1;
    }
    else if (uVar5 <= uVar1) {
      uVar4 = 0;
      if (uVar5 != 0) {
        uVar4 = uVar1 / uVar5;
      }
      uVar1 = uVar1 - uVar4 * uVar5;
    }
    *(long **)(*param_1 + uVar1 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


