/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030d2154; name: FUN_030d2154
 */


void FUN_030d2154(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                        (PTR_PTR_047d1a50,(long)(int)param_1[1] * 0x38);
      iVar8 = (int)param_1[1];
      if (0 < iVar8) {
        plVar3 = (long *)*param_1;
        plVar4 = (long *)(lVar2 + 0x18);
        plVar5 = plVar3 + 3;
        puVar1 = PTR_DAT_047e5120 + 0x10;
        iVar6 = iVar8;
        do {
          plVar4[-2] = 0xffffffff;
          plVar4[-1] = 1;
          iVar6 = iVar6 + -1;
          plVar4[-3] = (long)puVar1;
          *plVar4 = *plVar5;
          *plVar5 = 0;
          plVar4[1] = plVar5[1];
          lVar7 = plVar5[2];
          plVar5[1] = 0;
          *(undefined8 *)((long)plVar4 + 0x16) = *(undefined8 *)((long)plVar5 + 0x16);
          plVar4[2] = lVar7;
          plVar4 = plVar4 + 7;
          plVar5 = plVar5 + 7;
        } while (iVar6 != 0);
        do {
          (**(code **)(*plVar3 + 8))(plVar3);
          iVar8 = iVar8 + -1;
          plVar3 = plVar3 + 7;
        } while (iVar8 != 0);
        iVar8 = (int)param_1[1];
      }
      *param_1 = lVar2;
      *(int *)((long)param_1 + 0xc) = iVar8;
    }
  }
  return;
}


