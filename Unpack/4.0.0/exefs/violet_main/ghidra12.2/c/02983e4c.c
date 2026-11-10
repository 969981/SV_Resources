/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983e4c; name: FUN_02983e4c
 */


void FUN_02983e4c(long param_1,undefined4 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined4 local_70;
  byte local_6c;
  undefined1 auStack_68 [40];
  undefined1 auStack_28 [8];
  
  local_70 = 0;
  local_6c = 0;
  FUN_01246154(auStack_68);
  local_70 = param_2;
  FUN_0297eca8(auStack_68,param_3);
  local_6c = param_4 & 1;
  uVar1 = FUN_01907950(*(undefined8 *)(param_1 + 0x78));
  FUN_0124aab0(uVar1,auStack_28,&local_70);
  return;
}


