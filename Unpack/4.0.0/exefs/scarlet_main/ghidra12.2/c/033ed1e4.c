/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033ed1e4; name: FUN_033ed1e4
 */


undefined8 FUN_033ed1e4(long param_1)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x30),0,(ulong)(uint)(*(int *)(param_1 + 0x48) << 2));
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (3 < *(uint *)(lVar1 + 0x18)) {
    uVar2 = 0;
    lVar3 = param_1;
    do {
      *(undefined8 *)(lVar3 + 0x208) = 0;
      *(undefined8 *)(lVar3 + 0x200) = 0;
      __s = *(void **)(param_1 + 0x118 + uVar2 * 8);
      if (__s != (void *)0x0) {
        memset(__s,0,(ulong)(uint)(*(int *)(lVar3 + 100) << 4));
        lVar1 = *(long *)(param_1 + 0x18);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < *(uint *)(lVar1 + 0x18) >> 2);
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  return 1;
}


