/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e0358; name: FUN_034e0358
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_034e0358(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  int *piVar7;
  ulong uVar8;
  
  piVar7 = (int *)param_1[1];
  if ((piVar7 != (int *)0x0) &&
     (iVar2 = *piVar7, *piVar7 = iVar2 + -1, puVar3 = PTR_DAT_047e2fd0, iVar2 + -1 == 0)) {
    uVar5 = piVar7[1];
    if (uVar5 != 0) {
      uVar8 = 0;
      plVar4 = (long *)(piVar7 + 4);
      do {
        if (*plVar4 != 0) {
          (**(code **)(puVar3 + 0x30))(0);
          uVar5 = piVar7[1];
        }
        uVar8 = uVar8 + 1;
        plVar4 = plVar4 + 4;
      } while (uVar8 < uVar5);
    }
    (**(code **)(puVar3 + 0x30))(0,piVar7);
  }
  if (DAT_048b0540 == (long *)0x0) {
LAB_034e043c:
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
    plVar4 = DAT_048b0540;
    if ((param_1 < DAT_048b0540) || (DAT_048b0540 + 0x780 <= param_1)) {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)plVar6[0x780];
        if (plVar4 == (long *)0x0) goto LAB_034e043c;
      } while ((param_1 < plVar4) || (plVar4 + 0x780 <= param_1));
    }
    else {
      plVar6 = (long *)0x0;
    }
    if (plVar4[0x782] == 0) {
      plVar4[0x782] = (long)param_1;
      *param_1 = 0;
    }
    else {
      *param_1 = plVar4[0x782];
      plVar4[0x782] = (long)param_1;
    }
    iVar2 = (int)plVar4[0x781] + 1;
    *(int *)(plVar4 + 0x781) = iVar2;
    if (iVar2 == 0x80) {
      plVar1 = (long *)&DAT_048b0540;
      if (DAT_048b0540 != plVar4) {
        plVar1 = plVar6 + 0x780;
      }
      *plVar1 = plVar4[0x780];
                    /* WARNING: Could not recover jumptable at 0x034e04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
      return;
    }
  }
  return;
}


