/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001da36c; name: FUN_001da36c
 */


undefined8 FUN_001da36c(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_001cb68c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_001cb57c(param_2,&LAB_001da45c);
    pcVar2 = (char *)*param_1;
    while (pcVar2 != (char *)0x0) {
      sVar3 = strlen(pcVar2);
      lVar4 = FUN_001ec2f8(sVar3 + 0x20);
      if (lVar4 == 0) {
        FUN_001cb68c(param_2,0);
        return 3;
      }
      pcVar2 = strcpy((char *)(lVar4 + 0x1a),(char *)*param_1);
      pcVar2 = strchr(pcVar2,0x3a);
      if (pcVar2 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar2 = '\0';
        lVar5 = strtol(pcVar2 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar5;
      }
      *(undefined2 *)(lVar4 + 0x18) = uVar1;
      FUN_001cb588(param_2,*(undefined8 *)(param_2 + 8),lVar4,lVar4);
      pcVar2 = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}


