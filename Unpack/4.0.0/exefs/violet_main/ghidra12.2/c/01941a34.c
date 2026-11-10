/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01941a34; name: FUN_01941a34
 */


void FUN_01941a34(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 local_134 [4];
  undefined1 auStack_130 [136];
  undefined1 auStack_a8 [136];
  
  puVar1 = PTR_LAB_047d78d0;
  if (DAT_0482f090 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_134[0] = param_3;
  FUN_01941aac(auStack_130,param_2,puVar1,0,local_134);
  *param_1 = 1;
  memcpy(auStack_a8,auStack_130,0x88);
  FUN_01941d88(param_1 + 8,auStack_a8);
  return;
}


