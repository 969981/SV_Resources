/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00533e34; name: FUN_00533e34
 */


void FUN_00533e34(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = 1L << ((param_3 & 0xffffffff) * 4 - 4 & 0x3f) | param_2;
  pcVar2 = (char *)(param_1 + 6);
  do {
    uVar3 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    uVar1 = uVar1 >> 4;
    pcVar2 = pcVar2 + -1;
    *pcVar2 = "0123456789abcdef"[uVar3];
  } while (uVar1 != 0);
  *param_1 = pcVar2;
  param_1[1] = (long)(param_1 + 6) - (long)pcVar2;
  return;
}


