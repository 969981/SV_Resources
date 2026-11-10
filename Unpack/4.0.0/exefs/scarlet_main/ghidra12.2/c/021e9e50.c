/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e9e50; name: FUN_021e9e50
 */


void FUN_021e9e50(long param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  if (*param_2 != 0) {
    FUN_021e9f10();
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x21e9f04);
    (*pcVar3)();
  }
  FUN_021d88fc(*(undefined8 *)(param_1 + 8));
  (**(code **)**(undefined8 **)(param_1 + 8))();
  *(undefined8 *)(param_1 + 8) = 0;
  plVar6 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar6,uVar1,uVar2,8);
      goto LAB_021e9ec0;
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6,uVar1,uVar2,8);
LAB_021e9ec0:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


