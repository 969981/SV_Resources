/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e4150; name: FUN_034e4150
 */


undefined8 FUN_034e4150(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  void *__src;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x1c0) < 1) {
    uVar3 = FUN_034e4294(param_1,param_2,param_3);
    return uVar3;
  }
  uVar2 = *(uint *)(param_1 + 0x1b8);
  uVar6 = *(uint *)(param_1 + 0x1bc);
  if (uVar6 <= uVar2) {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar6 = iVar1 + uVar6;
    uVar4 = (ulong)uVar6 * 0x18;
    __dest = (void *)(param_1 + 0x30);
    if (0x180 < uVar4) {
      __src = *(void **)(param_1 + 0x1b0);
      if (__dest == __src) {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,uVar4,1);
        if (__dest == (void *)0x0) {
          return 2;
        }
        memcpy(__dest,__src,(ulong)(uVar2 * 0x18));
      }
      else {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,uVar4,1);
        if (__dest == (void *)0x0) {
          return 2;
        }
      }
    }
    *(void **)(param_1 + 0x1b0) = __dest;
    *(uint *)(param_1 + 0x1bc) = uVar6;
  }
  if (uVar2 < uVar6) {
    uVar6 = *(uint *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = uVar6 + 1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x1b0) + (ulong)uVar6 * 0x18);
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 2) = param_2;
      puVar5[4] = param_3;
      return 1;
    }
  }
  return 2;
}


