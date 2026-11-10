/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027075e0; name: FUN_027075e0
 */


undefined8 * FUN_027075e0(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (0 < *(long *)(lVar6 + 0x18)) {
    FUN_0012ac30(param_1);
  }
  puVar3 = (undefined8 *)FUN_0012d7b0(param_1,0xd0,8);
  bVar2 = *(byte *)(lVar6 + 100);
  *(undefined1 *)(puVar3 + 2) = 8;
  *(byte *)((long)puVar3 + 0x11) = bVar2 & 0x18;
  puVar5 = puVar3 + 1;
  *puVar5 = *(undefined8 *)(lVar6 + 0x70);
  *(undefined8 **)(lVar6 + 0x70) = puVar5;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = puVar5;
  *(undefined1 *)(puVar4 + 1) = 0x48;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  puVar3[4] = lVar6;
  puVar3[5] = 0;
  puVar3[0xb] = puVar5;
  puVar3[0xc] = 0;
  puVar3[0x15] = 0;
  *(undefined4 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)((long)puVar3 + 0xc4) = 0;
  *(undefined4 *)((long)puVar3 + 0x12) = 0x100;
  puVar3[0x16] = 0;
  *(undefined8 *)((long)puVar3 + 0xbc) = 0;
  *(undefined4 *)(puVar3 + 0x19) = *(undefined4 *)(param_1 + 0xc0);
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(puVar3 + 0x18) = uVar1;
  puVar3[0x15] = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)((long)puVar3 + 0xc4) = uVar1;
  *puVar3 = *(undefined8 *)(*(long *)(lVar6 + 0x108) + -8);
  FUN_0013b050(puVar5,param_1);
  return puVar5;
}


