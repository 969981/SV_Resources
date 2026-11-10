/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212e7b8; name: FUN_0212e7b8
 */


void FUN_0212e7b8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x12d7b82ec399ec60;
  pcStack_48 = "EasingType";
  local_40 = 10;
  local_38 = (long *)0x0;
  uVar1 = FUN_01470908(param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x12d7b82ec399ec60;
  uVar3 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar3 = (undefined4)(uVar1 >> 0x20);
  }
  puVar2 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_50);
  *(undefined4 *)(puVar2 + 2) = uVar3;
  *puVar2 = &LAB_02b23210;
  return;
}


