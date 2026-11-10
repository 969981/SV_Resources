/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c10670; name: FUN_00c10670
 */


char * FUN_00c10670(float param_1,char *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  float fVar3;
  char *local_38;
  
  if (param_1 == INFINITY) {
    uVar2 = 0x666e69;
  }
  else if (param_1 == -INFINITY) {
    uVar2 = 0x666e692d;
    param_2[4] = '\0';
  }
  else {
    if (!NAN(param_1)) {
      snprintf(param_2,0x18,"%.*g",(double)param_1,6);
      piVar1 = __errno_location();
      *piVar1 = 0;
      fVar3 = strtof(param_2,&local_38);
      if ((((*param_2 == '\0') || (*local_38 != '\0')) ||
          (piVar1 = __errno_location(), fVar3 != param_1)) || (*piVar1 != 0)) {
        snprintf(param_2,0x18,"%.*g",(double)param_1,8);
      }
      FUN_00c10790(param_2);
      return param_2;
    }
    uVar2 = 0x6e616e;
  }
  *(undefined4 *)param_2 = uVar2;
  return param_2;
}


