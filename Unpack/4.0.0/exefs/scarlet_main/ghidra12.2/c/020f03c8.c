/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f03c8; name: FUN_020f03c8
 */


ulong FUN_020f03c8(void)

{
  int iVar1;
  ulong local_48 [3];
  char local_30 [8];
  PosixTime aPStack_28 [8];
  undefined8 local_8;
  
  FUN_01ecce00(local_30);
  local_8 = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[0] = 0;
  iVar1 = nn::time::ToCalendarTime
                    ((CalendarTime *)&local_8,(CalendarAdditionalInfo *)local_48,aPStack_28);
  return (ulong)(iVar1 == 0) | local_48[0] & 0xffffffff00000000;
}


