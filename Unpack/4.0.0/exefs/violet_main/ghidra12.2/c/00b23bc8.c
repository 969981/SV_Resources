/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b23bc8; name: FUN_00b23bc8
 */


undefined8 FUN_00b23bc8(char *param_1,char *param_2)

{
  size_t __n;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  pcVar2 = strstr(param_1,"\"dataNo\":\"");
  uVar4 = 0;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = pcVar2 + 10;
    pcVar3 = strchr(pcVar2,0x22);
    uVar4 = 0;
    if (pcVar3 != (char *)0x0) {
      uVar5 = (long)pcVar3 - (long)pcVar2;
      if ((uint)uVar5 < 6) {
        __n = 0;
        if ((uVar5 & 0xffffffff) < 7) {
          __n = 6 - (uVar5 & 0xffffffff);
        }
        memset(param_2 + (uVar5 & 0xffffffff),0,__n);
        memcpy(param_2,pcVar2,uVar5 & 0xffffffff);
        iVar1 = atoi(param_2);
        snprintf(param_2,6,"%02d/%02d",iVar1 / 100,iVar1 % 100);
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


