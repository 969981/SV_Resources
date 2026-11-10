/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01765cc8; name: FUN_01765cc8
 */


void FUN_01765cc8(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar3 = *(long **)(param_1 + 0x38);
      plVar4 = (long *)*param_2;
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x20,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x20,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


