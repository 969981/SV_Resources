/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a08710; name: FUN_01a08710
 */


void FUN_01a08710(long param_1)

{
  char cVar1;
  undefined1 auStack_f0 [40];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_78;
  undefined4 local_70;
  
  cVar1 = *(char *)(param_1 + 0x60);
  memset(auStack_f0,0,0xa0);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = local_c0;
  *(undefined8 *)(param_1 + 0x78) = local_c8;
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0xa8) = local_98;
  *(undefined8 *)(param_1 + 0xa0) = local_a0;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = local_70;
  *(undefined8 *)(param_1 + 200) = local_78;
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  memset(auStack_f0,0,0xa0);
  memset(auStack_f0,0,0xa0);
  memset(auStack_f0,0,0xa0);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x80) = local_c0;
  *(undefined8 *)(param_1 + 0x78) = local_c8;
  *(undefined4 *)(param_1 + 0xa8) = local_98;
  *(undefined8 *)(param_1 + 0xa0) = local_a0;
  *(undefined8 *)(param_1 + 200) = local_78;
  *(undefined4 *)(param_1 + 0xd0) = local_70;
  return;
}


