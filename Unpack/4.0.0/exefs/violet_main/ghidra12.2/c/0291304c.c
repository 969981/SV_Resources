/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0291304c; name: FUN_0291304c
 */


undefined4 FUN_0291304c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4d8))();
  if (((iVar1 != 0) || (1 < *(ushort *)(param_1 + 0x9e) - 0x39)) ||
     (*(ushort *)(param_1 + 0xb6) - 0x39 < 2)) {
    return 0;
  }
  iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
  if (((iVar1 < 10) ||
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 10))
     || (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x5d)
        , (uVar2 & 1) == 0)) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0xa0))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    plVar3 = *(long **)(param_1 + 0x30);
    if (iVar1 < 0x28) {
      lVar6 = *plVar3;
      uVar4 = 0x5a;
LAB_0291311c:
      uVar2 = (**(code **)(lVar6 + 0x4c0))(plVar3,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_02913128;
    }
    else {
      iVar1 = (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined4 *)(param_1 + 0x98));
      if (iVar1 < 0x46) {
        plVar3 = *(long **)(param_1 + 0x30);
        uVar4 = 0x46;
        lVar6 = *plVar3;
        goto LAB_0291311c;
      }
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x108))
                      (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98));
    if (((iVar1 < 8) ||
        (iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x118))
                           (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98)), iVar1 < 8))
       || (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))
                             (*(long **)(param_1 + 0x30),0x32), (uVar2 & 1) == 0)) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
      uVar5 = 2;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  else {
LAB_02913128:
    uVar5 = 0xfffffffe;
  }
  return uVar5;
}


