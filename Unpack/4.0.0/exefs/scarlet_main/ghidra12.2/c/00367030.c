/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00367030; name: FUN_00367030
 */


void FUN_00367030(undefined8 *param_1,long *param_2)

{
  undefined8 *__dest;
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  void *__src;
  ulong uVar6;
  
  puVar5 = (ulong *)(param_2 + 1);
  lVar3 = *param_2;
  if (lVar3 == 0) {
    uVar6 = (ulong)(byte)*puVar5;
  }
  else {
    uVar6 = *puVar5;
  }
  if (uVar6 < 0x18) {
    uVar4 = 0;
    puVar1 = (undefined8 *)0x0;
    puVar2 = param_1;
  }
  else {
    puVar1 = (undefined8 *)FUN_0038c780(uVar6 + 0x30);
    uVar4 = uVar6 & 0xffffffffffffff00;
    puVar1[5] = 1;
    *puVar1 = puVar1 + 5;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1[4] = puVar1;
    puVar1[2] = puVar1;
    puVar1[3] = &LAB_00368360;
    lVar3 = *param_2;
    puVar2 = puVar1 + 6;
  }
  param_1[2] = puVar2;
  *param_1 = puVar1;
  param_1[1] = uVar4 | uVar6 & 0xff;
  if (lVar3 == 0) {
    __src = (void *)((long)param_2 + 9);
    __n = (size_t)(byte)*puVar5;
  }
  else {
    __n = param_2[1];
    __src = (void *)param_2[2];
  }
  __dest = (undefined8 *)((long)param_1 + 9);
  if (puVar1 != (undefined8 *)0x0) {
    __dest = puVar2;
  }
  memcpy(__dest,__src,__n);
  return;
}


