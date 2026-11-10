/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01250f8c; name: FUN_01250f8c
 */


undefined8 FUN_01250f8c(undefined8 param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_01248380(param_1,1,0);
  if (plVar4 != (long *)0x0) {
    uVar2 = (**(code **)(*param_2 + 0xe0))(param_2);
    uVar3 = (**(code **)(*plVar4 + 0xe0))(plVar4);
    if ((uVar2 & 0xffff) <= (uVar3 & 0xffff)) {
      uVar1 = 0;
      if ((uVar3 & 0xffff) != 0) {
        uVar1 = ((uVar2 & 0xffff) << 0xc) / (uVar3 & 0xffff);
      }
      uVar2 = FUN_012421f0(param_1,0x100);
      if ((uVar1 >> 5 & 0xfffff) + (param_3 & 0xff) * 100 <= uVar2) {
        return 0;
      }
    }
  }
  return 1;
}


