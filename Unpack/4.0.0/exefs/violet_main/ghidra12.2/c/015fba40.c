/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015fba40; name: FUN_015fba40
 */


void FUN_015fba40(long param_1)

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
      goto LAB_015fbb24;
      do {
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xffc,4);
        while( true ) {
          lVar2 = *(long *)(param_1 + 0x10);
          lVar3 = lVar2 + -8;
          *(long *)(param_1 + 0x10) = lVar3;
          if (*(long *)(param_1 + 8) == lVar3) goto LAB_015fba68;
          plVar5 = *(long **)(param_1 + 0x50);
          uVar4 = *(undefined8 *)(lVar2 + -0x10);
          uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) break;
LAB_015fbb24:
          FUN_00c48fe8(plVar5,uVar4,0xffc,4);
        }
      } while( true );
    }
LAB_015fba68:
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (0x5c < *(ulong *)(param_1 + 0x40)) {
      plVar5 = *(long **)(param_1 + 0x50);
      uVar4 = **(undefined8 **)(param_1 + 8);
      uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,uVar4,0xffc,4);
      }
      else {
        FUN_00c48fe8(plVar5,uVar4,0xffc,4);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x5d;
    }
    FUN_01ea4d1c(param_1);
  }
  FUN_015fbbbc(param_1);
  return;
}


