/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0168c2e0; name: FUN_0168c2e0
 */


void FUN_0168c2e0(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 local_28;
  
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
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    FUN_0168c5ac(param_1 + 8,param_2 + 8);
    return;
  }
  if (cVar1 == '\x01') {
    local_28 = 0;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    FUN_0168ceb0(&local_28);
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
    if (cVar1 != '\0') {
      return;
    }
    uVar2 = *(undefined8 *)(param_2 + 8);
  }
  *(undefined8 *)pcVar3 = uVar2;
  return;
}


