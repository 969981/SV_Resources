/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e675fc; name: FUN_00e675fc
 */


undefined8 FUN_00e675fc(void)

{
  undefined8 local_50 [2];
  int iStack_3c;
  CalendarAdditionalInfo aCStack_38 [24];
  CalendarTime aCStack_20 [8];
  PosixTime aPStack_18 [8];
  
  nn::time::StandardUserSystemClock::GetCurrentTime(aPStack_18);
  nn::time::ToCalendarTime(aCStack_20,aCStack_38,aPStack_18);
  nn::time::ToPosixTime(&iStack_3c,(PosixTime *)local_50,2,aCStack_20,(TimeZoneRule *)&DAT_048660c0)
  ;
  return local_50[0];
}


