/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038cd10; name: FUN_0038cd10
 */


void FUN_0038cd10(undefined8 param_1,time_t param_2,undefined8 param_3)

{
  tm *__tp;
  undefined *local_f0;
  undefined8 uStack_e8;
  char *local_c0;
  size_t local_b8;
  char *local_90;
  size_t local_88;
  char local_60 [3];
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  char local_58;
  char local_57;
  char acStack_54 [36];
  time_t local_30;
  undefined8 local_28;
  
  local_30 = param_2;
  local_28 = param_3;
  __tp = localtime(&local_30);
  strftime(acStack_54,0x23,"%Y-%m-%dT%H:%M:%S",__tp);
  snprintf(local_60,0xb,".%09d",(int)local_28);
  if ((((((local_59 == '0') && (local_58 == '0')) && (local_57 == '0')) &&
       ((local_59 = '\0', local_5c == '0' && (local_5b == '0')))) &&
      ((local_5a == '0' && ((local_5c = '\0', local_60[1] == '0' && (local_60[2] == '0')))))) &&
     (local_5d == '0')) {
    local_60[0] = '\0';
    local_60[1] = '\0';
  }
  local_90 = acStack_54;
  local_88 = strlen(acStack_54);
  local_c0 = local_60;
  local_b8 = strlen(local_60);
  local_f0 = &DAT_03bfac03;
  uStack_e8 = 1;
  FUN_00395a70(param_1,&local_90,&local_c0,&local_f0);
  return;
}


