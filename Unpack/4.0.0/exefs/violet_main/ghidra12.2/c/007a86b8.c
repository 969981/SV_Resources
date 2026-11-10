/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a86b8; name: FUN_007a86b8
 */


undefined8 FUN_007a86b8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((((*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10)) &&
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) &&
      (*(short *)(param_1 + 0x18) == *(short *)(param_2 + 0x18))) &&
     (((*(short *)(param_1 + 0x1a) == *(short *)(param_2 + 0x1a) &&
       (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))) &&
      ((*(int *)(param_1 + 0x20) == *(int *)(param_2 + 0x20) &&
       (*(short *)(param_1 + 0x38) == *(short *)(param_2 + 0x38))))))) {
    if (*(short *)(param_1 + 0x38) == 0) {
      return 1;
    }
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_007967e8(*(long *)(param_1 + 0x30) + lVar3,*(long *)(param_2 + 0x30) + lVar3);
      if ((uVar1 & 1) == 0) goto LAB_007a877c;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
      uVar2 = 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x38));
  }
  else {
LAB_007a877c:
    uVar2 = 0;
  }
  return uVar2;
}


