/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00343a90; name: FUN_00343a90
 */


ulong FUN_00343a90(ulong *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 != (ulong *)0x0) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar2 = param_1[1];
    uVar4 = 0;
    do {
      iVar1 = strcmp(*(char **)(uVar2 + 8),param_2);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x20;
    } while (uVar4 < uVar3);
  }
  return 0;
}


