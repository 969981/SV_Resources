/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032f710; name: FUN_0032f710
 */


undefined8 FUN_0032f710(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)*param_1;
  iVar1 = strcmp("unix",pcVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = strcmp("ipv4",pcVar4);
  if (iVar1 == 0) {
    pcVar3 = (char *)param_1[2];
    pcVar4 = pcVar3 + 1;
    if (*pcVar3 != '/') {
      pcVar4 = pcVar3;
    }
    uVar2 = FUN_0032f240(pcVar4,param_2,1);
    return uVar2;
  }
  iVar1 = strcmp("ipv6",pcVar4);
  if (iVar1 != 0) {
    return 0;
  }
  pcVar3 = (char *)param_1[2];
  pcVar4 = pcVar3 + 1;
  if (*pcVar3 != '/') {
    pcVar4 = pcVar3;
  }
  uVar2 = FUN_0032f440(pcVar4,param_2,1);
  return uVar2;
}


