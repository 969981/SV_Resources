/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d09f08; name: FUN_01d09f08
 */


void FUN_01d09f08(undefined8 param_1)

{
  uint uVar1;
  uchar param3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  local_38 = 0;
  nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_38);
  local_48 = local_38;
  local_8 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  nn::time::ToCalendarTime
            ((CalendarTime *)&local_8,(CalendarAdditionalInfo *)&local_38,(PosixTime *)&local_48);
  uVar1 = -uStack_28._4_4_;
  if (-1 < uStack_28) {
    uVar1 = uStack_28._4_4_;
  }
  param3 = '+';
  if (-1 >= uStack_28) {
    param3 = '-';
  }
  local_48 = 0;
  uStack_40 = 0;
  snprintf((char *)&local_48,0x10,"%c%02d%02d",param3,uVar1 / 0xe10,(uVar1 % 0xe10) / 0x3c);
  FUN_01f7b518(param_1,&local_48);
  return;
}


