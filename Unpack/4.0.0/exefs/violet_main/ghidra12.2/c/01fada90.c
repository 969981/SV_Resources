/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fada90; name: FUN_01fada90
 */


undefined8 FUN_01fada90(long param_1,int param_2)

{
  short sVar1;
  short sVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x30);
  plVar3 = *(long **)(param_1 + 0x38);
  if (plVar5 != plVar3) {
    do {
      sVar1 = *(short *)((long)plVar5 + 10);
      sVar2 = (**(code **)(*(long *)(*(long *)(*plVar5 + 0x30) + 0x30) + 0x10))();
      if ((int)(short)param_2 < (int)sVar1 + (int)sVar2) {
        plVar3 = (long *)(*(long *)(*plVar5 + 0x30) + 0x30);
                    /* WARNING: Could not recover jumptable at 0x01fadb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,param_2 - (uint)*(ushort *)((long)plVar5 + 10))
        ;
        return uVar4;
      }
      plVar5 = plVar5 + 2;
    } while (plVar3 != plVar5);
  }
  return 0;
}


