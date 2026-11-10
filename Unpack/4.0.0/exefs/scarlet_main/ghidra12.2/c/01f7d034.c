/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7d034; name: FUN_01f7d034
 */


void FUN_01f7d034(long param_1)

{
  long *plVar1;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = 1;
  uStack_4 = 1;
  plVar1 = (long *)FUN_017dcd80();
  plVar1 = (long *)(**(code **)(*(long *)(*plVar1 + 0x30) + 0x30))();
  local_40 = 0xd0ae1f83d5073d77;
  local_38 = PTR_s_ResolutionWidth2D_047d8e58;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_40,&uStack_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  plVar1 = (long *)FUN_017dcd80();
  plVar1 = (long *)(**(code **)(*(long *)(*plVar1 + 0x30) + 0x30))();
  local_40 = 0x6b0411245f14fbe6;
  local_38 = PTR_s_ResolutionHeight2D_047d8e60;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  local_38 = (undefined *)0x1;
  local_30 = 0;
  local_50 = 1;
  uStack_48 = 0;
  local_40 = CONCAT44(local_8,uStack_4);
  local_58 = *(undefined4 *)(param_1 + 0x138);
  uStack_54 = *(undefined4 *)(param_1 + 0x13c);
  local_68[0] = 0;
  local_78[0] = 0;
  FUN_00d810b4(*(undefined8 *)(*(long *)(param_1 + 0x120) + 200),param_1 + 0x130,local_68,&local_40,
               param_1 + 0x128,local_78,&local_58,1);
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x120));
  return;
}


