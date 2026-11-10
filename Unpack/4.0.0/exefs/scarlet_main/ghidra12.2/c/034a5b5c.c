/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a5b5c; name: FUN_034a5b5c
 */


undefined8 FUN_034a5b5c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  long local_18;
  
  lVar3 = *(long *)(param_1 + 0x250);
  if (lVar3 == 0) {
    return 0;
  }
  plVar6 = *(long **)(lVar3 + 0x118);
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)0x0;
  }
  else if (plVar6[3] != param_1) {
    plVar6 = (long *)0x0;
  }
  plVar4 = *(long **)(lVar3 + 0x120);
  if (((plVar4 == (long *)0x0) || (plVar4[3] != param_1)) &&
     (plVar4 = plVar6, plVar6 == (long *)0x0)) {
    return 0;
  }
  local_18 = 0;
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) != 0) {
    puVar5 = *(undefined4 **)(param_1 + 0x248);
    lVar3 = *(long *)(puVar5 + 4);
    if (lVar3 == 0) {
      auVar7 = FUN_03468d28(*(undefined8 *)PTR_DAT_047e70e8,*puVar5,&local_18);
      lVar3 = auVar7._0_8_;
    }
    else {
      auVar7._8_4_ = puVar5[2];
      auVar7._0_8_ = lVar3;
    }
    if (lVar3 != 0) {
      lVar3 = auVar7._0_8_;
      if ((auVar7._8_4_ == *(int *)(param_1 + 0x2e8)) &&
         (iVar1 = (**(code **)(*plVar4 + 200))(plVar4,lVar3,*(undefined8 *)(param_1 + 0x2e0)),
         iVar1 == 1)) {
        uVar2 = (**(code **)(*plVar4 + 0xd0))(plVar4);
        if (((uVar2 & 1) != 0) &&
           (plVar6 = *(long **)(param_1 + 0x250), plVar6[1] == param_1 + 0x18)) {
          (**(code **)(*plVar6 + 0x68))(plVar6,lVar3,*(undefined8 *)(param_1 + 0x2e0));
        }
        uVar2 = (**(code **)(*plVar4 + 0xd8))(plVar4);
        if ((uVar2 & 1) != 0) {
          plVar4[2] = (lVar3 - *(long *)(param_1 + 0x2e0)) + plVar4[2];
        }
        if ((*(long *)(param_1 + 0x2e0) != 0) &&
           (*(long *)(*(undefined4 **)(param_1 + 0x248) + 4) == 0)) {
          FUN_03468ed8(*(undefined8 *)PTR_DAT_047e70e8,**(undefined4 **)(param_1 + 0x248));
        }
        if (*(long *)(param_1 + 0x1e8) != 0) {
          FUN_0346034c(*(long *)(param_1 + 0x1e8),0);
        }
        *(long *)(param_1 + 0x2e0) = lVar3;
        *(long *)(param_1 + 0x1e8) = local_18;
        return 1;
      }
      if (*(long *)(*(undefined4 **)(param_1 + 0x248) + 4) == 0) {
        FUN_03468ed8(*(undefined8 *)PTR_DAT_047e70e8,**(undefined4 **)(param_1 + 0x248));
      }
    }
  }
  if (local_18 == 0) {
    return 0;
  }
  FUN_0346034c(local_18,0);
  return 0;
}


