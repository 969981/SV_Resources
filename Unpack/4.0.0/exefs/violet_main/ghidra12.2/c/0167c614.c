/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0167c614; name: FUN_0167c614
 */


undefined8 FUN_0167c614(long param_1,long *param_2,long *param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = (**(code **)(*param_3 + 0x4d0))(param_3,0x1a);
  if ((uVar5 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar5 = FUN_0167c76c(uVar6,param_1,uVar2);
    if (((uVar5 & 1) == 0) || (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 != 99)) {
      uVar6 = *(undefined8 *)(param_1 + 0xf0);
      uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar5 = FUN_0167c76c(uVar6,param_1,uVar2);
      if ((((uVar5 & 1) == 0) || (sVar1 = (**(code **)(*param_3 + 0xf8))(param_3), sVar1 != 99)) &&
         (uVar5 = (**(code **)(*param_2 + 0x220))(param_2,0x1d), (uVar5 & 1) == 0)) {
        uVar5 = (**(code **)(*param_2 + 0x220))(param_2,0x1e);
        if ((uVar5 & 1) == 0) {
LAB_0167c700:
                    /* WARNING: Could not recover jumptable at 0x0167c71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (**(code **)(*param_3 + 0x220))(param_3,0x2d);
          return uVar6;
        }
        uVar3 = (**(code **)(*param_2 + 0x238))(param_2,0x1e);
        uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
        if (uVar4 != (uVar3 & 0xff)) goto LAB_0167c700;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


