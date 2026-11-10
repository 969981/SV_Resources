/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01973f14; name: FUN_01973f14
 */


void FUN_01973f14(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  plVar3 = (long *)FUN_014813f4(param_1,*param_3);
  uVar4 = (**(code **)(*plVar3 + 0x200))();
  if ((uVar4 & 1) == 0) {
    uVar5 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
    bVar1 = FUN_01973f8c(uVar5,uVar2);
    *param_2 = bVar1 & 1;
  }
  return;
}


