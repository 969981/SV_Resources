/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018b9068; name: FUN_018b9068
 */


void FUN_018b9068(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  *param_1 = '\0';
  pcVar3 = param_1 + 8;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\x01') {
    FUN_018b90f0(pcVar3);
    uVar2 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
  }
  else {
    if ((cVar1 == '\x03') || (cVar1 == '\x02')) {
      FUN_018b961c(param_1 + 8,param_2 + 8);
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)pcVar3 = uVar2;
  return;
}


