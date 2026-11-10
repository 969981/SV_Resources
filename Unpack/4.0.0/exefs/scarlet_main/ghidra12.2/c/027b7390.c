/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b7390; name: FUN_027b7390
 */


void FUN_027b7390(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [8];
  byte local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  long *plStack_c0;
  undefined1 auStack_b8 [16];
  byte local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  long *plStack_90;
  byte local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  long *plStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  
  FUN_027b782c(auStack_f0,param_2 + 0x48,"users");
  FUN_027b7984(auStack_b8,auStack_f0,param_2 + 0x58);
  FUN_027b7bd4(auStack_68,auStack_b8,"privateItems");
  FUN_027b7984(param_1,auStack_68,param_3);
  if ((local_50 & 1) != 0) {
    (**(code **)(*plStack_38 + 0x18))
              (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
  }
  FUN_027b7d94(auStack_58);
  FUN_01e73724(auStack_68);
  if ((local_88 & 1) != 0) {
    (**(code **)(*plStack_70 + 0x18))
              (plStack_70,local_78,CONCAT71(uStack_87,local_88) & 0xfffffffffffffffe,1);
  }
  if ((local_a8 & 1) != 0) {
    (**(code **)(*plStack_90 + 0x18))
              (plStack_90,local_98,CONCAT71(uStack_a7,local_a8) & 0xfffffffffffffffe,1);
  }
  FUN_01e73724(auStack_b8);
  if ((local_d8 & 1) != 0) {
    (**(code **)(*plStack_c0 + 0x18))
              (plStack_c0,local_c8,CONCAT71(uStack_d7,local_d8) & 0xfffffffffffffffe,1);
  }
  FUN_027b7d94(auStack_e0);
  FUN_01e73724(auStack_f0);
  return;
}


