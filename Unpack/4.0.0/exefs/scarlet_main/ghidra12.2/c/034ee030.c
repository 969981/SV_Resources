/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ee030; name: FUN_034ee030
 */


undefined8 FUN_034ee030(long param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  if (((*(byte *)(param_1 + 0x50) & 1) == 0) || (iVar3 = FUN_0350b104(param_1), iVar3 == 1)) {
    plVar10 = DAT_048b0838;
    if (DAT_048b0840 == 0) {
      uVar9 = 0;
    }
    else {
      iVar3 = (**(code **)(**(long **)(*DAT_048b0838 + 0x118) + 0xf0))();
      iVar4 = (**(code **)(**(long **)(param_1 + 0x118) + 0xf0))();
      if (iVar3 < iVar4) {
        do {
          plVar10 = plVar10 + 1;
          if (plVar10 == DAT_048b0838 + DAT_048b0840) break;
          iVar3 = (**(code **)(**(long **)(*plVar10 + 0x118) + 0xf0))();
          iVar4 = (**(code **)(**(long **)(param_1 + 0x118) + 0xf0))();
        } while (iVar3 < iVar4);
      }
      uVar9 = DAT_048b0840;
    }
    plVar2 = DAT_048b0838;
    if (DAT_048b0844 <= uVar9) {
      iVar3 = DAT_048b0844 + (DAT_048b0844 >> 1);
      if (DAT_048b0844 == 0) {
        iVar3 = 1;
      }
      uVar1 = iVar3 + DAT_048b0844;
      plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(5,DAT_048b0838,(ulong)uVar1 << 3);
      if (plVar5 == (long *)0x0) goto LAB_034ee1cc;
      DAT_048b0838 = plVar5;
      DAT_048b0844 = uVar1;
    }
    if (uVar9 < DAT_048b0844) {
      uVar6 = (ulong)((long)plVar10 - (long)plVar2) >> 3;
      if ((uint)uVar6 < DAT_048b0840) {
        plVar8 = DAT_048b0838 + DAT_048b0840;
        DAT_048b0840 = DAT_048b0840 + 1;
        do {
          plVar7 = plVar8 + -1;
          *plVar8 = *plVar7;
          plVar5 = DAT_048b0838 + ((ulong)((long)plVar10 - (long)plVar2) >> 3 & 0xffffffff);
          plVar8 = plVar7;
        } while (plVar5 < plVar7);
      }
      else {
        plVar5 = DAT_048b0838 + (uVar6 & 0xffffffff);
        DAT_048b0840 = DAT_048b0840 + 1;
      }
      if (plVar5 != (long *)0x0) {
        *plVar5 = param_1;
        FUN_034ee1f0(param_1);
        return 1;
      }
    }
  }
LAB_034ee1cc:
  FUN_03483f78(param_1,1);
  return 2;
}


