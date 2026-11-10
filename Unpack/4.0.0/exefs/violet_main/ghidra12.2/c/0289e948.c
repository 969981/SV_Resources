/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289e948; name: FUN_0289e948
 */


void FUN_0289e948(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    FUN_015c4b70(param_1,param_2,param_5);
    lVar2 = param_2 + 0x20;
  }
  else {
    lVar2 = param_2;
    if (lVar1 != param_4) {
      lVar4 = lVar1;
      do {
        FUN_0175aeb8(param_1,lVar2,lVar4);
        lVar4 = lVar4 + 0x20;
        lVar2 = lVar2 + 0x20;
      } while (param_4 != lVar4);
    }
    FUN_015c4b70(param_1,lVar2,param_5);
    lVar2 = lVar2 + 0x20;
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = lVar1 + lVar3 * 0x20;
    if (lVar4 != param_4) {
      do {
        FUN_0175aeb8(param_1,lVar2,param_4);
        param_4 = param_4 + 0x20;
        lVar2 = lVar2 + 0x20;
      } while (lVar4 != param_4);
      lVar3 = *(long *)(param_1 + 0x28);
    }
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_0175afc8(lVar1);
      lVar1 = lVar1 + 0x20;
    }
    FUN_0175c5e4(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar2 - param_2 >> 5;
  return;
}


