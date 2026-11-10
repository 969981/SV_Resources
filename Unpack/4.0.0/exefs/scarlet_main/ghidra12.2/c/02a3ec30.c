/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3ec30; name: FUN_02a3ec30
 */


void FUN_02a3ec30(CalendarAdditionalInfo *param_1)

{
  undefined8 local_28;
  undefined8 local_8;
  
  local_8 = 0;
  nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_8);
  local_28 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  nn::time::ToCalendarTime((CalendarTime *)&local_28,param_1,(PosixTime *)&local_8);
  return;
}


