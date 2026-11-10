/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ebee64; name: FUN_01ebee64
 */


void FUN_01ebee64(char *param_1,void *param_2)

{
  char *pcVar1;
  
  if (*param_1 == '\0') {
    memcpy(param_1 + 0x10,param_2,0x28);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)((long)param_2 + 0x28);
    *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)((long)param_2 + 0x2a);
    param_1[0x3c] = *(char *)((long)param_2 + 0x2c);
    param_1[0x3d] = *(char *)((long)param_2 + 0x2d);
    param_1[0x3e] = *(char *)((long)param_2 + 0x2e);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)param_2 + 0x38);
    memcpy(param_1 + 0x50,(void *)((long)param_2 + 0x40),0x32);
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    pcVar1 = param_1 + 0x88;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    FUN_00ca1a48(pcVar1,(long)param_2 + 0x78);
    *param_1 = '\x01';
    return;
  }
  memcpy(param_1 + 0x10,param_2,0x72);
  FUN_00ca1a48(param_1 + 0x88,(long)param_2 + 0x78);
  return;
}


