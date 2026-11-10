/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294f010; name: FUN_0294f010
 */


void FUN_0294f010(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int local_d0;
  byte local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined2 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_8e;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 auStack_5c [44];
  undefined4 local_18;
  undefined1 local_14;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x18);
  iVar1 = 0;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0xc);
  }
  if (iVar1 == param_2) {
    local_14 = FUN_02943aa0(param_1,param_2);
    local_18 = 2;
    local_cc = FUN_02943d30(param_1,&local_18,auStack_5c);
    if (local_cc != 0) {
      FUN_01852230(param_1,param_2);
      local_c8 = 0;
      uStack_c0 = 0;
      local_8e = 0x1000000;
      local_98 = 0;
      local_9c = 0xff01;
      local_94 = 0;
      local_9a = 1;
      local_90 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_84 = 0;
      local_7c = 0;
      local_74 = 0;
      local_6c = 0;
      local_64 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_d0 = param_2;
      memcpy(&local_c8,auStack_5c,(ulong)local_cc << 2);
      FUN_0293e270(param_1,&local_d0);
      FUN_01852150(param_1,param_2);
    }
  }
  return;
}


