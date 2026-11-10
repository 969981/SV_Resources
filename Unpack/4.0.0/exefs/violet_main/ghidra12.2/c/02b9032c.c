/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9032c; name: FUN_02b9032c
 */


void FUN_02b9032c(void *param_1,void *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  memcpy(param_2,param_1,0x28);
  uVar2 = *(undefined8 *)((long)param_1 + 0x28);
  *(undefined8 *)((long)param_2 + 0x30) = 0;
  *(undefined8 *)((long)param_2 + 0x38) = 0;
  *(undefined8 *)((long)param_2 + 0x28) = uVar2;
  FUN_00c43ef0((undefined8 *)((long)param_2 + 0x30),(long)param_1 + 0x30);
  *(undefined8 *)((long)param_2 + 0x40) = *(undefined8 *)((long)param_1 + 0x40);
  *(undefined8 *)((long)param_2 + 0x48) = *(undefined8 *)((long)param_1 + 0x48);
  *(undefined8 *)((long)param_2 + 0x50) = *(undefined8 *)((long)param_1 + 0x50);
  plVar1 = *(long **)((long)param_1 + 0x58);
  *(long **)((long)param_2 + 0x58) = plVar1;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b903ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


