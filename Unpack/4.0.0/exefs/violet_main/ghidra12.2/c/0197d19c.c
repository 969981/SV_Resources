/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0197d19c; name: FUN_0197d19c
 */


void FUN_0197d19c(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  
  *param_2 = 0;
  FUN_01582534();
  uVar3 = FUN_014813e4();
  uVar4 = FUN_01481400(uVar3,*param_3);
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)FUN_014813f4(param_1,*param_3);
    uVar4 = (**(code **)(*plVar5 + 0x3b8))();
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_01243584(param_1);
      FUN_01947cf4(uVar3,*param_3);
      uVar3 = FUN_01243584(param_1);
      FUN_0124e848(uVar3,plVar5);
      uVar3 = FUN_01243584(param_1);
      FUN_02982eb4(uVar3,*param_3);
      uVar4 = FUN_018ce3ac(param_3 + 1);
      uVar3 = FUN_01243584(param_1);
      if ((uVar4 & 1) == 0) {
        uVar1 = (**(code **)(*plVar5 + 0x98))(plVar5);
        uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
        FUN_0167eba0(uVar3,uVar1,0x9f,uVar2);
      }
      else {
        FUN_0124b0ac(uVar3,*param_3,param_3 + 1);
      }
      *param_2 = 1;
    }
  }
  return;
}


