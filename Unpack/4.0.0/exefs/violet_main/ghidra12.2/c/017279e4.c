/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017279e4; name: FUN_017279e4
 */


void FUN_017279e4(double param_1,double param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  float local_18;
  float local_14;
  
  local_14 = (float)param_1;
  local_18 = (float)param_2;
  puVar1 = &LAB_02ba5d0c;
  if (DAT_04859188 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01727a34(param_3,puVar1,0,&local_14,&local_18);
  return;
}


