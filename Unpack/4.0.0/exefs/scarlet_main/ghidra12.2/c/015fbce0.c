/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015fbce0; name: FUN_015fbce0
 */


void FUN_015fbce0(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
      plVar5 = *(long **)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) != 0) && (lVar2 = FUN_00c4e600(), 0 < *(int *)(lVar2 + 0x12c8)))
      goto LAB_015fbdc4;
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xff0,8);
        while( true ) {
          lVar2 = *(long *)(param_1 + 0x10);
          lVar3 = lVar2 + -8;
          *(long *)(param_1 + 0x10) = lVar3;
          if (*(long *)(param_1 + 8) == lVar3) goto LAB_015fbd08;
          plVar5 = *(long **)(param_1 + 0x50);
          uVar4 = *(undefined8 *)(lVar2 + -0x10);
          uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) break;
LAB_015fbdc4:
          FUN_00c48fe8(plVar5,uVar4,0xff0,8);
        }
      } while( true );
    }
LAB_015fbd08:
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (0x1d < *(ulong *)(param_1 + 0x40)) {
      plVar5 = *(long **)(param_1 + 0x50);
      uVar4 = **(undefined8 **)(param_1 + 8);
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xff0,8);
      }
      else {
        FUN_00c48fe8(plVar5,uVar4,0xff0,8);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x1e;
    }
    FUN_01ea4ddc(param_1);
  }
  FUN_015fbe5c(param_1);
  return;
}


