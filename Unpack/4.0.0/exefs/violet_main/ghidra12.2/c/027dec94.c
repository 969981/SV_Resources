/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dec94; name: FUN_027dec94
 */


void FUN_027dec94(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *param_1;
  uVar4 = (param_3 - param_2 >> 4) * -0x71c71c71c71c71c7;
  if ((ulong)((param_1[2] - lVar5 >> 4) * -0x71c71c71c71c71c7) < uVar4) {
    FUN_027dee98(param_1);
    uVar3 = FUN_027deee4(param_1,uVar4);
    FUN_027def58(param_1,uVar3);
    lVar5 = param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 0x90) {
      FUN_027dee40(lVar5,param_2);
      lVar5 = lVar5 + 0x90;
    }
    param_1[1] = lVar5;
  }
  else {
    uVar6 = (param_1[1] - lVar5 >> 4) * -0x71c71c71c71c71c7;
    lVar1 = param_2 + (param_1[1] - lVar5);
    lVar2 = lVar1;
    if (uVar4 <= uVar6) {
      lVar2 = param_3;
    }
    for (; lVar2 != param_2; param_2 = param_2 + 0x90) {
      FUN_027dede8(lVar5,param_2);
      lVar5 = lVar5 + 0x90;
    }
    if (uVar4 <= uVar6) {
      FUN_027de574(param_1,lVar5);
      return;
    }
    lVar5 = param_1[1];
    while (lVar2 != param_3) {
      FUN_027dee40(lVar5,lVar1);
      lVar5 = lVar5 + 0x90;
      lVar1 = lVar1 + 0x90;
      lVar2 = lVar1;
    }
    param_1[1] = lVar5;
  }
  return;
}


