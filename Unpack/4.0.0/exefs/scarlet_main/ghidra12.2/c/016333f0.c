/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016333f0; name: FUN_016333f0
 */


void FUN_016333f0(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_2 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(lVar6 + 0x30),uVar1);
  if ((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x78))(), (uVar4 & 1) != 0)) {
    lVar6 = *(long *)(param_1 + 0x10);
    iVar2 = (**(code **)(*(long *)*param_3 + 0x98))();
    lVar6 = *(long *)(lVar6 + 0x310);
    if (((*(byte *)(*(long *)(*(long *)(lVar6 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) &&
       (*(int *)(lVar6 + 0x18) == 0)) {
      uVar5 = FUN_015b5634(*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x30),1);
      plVar3 = (long *)FUN_0124c614(uVar5,0);
      if (plVar3 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar3 + 0x98))();
        *(undefined4 *)(lVar6 + 0x18) = uVar1;
      }
    }
    if (*(int *)(lVar6 + 0x18) != iVar2) {
      uVar4 = (**(code **)(*(long *)*param_3 + 0x510))((long *)*param_3,5);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_01634c4c(*(undefined8 *)(param_1 + 0x38),*param_3,*(undefined4 *)(param_3 + 1));
        if ((uVar4 & 1) == 0) {
          if (*(uint *)(param_3 + 1) < 100) {
            return;
          }
          goto LAB_016334d4;
        }
        plVar3 = (long *)*param_3;
        uVar5 = 4;
      }
      else {
        plVar3 = (long *)*param_3;
        uVar5 = 6;
      }
      (**(code **)(*plVar3 + 0x508))(plVar3,uVar5);
      *param_2 = 1;
      return;
    }
  }
LAB_016334d4:
  FUN_01636cf4(*(undefined8 *)(param_1 + 0x38),*param_3);
  return;
}


