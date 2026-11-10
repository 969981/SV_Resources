/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0029833c; name: FUN_0029833c
 */


void FUN_0029833c(long param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  void *__ptr;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar4 = (ulong)*(byte *)(param_2 + 1);
    lVar5 = (long)param_2 + 9;
  }
  else {
    if (*(int *)(lVar5 + 8) == 1) {
      uVar4 = (ulong)*(uint *)(lVar5 + 0x60);
      goto LAB_002983a8;
    }
    if (*(int *)(lVar5 + 8) == 0) {
      uVar4 = (ulong)*(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar5 + 0x28) * 4);
      goto LAB_002983a8;
    }
    uVar4 = param_2[1];
    lVar5 = param_2[2];
  }
  uVar4 = FUN_0038cbd0(lVar5,uVar4,*(undefined4 *)PTR_DAT_047cc650);
LAB_002983a8:
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 != 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    uVar10 = 0;
    do {
      uVar1 = (uVar4 & 0xffffffff) + uVar10;
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = uVar1 / uVar6;
      }
      lVar8 = uVar1 - uVar3 * uVar6;
      pcVar9 = (char *)(lVar5 + lVar8 * 0x30 + 0x28);
      if (*pcVar9 == '\0') {
        *pcVar9 = '\x01';
        lVar11 = *param_2;
        lVar13 = param_2[3];
        lVar12 = param_2[2];
        lVar8 = lVar8 * 0x30;
        plVar2 = (long *)(lVar5 + lVar8);
        plVar2[1] = param_2[1];
        *plVar2 = lVar11;
        plVar2[3] = lVar13;
        plVar2[2] = lVar12;
        lVar8 = *(long *)(param_1 + 0x28) + lVar8;
        uVar7 = *param_3;
        *param_3 = 0;
        __ptr = *(void **)(lVar8 + 0x20);
        *(undefined8 *)(lVar8 + 0x20) = uVar7;
        if (__ptr != (void *)0x0) {
                    /* try { // try from 00298420 to 00298423 has its CatchHandler @ 00298444 */
          free(__ptr);
        }
        if (*(ulong *)(param_1 + 0x20) < uVar10) {
          *(ulong *)(param_1 + 0x20) = uVar10;
        }
        return;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar6);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


