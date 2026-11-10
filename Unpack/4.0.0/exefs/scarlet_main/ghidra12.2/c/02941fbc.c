/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02941fbc; name: FUN_02941fbc
 */


void FUN_02941fbc(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined8 local_6c;
  undefined1 local_64;
  undefined1 auStack_60 [36];
  undefined4 local_3c;
  undefined1 local_38;
  undefined2 local_37;
  
  FUN_01246154(auStack_60);
  FUN_01920e80(&local_c0);
  local_bc = 1;
  local_b0 = *(undefined2 *)((long)param_3 + 0x34);
  local_b8 = *(undefined1 *)((long)param_3 + 0x36);
  local_b4 = FUN_012464b0(param_1);
  local_c0 = *(undefined4 *)(param_3 + 6);
  local_38 = FUN_01689a40(param_1);
  local_37 = 0;
  local_6c = *param_3;
  local_64 = *(undefined1 *)(param_3 + 1);
  FUN_01920f40(auStack_60,(long)param_3 + 0xc);
  local_3c = FUN_029838b8(param_1,&local_c0);
  uVar2 = FUN_01249340(param_1);
  bVar1 = FUN_01920eb8(uVar2,&local_c0);
  *param_2 = bVar1 & 1;
  return;
}


