/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016a1950; name: FUN_016a1950
 */


void FUN_016a1950(char *param_1,char *param_2)

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
    FUN_016a227c(pcVar2,param_2 + 8);
    return;
  }
  if (cVar1 == '\x02') {
    FUN_016a227c(param_1 + 8,param_2 + 8);
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


