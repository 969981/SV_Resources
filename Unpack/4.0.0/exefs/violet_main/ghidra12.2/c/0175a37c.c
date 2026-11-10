/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175a37c; name: FUN_0175a37c
 */


void FUN_0175a37c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = param_2;
  if (lVar2 != 0) {
    if (lVar2 != param_3) {
      lVar3 = lVar2;
      do {
        FUN_0175a46c(param_1,lVar1,lVar3);
        lVar3 = lVar3 + 0x20;
        lVar1 = lVar1 + 0x20;
      } while (param_3 != lVar3);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = lVar2 + lVar4 * 0x20;
    if (lVar3 != param_3) {
      do {
        FUN_0175a46c(param_1,lVar1,param_3);
        param_3 = param_3 + 0x20;
        lVar1 = lVar1 + 0x20;
      } while (lVar3 != param_3);
      lVar4 = *(long *)(param_1 + 0x28);
    }
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      FUN_0175a57c(lVar2);
      lVar2 = lVar2 + 0x20;
    }
    FUN_0175c55c(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(long *)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = lVar1 - param_2 >> 5;
  *(undefined8 *)(param_1 + 0x30) = 0x40;
  return;
}


