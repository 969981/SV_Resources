/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a919c; name: FUN_024a919c
 */


void FUN_024a919c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)(param_2 + 0x18);
  FUN_024a94fc(param_1,param_2,&local_38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  plVar1 = (long *)(param_2 + 0x28);
  puVar11 = (undefined8 *)(param_1 + 0x20);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *puVar11 = (undefined8 *)(param_1 + 0x28);
  FUN_024a9554(puVar11,*(undefined8 *)(param_2 + 0x20),plVar1);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  if (plVar1 != *(long **)(param_2 + 0x20)) {
    lVar3 = *(long *)(param_1 + 8);
    plVar6 = *(long **)(param_2 + 0x20);
    plVar4 = *(long **)(param_1 + 0x20);
    do {
      plVar4[6] = lVar3;
      if (plVar1 == plVar6) {
        lVar8 = param_2;
      }
      else {
        lVar8 = plVar6[6];
      }
      plVar5 = (long *)plVar6[1];
      plVar7 = plVar5;
      if (plVar5 == (long *)0x0) {
        plVar7 = plVar6 + 2;
        plVar9 = (long *)*plVar7;
        if ((long *)*plVar9 != plVar6) {
          do {
            lVar10 = *plVar7;
            plVar7 = (long *)(lVar10 + 0x10);
            plVar9 = (long *)*plVar7;
          } while (*plVar9 != lVar10);
        }
      }
      else {
        do {
          plVar9 = plVar7;
          plVar7 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if (plVar9 == plVar1) {
        lVar10 = param_2;
      }
      else {
        lVar10 = plVar9[6];
      }
      for (; lVar8 != lVar10; lVar8 = *(long *)(lVar8 + 8)) {
        lVar3 = *(long *)(lVar3 + 8);
      }
      if (plVar5 == (long *)0x0) {
        plVar5 = plVar6 + 2;
        plVar7 = (long *)*plVar5;
        if ((long *)*plVar7 != plVar6) {
          do {
            lVar8 = *plVar5;
            plVar5 = (long *)(lVar8 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar8);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      plVar6 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar6 = plVar4 + 2;
        plVar5 = (long *)*plVar6;
        if ((long *)*plVar5 != plVar4) {
          do {
            lVar8 = *plVar6;
            plVar6 = (long *)(lVar8 + 0x10);
            plVar5 = (long *)*plVar6;
          } while (*plVar5 != lVar8);
        }
      }
      else {
        do {
          plVar5 = plVar6;
          plVar6 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar6 = plVar7;
      plVar4 = plVar5;
    } while (plVar1 != plVar7);
  }
  return;
}


