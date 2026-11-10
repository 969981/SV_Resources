/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0ddac; name: FUN_00b0ddac
 */


void FUN_00b0ddac(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_58 [4];
  undefined4 local_38 [2];
  
  FUN_016947d8(local_58);
  local_38[0] = 1;
  FUN_00b0f234(local_58,local_38);
  piVar5 = (int *)(param_1 + 0xb8);
  *piVar5 = *piVar5 + 1;
  if (local_58[0] != (undefined8 *)0x0) {
    FUN_01e62d14(local_38,piVar5,local_58[0] + 1);
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar8 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar8;
  plVar1 = *(long **)(lVar8 + 0x1c8);
  plVar3 = *(long **)(lVar8 + 0x1c0);
  do {
    if (plVar3 == plVar1) goto LAB_00b0ded0;
    lVar8 = *plVar3;
    uVar6 = FUN_00a371b8(lVar8 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar6 & 1) == 0);
  FUN_00b0f37c(local_58,lVar8 + 0x40);
  FUN_00b1042c(param_1,local_58,0);
  if (*(long *)(lVar8 + 0xb00) != 0) {
    if (*(short *)(lVar8 + 0x178) == 0xf) {
      FUN_00b10ca0(param_1,lVar8,local_58);
    }
    else if (*(short *)(lVar8 + 0x178) == 0xe) {
      FUN_00b10a04(param_1,lVar8,local_58);
    }
  }
  if (local_58[0] == (undefined8 *)0x0) {
    uVar7 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = *local_58[0];
    uVar2 = *(undefined4 *)(local_58[0] + 3);
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(*(long **)(param_1 + 0x70),uVar7,uVar2);
LAB_00b0ded0:
  FUN_01694aa8(local_58);
  return;
}


