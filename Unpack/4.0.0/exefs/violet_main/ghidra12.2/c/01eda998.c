/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eda998; name: FUN_01eda998
 */


undefined8 FUN_01eda998(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char local_28 [8];
  
  pcVar3 = strstr(param_1,"\"serialcodeStatus\":\"");
  uVar5 = 0;
  if (pcVar3 != (char *)0x0) {
    pcVar3 = pcVar3 + 0x14;
    pcVar4 = strchr(pcVar3,0x22);
    uVar5 = 0;
    if (pcVar4 != (char *)0x0) {
      local_28[0] = '\0';
      local_28[1] = '\0';
      local_28[2] = '\0';
      local_28[3] = '\0';
      local_28[4] = '\0';
      local_28[5] = '\0';
      local_28[6] = '\0';
      local_28[7] = '\0';
      if ((uint)((long)pcVar4 - (long)pcVar3) < 8) {
        memcpy(local_28,pcVar3,(long)pcVar4 - (long)pcVar3 & 0xffffffff);
        iVar1 = atoi(local_28);
        uVar2 = FUN_01edaa1c(iVar1);
        *param_2 = uVar2;
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}


