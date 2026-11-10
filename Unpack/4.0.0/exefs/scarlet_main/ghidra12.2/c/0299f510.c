/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299f510; name: FUN_0299f510
 */


void FUN_0299f510(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar5 = (long *)*param_2;
      pcVar3 = (code *)param_2[0x19];
      if (pcVar3 != (code *)0x0) {
        param_2[0x1a] = 0;
        param_2[0x1b] = 0;
        param_2[0x18] = 0;
        param_2[0x19] = 0;
        (*pcVar3)(param_2 + 0x1c);
      }
      pcVar3 = (code *)param_2[9];
      if (pcVar3 != (code *)0x0) {
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[8] = 0;
        param_2[9] = 0;
        (*pcVar3)(param_2 + 0xc);
      }
      if ((long *)param_2[4] != (long *)0x0) {
        (**(code **)(*(long *)param_2[4] + 0x20))();
      }
      plVar4 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x150,0x10);
      }
      else {
        FUN_00c48fe8(plVar4,param_2,0x150,0x10);
      }
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


