/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291c698; name: FUN_0291c698
 */


undefined8 FUN_0291c698(long param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)*(byte *)(param_1 + 0x2420);
  if (uVar4 != 0) {
    if (param_3 != 0) {
      uVar3 = 0;
      lVar5 = param_1;
      while ((((*(char *)(lVar5 + 0x91) != '\0' || (*(int *)(lVar5 + 0xc) != 1)) ||
              (*(short *)(lVar5 + 0x18) != param_3)) || (*(int *)(lVar5 + 8) != param_2))) {
        uVar3 = uVar3 + 1;
        lVar5 = lVar5 + 0x8c;
        if (uVar4 == uVar3) {
          return 0;
        }
      }
LAB_0291c6e8:
      param_1 = param_1 + uVar3 * 0x8c;
      uVar1 = FUN_0291c690(*(undefined4 *)(param_1 + 0x8c),3);
      *(undefined4 *)(param_1 + 0x8c) = uVar1;
      return 1;
    }
    uVar3 = 0;
    pcVar2 = (char *)(param_1 + 0x91);
    do {
      if ((*pcVar2 == '\0') && (*(int *)(pcVar2 + -0x89) == param_2)) goto LAB_0291c6e8;
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar2 + 0x8c;
    } while (uVar4 != uVar3);
  }
  return 0;
}


