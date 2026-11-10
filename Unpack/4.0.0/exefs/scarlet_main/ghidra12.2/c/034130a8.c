/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034130a8; name: FUN_034130a8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_034130a8(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    uVar9 = (ulong)((uint)param_2 - uVar3 * uVar2);
    plVar8 = *(long **)(*(long *)(param_1 + 0x30) + uVar9 * 8);
    if (plVar8 != (long *)0x0) {
      if (*plVar8 == param_2) {
        plVar10 = (long *)0x0;
      }
      else {
        do {
          plVar10 = plVar8;
          plVar8 = (long *)plVar10[8];
          if (plVar8 == (long *)0x0) goto LAB_03413128;
        } while (*plVar8 != param_2);
      }
      plVar7 = (long *)plVar8[7];
      FUN_0341791c(plVar8,param_1 + 0x70);
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(*(long *)(param_1 + 0x30) + uVar9 * 8);
      }
      else {
        plVar10 = plVar10 + 8;
      }
      *plVar10 = plVar8[8];
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      FUN_0341655c(plVar8);
      plVar10 = (long *)(param_1 + 0x68);
      plVar5 = (long *)*plVar10;
      if (plVar5 == (long *)0x0) {
LAB_034131b4:
        if (_DAT_00001a10 == (long *)0x0) {
          _DAT_00001a10 = plVar8;
          *plVar8 = 0;
        }
        else {
          *plVar8 = (long)_DAT_00001a10;
          _DAT_00001a10 = plVar8;
        }
        _DAT_00001a08 = _DAT_00001a08 + 1;
      }
      else {
        if ((plVar8 < plVar5) || (plVar5 + 0x340 <= plVar8)) {
          do {
            plVar6 = plVar5;
            plVar5 = (long *)plVar6[0x340];
            if (plVar5 == (long *)0x0) goto LAB_034131b4;
          } while ((plVar8 < plVar5) || (plVar5 + 0x340 <= plVar8));
        }
        else {
          plVar6 = (long *)0x0;
        }
        if (plVar5[0x342] == 0) {
          plVar5[0x342] = (long)plVar8;
          *plVar8 = 0;
        }
        else {
          *plVar8 = plVar5[0x342];
          plVar5[0x342] = (long)plVar8;
        }
        iVar1 = (int)plVar5[0x341] + 1;
        *(int *)(plVar5 + 0x341) = iVar1;
        if (iVar1 == 0x40) {
          if ((long *)*plVar10 != plVar5) {
            plVar10 = plVar6 + 0x340;
          }
          *plVar10 = plVar5[0x340];
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
        }
      }
      if ((plVar7 != (long *)0x0) && ((int)plVar7[7] == 0)) {
        if (plVar7[2] != 0) {
          FUN_03415768(plVar7 + 1);
          plVar7[2] = 0;
        }
        plVar8 = *(long **)(param_1 + 0x80);
        plVar10 = (long *)0x0;
        if ((plVar8 == (long *)0x0) || (plVar7 == plVar8)) {
          plVar5 = plVar8;
        }
        else {
          plVar5 = plVar8;
          do {
            plVar10 = plVar5;
            plVar5 = (long *)*plVar10;
          } while (plVar5 != (long *)0x0 && plVar7 != plVar5);
        }
        if (plVar5 != (long *)0x0) {
          plVar6 = (long *)(param_1 + 0x80);
          if (plVar8 != plVar5) {
            plVar6 = plVar10;
          }
          *plVar6 = *plVar5;
        }
        if (plVar7[2] != 0) {
          FUN_03415768(plVar7 + 1);
          plVar7[2] = 0;
        }
        plVar7[1] = (long)&PTR_FUN_047bf4e0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,plVar7);
      }
      uVar4 = 1;
      goto LAB_034132e4;
    }
  }
LAB_03413128:
  uVar4 = 0xf;
LAB_034132e4:
  *(undefined1 *)(param_1 + 0x8c) = 1;
  return uVar4;
}


