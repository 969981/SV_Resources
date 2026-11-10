/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248948; name: FUN_01248948
 */


int * FUN_01248948(long param_1,long param_2,int param_3)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x2420);
  uVar5 = 0;
  lVar3 = (param_2 - param_1) + 0x84;
  do {
    uVar4 = uVar2;
    if (uVar2 == uVar5) goto LAB_01248978;
    uVar5 = uVar5 + 1;
    lVar3 = lVar3 + -0x8c;
  } while (lVar3 != 0);
  uVar4 = uVar5 & 0xffffffff;
LAB_01248978:
  if (((uint)uVar4 & 0xff) < (uint)*(byte *)(param_1 + 0x2420)) {
    uVar5 = (ulong)((uint)uVar4 & 0xff);
    lVar3 = uVar2 - uVar5;
    piVar1 = (int *)(param_1 + uVar5 * 0x8c + 8);
    do {
      if (*piVar1 == param_3) {
        return piVar1;
      }
      lVar3 = lVar3 + -1;
      piVar1 = piVar1 + 0x23;
    } while (lVar3 != 0);
  }
  return (int *)0x0;
}


