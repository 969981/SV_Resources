/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376b80; name: FUN_00376b80
 */


void FUN_00376b80(undefined8 *param_1)

{
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [36];
  char local_14 [4];
  
  local_14[0] = '\0';
  uStack_58 = param_1[1];
  local_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  FUN_00369480(auStack_38,&local_60,local_14);
  uStack_98 = param_1[5];
  local_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  FUN_00369480(auStack_80,&local_a0,local_14);
  if (local_14[0] != '\0') {
    param_1 = (undefined8 *)0x0;
  }
  FUN_00376200(auStack_38,auStack_80,param_1);
  return;
}


