/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e0a364; name: FUN_02e0a364
 */


undefined8 FUN_02e0a364(long param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  switch(param_2) {
  case 1:
    plVar2 = (long *)(param_1 + 0x20);
    break;
  case 2:
    plVar2 = (long *)(param_1 + 0x30);
    break;
  case 3:
    plVar2 = (long *)(param_1 + 0x28);
    break;
  case 4:
    plVar2 = (long *)(param_1 + 0x38);
    break;
  default:
    goto switchD_02e0a39c_default;
  }
  if ((long *)*plVar2 == (long *)0x0) {
switchD_02e0a39c_default:
    return 6;
  }
  uVar1 = (**(code **)(*(long *)*plVar2 + 0x98))();
  switch(param_3) {
  case 1:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x100);
    break;
  case 2:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x108);
    break;
  case 3:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x120);
    break;
  case 4:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x110);
    break;
  case 5:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x118);
    break;
  case 6:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x128);
    break;
  case 7:
    plVar2 = *(long **)(param_1 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x130);
    break;
  default:
    goto switchD_02e0a39c_default;
  }
                    /* WARNING: Could not recover jumptable at 0x02e0a480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(plVar2,uVar1);
  return uVar3;
}


