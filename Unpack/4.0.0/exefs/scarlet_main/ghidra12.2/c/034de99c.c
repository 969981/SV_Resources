/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034de99c; name: FUN_034de99c
 */


undefined8 FUN_034de99c(long param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  FUN_034e4a84(*(undefined8 *)PTR_DAT_047e7098,param_1);
  puVar1 = PTR_DAT_047e2fd0;
  lVar10 = *(long *)PTR_DAT_047e7050;
  plVar4 = *(long **)(lVar10 + 0x10);
  if (plVar4 != (long *)0x0) {
    plVar6 = (long *)0x0;
    do {
      if (plVar4[1] == param_1) {
        if (*(char *)(lVar10 + 0x38) == '\0') {
          plVar9 = (long *)*plVar4;
          plVar8 = (long *)(lVar10 + 0x10);
          if (*(long **)(lVar10 + 0x10) != plVar4) {
            plVar8 = plVar6;
          }
          *plVar8 = (long)plVar9;
          if (*(long **)(lVar10 + 0x18) == plVar4) {
            *(long **)(lVar10 + 0x18) = plVar6;
          }
          if ((plVar4 < *(long **)(lVar10 + 0x28)) ||
             (*(long **)(lVar10 + 0x28) + (ulong)*(uint *)(lVar10 + 0x30) * 3 <= plVar4)) {
            (**(code **)(puVar1 + 0x30))(0);
          }
          else {
            *plVar4 = *(long *)(lVar10 + 0x20);
            *(long **)(lVar10 + 0x20) = plVar4;
          }
          *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + -1;
          plVar4 = plVar9;
        }
        else {
          plVar8 = (long *)*plVar4;
          plVar4[1] = 0;
          *(undefined1 *)(lVar10 + 0x39) = 1;
          plVar6 = plVar4;
          plVar4 = plVar8;
        }
      }
      else {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar4;
      }
    } while (plVar4 != (long *)0x0);
  }
  if (param_2 == 0) {
LAB_034deb70:
    uVar2 = 1;
  }
  else {
    if (param_3 == 1) {
      if (param_1 != 0) {
        lVar10 = *(long *)PTR_DAT_047e7050;
        puVar7 = (undefined8 *)(lVar10 + 0x20);
        puVar3 = (undefined8 *)*puVar7;
        if (puVar3 == (undefined8 *)0x0) {
          puVar3 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
          if (puVar3 == (undefined8 *)0x0) {
            return 2;
          }
          *puVar3 = *puVar7;
          *puVar7 = puVar3;
        }
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
          *(undefined8 **)(lVar10 + 0x10) = puVar3;
        }
        else {
          **(undefined8 **)(lVar10 + 0x18) = puVar3;
          puVar3 = (undefined8 *)*puVar7;
        }
        *(undefined8 **)(lVar10 + 0x18) = puVar3;
        *(undefined8 *)(lVar10 + 0x20) = *puVar3;
        *puVar3 = 0;
        lVar5 = *(long *)(lVar10 + 0x18);
        *(int *)(lVar10 + 0x34) = *(int *)(lVar10 + 0x34) + 1;
        *(long *)(lVar5 + 8) = param_1;
        *(int *)(lVar5 + 0x10) = param_2;
        goto LAB_034deb70;
      }
    }
    else if (param_3 == 0) {
      uVar2 = FUN_034e4150(*(undefined8 *)PTR_DAT_047e7098,param_1,param_2);
      return uVar2;
    }
    uVar2 = 0x1f;
  }
  return uVar2;
}


