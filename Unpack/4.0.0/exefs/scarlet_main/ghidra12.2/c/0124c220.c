/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124c220; name: FUN_0124c220
 */


void FUN_0124c220(long param_1,undefined8 *param_2,undefined4 *param_3,long *param_4)

{
  void *__s;
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *__src;
  
  lVar5 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(lVar5 + 0x68) = 0;
  lVar6 = 0;
  do {
    uVar2 = (&DAT_03d6abe6)[lVar6];
    puVar3 = (undefined1 *)FUN_010af09c(lVar5);
    lVar6 = lVar6 + 4;
    *puVar3 = uVar2;
  } while (lVar6 != 0x340);
  __s = (void *)(param_1 + 0x58);
  memset(__s,0,0x5060);
  __src = *(void **)(param_1 + 0x40);
  memcpy(__s,__src,0x238);
  FUN_0124c390(*(undefined8 *)(param_1 + 8),__src);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x68);
  *(uint *)(param_1 + 0x290) = uVar1;
  memcpy((void *)(param_1 + 0x294),(void *)(*(long *)(param_1 + 0x10) + 0x70),(ulong)uVar1);
  *param_2 = __s;
  *param_3 = 0x5060;
  *param_4 = *param_4 + 1;
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  *puVar4 = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0;
  puVar4[0xc] = 0;
  puVar4[0xe] = 0;
  puVar4[0x10] = 0;
  puVar4[0x12] = 0;
  puVar4[0x14] = 0;
  puVar4[0x16] = 0;
  puVar4[0x18] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1c] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x20] = 0;
  puVar4[0x22] = 0;
  puVar4[0x24] = 0;
  puVar4[0x26] = 0;
  puVar4[0x28] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x2c] = 0;
  puVar4[0x2e] = 0;
  puVar4[0x30] = 0;
  puVar4[0x32] = 0;
  puVar4[0x34] = 0;
  puVar4[0x36] = 0;
  puVar4[0x38] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3c] = 0;
  puVar4[0x3e] = 0;
  puVar4[0x40] = 0;
  puVar4[0x42] = 0;
  puVar4[0x44] = 0;
  *(undefined1 *)((long)puVar4 + 0x234) = 0;
  *(undefined4 *)(puVar4 + 0x46) = 0;
  return;
}


