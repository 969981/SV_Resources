/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003168c0; name: FUN_003168c0
 */


long FUN_003168c0(ulong param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 & 0xfffffffffffffffc);
  if (*plVar2 == 0) {
    lVar4 = (long)plVar2 + 9;
    uVar1 = (ulong)*(byte *)(plVar2 + 1);
    lVar5 = plVar2[4];
  }
  else {
    uVar1 = plVar2[1];
    lVar4 = plVar2[2];
    lVar5 = plVar2[4];
  }
  if (lVar5 == 0) {
    uVar3 = (ulong)*(byte *)(plVar2 + 5);
  }
  else {
    uVar3 = plVar2[5];
  }
  if ((uVar1 < 5) || (*(int *)(lVar4 + uVar1 + -4) != 0x6e69622d)) {
    return uVar1 + uVar3 + 0x20;
  }
  if ((param_2 & 1) == 0) {
    return uVar1 + (ulong)(byte)(&DAT_03cd74b2)[uVar3 % 3] + (uVar3 / 3) * 4 + 0x20;
  }
  return uVar1 + uVar3 + 0x21;
}


