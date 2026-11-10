/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00533750; name: FUN_00533750
 */


char * FUN_00533750(float param_1,char *param_2)

{
  int *piVar1;
  float fVar2;
  char *local_28;
  
  if (param_1 == INFINITY) {
    builtin_strncpy(param_2,"inf",4);
  }
  else if (param_1 == -INFINITY) {
    builtin_strncpy(param_2,"-inf",5);
  }
  else if (NAN(param_1)) {
    builtin_strncpy(param_2,"nan",4);
  }
  else {
    snprintf(param_2,0x18,"%.*g",(double)param_1,6);
    piVar1 = __errno_location();
    *piVar1 = 0;
    fVar2 = strtof(param_2,&local_28);
    if ((((*param_2 == '\0') || (*local_28 != '\0')) ||
        (piVar1 = __errno_location(), fVar2 != param_1)) || (*piVar1 != 0)) {
      snprintf(param_2,0x18,"%.*g",(double)param_1,9);
    }
    FUN_00533860(param_2);
  }
  return param_2;
}


