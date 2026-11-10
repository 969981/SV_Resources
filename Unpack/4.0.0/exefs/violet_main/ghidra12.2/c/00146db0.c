/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00146db0; name: FUN_00146db0
 */


void FUN_00146db0(undefined8 param_1,undefined8 param_2,char *param_3,char *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  long local_470;
  ulong local_468;
  ulong local_460;
  
  pcVar2 = (char *)FUN_01b2cd10(param_1,&DAT_03c8f584,param_3,&DAT_03c74bfd);
  pcVar2 = getenv(pcVar2);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = getenv(param_3), pcVar2 == (char *)0x0)) {
LAB_00146e44:
    pcVar2 = param_4;
  }
  else {
    FUN_00c5d9a0(param_1,0xfff0b9d8,"LUA_NOENV");
    iVar1 = FUN_00cc4dc0(param_1,0xffffffff);
    FUN_00c5db00(param_1,0xfffffffe);
    if (iVar1 != 0) goto LAB_00146e44;
    pcVar3 = strstr(pcVar2,";;");
    if (pcVar3 != (char *)0x0) {
      sVar4 = strlen(pcVar2);
      FUN_00123800(param_1,&local_470);
      if (pcVar2 < pcVar3) {
        FUN_00124670(&local_470,pcVar2,(long)pcVar3 - (long)pcVar2);
        if (local_468 <= local_460) {
          FUN_00123880(&local_470,1);
        }
        *(undefined1 *)(local_470 + local_460) = 0x3b;
        local_460 = local_460 + 1;
      }
      FUN_00123820(&local_470,param_4);
      if (pcVar3 < pcVar2 + (sVar4 - 2)) {
        if (local_468 <= local_460) {
          FUN_00123880(&local_470,1);
        }
        *(undefined1 *)(local_470 + local_460) = 0x3b;
        local_460 = local_460 + 1;
        FUN_00124670(&local_470,pcVar3 + 2,(long)(pcVar2 + (sVar4 - 2)) - (long)pcVar3);
      }
      FUN_00123910(&local_470);
      goto LAB_00146f30;
    }
  }
  FUN_00c85bd0(param_1,pcVar2);
LAB_00146f30:
  FUN_00efafb0(param_1,0xfffffffd,param_2);
  FUN_00c5db00(param_1,0xfffffffe);
  return;
}


