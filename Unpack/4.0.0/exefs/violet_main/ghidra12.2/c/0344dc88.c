/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344dc88; name: FUN_0344dc88
 */


void FUN_0344dc88(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  lVar4 = param_1[0xd];
  *param_1 = &PTR_FUN_047c0630;
  puVar1 = PTR_DAT_047e2fd0;
  if (lVar4 != 0) {
    do {
      if (*(long *)(lVar4 + 0x10) == 0) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      else {
        param_1[0xd] = *(long *)(lVar4 + 0x10);
      }
      (**(code **)(puVar1 + 0x30))(0);
      lVar4 = param_1[0xd];
    } while (lVar4 != 0);
  }
  if (param_1[0xb] == 0) {
    FUN_0344d8a0(param_1);
  }
  else {
    puVar5 = (undefined8 *)(param_1[0xb] + 8);
    puVar6 = (undefined8 *)*puVar5;
    puVar7 = (undefined8 *)0x0;
    puVar8 = puVar6;
    if ((puVar6 != (undefined8 *)0x0) && (puVar6 != param_1)) {
      do {
        puVar7 = puVar8;
        puVar8 = (undefined8 *)puVar7[1];
      } while (puVar8 != (undefined8 *)0x0 && puVar8 != param_1);
    }
    if (puVar8 != (undefined8 *)0x0) {
      if (puVar8 != puVar6) {
        puVar5 = puVar7 + 1;
      }
      *puVar5 = puVar8[1];
    }
    FUN_0344d8a0(param_1);
    if (param_1 == (undefined8 *)0x0) {
      return;
    }
  }
  lVar4 = tpidr_el0;
  plVar9 = *(long **)(lVar4 + 0x30);
  if (plVar9 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar9 = DAT_04859430;
    *(long **)(lVar4 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0344dda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x18))(plVar9,param_1,0,8);
    return;
  }
  FUN_00c48fe8(plVar9,param_1,0,8);
  return;
}


