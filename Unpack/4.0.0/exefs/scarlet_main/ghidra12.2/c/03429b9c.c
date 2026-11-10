/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03429b9c; name: FUN_03429b9c
 */


undefined8 FUN_03429b9c(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  void *__src;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = PTR_DAT_047e2fd0;
  puVar5 = *(undefined8 **)(param_1 + 2);
  if (puVar5 == (undefined8 *)0x0 || *param_1 < param_2) {
    if (*param_1 < param_2) {
      puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,param_2 * 0x48 + 0x10);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      __src = *(void **)(param_1 + 2);
      if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
        *puVar5 = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 1) = 0;
      }
      else {
        memcpy(puVar5,__src,(ulong)(*(int *)((long)__src + 8) * 0x48 + 0x10));
      }
      if (*(long *)(param_1 + 2) != 0) {
        (**(code **)(puVar2 + 0x30))(9);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = param_2;
    }
    if (puVar5 == (undefined8 *)0x0) {
      return 1;
    }
  }
  uVar1 = *(uint *)(puVar5 + 1);
  if (uVar1 < param_2) {
    lVar3 = (ulong)param_2 - (ulong)uVar1;
    lVar4 = (ulong)uVar1 * 0x48 + 0x50;
    do {
      puVar5 = (undefined8 *)((long)puVar5 + lVar4);
      lVar4 = lVar4 + 0x48;
      puVar5[-6] = 0x3f8000003f800000;
      puVar5[-8] = 0xffffffff;
      puVar5[-7] = 0;
      lVar3 = lVar3 + -1;
      *(undefined4 *)(puVar5 + -5) = 0;
      *(undefined2 *)((long)puVar5 + -0x24) = 0;
      puVar5[-4] = 1;
      *(undefined4 *)(puVar5 + -1) = 0;
      *puVar5 = 0;
      puVar5 = *(undefined8 **)(param_1 + 2);
    } while (lVar3 != 0);
  }
  *(uint *)(puVar5 + 1) = param_2;
  return 1;
}


