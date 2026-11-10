/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bb7b0c; name: FUN_01bb7b0c
 */


void FUN_01bb7b0c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined1 local_1a0 [160];
  undefined4 local_100;
  undefined *local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined1 auStack_70 [48];
  
  bVar1 = DAT_0480edf8;
  pcVar2 = (char *)FUN_01bb84dc(param_2);
  local_1a0[0] = 0;
  if (*pcVar2 != '\0') {
    FUN_01a77b64(local_1a0,pcVar2 + 0x10);
  }
  local_100 = *(undefined4 *)(pcVar2 + 0xa0);
  local_f0 = PTR_DAT_047d5400 + 0x10;
  local_d0 = PTR_DAT_047d53f0 + 0x10;
  local_d8 = *(undefined8 *)(pcVar2 + 200);
  local_e0 = *(undefined8 *)(pcVar2 + 0xc0);
  uStack_c8 = 0;
  local_c0 = 0;
  FUN_00d0a71c(&uStack_c8,pcVar2 + 0xd8);
  local_a8 = *(undefined8 *)(pcVar2 + 0xf8);
  local_b0 = *(undefined8 *)(pcVar2 + 0xf0);
  local_a0 = PTR_DAT_047d53f8 + 0x10;
  uStack_98 = 0;
  local_90 = 0;
  FUN_00d0a71c(&uStack_98,pcVar2 + 0x108);
  local_88 = 0;
  uStack_80 = 0;
  FUN_00c6c994(&local_88,pcVar2 + 0x118);
  local_78 = *(long **)(pcVar2 + 0x128);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  memcpy(auStack_70,pcVar2 + 0x130,0x25);
  FUN_01bb85e4(param_1,-((ulong)~(uint)bVar1 & 1),local_1a0);
  FUN_01bb5e2c(local_1a0);
  return;
}


