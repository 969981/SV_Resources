/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0299f684; name: FUN_0299f684
 */


void FUN_0299f684(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar5 = (long *)*param_2;
      pcVar3 = (code *)param_2[5];
      if (pcVar3 != (code *)0x0) {
        param_2[6] = 0;
        param_2[7] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        (*pcVar3)(param_2 + 8);
      }
      plVar4 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0xb0,0x10);
      }
      else {
        FUN_00c48fe8(plVar4,param_2,0xb0,0x10);
      }
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


