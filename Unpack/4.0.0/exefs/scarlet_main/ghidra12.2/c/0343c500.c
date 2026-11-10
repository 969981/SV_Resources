/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0343c500; name: FUN_0343c500
 */


bool FUN_0343c500(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_047e2fd0;
  plVar6 = *(long **)(param_1 + 0x278);
  plVar1 = (long *)(param_1 + 0x278);
  lVar7 = 0;
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      if ((char)plVar6[0xd] == '\0') {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar9 = (long *)plVar6[2];
LAB_0343c59c:
        plVar8 = plVar6;
        plVar6 = plVar9;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar9 = (long *)plVar6[2];
        if ((uVar4 & 1) == 0) goto LAB_0343c59c;
        plVar2 = plVar1;
        if ((long *)*plVar1 != plVar6) {
          plVar2 = plVar8 + 2;
        }
        *plVar2 = (long)plVar9;
        (**(code **)*plVar6)(plVar6);
        (**(code **)(puVar3 + 0x30))(7,plVar6);
        plVar6 = plVar9;
      }
    } while (plVar6 != (long *)0x0);
    lVar7 = *plVar1;
  }
  if (lVar7 == 0) {
    *plVar1 = 0;
  }
  plVar1 = (long *)(param_1 + 0x280);
  plVar6 = *(long **)(param_1 + 0x280);
  lVar5 = 0;
  if (plVar6 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      if ((char)plVar6[0xd] == '\0') {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar9 = (long *)plVar6[2];
LAB_0343c63c:
        plVar8 = plVar6;
        plVar6 = plVar9;
      }
      else {
        uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6);
        plVar9 = (long *)plVar6[2];
        if ((uVar4 & 1) == 0) goto LAB_0343c63c;
        plVar2 = plVar1;
        if ((long *)*plVar1 != plVar6) {
          plVar2 = plVar8 + 2;
        }
        *plVar2 = (long)plVar9;
        (**(code **)*plVar6)(plVar6);
        (**(code **)(puVar3 + 0x30))(7,plVar6);
        plVar6 = plVar9;
      }
    } while (plVar6 != (long *)0x0);
    lVar5 = *plVar1;
  }
  if (lVar5 == 0) {
    *plVar1 = 0;
  }
  return lVar7 == 0 && lVar5 == 0;
}


