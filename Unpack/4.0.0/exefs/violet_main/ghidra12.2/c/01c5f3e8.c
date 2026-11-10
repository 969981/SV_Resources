/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c5f3e8; name: FUN_01c5f3e8
 */


void FUN_01c5f3e8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  undefined4 local_4;
  
  uVar1 = 0xa0;
  if (DAT_04815c58 == '\0') {
    uVar1 = 0;
  }
  local_4 = param_3;
  FUN_01c5fe98(auStack_68,param_2,uVar1,DAT_04815c60,&local_4);
  FUN_01c5ff40(param_1,auStack_68);
  FUN_00d8e444(auStack_68);
  return;
}


