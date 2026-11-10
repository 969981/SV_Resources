/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0a0ec; name: FUN_01d0a0ec
 */


void FUN_01d0a0ec(int *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_4070;
  undefined8 local_4068;
  undefined8 uStack_4060;
  undefined8 local_4058;
  undefined8 uStack_4050;
  undefined4 local_4048;
  TimeZoneRule aTStack_4040 [16384];
  undefined8 local_40;
  undefined8 uStack_38;
  int local_14;
  
  local_40 = 0;
  uStack_38 = 0;
  memset(aTStack_4040,0,0x4000);
  local_4048 = 0;
  local_4058 = 0;
  uStack_4050 = 0;
  local_4068 = 0;
  uStack_4060 = 0;
  nn::time::GetDeviceLocationName((LocationName *)&local_4068);
  nn::time::LoadTimeZoneRule(aTStack_4040,(LocationName *)&local_4068);
  local_14 = 0;
  local_4070 = FUN_01f7b660(param_2);
  nn::time::ToPosixTime(&local_14,(PosixTime *)&local_40,2,(CalendarTime *)&local_4070,aTStack_4040)
  ;
  uVar1 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_40);
  *param_1 = (int)(short)uVar1;
  param_1[1] = ((int)uVar1 << 8) >> 0x18;
  param_1[2] = (int)uVar1 >> 0x18;
  param_1[3] = (int)((ulong)uVar1 >> 8) >> 0x18;
  param_1[4] = (int)((ulong)uVar1 >> 0x10) >> 0x18;
  param_1[5] = (int)((ulong)uVar1 >> 0x18) >> 0x18;
  return;
}


