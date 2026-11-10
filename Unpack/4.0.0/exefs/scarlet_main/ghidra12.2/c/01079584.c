/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01079584; name: FUN_01079584
 */


void FUN_01079584(long param_1,undefined2 *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  long lVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined1 local_65;
  uint uStack_64;
  undefined5 uStack_60;
  undefined1 local_58 [8];
  
  *param_2 = 0;
  sVar1 = *(short *)(param_3 + 2);
  if (sVar1 != 0) {
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar6;
    piVar7 = (int *)FUN_00cf60cc(uVar6,sVar1);
    if (((0xe < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
        (uVar9 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[7], uVar9 != 0)) &&
       (*(char *)((long)piVar7 + uVar9) != '\0')) {
      uVar6 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30);
      plVar8 = (long *)FUN_01079790(uVar10,param_3[1]);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        uVar4 = (**(code **)(*plVar8 + 0x1f0))();
        plVar8 = (long *)FUN_01079790(uVar10,uVar4);
      }
      uVar2 = *(undefined2 *)(param_3 + 2);
      if (*(char *)((long)param_3 + 10) == '\0') {
        uVar11 = 7;
      }
      else {
        local_70 = *param_3;
        uStack_6c = param_3[1];
        uStack_66 = 0;
        uStack_64 = uStack_64 & 0xffffff00;
        local_65 = 0;
        local_68 = uVar2;
        FUN_01079a28(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x1cc0),local_58,&local_70);
        uVar11 = local_58[0];
      }
      uStack_60 = 0;
      local_70 = 0;
      uStack_6c = 0;
      local_68 = 0;
      uStack_66 = 0;
      local_65 = 0;
      uStack_64 = 0;
      FUN_0107a750(*(undefined8 *)(param_1 + 0x38),uVar2,uVar2,0,uVar6,&local_70);
      iVar5 = (**(code **)(*plVar8 + 0x98))(plVar8);
      lVar12 = *(long *)(*(long *)(param_1 + 0x78) + 0xc80);
      uVar3 = FUN_0126ec0c(*(undefined8 *)(lVar12 + 0x38));
      if (iVar5 != 0) {
        uVar3 = FUN_0126ee6c(*(undefined8 *)(lVar12 + 0x38),iVar5);
      }
      FUN_0107c344(*(undefined8 *)(param_1 + 0x38),uVar6,plVar8,&local_70,uVar11,0x1000,0,
                   *(char *)((long)param_3 + 0xb) == '\0',0,uVar3,param_2);
    }
  }
  return;
}


