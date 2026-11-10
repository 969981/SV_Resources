/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015a1a5c; name: FUN_015a1a5c
 */


void FUN_015a1a5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[3];
  param_1[1] = param_2[1];
  param_1[3] = uVar6;
  uVar6 = *param_2;
  uVar7 = param_2[2];
  param_1[5] = 0;
  param_1[2] = uVar7;
  *param_1 = uVar6;
  param_1[4] = 0;
  FUN_00d0a71c(param_1 + 4,param_2 + 4);
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00c6c994(param_1 + 6,param_2 + 6);
  plVar5 = (long *)param_2[8];
  param_1[8] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  uVar6 = param_2[9];
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  param_1[9] = uVar6;
  memcpy(param_1 + 0xc,param_2 + 0xc,0xd4);
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 0x28) != '\0') {
    FUN_01a77b64(param_1 + 0x28,param_2 + 0x2a);
  }
  puVar4 = PTR_DAT_047d5400;
  puVar3 = PTR_DAT_047d53f0;
  puVar1 = PTR_DAT_047d5400 + 0x10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x3e] = puVar1;
  param_1[0x41] = param_2[0x41];
  uVar6 = param_2[0x40];
  param_1[0x42] = puVar3 + 0x10;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x40] = uVar6;
  FUN_00d0a71c(param_1 + 0x43,param_2 + 0x43);
  puVar1 = PTR_DAT_047d53f8;
  param_1[0x47] = param_2[0x47];
  uVar6 = param_2[0x46];
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x48] = puVar1 + 0x10;
  param_1[0x46] = uVar6;
  FUN_00d0a71c(param_1 + 0x49,param_2 + 0x49);
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  FUN_00c6c994(param_1 + 0x4b,param_2 + 0x4b);
  plVar5 = (long *)param_2[0x4d];
  param_1[0x4d] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  memcpy(param_1 + 0x4e,param_2 + 0x4e,0x25);
  memcpy(param_1 + 0x54,param_2 + 0x54,0x50);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  if (*(char *)(param_2 + 0x5e) != '\0') {
    FUN_01a77b64(param_1 + 0x5e,param_2 + 0x60);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x72);
  param_1[0x74] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x72) = uVar2;
  param_1[0x77] = param_2[0x77];
  uVar6 = param_2[0x76];
  param_1[0x78] = puVar3 + 0x10;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x76] = uVar6;
  FUN_00d0a71c(param_1 + 0x79,param_2 + 0x79);
  param_1[0x7d] = param_2[0x7d];
  uVar6 = param_2[0x7c];
  param_1[0x7e] = puVar1 + 0x10;
  param_1[0x80] = 0;
  param_1[0x7c] = uVar6;
  param_1[0x7f] = 0;
  FUN_00d0a71c(param_1 + 0x7f,param_2 + 0x7f);
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  FUN_00c6c994(param_1 + 0x81,param_2 + 0x81);
  plVar5 = (long *)param_2[0x83];
  param_1[0x83] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  memcpy(param_1 + 0x84,param_2 + 0x84,0x25);
  uVar2 = *(undefined4 *)(param_2 + 0x8b);
  param_1[0x8a] = param_2[0x8a];
  *(undefined4 *)(param_1 + 0x8b) = uVar2;
  memcpy(param_1 + 0x8c,param_2 + 0x8c,300);
  return;
}


