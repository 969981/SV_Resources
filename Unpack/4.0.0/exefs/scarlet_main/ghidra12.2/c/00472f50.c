/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00472f50; name: FUN_00472f50
 */


undefined8 FUN_00472f50(long param_1,void *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  size_t __n;
  
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar1 = (int)param_3 * 8;
    if (CARRY4(*(uint *)(param_1 + 0x14),uVar1)) {
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 0x18) = iVar4;
    }
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) + uVar1;
    *(int *)(param_1 + 0x18) = iVar4 + (int)(param_3 >> 0x1d);
    uVar3 = (ulong)*(uint *)(param_1 + 0x5c);
    if (*(uint *)(param_1 + 0x5c) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x1c);
      if ((uVar3 + param_3 | param_3) < 0x40) {
        memcpy((void *)((long)puVar2 + uVar3),param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      __n = 0x40 - uVar3;
      memcpy((void *)((long)puVar2 + uVar3),param_2,__n);
      FUN_00473050(param_1,puVar2,1);
      param_2 = (void *)((long)param_2 + __n);
      param_3 = param_3 - __n;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
    }
    if (param_3 >> 6 != 0) {
      FUN_00473050(param_1,param_2);
      uVar3 = param_3 & 0xffffffffffffffc0;
      param_3 = param_3 & 0x3f;
      param_2 = (void *)((long)param_2 + uVar3);
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      memcpy((void *)(param_1 + 0x1c),param_2,param_3);
    }
  }
  return 1;
}


