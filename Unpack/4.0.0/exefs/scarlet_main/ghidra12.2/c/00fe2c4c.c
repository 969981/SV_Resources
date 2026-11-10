/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fe2c4c; name: FUN_00fe2c4c
 */


void FUN_00fe2c4c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 != (undefined8 *)0x0) {
    plVar7 = (long *)param_1[7];
    plVar6 = (long *)*puVar4;
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar4,0x20,8);
    }
    else {
      FUN_00c48fe8(plVar7,puVar4,0x20,8);
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = (long *)param_1[7];
      plVar7 = (long *)*plVar6;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar8,plVar6,0x20,8);
      }
      while (plVar7 != (long *)0x0) {
        plVar6 = (long *)param_1[7];
        plVar8 = (long *)*plVar7;
        uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,0x20,8);
          plVar7 = plVar8;
        }
        else {
          FUN_00c48fe8(plVar6,plVar7,0x20,8);
          plVar7 = plVar8;
        }
      }
    }
  }
  lVar5 = *param_1;
  *param_1 = 0;
  if (lVar5 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar6 = (long *)param_1[2];
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00fe2d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar1 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar6,lVar5,lVar1 << 3,8);
  return;
}


