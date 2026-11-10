/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1261c; name: FUN_01e1261c
 */


uint FUN_01e1261c(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 == 2) {
    pcStack_28 = "0501_damage02";
    local_30 = 0xa82f913d7e7f4625;
  }
  else {
    if (param_2 != 1) {
      uVar1 = 0;
      goto LAB_01e12680;
    }
    pcStack_28 = "0500_damage01";
    local_30 = 0x14a2eca1835715a5;
  }
  local_20 = 0xd;
  uStack_18 = 0;
  uVar1 = FUN_00c738f0(param_1,&local_30);
LAB_01e12680:
  return uVar1 & 1;
}


