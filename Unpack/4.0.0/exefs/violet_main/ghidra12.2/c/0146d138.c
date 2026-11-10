/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146d138; name: FUN_0146d138
 */


void FUN_0146d138(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)param_1[0x74];
  plVar5 = (long *)param_1[0x75];
  plVar1 = plVar6;
  if ((plVar6 != plVar5) && (*plVar6 != *param_2 || (char)plVar6[0x16] != '\0')) {
    plVar4 = plVar6 + 0x18;
    do {
      plVar1 = plVar4;
      if (plVar5 == plVar1) {
        plVar1 = plVar5;
        goto LAB_0146d180;
      }
      plVar4 = plVar1 + 0x18;
    } while ((*plVar1 != *param_2) || ((char)plVar1[0x16] != '\0'));
  }
LAB_0146d180:
  if (plVar5 == plVar1) goto LAB_0146d1cc;
  if (plVar1 + 0x18 != plVar5) {
    *(undefined1 *)((long)plVar1 + 0xe4) = 1;
    plVar6 = (long *)param_1[0x74];
    plVar5 = (long *)param_1[0x75];
  }
  plVar4 = (long *)((long)plVar6 + ((long)plVar1 - (long)plVar6));
  if (plVar4 + 0x18 == plVar5) {
LAB_0146d1a8:
    if ((long *)plVar5[-0x15] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[-0x15] + 0x20))();
    }
    if (plVar5 + -0x18 != plVar4) {
      if ((long *)plVar5[-0x2d] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[-0x2d] + 0x20))();
      }
      if (plVar5 + -0x30 != plVar4) {
        do {
          if ((long *)plVar5[-0x45] != (long *)0x0) {
            (**(code **)(*(long *)plVar5[-0x45] + 0x20))();
          }
          plVar5 = plVar5 + -0x18;
        } while (plVar4 + 0x30 != plVar5);
      }
    }
  }
  else {
    lVar2 = (long)plVar1 - (long)plVar6 >> 6;
    *plVar4 = plVar4[0x18];
    plVar7 = plVar6 + lVar2 * 8 + 3;
    plVar1 = (long *)*plVar7;
    lVar3 = plVar4[0x1a];
    plVar6[lVar2 * 8 + 1] = plVar4[0x19];
    plVar6[lVar2 * 8 + 2] = lVar3;
    *plVar7 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    lVar3 = plVar4[0x1b];
    plVar4[0x1b] = 0;
    *plVar7 = lVar3;
    memcpy(plVar6 + lVar2 * 8 + 4,plVar4 + 0x1c,0x91);
    if (plVar4 + 0x30 != plVar5) {
      do {
        plVar4[0x18] = plVar4[0x30];
        plVar4[0x19] = plVar4[0x31];
        plVar1 = (long *)plVar4[0x1b];
        plVar4[0x1a] = plVar4[0x32];
        plVar4[0x1b] = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        lVar2 = plVar4[0x33];
        plVar4[0x33] = 0;
        plVar4[0x1b] = lVar2;
        memcpy(plVar4 + 0x1c,plVar4 + 0x34,0x91);
        plVar4 = plVar4 + 0x18;
      } while (plVar5 + -0x30 != plVar4);
    }
    plVar5 = (long *)param_1[0x75];
    plVar4 = plVar4 + 0x18;
    if (plVar5 != plVar4) goto LAB_0146d1a8;
  }
  param_1[0x75] = (long)plVar4;
  FUN_0146d3c0(param_1[0x74],plVar4);
LAB_0146d1cc:
  *(undefined1 *)((long)param_1 + 0x4fd) = 1;
  if (*(char *)((long)param_1 + 0xf4) == '\0') {
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x0146d200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1);
    return;
  }
  return;
}


