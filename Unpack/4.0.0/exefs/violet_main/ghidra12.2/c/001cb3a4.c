/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cb3a4; name: FUN_001cb3a4
 */


char * FUN_001cb3a4(int param_1,undefined1 *param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  int *piVar2;
  int iVar3;
  char local_30 [16];
  
  if (param_1 == 2) {
    local_30[0] = '\0';
    FUN_001ce394(local_30,0x10,"%d.%d.%d.%d",*param_2,param_2[1],param_2[2],param_2[3]);
    sVar1 = strlen(local_30);
    if ((sVar1 != 0) && (sVar1 < param_4)) {
      strcpy(param_3,local_30);
      return param_3;
    }
    piVar2 = __errno_location();
    iVar3 = 0x1c;
  }
  else {
    piVar2 = __errno_location();
    iVar3 = 0x61;
  }
  *piVar2 = iVar3;
  return (char *)0x0;
}


