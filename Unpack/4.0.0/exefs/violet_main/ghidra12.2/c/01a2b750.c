/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a2b750; name: FUN_01a2b750
 */


void FUN_01a2b750(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined8 local_50 [2];
  undefined8 auStack_40 [3];
  float local_28;
  float fStack_24;
  undefined8 local_20 [2];
  
  fStack_24 = (float)param_2;
  local_28 = (float)param_3;
  puVar1 = &LAB_008f4f38;
  if (DAT_04802ac0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50[0] = param_5;
  auStack_40[0] = param_4;
  local_20[0] = param_1;
  FUN_01a2b7b0(param_6,puVar1,0,local_20,&fStack_24,&local_28,auStack_40,local_50);
  return;
}


