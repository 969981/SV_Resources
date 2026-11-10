/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a1858; name: FUN_015a1858
 */


void FUN_015a1858(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *local_28;
  
  FUN_00d1a240(param_1,0x80050000);
  *param_1 = &PTR_FUN_04562748;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[4] = &PTR_LAB_04562898;
  param_1[5] = &DAT_045629c0;
  param_1[6] = &PTR_LAB_04562a18;
  param_1[7] = &PTR_LAB_04562a40;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  FUN_00ca0ae4(param_1 + 0x25,param_2);
  memset(param_1 + 0x27,0,0x80);
  uVar2 = *(undefined2 *)(param_2 + 0x18);
  param_1[0x37] = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x38) = uVar2;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[0x3b] = *(undefined8 *)(param_2 + 0x30);
  param_1[0x39] = uVar6;
  param_1[0x3a] = uVar1;
  param_1[0x3c] = *(undefined8 *)(param_2 + 0x38);
  param_1[0x3d] = *(undefined8 *)(param_2 + 0x40);
  param_1[0x3e] = *(undefined8 *)(param_2 + 0x48);
  param_1[0x3f] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x40] = *(undefined8 *)(param_2 + 0x58);
  param_1[0x41] = *(undefined8 *)(param_2 + 0x60);
  FUN_015a1a5c(param_1 + 0x42,param_2 + 0x70);
  FUN_015a1a5c(param_1 + 0xf4,param_2 + 0x70);
  param_1[0x1a8] = 0x200000001;
  param_1[0x1a9] = 0x3d23d70a3e23d70a;
  param_1[0x1a7] = 0;
  param_1[0x1a6] = 0;
  *(undefined4 *)(param_1 + 0x1aa) = 0x3c23d70a;
  uVar3 = FUN_01728cf0(1,6);
  *(undefined4 *)((long)param_1 + 0xd54) = uVar3;
  param_1[0x1ac] = "CameraInfluence";
  param_1[0x1ab] = 0x8a442895aff72141;
  param_1[0x1b1] = 0;
  param_1[0x1ad] = 0xf;
  param_1[0x1ae] = 0x9f708d66d453f25;
  param_1[0x1b0] = 0xf;
  param_1[0x1af] = "IgnoreCollision";
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b8] = 0xffffffffffffffff;
  param_1[0x1b9] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x1ba) = 0;
  *(undefined1 *)(param_1 + 0x1bb) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  memset((void *)((long)param_1 + 0xde4),0,0x58);
  local_28 = param_1;
  plVar4 = (long *)FUN_015a1cd0(param_1[1],&local_28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  plVar5 = (long *)param_1[0x1b7];
  param_1[0x1b7] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x60))();
  }
  param_1[0x1b7] = plVar4;
  return;
}


