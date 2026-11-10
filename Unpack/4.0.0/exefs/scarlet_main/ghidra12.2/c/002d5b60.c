/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d5b60; name: FUN_002d5b60
 */


void FUN_002d5b60(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(char *)(param_2 + 1) == '\0') {
    iVar4 = pthread_rwlock_unlock((pthread_rwlock_t *)*param_2);
    if ((iVar4 != 0) || (iVar4 = pthread_rwlock_wrlock((pthread_rwlock_t *)*param_2), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  pcVar5 = (code *)FUN_002cde20();
  local_30 = *(undefined8 *)(param_1 + 0x98);
  uStack_28 = *(undefined8 *)(param_1 + 0xb8);
  (*pcVar5)(&local_30);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
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
    uVar10 = *(ulong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (uVar10 != 0) {
      uVar7 = uVar10 & 3;
      if (uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar9 = uVar8 * 8;
          uVar8 = uVar8 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9 + 0x18) = 0;
        } while ((uVar10 & 0xfffffffffffffffc) != uVar8);
      }
      if (uVar7 != 0) {
        lVar9 = uVar8 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar9) = 0;
          uVar7 = uVar7 - 1;
          lVar9 = lVar9 + 8;
        } while (uVar7 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x98);
  return;
}


