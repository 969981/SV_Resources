/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029423a8; name: FUN_029423a8
 */


void FUN_029423a8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
  undefined2 local_90;
  undefined1 local_8e;
  byte local_8d;
  undefined1 local_8c;
  undefined1 local_8a;
  undefined1 local_84;
  undefined1 auStack_83 [59];
  undefined2 local_48 [4];
  undefined1 local_40;
  undefined1 local_3e;
  
  FUN_029835e4(local_48);
  local_48[0] = *(undefined2 *)(param_3 + 2);
  local_40 = param_3[4];
  local_3e = FUN_01dbdd90();
  FUN_019d4de4(&local_90);
  local_8e = *param_3;
  local_8d = param_3[1];
  local_90 = *(undefined2 *)(param_3 + 2);
  local_8c = (undefined1)*(undefined4 *)(param_3 + 8);
  local_8a = param_3[0xc];
  local_84 = param_3[0xd];
  lVar1 = (ulong)local_8d * 3;
  auStack_83[lVar1] = 1;
  auStack_83[lVar1 + 1] = param_3[0xe];
  auStack_83[lVar1 + 2] = param_3[0xf];
  FUN_0168125c(auStack_a0);
  uVar2 = FUN_01678f00(param_1);
  FUN_01679420(uVar2,local_48,&local_90,auStack_a0);
  return;
}


