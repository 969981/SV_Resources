/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0108f8f0; name: FUN_0108f8f0
 */


void FUN_0108f8f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_00d1a240(param_1,0x80018080);
  *param_1 = &PTR_LAB_045457c0;
  param_1[4] = &PTR_LAB_04545928;
  param_1[5] = &PTR_LAB_04545a50;
  param_1[6] = &PTR_LAB_04545aa8;
  param_1[7] = &PTR_LAB_04545ad0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)((long)param_1 + 0x12d) = *(undefined4 *)((long)param_2 + 0xf);
  *(undefined8 *)((long)param_1 + 0x11e) = uVar1;
  *(undefined8 *)((long)param_1 + 0x126) = uVar2;
  *(undefined1 *)((long)param_1 + 0x131) = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x2a,0,1);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xffffffffffffffff;
  FUN_0108f9e0(auStack_28);
  FUN_0108fd30(auStack_30);
  FUN_010901d4(auStack_38);
  FUN_0108fb88(auStack_40);
  FUN_01090380(auStack_48);
  FUN_0109052c(auStack_50);
  FUN_010906d8(auStack_58);
  FUN_01090884(auStack_60);
  FUN_01090a30(auStack_68);
  return;
}


