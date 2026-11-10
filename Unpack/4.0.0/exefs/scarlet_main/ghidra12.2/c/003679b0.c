/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003679b0; name: FUN_003679b0
 */


void FUN_003679b0(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  size_t __n;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 0x30) {
      *param_1 = 0;
      *(byte *)(param_1 + 1) = bVar1 >> 1;
      memcpy((void *)((long)param_1 + 9),param_2 + 1,(ulong)(bVar1 >> 1));
      return;
    }
    __n = (size_t)(bVar1 >> 1);
    param_1[2] = param_2 + 1;
  }
  else {
    __n = *(size_t *)(param_2 + 8);
    if (__n < 0x18) {
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)__n;
      memcpy((void *)((long)param_1 + 9),*(void **)(param_2 + 0x10),__n);
      return;
    }
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
  }
  param_1[1] = __n;
  puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x48);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[5] = 1;
    *(undefined4 *)(puVar3 + 1) = 3;
    puVar3[4] = puVar3;
    puVar2 = PTR_LAB_047ccef0;
    *puVar3 = puVar3 + 5;
    puVar3[2] = puVar3;
    puVar3[3] = puVar2;
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)param_2;
    puVar3[8] = *(undefined8 *)(param_2 + 0x10);
    puVar3[7] = uVar5;
    puVar3[6] = uVar4;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  *param_1 = puVar3;
  return;
}


