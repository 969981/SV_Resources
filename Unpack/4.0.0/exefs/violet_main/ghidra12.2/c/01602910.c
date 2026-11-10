/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01602910; name: FUN_01602910
 */


void FUN_01602910(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1[0xb] != 0) {
    FUN_016026ac(param_1,param_1[6]);
    uVar4 = param_1[1];
    param_1[6] = 0;
    if (uVar4 != 0) {
      uVar6 = uVar4 & 3;
      if (uVar4 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar5 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar5 * 8 + 0x10) = 0;
          lVar2 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*param_1 + lVar2 + 0x18) = 0;
        } while ((uVar4 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar6 != 0) {
        lVar2 = uVar5 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar2) = 0;
          uVar6 = uVar6 - 1;
          lVar2 = lVar2 + 8;
        } while (uVar6 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    FUN_0160a8b4(param_1 + 1);
  }
  param_1[1] = param_2[1];
  param_2[1] = 0;
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  lVar2 = param_2[7];
  lVar3 = param_2[8];
  lVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = lVar1;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  lVar3 = param_2[0xb];
  param_1[0xb] = lVar3;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar4 = *(ulong *)(lVar2 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar5 * uVar6;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


