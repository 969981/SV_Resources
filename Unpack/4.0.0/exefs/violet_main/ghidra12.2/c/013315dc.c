/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013315dc; name: FUN_013315dc
 */


void FUN_013315dc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar6 = (undefined8 *)param_1[6];
  if (puVar6 != (undefined8 *)0x0) {
    plVar7 = (long *)param_1[7];
    puVar4 = (undefined8 *)*puVar6;
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0x18,2);
    }
    else {
      FUN_00c48fe8(plVar7,puVar6,0x18,2);
    }
    if (puVar4 != (undefined8 *)0x0) {
      plVar8 = (long *)param_1[7];
      plVar7 = (long *)*puVar4;
      uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,puVar4,0x18,2);
      }
      else {
        FUN_00c48fe8(plVar8,puVar4,0x18,2);
      }
      if (plVar7 != (long *)0x0) {
        plVar9 = (long *)param_1[7];
        plVar8 = (long *)*plVar7;
        uVar2 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0x18,2);
        }
        else {
          FUN_00c48fe8(plVar9,plVar7,0x18,2);
        }
        while (plVar8 != (long *)0x0) {
          plVar7 = (long *)param_1[7];
          plVar9 = (long *)*plVar8;
          uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,plVar8,0x18,2);
            plVar8 = plVar9;
          }
          else {
            FUN_00c48fe8(plVar7,plVar8,0x18,2);
            plVar8 = plVar9;
          }
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
  plVar7 = (long *)param_1[2];
  uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x013316bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar1 << 3,2);
    return;
  }
  FUN_00c48fe8(plVar7,lVar5,lVar1 << 3,2);
  return;
}


