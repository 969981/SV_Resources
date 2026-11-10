/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a946c; name: FUN_034a946c
 */


undefined8 FUN_034a946c(long *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = (long *)param_1[0x1d];
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(2,0x10);
    if (plVar4 == (long *)0x0) goto LAB_034a9560;
    *plVar4 = 0;
    plVar4[1] = 0;
    param_1[0x1d] = (long)plVar4;
  }
  uVar2 = *(uint *)(plVar4 + 1);
  uVar5 = *(uint *)((long)plVar4 + 0xc);
  if (uVar2 < uVar5) {
LAB_034a94fc:
    if (uVar2 < uVar5) {
      uVar5 = *(uint *)(plVar4 + 1);
      *(uint *)(plVar4 + 1) = uVar5 + 1;
      if (*plVar4 != 0) {
        *(undefined8 *)(*plVar4 + (ulong)uVar5 * 8) = param_2;
        (**(code **)(*param_1 + 0x180))(param_1,0,0);
        return 1;
      }
    }
  }
  else {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar4,(ulong)uVar5 << 3);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      *(uint *)((long)plVar4 + 0xc) = uVar5;
      goto LAB_034a94fc;
    }
  }
  if (param_1[0x1d] == 0) {
    return 0x34;
  }
  if (*(int *)(param_1[0x1d] + 8) != 0) {
    return 0x34;
  }
  (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
LAB_034a9560:
  param_1[0x1d] = 0;
  return 0x34;
}


