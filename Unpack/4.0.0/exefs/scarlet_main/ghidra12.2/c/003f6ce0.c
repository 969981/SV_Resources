/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f6ce0; name: FUN_003f6ce0
 */


int FUN_003f6ce0(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_90;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffc8;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  iVar1 = vfprintf(*(FILE **)PTR_stderr_047cb8b8,param_1,&local_50);
  return iVar1;
}


