/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197bf80; name: FUN_0197bf80
 */


void FUN_0197bf80(void)

{
  long *plVar1;
  uint uVar2;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  ulong local_30;
  long *local_28;
  uint local_8;
  uint uStack_4;
  
  local_8 = 1;
  uStack_4 = 1;
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  local_40 = 0xd0ae1f83d5073d77;
  local_38 = PTR_s_ResolutionWidth2D_047d8e58;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_40,&uStack_4);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  plVar1 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  local_40 = 0x6b0411245f14fbe6;
  local_38 = PTR_s_ResolutionHeight2D_047d8e60;
  local_30 = 0x1f;
  local_28 = (long *)0x0;
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_40,&local_8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  uStack_4 = (uint)((float)(int)((float)(int)uStack_4 * 0.03125) * 32.0);
  local_8 = (uint)((float)(int)((float)(int)local_8 * 0.03125) * 32.0);
  if ((int)DAT_04835be8 < 1) {
    uVar2 = 1;
LAB_0197c08c:
    DAT_04835be8 = uVar2;
  }
  else {
    uVar2 = uStack_4;
    if ((int)uStack_4 <= (int)DAT_04835be8) goto LAB_0197c08c;
  }
  if ((int)DAT_04835bec < 1) {
    uVar2 = 1;
  }
  else {
    uVar2 = local_8;
    if ((int)DAT_04835bec < (int)local_8) goto LAB_0197c0bc;
  }
  DAT_04835bec = uVar2;
LAB_0197c0bc:
  if ((DAT_04835be8 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","UpdateCapture",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/screen_capture.cpp"
               ,0x39f,&DAT_03c8b19f);
  }
  if ((DAT_04835bec & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","UpdateCapture",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/screen_capture.cpp"
               ,0x3a4,&DAT_03ca60bb);
  }
  local_50 = 1;
  uStack_48 = 0;
  local_38 = (undefined *)CONCAT44(DAT_04835bf0,1);
  local_40 = CONCAT44(DAT_04835bec,DAT_04835be8);
  local_30 = (ulong)DAT_04835bf4;
  local_68[0] = 0;
  local_78[0] = 0;
  local_58 = DAT_04835be8;
  uStack_54 = DAT_04835bec;
  FUN_00d810b4(*(undefined8 *)(DAT_04835bc8 + 200),&DAT_04835bd8,local_68,&local_40,&DAT_04835bd0,
               local_78,&local_58,1);
  FUN_00c4cf3c(DAT_04835bc8);
  return;
}


