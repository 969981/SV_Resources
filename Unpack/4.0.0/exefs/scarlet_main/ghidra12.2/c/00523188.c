/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00523188; name: FUN_00523188
 */


undefined8 * FUN_00523188(long *param_1,undefined8 param_2,undefined1 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_00524ad8();
  plVar6 = auVar8._0_8_;
  plVar6[2] = param_4;
  if ((auVar8._8_8_ & 0xff) != 0) {
    *(undefined1 *)(plVar6 + 1) = param_3;
    *(undefined1 *)((long)plVar6 + 0xb) = 0;
    *(undefined1 *)((long)plVar6 + 9) = 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
      plVar2 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x18);
      if (plVar2 != (long *)0x0) {
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = 0;
      }
    }
    else {
      if (*(long *)(lVar7 + 0x70) != 0) {
        FUN_00520d08(lVar7,0,0x18);
      }
      plVar2 = (long *)FUN_00520544(lVar7,0x18,PTR_LAB_047cdc28);
      plVar2[1] = 0;
      plVar2[2] = 0;
      *plVar2 = lVar7;
    }
    *plVar6 = (long)plVar2;
  }
  plVar6 = (long *)*plVar6;
  piVar4 = (int *)plVar6[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)((long)plVar6 + 0xc);
LAB_00523264:
    FUN_00532334(plVar6,iVar5 + 1);
    piVar4 = (int *)plVar6[2];
    iVar5 = *piVar4;
  }
  else {
    iVar1 = (int)plVar6[1];
    iVar5 = *piVar4;
    if (iVar1 < iVar5) {
      *(int *)(plVar6 + 1) = iVar1 + 1;
      return *(undefined8 **)(piVar4 + (long)iVar1 * 2 + 2);
    }
    if (iVar5 == *(int *)((long)plVar6 + 0xc)) goto LAB_00523264;
  }
  *piVar4 = iVar5 + 1;
  lVar7 = *plVar6;
  if (lVar7 == 0) {
    puVar3 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    if (puVar3 == (undefined8 *)0x0) goto LAB_005232c4;
  }
  else {
    if (*(long *)(lVar7 + 0x70) != 0) {
      FUN_00520d08(lVar7,0,0x18);
    }
    puVar3 = (undefined8 *)FUN_00520544(lVar7,0x18,PTR_LAB_047cba90);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
LAB_005232c4:
  lVar7 = plVar6[1];
  *(int *)(plVar6 + 1) = (int)lVar7 + 1;
  *(undefined8 **)(plVar6[2] + (long)(int)lVar7 * 8 + 8) = puVar3;
  return puVar3;
}


