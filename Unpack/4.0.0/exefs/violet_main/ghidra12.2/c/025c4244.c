/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025c4244; name: FUN_025c4244
 */


uint FUN_025c4244(undefined8 param_1,double param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  float local_24;
  undefined8 local_20 [2];
  
  local_24 = (float)param_2;
  pcVar1 = FUN_025cda28;
  if (DAT_048537a8 == '\0') {
    pcVar1 = (code *)0x0;
  }
  local_20[0] = param_1;
  uVar2 = FUN_025cdca4(param_3,pcVar1,0,local_20,&local_24);
  return uVar2 & 1;
}


