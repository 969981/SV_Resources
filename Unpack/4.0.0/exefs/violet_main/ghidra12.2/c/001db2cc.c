/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001db2cc; name: FUN_001db2cc
 */


undefined8 FUN_001db2cc(undefined8 param_1,char *param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte abStack_a0 [128];
  
  if ((param_3 & 0xffffffffffffff01) == 1) {
    param_3 = param_3 - 1;
    uVar2 = FUN_001db18c(param_1,abStack_a0,param_3 >> 1);
    if ((int)uVar2 == 0) {
      if (param_3 != 0) {
        pbVar3 = abStack_a0;
        pcVar4 = param_2;
        do {
          cVar1 = "0123456789abcdef"[(ulong)*pbVar3 & 0xf];
          param_2 = pcVar4 + 2;
          *pcVar4 = "0123456789abcdef"[*pbVar3 >> 4];
          pcVar4[1] = cVar1;
          param_3 = param_3 - 2;
          pbVar3 = pbVar3 + 1;
          pcVar4 = param_2;
        } while (param_3 != 0);
      }
      uVar2 = 0;
      *param_2 = '\0';
    }
  }
  else {
    uVar2 = 0x2b;
  }
  return uVar2;
}


