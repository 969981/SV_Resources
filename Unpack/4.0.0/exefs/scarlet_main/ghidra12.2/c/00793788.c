/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00793788; name: FUN_00793788
 */


ulong FUN_00793788(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  short local_4080;
  char local_407e;
  char local_407d;
  char local_407c;
  char local_407b;
  char local_407a;
  TimeZoneRule aTStack_4078 [16384];
  LocationName aLStack_78 [40];
  PosixTime aPStack_50 [8];
  tm local_48;
  
  FUN_007935cc(param_1 + 0x10);
  uVar3 = nn::time::IsInitialized();
  if ((uVar3 & 1) != 0) {
    nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_50);
    nn::time::GetDeviceLocationName(aLStack_78);
    iVar1 = nn::time::LoadTimeZoneRule(aTStack_4078,aLStack_78);
    if ((iVar1 == 0) &&
       (iVar1 = nn::time::ToCalendarTime
                          ((CalendarTime *)&local_4080,(CalendarAdditionalInfo *)0x0,aPStack_50),
       iVar1 == 0)) {
      local_48.tm_sec = (int)local_407a;
      local_48.tm_min = (int)local_407b;
      local_48.tm_hour = (int)local_407c;
      local_48.tm_mday = (int)local_407d;
      local_48.tm_mon = local_407e + -1;
      local_48.tm_year = local_4080 + -0x76c;
      local_48.tm_wday = 0;
      local_48.tm_yday = 0;
      local_48.tm_isdst = 0;
      if (&local_48 != (tm *)0x0) {
        uVar3 = strftime((char *)aTStack_4078,0x80,"%Y/%m/%d %H:%M:%S",&local_48);
        return uVar3;
      }
    }
  }
  uVar2 = sprintf((char *)aTStack_4078,"unknown time");
  return (ulong)uVar2;
}


