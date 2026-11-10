/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034c900; name: FUN_0034c900
 */


int FUN_0034c900(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  
  if (param_1 == (ulong *)0x0) {
    return 0;
  }
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar3 = 0;
    piVar4 = (int *)(param_1[1] + 0x10);
    do {
      if ((piVar4[-4] == 1) &&
         (iVar1 = strcmp("grpc.default_compression_algorithm",*(char **)(piVar4 + -2)), iVar1 == 0))
      {
        iVar1 = *piVar4;
        if (3 < iVar1) {
          iVar1 = 0;
        }
        return iVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar3 < uVar2);
  }
  return 0;
}


