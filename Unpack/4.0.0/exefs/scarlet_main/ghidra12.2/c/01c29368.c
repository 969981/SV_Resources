/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c29368; name: FUN_01c29368
 */


undefined2 FUN_01c29368(long *param_1,code *param_2,ulong param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  long *plVar2;
  long lVar3;
  
  if ((*param_1 == 0) || (lVar3 = *(long *)(*param_1 + 0x10), lVar3 == 0)) {
    uVar1 = 0;
  }
  else {
    plVar2 = (long *)(lVar3 + ((long)param_3 >> 1) + -0x28);
    if ((param_3 & 1) != 0) {
      param_2 = *(code **)(param_2 + *plVar2);
    }
    uVar1 = (*param_2)(plVar2,*param_4);
  }
  return uVar1;
}


