/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032258b8; name: FUN_032258b8
 */


void FUN_032258b8(long *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = (long)(int)param_1[1] + -1;
  uVar3 = param_2[1];
  if (uVar3 == (uint)lVar5) {
    *(uint *)(param_1 + 1) = uVar3;
  }
  else {
    lVar5 = FUN_0321e944(param_1,*param_1 + lVar5 * 8);
    *(uint *)(lVar5 + 4) = uVar3;
    lVar5 = (long)(int)param_1[1] + -1;
    uVar4 = (uint)lVar5;
    *(uint *)(param_1 + 1) = uVar4;
    if (uVar4 != uVar3) {
      *(undefined8 *)(*param_1 + (long)(int)uVar3 * 8) = *(undefined8 *)(*param_1 + lVar5 * 8);
    }
  }
  lVar5 = param_1[2];
  uVar6 = (ulong)(int)param_1[3];
  uVar7 = ((long)param_2 - lVar5 >> 3) + 1U & uVar6;
  while (puVar1 = (uint *)(lVar5 + uVar7 * 8), -1 < (int)puVar1[1]) {
    lVar2 = lVar5 + ((ulong)*puVar1 & uVar6 & 0xffffffff) * 8;
    uVar7 = (ulong)(int)uVar6;
    if ((uVar7 & (long)param_2 - lVar2 >> 3) < (uVar7 & (long)puVar1 - lVar2 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar6 = (ulong)*(uint *)(param_1 + 3);
      lVar5 = param_1[2];
      uVar7 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar7 = ((ulong)((long)puVar1 - lVar5) >> 3) + 1 & uVar7;
  }
  param_2[1] = 0xffffffff;
  return;
}


