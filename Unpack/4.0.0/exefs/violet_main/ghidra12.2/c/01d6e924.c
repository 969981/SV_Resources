/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d6e924; name: FUN_01d6e924
 */


void FUN_01d6e924(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_90 [2];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = PTR_LAB_047d7cf8;
  if (DAT_048321c8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_90[0] = param_2;
  FUN_01d70c3c(auStack_80,param_3,puVar1,0,local_90);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_01d70ca0(param_1 + 8,auStack_50);
  return;
}


