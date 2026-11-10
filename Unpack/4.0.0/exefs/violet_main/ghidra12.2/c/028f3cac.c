/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f3cac; name: FUN_028f3cac
 */


void FUN_028f3cac(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0xe0));
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0xa0);
    *(long *)(param_1 + 0x90) = lVar4;
    lVar5 = *(long *)(param_1 + 0x98) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_028f3cd0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_028f3cd0:
  FUN_012f7638(param_1 + 0x10);
  return;
}


