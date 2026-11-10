/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ef220; name: FUN_002ef220
 */


void FUN_002ef220(undefined8 *param_1)

{
  char *__s;
  char *local_c8;
  undefined8 uStack_c0;
  undefined *local_98;
  undefined8 uStack_90;
  char *local_68;
  size_t local_60;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  __s = (char *)FUN_0038c920(&DAT_03c46eaa);
  if (__s == (char *)0x0) {
    *(undefined2 *)param_1 = 0;
    return;
  }
  local_68 = __s;
  local_60 = strlen(__s);
  local_98 = &DAT_03bdfb3b;
  uStack_90 = 1;
  local_c8 = ".config/gcloud/application_default_credentials.json";
  uStack_c0 = 0x33;
  FUN_00395a70(&local_38,&local_68,&local_98,&local_c8);
                    /* try { // try from 002ef284 to 002ef28b has its CatchHandler @ 002ef2bc */
  free(__s);
  param_1[2] = local_28;
  param_1[1] = uStack_30;
  *param_1 = local_38;
  return;
}


