/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225210c; name: FUN_0225210c
 */


void FUN_0225210c(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  if (1 < *param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_022518a0();
  }
  param_1 = param_1 + (ulong)*param_2 * 0x20;
  FUN_021d88fc(*(undefined8 *)(param_1 + 8));
  (**(code **)**(undefined8 **)(param_1 + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  plVar5 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00c4e600();
    if (0 < *(int *)(lVar4 + 0x12c8)) {
      FUN_00c48fe8(plVar5,uVar1,uVar2,8);
      goto LAB_02252180;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar1,uVar2,8);
LAB_02252180:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


