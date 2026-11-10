/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0228f388; name: FUN_0228f388
 */


void FUN_0228f388(undefined1 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [128];
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [128];
  
  pcVar1 = FUN_02294ec8;
  if (DAT_04843b88 == '\0') {
    pcVar1 = (code *)0x0;
  }
  FUN_02295104(auStack_160,param_2,pcVar1,0);
  local_b8 = 1;
  *param_1 = 1;
  local_c8 = PTR_DAT_047dde08 + 0x10;
  uStack_c0 = 0xffffffff;
  memcpy(auStack_b0,auStack_148,0x80);
  FUN_02295188(param_1 + 8,&local_c8);
  return;
}


