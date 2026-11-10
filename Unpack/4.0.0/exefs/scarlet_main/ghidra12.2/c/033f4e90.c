/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f4e90; name: FUN_033f4e90
 */


undefined8 FUN_033f4e90(long param_1)

{
  undefined4 *puVar1;
  void *__s;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 0x108) != '\0') {
    FUN_033cbe38(param_1 + 0x18);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar2 = 0;
      uVar4 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0x58) + lVar2;
        if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
          memset(*(void **)(lVar3 + 0x10),0,
                 (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x58) + lVar2) << 2));
        }
        *(undefined4 *)(lVar3 + 0xc) = 0;
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x20;
        *(undefined8 *)(lVar3 + 4) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
      } while (uVar4 < *(uint *)(param_1 + 0x40));
      lVar2 = *(long *)(param_1 + 0x58);
      if ((lVar2 != 0) && (*(uint *)(param_1 + 0x40) != 0)) {
        lVar3 = 0;
        uVar4 = 1;
        while( true ) {
          puVar1 = (undefined4 *)(lVar2 + lVar3);
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            memset(*(void **)(puVar1 + 4),0,(ulong)(uint)(*(int *)(lVar2 + lVar3) << 2));
          }
          *(undefined8 *)(puVar1 + 1) = 0;
          *(undefined8 *)(puVar1 + 6) = 0;
          puVar1[3] = *puVar1;
          if (*(uint *)(param_1 + 0x40) <= uVar4) break;
          lVar2 = *(long *)(param_1 + 0x58);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x20;
        }
      }
    }
    if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
      memset(*(void **)(param_1 + 0xa8),0,(ulong)*(uint *)(param_1 + 0xb0));
    }
  }
  if (*(char *)(param_1 + 0x124) != '\0') {
    FUN_033cbe38(param_1 + 0x60);
    if (*(int *)(param_1 + 0x88) != 0) {
      lVar2 = 0;
      uVar4 = 0;
      do {
        lVar3 = *(long *)(param_1 + 0xa0) + lVar2;
        if (*(void **)(lVar3 + 0x10) != (void *)0x0) {
          memset(*(void **)(lVar3 + 0x10),0,
                 (ulong)(uint)(*(int *)(*(long *)(param_1 + 0xa0) + lVar2) << 2));
        }
        *(undefined4 *)(lVar3 + 0xc) = 0;
        uVar4 = uVar4 + 1;
        lVar2 = lVar2 + 0x20;
        *(undefined8 *)(lVar3 + 4) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0;
      } while (uVar4 < *(uint *)(param_1 + 0x88));
      lVar2 = *(long *)(param_1 + 0xa0);
      if ((lVar2 != 0) && (*(uint *)(param_1 + 0x88) != 0)) {
        lVar3 = 0;
        uVar4 = 1;
        while( true ) {
          puVar1 = (undefined4 *)(lVar2 + lVar3);
          if (*(void **)(puVar1 + 4) != (void *)0x0) {
            memset(*(void **)(puVar1 + 4),0,(ulong)(uint)(*(int *)(lVar2 + lVar3) << 2));
          }
          *(undefined8 *)(puVar1 + 1) = 0;
          *(undefined8 *)(puVar1 + 6) = 0;
          puVar1[3] = *puVar1;
          if (*(uint *)(param_1 + 0x88) <= uVar4) break;
          lVar2 = *(long *)(param_1 + 0xa0);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x20;
        }
      }
    }
    if (*(void **)(param_1 + 200) != (void *)0x0) {
      memset(*(void **)(param_1 + 200),0,(ulong)*(uint *)(param_1 + 0xd0));
    }
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0xe8) + lVar2;
      __s = *(void **)(lVar3 + 8);
      if (__s != (void *)0x0) {
        memset(__s,0,(ulong)(uint)(*(int *)(*(long *)(param_1 + 0xe8) + lVar2) << 2));
      }
      *(undefined4 *)(lVar3 + 0x10) = 0;
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x194));
  }
  return 1;
}


