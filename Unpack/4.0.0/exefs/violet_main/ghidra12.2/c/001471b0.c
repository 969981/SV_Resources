/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001471b0; name: FUN_001471b0
 */


void FUN_001471b0(undefined8 param_1,char *param_2,undefined8 param_3,byte *param_4,
                 undefined8 param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *local_880;
  ulong local_878;
  ulong local_870;
  undefined1 auStack_460 [1056];
  
  if ((*param_4 != 0) && (pcVar2 = strchr(param_2,(uint)*param_4), pcVar2 != (char *)0x0)) {
    param_2 = (char *)FUN_00125020(param_1,param_2,param_4,param_5);
  }
  FUN_00123800(param_1,&local_880);
  FUN_00124ef0(&local_880,param_3,&DAT_03c1ceec,param_2);
  if (local_878 <= local_870) {
    FUN_00123880(&local_880,1);
  }
  lVar1 = local_870 + 1;
  local_880[local_870] = '\0';
  pcVar2 = local_880 + local_870;
  local_870 = lVar1;
  if (local_880 != pcVar2) {
    pcVar3 = local_880;
    if (*local_880 == '\0') {
      pcVar3 = local_880 + 1;
      *local_880 = ';';
    }
    while( true ) {
      pcVar4 = strchr(pcVar3,0x3b);
      pcVar3 = pcVar2;
      if (pcVar4 != (char *)0x0) {
        pcVar3 = pcVar4;
      }
      *pcVar3 = '\0';
      if (pcVar3 == pcVar2) break;
      *pcVar3 = ';';
      pcVar3 = pcVar3 + 1;
    }
  }
  FUN_00123910(&local_880);
  uVar5 = FUN_00c646d0(param_1,0xffffffff,0);
  FUN_00123800(param_1,auStack_460);
  FUN_00123820(auStack_460,"no file \'");
  FUN_00124ef0(auStack_460,uVar5,&DAT_03c2b013,"\'\n\tno file \'");
  FUN_00123820(auStack_460,&DAT_03c24414);
  FUN_00123910(auStack_460);
  return;
}


