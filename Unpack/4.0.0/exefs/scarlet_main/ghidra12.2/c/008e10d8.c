/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e10d8; name: FUN_008e10d8
 */


undefined8 FUN_008e10d8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 0x10) + 0xa0) + 0x752) == '\0') &&
     (puVar4 = *(undefined8 **)(param_1 + 8), puVar4 != (undefined8 *)0x0)) {
    *(undefined4 *)((long)puVar4 + 0x74) = *(undefined4 *)(puVar4 + 0xe);
    lVar2 = *(long *)(param_1 + 0x10);
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x1f0) + (long)*(int *)(param_1 + 0x20) * 0x10);
    uStack_28 = puVar1[1];
    local_30 = *puVar1;
    FUN_008d6eb8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                 *(undefined8 *)(lVar2 + 0x98),puVar4,*(undefined8 *)(lVar2 + 0x238),&local_30);
    FUN_008d76d8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98),puVar4 + 2,
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x238),&local_30);
    fVar5 = *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x238) + 0x18) + 0x360);
    puVar4[1] = CONCAT44((int)((ulong)puVar4[1] >> 0x20),fVar5 * (float)puVar4[1]);
    *puVar4 = CONCAT44(fVar5 * (float)((ulong)*puVar4 >> 0x20),fVar5 * (float)*puVar4);
    puVar4[3] = CONCAT44((int)((ulong)puVar4[3] >> 0x20),fVar5 * (float)puVar4[3]);
    puVar4[2] = CONCAT44(fVar5 * (float)((ulong)puVar4[2] >> 0x20),fVar5 * (float)puVar4[2]);
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x418);
    lVar2 = *(long *)(lVar3 + 0x18);
    if (lVar2 == 0) {
      *(undefined8 **)(lVar3 + 0x18) = puVar4;
    }
    else {
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 0x68);
      } while (lVar2 != 0);
      *(undefined8 **)(lVar3 + 0x68) = puVar4;
    }
  }
  return 0;
}


