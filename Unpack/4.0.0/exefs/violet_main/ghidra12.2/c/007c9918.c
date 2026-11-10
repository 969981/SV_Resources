/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c9918; name: FUN_007c9918
 */


void FUN_007c9918(char *param_1,byte *param_2,ulong param_3,uint param_4)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  ulong uVar6;
  
  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  if ((param_4 & 1) == 0) {
    pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  uVar3 = (param_3 / 3) * 3;
  if (uVar3 != 0) {
    uVar6 = 0;
    pcVar4 = param_1;
    do {
      pbVar1 = param_2 + uVar6;
      uVar6 = uVar6 + 3;
      *pcVar4 = pcVar2[*pbVar1 >> 2];
      pcVar4[1] = pcVar2[((ulong)*pbVar1 & 3) << 4 | (ulong)(pbVar1[1] >> 4)];
      param_1 = pcVar4 + 4;
      pcVar4[2] = pcVar2[((ulong)pbVar1[1] & 0xf) << 2 | (ulong)(pbVar1[2] >> 6)];
      pcVar4[3] = pcVar2[(ulong)pbVar1[2] & 0x3f];
      pcVar4 = param_1;
    } while (uVar6 < uVar3);
    param_2 = param_2 + uVar6;
  }
  if (param_3 % 3 == 1) {
    *param_1 = pcVar2[*param_2 >> 2];
    param_1[1] = pcVar2[((ulong)*param_2 & 3) * 0x10];
    cVar5 = '=';
  }
  else {
    if (param_3 % 3 != 2) {
      return;
    }
    *param_1 = pcVar2[*param_2 >> 2];
    param_1[1] = pcVar2[((ulong)*param_2 & 3) << 4 | (ulong)(param_2[1] >> 4)];
    cVar5 = pcVar2[((ulong)param_2[1] & 0xf) * 4];
  }
  param_1[2] = cVar5;
  param_1[3] = '=';
  return;
}


