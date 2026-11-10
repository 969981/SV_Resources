/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d45a0; name: FUN_002d45a0
 */


void FUN_002d45a0(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x40);
  if (lVar10 != 0) {
    lVar5 = *(long *)(lVar10 + 0x18);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    lVar5 = *(long *)(lVar10 + 8);
    *(undefined8 *)(lVar10 + 8) = 0;
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,lVar10);
  }
  lVar10 = *(long *)(param_1 + 0x48);
  if (lVar10 != 0) {
    lVar5 = *(long *)(lVar10 + 0x18);
    *(undefined8 *)(lVar10 + 0x18) = 0;
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    lVar5 = *(long *)(lVar10 + 8);
    *(undefined8 *)(lVar10 + 8) = 0;
    if (lVar5 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    FUN_0049e790(PTR_LAB_047cba48,lVar10);
  }
  puVar3 = PTR_LAB_047cba48;
  plVar6 = *(long **)(param_1 + 0xb0);
  puVar2 = PTR_LAB_047cba48;
  while (PTR_LAB_047cba48 = puVar2, plVar6 != (long *)0x0) {
    puVar1 = plVar6 + 2;
    plVar6 = (long *)*plVar6;
    FUN_0049e790(puVar3,*puVar1);
    puVar2 = PTR_LAB_047cba48;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar6 = *(long **)(param_1 + 0xb0);
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      FUN_0049e790(puVar2);
    }
    uVar9 = *(ulong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (uVar9 != 0) {
      uVar7 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar10 = uVar8 * 8;
          uVar8 = uVar8 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10 + 0x18) = 0;
        } while ((uVar9 & 0xfffffffffffffffc) != uVar8);
      }
      if (uVar7 != 0) {
        lVar10 = uVar8 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar10) = 0;
          uVar7 = uVar7 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar2 = PTR_LAB_047cba48;
  plVar6 = *(long **)(param_1 + 0xb0);
  while (plVar6 != (long *)0x0) {
    plVar6 = (long *)*plVar6;
    FUN_0049e790(puVar2);
  }
  lVar10 = *(long *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (lVar10 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
                    /* try { // try from 002d4758 to 002d475b has its CatchHandler @ 002d479c */
  iVar4 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x60));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d4790 to 002d4793 has its CatchHandler @ 002d479c */
    abort();
  }
  lVar10 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar10 != 0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
                    /* try { // try from 002d477c to 002d477f has its CatchHandler @ 002d4798 */
  iVar4 = pthread_rwlock_destroy((pthread_rwlock_t *)(param_1 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002d4794 to 002d4797 has its CatchHandler @ 002d4798 */
    abort();
  }
  return;
}


