/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a02d0; name: FUN_003a02d0
 */


undefined8 FUN_003a02d0(int *param_1,int param_2,time_t *param_3,undefined4 *param_4)

{
  time_t tVar1;
  tm *ptVar2;
  tm tStack_90;
  tm local_58;
  
  local_58.tm_year = *param_1 + -0x76c;
  local_58.tm_mon = (char)param_1[2] + -1;
  local_58.tm_hour = (int)*(char *)((long)param_1 + 10);
  local_58.tm_mday = (int)*(char *)((long)param_1 + 9);
  local_58.tm_sec = (int)(char)param_1[3];
  local_58.tm_min = (int)*(char *)((long)param_1 + 0xb);
  local_58.tm_isdst = param_2;
  tVar1 = mktime(&local_58);
  *param_3 = tVar1;
  if ((tVar1 == -1) &&
     ((((ptVar2 = localtime_r(param_3,&tStack_90), ptVar2 == (tm *)0x0 ||
        (ptVar2->tm_year != local_58.tm_year)) || (ptVar2->tm_mon != local_58.tm_mon)) ||
      (((ptVar2->tm_mday != local_58.tm_mday || (ptVar2->tm_hour != local_58.tm_hour)) ||
       ((ptVar2->tm_min != local_58.tm_min || (ptVar2->tm_sec != local_58.tm_sec)))))))) {
    return 0;
  }
  *param_4 = (undefined4)local_58.tm_gmtoff;
  return 1;
}


