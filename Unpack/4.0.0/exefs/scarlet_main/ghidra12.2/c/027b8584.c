/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027b8584; name: FUN_027b8584
 */


void FUN_027b8584(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_80 [16];
  byte local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  long *plStack_58;
  byte local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  long *plStack_38;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_027b8448(auStack_80);
    FUN_027b7dc4(param_1,param_2,auStack_80,param_4);
    if ((local_50 & 1) != 0) {
      (**(code **)(*plStack_38 + 0x18))
                (plStack_38,local_40,CONCAT71(uStack_4f,local_50) & 0xfffffffffffffffe,1);
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*plStack_58 + 0x18))
                (plStack_58,local_60,CONCAT71(uStack_6f,local_70) & 0xfffffffffffffffe,1);
    }
    FUN_01e73724(auStack_80);
  }
  return;
}


