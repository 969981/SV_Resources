/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f8e54; name: FUN_001f8e54
 */


void FUN_001f8e54(long *param_1,code *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((int)param_1[3] != 0) {
    uVar3 = 0;
    do {
      lVar2 = *param_1;
      plVar1 = *(long **)(lVar2 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar1;
          (*param_2)(plVar1,param_3);
          plVar1 = plVar4;
        } while (plVar4 != (long *)0x0);
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 3));
  }
  return;
}


