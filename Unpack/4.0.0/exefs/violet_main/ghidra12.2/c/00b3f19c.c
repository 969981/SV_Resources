/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b3f19c; name: FUN_00b3f19c
 */


void FUN_00b3f19c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char local_540 [8];
  undefined2 local_538;
  undefined1 auStack_536 [118];
  char local_4c0 [1152];
  
  memset(local_4c0,0,0x480);
  memset(auStack_536,0,0x47);
  local_538 = 0x65;
  local_540[0] = s_NbrDouble_03bf64ff[0];
  local_540[1] = s_NbrDouble_03bf64ff[1];
  local_540[2] = s_NbrDouble_03bf64ff[2];
  local_540[3] = s_NbrDouble_03bf64ff[3];
  local_540[4] = s_NbrDouble_03bf64ff[4];
  local_540[5] = s_NbrDouble_03bf64ff[5];
  local_540[6] = s_NbrDouble_03bf64ff[6];
  local_540[7] = s_NbrDouble_03bf64ff[7];
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    FUN_01986a1c(local_540,param_3);
  }
  FUN_00b41c8c(param_1,param_2,local_540,2);
  return;
}


