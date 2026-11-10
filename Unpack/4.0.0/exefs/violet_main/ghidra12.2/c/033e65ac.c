/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e65ac; name: FUN_033e65ac
 */


undefined8 FUN_033e65ac(long param_1)

{
  long lVar1;
  void *__s;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  uint *puVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    lVar4 = *(long *)(param_1 + 0x18);
    if ((lVar4 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      uVar3 = 0;
      while( true ) {
        piVar5 = (int *)(lVar4 + uVar3 * 0x18 + 8);
        if (*piVar5 != 0) {
          puVar6 = (uint *)(lVar4 + uVar3 * 0x18 + 0x10);
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            uVar7 = 0;
            do {
              __s = *(void **)(*(long *)(lVar4 + uVar3 * 0x18) + uVar7 * 8);
              if (__s != (void *)0x0) {
                memset(__s,0,(ulong)(uint)(*piVar5 << 2));
                uVar2 = *puVar6;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar2);
          }
        }
        lVar1 = uVar3 * 0x18;
        uVar3 = uVar3 + 1;
        *(undefined4 *)(lVar4 + lVar1 + 0xc) = 0;
        if (*(uint *)(param_1 + 0x2c) <= uVar3) break;
        lVar4 = *(long *)(param_1 + 0x18);
      }
    }
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x38),0,(ulong)*(uint *)(param_1 + 0x40));
    }
  }
  piVar5 = *(int **)(param_1 + 0x58);
  if ((piVar5 != (int *)0x0) && (*(int *)(param_1 + 0xbc) != 0)) {
    if (*(void **)(piVar5 + 2) != (void *)0x0) {
      memset(*(void **)(piVar5 + 2),0,(ulong)(uint)(*piVar5 << 2));
    }
    piVar5[4] = 0;
    if (1 < *(uint *)(param_1 + 0xbc)) {
      lVar4 = 0;
      uVar3 = 1;
      do {
        lVar1 = *(long *)(param_1 + 0x58) + lVar4;
        if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
          memset(*(void **)(lVar1 + 0x20),0,(ulong)(uint)(*(int *)(lVar1 + 0x18) << 2));
        }
        *(undefined4 *)(lVar1 + 0x28) = 0;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar3 < *(uint *)(param_1 + 0xbc));
    }
  }
  return 1;
}


