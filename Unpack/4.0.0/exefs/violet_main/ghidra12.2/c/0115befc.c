/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0115befc; name: FUN_0115befc
 */


void FUN_0115befc(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar4 = (long *)*param_2;
      if ((long *)param_2[0x2d] != (long *)0x0) {
        (**(code **)(*(long *)param_2[0x2d] + 0x20))();
      }
      FUN_0115abf4(param_2 + 0x1c);
      FUN_0115adec(param_2 + 0xf);
      if ((long *)param_2[0xe] != (long *)0x0) {
        (**(code **)(*(long *)param_2[0xe] + 0x20))();
      }
      if ((long *)param_2[10] != (long *)0x0) {
        (**(code **)(*(long *)param_2[10] + 0x20))();
      }
      if ((long *)param_2[6] != (long *)0x0) {
        (**(code **)(*(long *)param_2[6] + 0x20))();
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x170,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x170,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


