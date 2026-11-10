/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


