/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0085cc4c; name: FUN_0085cc4c
 */


void FUN_0085cc4c(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 1);
LAB_0085cc70:
  do {
    uVar1 = 9U >> (ulong)(((uint)uVar5 & 0xf) << 1) & 3;
    uVar5 = (ulong)uVar1;
    *param_1 = (long)plVar4;
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 != 0) {
      lVar6 = plVar4[uVar5 + 2];
      lVar7 = plVar4[(ulong)(9 >> (ulong)(uVar1 << 1)) + 2];
      iVar2 = *(int *)(lVar6 + 0x20);
      iVar3 = *(int *)(lVar7 + 0x20);
      if (iVar2 < iVar3) {
        return;
      }
      if (iVar3 < iVar2) {
LAB_0085cc60:
        if (3 < (ulong)plVar4[uVar5 + 5]) goto LAB_0085cc70;
      }
      else if ((*(int *)(lVar7 + 0x24) <= *(int *)(lVar6 + 0x24)) &&
              ((*(int *)(lVar7 + 0x24) < *(int *)(lVar6 + 0x24) ||
               (*(int *)(lVar7 + 0x28) < *(int *)(lVar6 + 0x28))))) goto LAB_0085cc60;
      if (iVar2 <= iVar3) {
        if (*(int *)(lVar6 + 0x24) < *(int *)(lVar7 + 0x24)) {
          return;
        }
        if ((*(int *)(lVar6 + 0x24) <= *(int *)(lVar7 + 0x24)) &&
           (*(int *)(lVar6 + 0x28) <= *(int *)(lVar7 + 0x28))) {
          return;
        }
      }
      if ((ulong)plVar4[uVar5 + 5] < 4) {
        return;
      }
    }
    plVar4 = (long *)*plVar4;
    *param_1 = (long)plVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar6 = plVar4[2];
    lVar7 = plVar4[3];
    if (*(int *)(lVar6 + 0x20) < *(int *)(lVar7 + 0x20)) {
      return;
    }
    if (*(int *)(lVar6 + 0x20) <= *(int *)(lVar7 + 0x20)) {
      if (*(int *)(lVar6 + 0x24) < *(int *)(lVar7 + 0x24)) {
        return;
      }
      if ((*(int *)(lVar6 + 0x24) <= *(int *)(lVar7 + 0x24)) &&
         (*(int *)(lVar6 + 0x28) <= *(int *)(lVar7 + 0x28))) {
        return;
      }
    }
    uVar5 = 0;
    if ((ulong)plVar4[5] < 4) {
      return;
    }
  } while( true );
}


