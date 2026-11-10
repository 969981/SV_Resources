/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01760e68; name: FUN_01760e68
 */


void FUN_01760e68(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar2 = (char *)FUN_01760ebc();
  *pcVar2 = '\0';
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  pcVar2[0xc] = '\0';
  pcVar2[0xd] = '\0';
  pcVar2[0xe] = '\0';
  pcVar2[0xf] = '\0';
  cVar1 = *param_2;
  *pcVar2 = cVar1;
  if (cVar1 == '\0') {
    uVar3 = *(undefined8 *)(param_2 + 8);
  }
  else {
    if (cVar1 != '\x01') {
      return;
    }
    pcVar2[8] = '\0';
    pcVar2[9] = '\0';
    pcVar2[10] = '\0';
    pcVar2[0xb] = '\0';
    pcVar2[0xc] = '\0';
    pcVar2[0xd] = '\0';
    pcVar2[0xe] = '\0';
    pcVar2[0xf] = '\0';
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
  }
  *(undefined8 *)(pcVar2 + 8) = uVar3;
  return;
}


