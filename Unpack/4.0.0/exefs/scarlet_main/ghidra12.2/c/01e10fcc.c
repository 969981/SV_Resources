/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e10fcc; name: FUN_01e10fcc
 */


byte FUN_01e10fcc(undefined8 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0x8db9ec55f4fcec4b;
  pcStack_48 = "loop_emotion_int";
  local_40 = 0x10;
  uStack_38 = 0;
  iVar2 = FUN_00d93250(param_1,&local_50);
  local_50 = 0x4d98b1b60e771d7e;
  pcStack_48 = "loop_emotion_bool";
  local_40 = 0x11;
  uStack_38 = 0;
  bVar1 = FUN_00d93028(param_1,&local_50);
  return iVar2 == param_2 & bVar1;
}


