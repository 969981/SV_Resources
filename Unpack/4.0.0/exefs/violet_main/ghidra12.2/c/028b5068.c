/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b5068; name: FUN_028b5068
 */


void FUN_028b5068(long param_1,long *param_2)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != (long *)0x0) {
    do {
      pvVar1 = (void *)param_2[8];
      param_2[8] = 0;
      plVar5 = (long *)*param_2;
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      lVar3 = param_2[4];
      param_2[4] = 0;
      if (lVar3 != 0) {
        FUN_028b4e64(param_2 + 5);
      }
      if ((long *)param_2[3] != (long *)0x0) {
        (**(code **)(*(long *)param_2[3] + 0x20))();
      }
      plVar4 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x58,8);
      }
      else {
        FUN_00c48fe8(plVar4,param_2,0x58,8);
      }
      param_2 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


