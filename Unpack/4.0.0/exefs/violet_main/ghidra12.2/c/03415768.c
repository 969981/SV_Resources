/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03415768; name: FUN_03415768
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03415768(long param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  if ((0 < *(int *)((long)param_2 + 0x284)) && (0 < (int)param_2[0x50])) {
    lVar5 = 0;
    do {
      FUN_03415768(param_1,param_2[lVar5 + 0x40]);
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[0x50]);
  }
  plVar4 = (long *)(param_1 + 0x18);
  plVar2 = (long *)*plVar4;
  if (plVar2 == (long *)0x0) {
LAB_03415814:
    if (_DAT_00000f70 == (long *)0x0) {
      _DAT_00000f70 = param_2;
      *param_2 = 0;
    }
    else {
      *param_2 = (long)_DAT_00000f70;
      _DAT_00000f70 = param_2;
    }
    _DAT_00000f68 = _DAT_00000f68 + 1;
  }
  else {
    if ((param_2 < plVar2) || (plVar2 + 0x1ec <= param_2)) {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)plVar3[0x1ec];
        if (plVar2 == (long *)0x0) goto LAB_03415814;
      } while ((param_2 < plVar2) || (plVar2 + 0x1ec <= param_2));
    }
    else {
      plVar3 = (long *)0x0;
    }
    if (plVar2[0x1ee] == 0) {
      plVar2[0x1ee] = (long)param_2;
      *param_2 = 0;
    }
    else {
      *param_2 = plVar2[0x1ee];
      plVar2[0x1ee] = (long)param_2;
    }
    iVar1 = (int)plVar2[0x1ed] + 1;
    *(int *)(plVar2 + 0x1ed) = iVar1;
    if (iVar1 == 6) {
      if ((long *)*plVar4 != plVar2) {
        plVar4 = plVar3 + 0x1ec;
      }
      *plVar4 = plVar2[0x1ec];
                    /* WARNING: Could not recover jumptable at 0x034158a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(10);
      return;
    }
  }
  return;
}


