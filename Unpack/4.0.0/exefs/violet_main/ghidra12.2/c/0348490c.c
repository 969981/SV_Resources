/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348490c; name: FUN_0348490c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0348490c(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  int *piVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_047e2fd0;
  plVar5 = (long *)param_1[0xd];
  if (plVar5 != (long *)0x0) {
    plVar7 = (long *)*plVar5;
    if (plVar7 != (long *)0x0) {
      do {
        lVar9 = plVar7[1];
        *(undefined8 *)(lVar9 + 0x18) = 0;
        if (*(long *)(lVar9 + 0x20) != 0) {
          *(undefined4 *)(lVar9 + 0x28) = 0;
          (**(code **)(puVar3 + 0x30))(0);
          *(undefined8 *)(lVar9 + 0x20) = 0;
          *(undefined4 *)(lVar9 + 0x2c) = 0;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
      plVar5 = (long *)param_1[0xd];
    }
    iVar2 = (int)plVar5[5] + -1;
    *(int *)(plVar5 + 5) = iVar2;
    if (iVar2 == 0) {
      FUN_03499444(plVar5);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar5);
    }
    param_1[0xd] = 0;
  }
  piVar6 = (int *)param_1[7];
  if ((piVar6 != (int *)0x0) &&
     (iVar2 = *piVar6, *piVar6 = iVar2 + -1, puVar3 = PTR_DAT_047e2fd0, iVar2 + -1 == 0)) {
    uVar4 = piVar6[1];
    if (uVar4 != 0) {
      uVar8 = 0;
      plVar5 = (long *)(piVar6 + 4);
      do {
        if (*plVar5 != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          uVar4 = piVar6[1];
        }
        uVar8 = uVar8 + 1;
        plVar5 = plVar5 + 4;
      } while (uVar8 < uVar4);
    }
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,piVar6);
  }
  if (DAT_048afe78 == (long *)0x0) {
LAB_03484a78:
    if (_DAT_00003c10 == (long *)0x0) {
      _DAT_00003c10 = param_1;
      *param_1 = 0;
    }
    else {
      *param_1 = (long)_DAT_00003c10;
      _DAT_00003c10 = param_1;
    }
    _DAT_00003c08 = _DAT_00003c08 + 1;
  }
  else {
    plVar5 = DAT_048afe78;
    if ((param_1 < DAT_048afe78) || (DAT_048afe78 + 0x780 <= param_1)) {
      do {
        plVar7 = plVar5;
        plVar5 = (long *)plVar7[0x780];
        if (plVar5 == (long *)0x0) goto LAB_03484a78;
      } while ((param_1 < plVar5) || (plVar5 + 0x780 <= param_1));
    }
    else {
      plVar7 = (long *)0x0;
    }
    if (plVar5[0x782] == 0) {
      plVar5[0x782] = (long)param_1;
      *param_1 = 0;
    }
    else {
      *param_1 = plVar5[0x782];
      plVar5[0x782] = (long)param_1;
    }
    iVar2 = (int)plVar5[0x781] + 1;
    *(int *)(plVar5 + 0x781) = iVar2;
    if (iVar2 == 0x80) {
      plVar1 = (long *)&DAT_048afe78;
      if (DAT_048afe78 != plVar5) {
        plVar1 = plVar7 + 0x780;
      }
      *plVar1 = plVar5[0x780];
                    /* WARNING: Could not recover jumptable at 0x03484b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      return;
    }
  }
  return;
}


