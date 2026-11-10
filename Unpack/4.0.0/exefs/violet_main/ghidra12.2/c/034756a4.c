/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034756a4; name: FUN_034756a4
 */


void FUN_034756a4(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  
  plVar10 = (long *)param_2[0x13];
  if (plVar10 != param_1) {
    return;
  }
  (**(code **)(*param_2 + 0x38))(param_2,0);
  uVar4 = *(uint *)(param_1 + 0x1e);
  if (uVar4 != 0) {
    uVar2 = *(uint *)(param_2 + 3);
    iVar6 = 0;
    uVar9 = uVar4;
    do {
      iVar1 = iVar6 + (uVar9 >> 1);
      plVar8 = (long *)(param_1[0x1d] + (long)iVar1 * 8);
      uVar3 = *(uint *)(*plVar8 + 0x18);
      if (uVar3 == uVar2) {
        plVar7 = (long *)((param_1[0x1d] + (ulong)uVar4 * 8) - 8);
        if (plVar8 < plVar7) {
          do {
            plVar5 = plVar8 + 1;
            *plVar8 = *plVar5;
            plVar8 = plVar5;
          } while (plVar5 < plVar7);
          uVar4 = *(uint *)(param_1 + 0x1e);
        }
        *(uint *)(param_1 + 0x1e) = uVar4 - 1;
        break;
      }
      if (uVar3 < uVar2) {
        iVar6 = iVar1 + 1;
      }
      uVar9 = uVar9 - (uVar3 < uVar2) >> 1;
    } while (uVar9 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x03475780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(plVar10);
  return;
}


