/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edad60; name: FUN_01edad60
 */


undefined8 FUN_01edad60(PosixTime *param_1)

{
  CalendarAdditionalInfo aCStack_30 [24];
  undefined8 local_18;
  
  nn::time::ToCalendarTime((CalendarTime *)&local_18,aCStack_30,param_1);
  return local_18;
}


