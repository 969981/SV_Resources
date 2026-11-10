/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0212e6b0; name: FUN_0212e6b0
 */


void FUN_0212e6b0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  uVar2 = FUN_0212ec54();
  local_60 = 0xb93c9cd9ccf45ec4;
  puStack_58 = &DAT_03c1216f;
  local_50 = 4;
  local_48 = (long *)0x0;
  uVar3 = FUN_01180d38(param_1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x40da82ec466e99f7;
  uVar5 = 0;
  if ((uVar2 & 0xff) != 0) {
    uVar5 = (int)(uVar2 >> 0x20);
  }
  puVar4 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_60);
  puVar1 = PTR_LAB_047dcdf0;
  *(undefined4 *)(puVar4 + 2) = uVar5;
  *puVar4 = puVar1;
  uVar5 = 0;
  if ((uVar3 & 0xff) != 0) {
    uVar5 = (int)(uVar3 >> 0x20);
  }
  local_60 = 0x8e9331ea9e14aab;
  puVar4 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_60);
  *(undefined4 *)(puVar4 + 2) = uVar5;
  *puVar4 = puVar1;
  return;
}


