/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003de440; name: FUN_003de440
 */


ulong FUN_003de440(int *param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    if (iVar1 != *param_2) {
      return 0xffffffff;
    }
    if (iVar1 != 1) {
      if (iVar1 == 5) {
        return 0;
      }
      if (iVar1 == 6) {
        uVar2 = FUN_0045d160(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
        return uVar2;
      }
      uVar2 = FUN_003df4b0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
      return uVar2;
    }
    uVar3 = param_1[2] - param_2[2];
  }
  return (ulong)uVar3;
}


