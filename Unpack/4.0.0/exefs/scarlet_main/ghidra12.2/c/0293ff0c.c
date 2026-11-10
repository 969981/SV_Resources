/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293ff0c; name: FUN_0293ff0c
 */


void FUN_0293ff0c(long param_1,undefined1 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  ulong uVar7;
  
  *param_2 = 0;
  plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  uVar1 = (**(code **)(*plVar4 + 0xf0))();
  if (((*PTR_DAT_047ddaa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047ddaa8), iVar3 != 0))
  {
    FUN_00100190(PTR_LAB_047ddad0,PTR_DAT_047ddab0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047ddaa8);
  }
  uVar5 = *(undefined8 *)PTR_DAT_047ddab0;
  *(undefined8 *)PTR_DAT_047ddab8 = uVar5;
  piVar6 = (int *)FUN_01074860(uVar5,uVar1);
  if (((((*(ushort *)((long)piVar6 - (long)*piVar6) < 0x11) ||
        (uVar7 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[8], uVar7 == 0)) ||
       (*(char *)((long)piVar6 + uVar7) == '\0')) || (*(char *)((long)param_3 + 0xf) != '\0')) &&
     (uVar7 = (**(code **)(*plVar4 + 0x200))(plVar4), (uVar7 & 1) == 0)) {
    if ((*(char *)((long)param_3 + 0xb) != '\0') ||
       ((uint)*(ushort *)(param_3 + 2) != (uVar1 & 0xffff))) {
      uVar7 = FUN_0293b434(*(undefined8 *)(param_1 + 0x38),param_3[1],*(ushort *)(param_3 + 2),
                           *(undefined1 *)((long)param_3 + 10));
      if (*(char *)((long)param_3 + 0xd) != '\0') {
        FUN_018ce0ec(*(undefined8 *)(param_1 + 0x20),*param_3,(short)param_3[2]);
      }
      if ((uVar7 & 1) == 0) {
        FUN_0293b83c(*(undefined8 *)(param_1 + 0x38),param_3[1],(short)param_3[2],
                     *(undefined1 *)((long)param_3 + 10));
      }
      else {
        if (*(char *)((long)param_3 + 0xe) != '\0') {
          FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x89,param_3[1],
                       uVar1 & 0xffff,(short)param_3[2]);
        }
        FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 4);
        FUN_0293a468(*(undefined8 *)(param_1 + 0x38),param_3[1],uVar1,(short)param_3[2]);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
        FUN_014606c4(uVar5,uVar2);
        FUN_0298db8c(*(undefined8 *)(param_1 + 0x20),param_3[1],(short)param_3[2]);
        FUN_0124f1ec(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38),plVar4);
        if ((*(char *)((long)param_3 + 0xe) != '\0') && (param_3[1] != 0)) {
          FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),200);
        }
        if ((uint)*(ushort *)(param_3 + 2) != (uVar1 & 0xffff)) {
          FUN_0292f9d4(*(undefined8 *)(param_1 + 0x38),param_3[1]);
        }
        *param_2 = 1;
      }
      if ((*(char *)((long)param_3 + 0xd) != '\0') && (*param_3 != 0)) {
        FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),200);
      }
      if ((uVar7 & 1) != 0) {
        FUN_02982f84(param_1,plVar4,uVar1,(short)param_3[2]);
        return;
      }
    }
  }
  return;
}


