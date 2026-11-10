/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00deaf84; name: FUN_00deaf84
 */


void FUN_00deaf84(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x198);
  *(undefined **)(param_1 + 0x120) = PTR_DAT_047dd5a0 + 0x10;
  if (lVar4 != 0) {
    plVar1 = *(long **)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1a0) = lVar4;
    lVar5 = *(long *)(param_1 + 0x1a8) - lVar4;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00c4e600();
      if (0 < *(int *)(lVar3 + 0x12c8)) {
        FUN_00c48fe8(plVar1,lVar4,lVar5,8);
        goto LAB_00deafb0;
      }
    }
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5,8);
  }
LAB_00deafb0:
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x180));
  FUN_00deb044(param_1 + 0x140);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x130));
  FUN_00e6bfa4(param_1);
  return;
}


