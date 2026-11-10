/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a042ec; name: FUN_01a042ec
 */


void FUN_01a042ec(undefined8 param_1,undefined1 *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_b0;
  char local_a8 [8];
  undefined8 local_a0;
  long *plStack_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  byte local_77;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  
  *param_2 = 0;
  if (*param_3 == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_014813f4(param_1);
  }
  FUN_01582534(param_1);
  uVar7 = FUN_014813e4();
  uVar8 = FUN_01481400(uVar7,param_3[1]);
  if ((uVar8 & 1) != 0) {
    plVar9 = (long *)FUN_014813f4(param_1,param_3[1]);
    uVar8 = (**(code **)(*plVar9 + 0x200))();
    if (((uVar8 & 1) == 0) || (*(char *)((long)param_3 + 0x27) != '\0')) {
      uVar7 = *(undefined8 *)(param_3 + 4);
      iVar4 = param_3[2];
      uVar10 = *(undefined8 *)(param_3 + 6);
      iVar5 = param_3[8];
      uVar1 = *(undefined1 *)((long)param_3 + 0x21);
      uVar2 = *(undefined1 *)((long)param_3 + 0x23);
      local_90 = 0;
      local_a0 = 0;
      plStack_98 = (long *)0x0;
      FUN_0189372c(&local_88);
      local_a0 = local_b0;
      local_74 = 0;
      local_70._0_4_ = (uint)CONCAT12(uVar2,CONCAT11(uVar2,uVar1));
      plStack_98 = plVar9;
      local_90 = (short)iVar4;
      local_88 = uVar7;
      uStack_80 = uVar10;
      local_78 = (char)iVar5;
      FUN_01461214(param_1);
      uVar7 = FUN_01894b08();
      FUN_01895308(uVar7,local_a8,&local_a0);
      if (local_a8[0] == '\0') {
        if (*(char *)((long)param_3 + 0x22) != '\0') {
          uVar7 = FUN_01243584(param_1);
          FUN_0197495c(uVar7,local_b0);
        }
        iVar4 = param_3[2];
        iVar5 = param_3[9];
        cVar3 = *(char *)((long)param_3 + 0x25);
        uVar1 = *(undefined1 *)((long)param_3 + 0x26);
        local_90 = 0;
        local_a0 = 0;
        plStack_98 = (long *)0x0;
        FUN_0189372c(&local_88);
        local_77 = 0;
        local_70 = (int *)0x0;
        bVar6 = 0;
        local_68 = 0;
        local_a0 = local_b0;
        local_88 = *(undefined8 *)(param_3 + 4);
        uStack_80 = *(undefined8 *)(param_3 + 6);
        plStack_98 = plVar9;
        local_90 = (short)iVar4;
        local_78 = (char)iVar5;
        if (cVar3 == '\0') {
          bVar6 = FUN_018ce3ac(param_3 + 10);
          bVar6 = bVar6 ^ 1;
        }
        local_77 = bVar6 & 1;
        local_70 = param_3 + 10;
        local_68 = uVar1;
        FUN_01461214(param_1);
        uVar7 = FUN_01894b10();
        FUN_018959d4(uVar7,local_a8,&local_a0);
        if (*(char *)((long)param_3 + 0x22) != '\0') {
          uVar7 = FUN_01243584(param_1);
          FUN_018521d8(uVar7,local_b0);
        }
        *param_2 = 1;
      }
    }
  }
  return;
}


