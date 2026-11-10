/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01853520; name: FUN_01853520
 */


void FUN_01853520(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  *param_1 = '\0';
  pcVar2 = param_1 + 8;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\x03') {
    FUN_01854020(pcVar2,param_2 + 8);
    return;
  }
  if (cVar1 == '\x02') {
    FUN_01854020(param_1 + 8,param_2 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2[4] = '\0';
    pcVar2[5] = '\0';
    pcVar2[6] = '\0';
    pcVar2[7] = '\0';
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
  else {
    if (cVar1 != '\0') {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)pcVar2 = uVar3;
  return;
}


