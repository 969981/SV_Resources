/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033cbe38; name: FUN_033cbe38
 */


void FUN_033cbe38(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && ((int)param_1[5] != 0)) {
    lVar3 = 0;
    uVar4 = 1;
    while( true ) {
      lVar1 = lVar2 + lVar3;
      *(undefined1 *)(lVar1 + 0x44) = 0;
      *(undefined1 *)(lVar1 + 0x54) = 0;
      *(undefined1 *)(lVar1 + 100) = 0;
      if (*(char *)((long)param_1 + 0x3e) != '\0') {
        if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
          memset(*(void **)(lVar1 + 0x10),0,(ulong)(uint)(*(int *)(lVar2 + lVar3) << 2));
        }
        *(undefined4 *)(lVar1 + 0xc) = 0;
        *(undefined8 *)(lVar1 + 4) = 0;
      }
      if (*(void **)(lVar1 + 0x28) != (void *)0x0) {
        memset(*(void **)(lVar1 + 0x28),0,(ulong)(uint)(*(int *)(lVar1 + 0x18) << 2));
      }
      *(undefined4 *)(lVar1 + 0x24) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      if (*(void **)(lVar1 + 0x68) != (void *)0x0) {
        memset(*(void **)(lVar1 + 0x68),0,(ulong)((*(uint *)(param_1 + 6) & 0x7ffffffe) * 2 + 4));
      }
      if (*(uint *)(param_1 + 5) <= uVar4) break;
      lVar2 = *param_1;
      lVar3 = lVar3 + 0x78;
      uVar4 = uVar4 + 1;
    }
  }
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)((long)param_1 + 0x3c) = 0x101;
  return;
}


