/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033d6bb8; name: FUN_033d6bb8
 */


undefined8 FUN_033d6bb8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    memset(*(void **)(param_1 + 0xc0),0,(ulong)(uint)(*(int *)(param_1 + 0xb8) << 2));
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    memset(*(void **)(param_1 + 0xd8),0,(ulong)(uint)(*(int *)(param_1 + 0xd0) << 2));
  }
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    memset(*(void **)(param_1 + 0xf0),0,(ulong)(uint)(*(int *)(param_1 + 0xe8) << 2));
  }
  if (*(void **)(param_1 + 0x108) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x108),0,(ulong)(uint)(*(int *)(param_1 + 0x100) << 2));
  }
  puVar5 = *(uint **)(param_1 + 0x150);
  if ((puVar5 != (uint *)0x0) && (*(void **)(puVar5 + 2) != (void *)0x0)) {
    memset(*(void **)(puVar5 + 2),0,(ulong)*puVar5 << 2);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  if ((*(char *)(*(long *)(param_1 + 0x158) + 0x98) != '\0') && (*(char *)(param_1 + 0x134) != '\0')
     ) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x148) + lVar6);
      uVar7 = uVar7 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      lVar6 = lVar6 + 0xa0;
    } while (uVar7 < *(byte *)(param_1 + 0x134));
  }
  piVar8 = *(int **)(param_1 + 0x140);
  if ((piVar8 != (int *)0x0) && (*(int *)(param_1 + 0x128) != 0)) {
    if (*(void **)(piVar8 + 2) != (void *)0x0) {
      memset(*(void **)(piVar8 + 2),0,(ulong)(uint)(*piVar8 << 2));
    }
    if (*(void **)(piVar8 + 8) != (void *)0x0) {
      memset(*(void **)(piVar8 + 8),0,(ulong)(uint)(piVar8[6] << 2));
    }
    if (*(void **)(piVar8 + 0xe) != (void *)0x0) {
      memset(*(void **)(piVar8 + 0xe),0,(ulong)(uint)(piVar8[0xc] << 2));
    }
    if (*(void **)(piVar8 + 0x14) != (void *)0x0) {
      memset(*(void **)(piVar8 + 0x14),0,(ulong)(uint)(piVar8[0x12] << 2));
    }
    piVar8[0x18] = 0;
    piVar8[0x1b] = 0;
    piVar8[0x1e] = 0;
    piVar8[0x21] = 0;
    pvVar3 = *(void **)(*(long *)(param_1 + 0x140) + 0x98);
    if (pvVar3 != (void *)0x0) {
      memset(pvVar3,0,(ulong)(uint)(*(int *)(*(long *)(param_1 + 0x140) + 0x90) << 2));
    }
    if (1 < *(uint *)(param_1 + 0x128)) {
      uVar7 = 1;
      lVar6 = 0xa8;
      do {
        lVar2 = *(long *)(param_1 + 0x140) + lVar6;
        if (*(void **)(lVar2 + 8) != (void *)0x0) {
          memset(*(void **)(lVar2 + 8),0,
                 (ulong)(uint)(*(int *)(*(long *)(param_1 + 0x140) + lVar6) << 2));
        }
        if (*(void **)(lVar2 + 0x20) != (void *)0x0) {
          memset(*(void **)(lVar2 + 0x20),0,(ulong)(uint)(*(int *)(lVar2 + 0x18) << 2));
        }
        if (*(void **)(lVar2 + 0x38) != (void *)0x0) {
          memset(*(void **)(lVar2 + 0x38),0,(ulong)(uint)(*(int *)(lVar2 + 0x30) << 2));
        }
        if (*(void **)(lVar2 + 0x50) != (void *)0x0) {
          memset(*(void **)(lVar2 + 0x50),0,(ulong)(uint)(*(int *)(lVar2 + 0x48) << 2));
        }
        *(undefined4 *)(lVar2 + 0x60) = 0;
        *(undefined4 *)(lVar2 + 0x6c) = 0;
        *(undefined4 *)(lVar2 + 0x78) = 0;
        *(undefined4 *)(lVar2 + 0x84) = 0;
        lVar2 = *(long *)(param_1 + 0x140) + lVar6;
        pvVar3 = *(void **)(lVar2 + 0x98);
        if (pvVar3 != (void *)0x0) {
          memset(pvVar3,0,(ulong)(uint)(*(int *)(lVar2 + 0x90) << 2));
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0xa8;
      } while (uVar7 < *(uint *)(param_1 + 0x128));
    }
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x10),0,(ulong)*(uint *)(param_1 + 8) << 3);
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x28),0,(ulong)*(uint *)(param_1 + 0x20) << 3);
  }
  if (*(void **)(param_1 + 0x40) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x40),0,(ulong)*(uint *)(param_1 + 0x38) << 3);
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    memset(*(void **)(param_1 + 0x58),0,(ulong)*(uint *)(param_1 + 0x50) << 3);
  }
  puVar5 = *(uint **)(param_1 + 0x68);
  if ((puVar5 != (uint *)0x0) && (uVar4 = *(uint *)(param_1 + 300), uVar4 != 0)) {
    if (*(void **)(puVar5 + 2) != (void *)0x0) {
      memset(*(void **)(puVar5 + 2),0,(ulong)*puVar5 << 3);
      uVar4 = *(uint *)(param_1 + 300);
    }
    if (1 < uVar4) {
      lVar6 = 0;
      uVar7 = 1;
      do {
        lVar2 = *(long *)(param_1 + 0x68) + lVar6;
        pvVar3 = *(void **)(lVar2 + 0x20);
        if (pvVar3 != (void *)0x0) {
          memset(pvVar3,0,(ulong)*(uint *)(lVar2 + 0x18) << 3);
          uVar4 = *(uint *)(param_1 + 300);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar7 < uVar4);
    }
  }
  return 1;
}


