/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b573c; name: FUN_028b573c
 */


void FUN_028b573c(undefined8 *param_1,undefined8 param_2)

{
  void *__src;
  int iVar1;
  undefined8 uVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  long *local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  long local_58;
  undefined1 auStack_50 [16];
  
  if (((*PTR_DAT_047d8b30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d8b30), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047e2420,PTR_DAT_047d8b38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8b30);
  }
  lVar4 = *(long *)PTR_DAT_047d8b38;
  *(long *)PTR_DAT_047d8b40 = lVar4;
  FUN_0135d328(auStack_50,*(undefined8 *)(lVar4 + 8),0);
  local_b0 = (long *)0x0;
  local_a0 = 0x400;
  uStack_98 = 8;
  local_a8 = '\0';
  local_58 = 0;
  local_70 = 0;
  uStack_68 = 1;
  local_60 = 0x101;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  uVar2 = FUN_028b59b0(&local_b0,param_2);
  FUN_01692868(&local_b0,uVar2,0,0);
  __src = local_80;
  pvVar5 = local_88;
  uVar7 = (ulong)(uint)(((int)local_90 - (int)local_80) + (int)local_88);
  __dest = operator_new__(uVar7);
  memcpy(__dest,__src,uVar7);
  lVar4 = local_58;
  *param_1 = __dest;
  if (local_58 == 0) goto LAB_028b5818;
  FUN_01f2d540(local_58,*(undefined8 *)(local_58 + 8));
  lVar3 = tpidr_el0;
  plVar6 = *(long **)(lVar3 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar7 & 1) == 0) {
LAB_028b58ac:
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,0,8);
  }
  else {
    lVar3 = FUN_00c4e600();
    if (*(int *)(lVar3 + 0x12c8) < 1) goto LAB_028b58ac;
    FUN_00c48fe8(plVar6,lVar4,0,8);
  }
  pvVar5 = local_88;
LAB_028b5818:
  if (pvVar5 != (void *)0x0) {
    if (local_b0 == (long *)0x0) {
      operator_delete__(pvVar5);
    }
    else {
      (**(code **)(*local_b0 + 0x18))(local_b0,pvVar5,local_90);
    }
  }
  local_88 = (void *)0x0;
  if ((local_a8 != '\0') && (local_b0 != (long *)0x0)) {
    (**(code **)(*local_b0 + 8))();
  }
  FUN_0135d2ec(auStack_50);
  return;
}


