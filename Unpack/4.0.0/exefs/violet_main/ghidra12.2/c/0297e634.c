/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297e634; name: FUN_0297e634
 */


void FUN_0297e634(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  FUN_01582534();
  uVar2 = FUN_014813e4();
  uVar3 = FUN_01481400(uVar2,*param_3);
  if ((uVar3 & 1) == 0) {
    return;
  }
  plVar4 = (long *)FUN_014813f4(param_1,*param_3);
  uVar2 = FUN_01243584(param_1);
  FUN_01681080(uVar2,*param_3,0);
  uVar2 = FUN_01243584(param_1);
  uVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  FUN_01636f5c(uVar2,uVar1,plVar4,0x164);
  return;
}


