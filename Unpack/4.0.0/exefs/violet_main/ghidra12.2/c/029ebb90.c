/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029ebb90; name: FUN_029ebb90
 */


void FUN_029ebb90(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  if (*(char *)(param_1 + 1) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    pcVar3 = *(code **)(param_2 + 0x38);
    if (pcVar3 != (code *)0x0) {
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      (*pcVar3)(param_2 + 0x50);
    }
    if (*(long **)(param_2 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x28) + 0x20))();
    }
  }
  plVar4 = *(long **)*param_1;
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00c4e600();
    if (0 < *(int *)(lVar2 + 0x12c8)) {
      FUN_00c48fe8(plVar4,param_2,0xb0,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x029ebc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0xb0,0x10);
  return;
}


