/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c91c88; name: FUN_00c91c88
 */


void FUN_00c91c88(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  
  *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 1)) = param_2[1];
  puVar3 = PTR_DAT_047dafa8;
  *(undefined *)(*param_2 + (ulong)*(uint *)((long)param_1 + 0xc)) = *PTR_DAT_047dafa8;
  *(undefined *)(*param_2 + (ulong)*(uint *)(param_1 + 2)) = *puVar3;
  *(undefined1 *)(*param_2 + (ulong)*(uint *)((long)param_1 + 0x14)) = 1;
  plVar1 = (long *)param_1[3];
  plVar2 = (long *)param_1[4];
  if (plVar1 != plVar2) {
    plVar4 = (long *)*plVar1;
    *(long *)(*param_2 + (ulong)*(uint *)((long)plVar4 + 0x4c)) = param_2[1];
    *(undefined1 *)(*param_2 + (ulong)*(uint *)(plVar4 + 9)) = 1;
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    while (plVar1 = plVar1 + 1, plVar1 != plVar2) {
      plVar4 = (long *)*plVar1;
      *(long *)(*param_2 + (ulong)*(uint *)((long)plVar4 + 0x4c)) = param_2[1];
      *(undefined1 *)(*param_2 + (ulong)*(uint *)(plVar4 + 9)) = 1;
      (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    }
  }
  plVar1 = (long *)param_1[10];
  plVar2 = (long *)param_1[0xb];
  if (plVar1 != plVar2) {
    plVar4 = (long *)*plVar1;
    *(long *)(*param_2 + (ulong)*(uint *)((long)plVar4 + 0x4c)) = param_2[1];
    *(undefined1 *)(*param_2 + (ulong)*(uint *)(plVar4 + 9)) = 1;
    (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
    while (plVar1 = plVar1 + 1, plVar1 != plVar2) {
      plVar4 = (long *)*plVar1;
      *(long *)(*param_2 + (ulong)*(uint *)((long)plVar4 + 0x4c)) = param_2[1];
      *(undefined1 *)(*param_2 + (ulong)*(uint *)(plVar4 + 9)) = 1;
      (**(code **)(*plVar4 + 0x40))(plVar4,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c91d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,param_2);
  return;
}


