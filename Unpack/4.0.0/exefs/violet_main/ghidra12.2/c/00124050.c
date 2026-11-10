/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00124050; name: FUN_00124050
 */


char * FUN_00124050(undefined8 param_1,undefined4 param_2,char *param_3,size_t *param_4)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00d34290();
  if (iVar1 < 1) {
    if (param_4 != (size_t *)0x0) {
      if (param_3 == (char *)0x0) {
        *param_4 = 0;
      }
      else {
        sVar2 = strlen(param_3);
        *param_4 = sVar2;
      }
    }
  }
  else {
    param_3 = (char *)FUN_00c646d0(param_1,param_2,param_4);
    if (param_3 == (char *)0x0) {
      uVar3 = FUN_01b2ccf0(param_1,4);
      FUN_00123c80(param_1,param_2,uVar3);
    }
  }
  return param_3;
}


