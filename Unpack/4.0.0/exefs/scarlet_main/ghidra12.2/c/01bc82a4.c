/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01bc82a4; name: FUN_01bc82a4
 */


void FUN_01bc82a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  long *local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 auStack_580 [224];
  undefined1 local_4a0 [160];
  undefined4 local_400;
  undefined *local_3f0;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  long *local_378;
  undefined1 auStack_370 [48];
  undefined1 auStack_340 [80];
  undefined1 local_2f0 [160];
  undefined4 local_250;
  undefined *local_240;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined1 auStack_1c0 [48];
  undefined8 local_190;
  undefined4 local_188;
  undefined1 auStack_180 [304];
  
  cVar5 = DAT_0480ee50;
  puVar6 = (undefined8 *)FUN_01bc8ec0(param_2);
  local_5d0 = puVar6[2];
  uStack_5c8 = puVar6[3];
  local_5e0 = *puVar6;
  uStack_5d8 = puVar6[1];
  local_5c0 = 0;
  uStack_5b8 = 0;
  FUN_00d0a71c(&local_5c0,puVar6 + 4);
  local_5b0 = 0;
  uStack_5a8 = 0;
  FUN_00c6c994(&local_5b0,puVar6 + 6);
  local_5a0 = (long *)puVar6[8];
  if (local_5a0 != (long *)0x0) {
    (**(code **)(*local_5a0 + 0x18))();
  }
  local_598 = puVar6[9];
  local_590 = puVar6[10];
  uStack_588 = puVar6[0xb];
  memcpy(auStack_580,puVar6 + 0xc,0xd4);
  local_4a0[0] = 0;
  if (*(char *)(puVar6 + 0x28) != '\0') {
    FUN_01a77b64(local_4a0,puVar6 + 0x2a);
  }
  puVar4 = PTR_DAT_047d5400;
  puVar2 = PTR_DAT_047d53f0;
  local_400 = *(undefined4 *)(puVar6 + 0x3c);
  local_3f0 = PTR_DAT_047d5400 + 0x10;
  local_3d0 = PTR_DAT_047d53f0 + 0x10;
  local_3d8 = puVar6[0x41];
  local_3e0 = puVar6[0x40];
  local_3c8 = 0;
  local_3c0 = 0;
  FUN_00d0a71c(&local_3c8,puVar6 + 0x43);
  puVar3 = PTR_DAT_047d53f8;
  local_3a8 = puVar6[0x47];
  local_3b0 = puVar6[0x46];
  local_3a0 = PTR_DAT_047d53f8 + 0x10;
  local_398 = 0;
  local_390 = 0;
  FUN_00d0a71c(&local_398,puVar6 + 0x49);
  local_380 = 0;
  local_388 = 0;
  FUN_00c6c994(&local_388,puVar6 + 0x4b);
  local_378 = (long *)puVar6[0x4d];
  if (local_378 != (long *)0x0) {
    (**(code **)(*local_378 + 0x18))();
  }
  memcpy(auStack_370,puVar6 + 0x4e,0x25);
  memcpy(auStack_340,puVar6 + 0x54,0x50);
  local_2f0[0] = 0;
  if (*(char *)(puVar6 + 0x5e) != '\0') {
    FUN_01a77b64(local_2f0,puVar6 + 0x60);
  }
  local_250 = *(undefined4 *)(puVar6 + 0x72);
  local_240 = puVar4 + 0x10;
  local_220 = puVar2 + 0x10;
  local_228 = puVar6[0x77];
  local_230 = puVar6[0x76];
  local_218 = 0;
  local_210 = 0;
  FUN_00d0a71c(&local_218,puVar6 + 0x79);
  local_1f8 = puVar6[0x7d];
  local_200 = puVar6[0x7c];
  local_1f0 = puVar3 + 0x10;
  local_1e0 = 0;
  local_1e8 = 0;
  FUN_00d0a71c(&local_1e8,puVar6 + 0x7f);
  local_1d0 = 0;
  local_1d8 = 0;
  FUN_00c6c994(&local_1d8,puVar6 + 0x81);
  local_1c8 = (long *)puVar6[0x83];
  if (local_1c8 != (long *)0x0) {
    (**(code **)(*local_1c8 + 0x18))();
  }
  uVar1 = 0x70;
  if (cVar5 == '\0') {
    uVar1 = 0xffffffffffffffff;
  }
  memcpy(auStack_1c0,puVar6 + 0x84,0x25);
  local_188 = *(undefined4 *)(puVar6 + 0x8b);
  local_190 = puVar6[0x8a];
  memcpy(auStack_180,puVar6 + 0x8c,300);
  FUN_01bc9148(param_1,uVar1,&local_5e0);
  FUN_015a1250(&local_5e0);
  return;
}


