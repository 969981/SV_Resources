/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148e234; name: FUN_0148e234
 */


void FUN_0148e234(undefined8 *param_1,long param_2,ulong param_3,ulong param_4)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  pcVar5 = *(char **)(param_2 + 0xf8);
  if (*pcVar5 == '\0') {
    if ((param_3 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        puVar6 = &DAT_04599f28;
      }
      else {
        puVar6 = &DAT_04599f48;
      }
    }
    else {
      puVar6 = &DAT_04599f08;
    }
    uVar7 = puVar6[1];
    *param_1 = *puVar6;
    param_1[1] = uVar7;
    plVar1 = (long *)puVar6[3];
    param_1[2] = puVar6[2];
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x18);
LAB_0148e280:
                    /* WARNING: Could not recover jumptable at 0x0148e288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0xf0);
    param_1[1] = pcVar5;
    plVar1 = *(long **)(param_2 + 0x108);
    param_1[2] = *(undefined8 *)(param_2 + 0x100);
    param_1[3] = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar2 = PTR_DAT_047d3e30;
    uVar7 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)PTR_DAT_047d3e30;
    *(undefined8 *)(param_2 + 0xf8) = uVar7;
    plVar1 = *(long **)(puVar2 + 0x18);
    *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(puVar2 + 0x10);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    plVar4 = *(long **)(param_2 + 0x108);
    *(long **)(param_2 + 0x108) = plVar1;
    if (plVar4 != (long *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x20);
      goto LAB_0148e280;
    }
  }
  return;
}


