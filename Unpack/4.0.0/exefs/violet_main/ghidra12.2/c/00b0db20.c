/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0db20; name: FUN_00b0db20
 */


void FUN_00b0db20(long param_1,short *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *local_60 [4];
  undefined4 local_28 [2];
  
  FUN_016947d8(local_60);
  local_28[0] = 3;
  FUN_00b0f234(local_60,local_28);
  if (*(long *)(param_2 + 0xc) == 0) {
    if ((*(long *)(param_1 + 0x48) == 0) ||
       (lVar8 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0199660c(lVar8 + -0x28);
    }
    *(undefined8 *)(param_2 + 0xc) = uVar5;
  }
  FUN_00b0fb70(local_60,param_2);
  piVar6 = (int *)(param_1 + 0xb8);
  *piVar6 = *piVar6 + 1;
  if (local_60[0] != (undefined8 *)0x0) {
    FUN_01e62d14(local_28,piVar6,local_60[0] + 1);
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
    if (plVar3 == plVar1) goto LAB_00b0dc78;
    lVar8 = *plVar3;
    uVar7 = FUN_00a371b8(lVar8 + 0x28);
    plVar3 = plVar3 + 1;
  } while ((uVar7 & 1) == 0);
  FUN_00b0f37c(local_60,lVar8 + 0x40);
  FUN_00b1042c(param_1,local_60,param_2);
  if (*param_2 == 0xe) {
    *(undefined4 *)(lVar8 + 0xb40) = 0xffffffff;
    *(undefined1 *)(lVar8 + 0xb3c) = 0;
    *(undefined8 *)(lVar8 + 0xb5c) = 0xffffffffffffffff;
    *(undefined1 *)(lVar8 + 0xb68) = 0;
    *(undefined8 *)(lVar8 + 0xb44) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0xb4c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar8 + 0xb54) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0xb64) = 0;
  }
  if (local_60[0] == (undefined8 *)0x0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *local_60[0];
    uVar2 = *(undefined4 *)(local_60[0] + 3);
  }
  (**(code **)(**(long **)(param_1 + 0x70) + 0x70))(*(long **)(param_1 + 0x70),uVar5,uVar2);
LAB_00b0dc78:
  FUN_01694aa8(local_60);
  return;
}


