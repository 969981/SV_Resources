/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089deac; name: FUN_0089deac
 */


void FUN_0089deac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x100))();
  uVar1 = FUN_0088f738(param_2);
  *(uint *)(param_1 + 10) = (uint)uVar1;
  param_1[9] = param_4;
  if (uVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = FUN_0088f750(param_2);
      uVar3 = FUN_00894bb8(param_3,lVar2 + lVar4);
      *(undefined8 *)(param_1[9] + lVar5 * 8) = uVar3;
      (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_1[9] + lVar5 * 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x24;
    } while (lVar5 < (int)param_1[10]);
  }
                    /* WARNING: Could not recover jumptable at 0x0089df6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_5 & 1);
  return;
}


