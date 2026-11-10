/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a03cb4; name: FUN_02a03cb4
 */


void FUN_02a03cb4(long *param_1,int *param_2)

{
  time_t tVar1;
  tm local_58;
  
  *param_1 = 0;
  local_58.tm_gmtoff = 0;
  local_58.tm_zone = (char *)0x0;
  local_58.tm_wday = 0;
  local_58.tm_yday = 0;
  local_58.tm_isdst = 0;
  local_58._36_4_ = 0;
  local_58.tm_year = *param_2 + -0x76c;
  local_58.tm_mon = param_2[1] + -1;
  local_58.tm_mday = param_2[2];
  local_58.tm_hour = param_2[3];
  local_58.tm_min = param_2[4];
  local_58.tm_sec = param_2[5];
  tVar1 = mktime(&local_58);
  *param_1 = *param_1 + tVar1 * 1000000000;
  return;
}


