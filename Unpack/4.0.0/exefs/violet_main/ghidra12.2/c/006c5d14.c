/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c5d14; name: FUN_006c5d14
 */


long FUN_006c5d14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  Result *pRVar8;
  long lVar9;
  undefined4 local_48 [2];
  undefined4 local_28 [2];
  
  lVar9 = *param_4;
  lVar7 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,0xb8,8);
  if (lVar9 == 0) {
    if (lVar7 == 0) {
      local_48[0] = 0x220;
      pRVar8 = (Result *)local_48;
      goto LAB_006c5e54;
    }
    uVar2 = *param_2;
    uVar5 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = *param_3;
    uVar6 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined8 *)(lVar7 + 0x10) = uVar2;
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    *(long *)(lVar7 + 0x50) = lVar7 + 0x48;
    *(long *)lVar7 = lVar7;
    *(long *)(lVar7 + 8) = lVar7;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    puVar1 = PTR_DAT_047cbb38 + 0x10;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(undefined **)(lVar7 + 0x40) = puVar1;
    *(long *)(lVar7 + 0x48) = lVar7 + 0x48;
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
  }
  else {
    if (lVar7 == 0) {
      pRVar8 = (Result *)local_28;
      local_28[0] = 0x220;
LAB_006c5e54:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0,pRVar8,"");
    }
    uVar2 = *param_2;
    uVar5 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    uVar3 = *param_3;
    uVar6 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    plVar4 = (long *)*param_4;
    lVar9 = param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    *(long *)lVar7 = lVar7;
    *(long *)(lVar7 + 8) = lVar7;
    *(undefined8 *)(lVar7 + 0x10) = uVar2;
    *(undefined8 *)(lVar7 + 0x18) = uVar5;
    *(undefined8 *)(lVar7 + 0x20) = uVar3;
    *(undefined8 *)(lVar7 + 0x28) = uVar6;
    puVar1 = PTR_DAT_047cbb38 + 0x10;
    *(long **)(lVar7 + 0x30) = plVar4;
    *(long *)(lVar7 + 0x38) = lVar9;
    *(long *)(lVar7 + 0x40) = (long)puVar1;
    *(undefined8 *)(lVar7 + 0xb0) = 0;
    *(long *)(lVar7 + 0x48) = lVar7 + 0x48;
    *(long *)(lVar7 + 0x50) = lVar7 + 0x48;
    *(undefined8 *)(lVar7 + 0xa0) = 0;
    *(undefined8 *)(lVar7 + 0xa8) = 0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,lVar7 + 0x60);
      *(long **)(lVar7 + 0xa0) = (long *)(lVar7 + 0x40);
    }
  }
  return lVar7;
}


