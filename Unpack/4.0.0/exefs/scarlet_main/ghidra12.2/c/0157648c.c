/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157648c; name: FUN_0157648c
 */


void FUN_0157648c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_60 = 0x62f9c80d3c6933ea;
  pcStack_58 = "Intensity";
  local_50 = 9;
  local_48 = (long *)0x0;
  uVar1 = FUN_01180d38(param_1,&local_60);
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = uVar1 >> 0x20;
  }
  local_80 = 0x757527f9d900520e;
  pcStack_78 = "Global";
  local_70 = 6;
  uStack_68 = 0;
  FUN_0113e964(uVar2,param_1,"PfxRadialBlurIntensity",&local_80);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0xa1a5a39f1e539c0a;
  pcStack_58 = "Offset";
  local_50 = 6;
  local_48 = (long *)0x0;
  uVar1 = FUN_01180d38(param_1,&local_60);
  local_a0 = 0x757527f9d900520e;
  pcStack_98 = "Global";
  local_90 = 6;
  uStack_88 = 0;
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar2 = uVar1 >> 0x20;
  }
  FUN_01288dac(uVar2,param_1,"PfxRadialBlurOffset",&local_a0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar2 = FUN_017237f0(param_1);
  local_c0 = 0x757527f9d900520e;
  pcStack_b8 = "Global";
  local_b0 = 6;
  uStack_a8 = 0;
  FUN_0113e964(param_1,"PfxRadialBlurPositionX",&local_c0);
  local_d0 = 6;
  uStack_c8 = 0;
  local_e0 = 0x757527f9d900520e;
  pcStack_d8 = "Global";
  FUN_0113e964(uVar2 >> 0x20,param_1,"PfxRadialBlurPositionY",&local_e0);
  return;
}


