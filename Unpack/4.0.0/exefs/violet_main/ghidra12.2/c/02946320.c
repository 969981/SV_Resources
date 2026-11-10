/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02946320; name: FUN_02946320
 */


void FUN_02946320(undefined8 *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined2 local_84;
  undefined4 local_82;
  undefined2 local_7c;
  undefined2 local_7a;
  int local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined5 local_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined7 local_53;
  undefined1 uStack_4c;
  undefined7 uStack_4b;
  
  if (*(int *)(param_1[9] + 0x48) == 0) {
    lVar9 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x18);
    iVar5 = 0;
    if (lVar9 != 0) {
      iVar5 = *(int *)(lVar9 + 0xc);
    }
    if (iVar5 == param_2) {
      plVar6 = (long *)FUN_01021c94(*(undefined8 *)(param_1[1] + 0x30),param_2);
      uVar4 = FUN_02945210(param_1);
      uVar3 = (**(code **)(*plVar6 + 0x140))(plVar6);
      iVar5 = FUN_02944940(uVar3,uVar4);
      lVar9 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x308);
      bVar1 = false;
      if (lVar9 != 0) {
        bVar1 = *(int *)(lVar9 + 0xc) != 0;
      }
      local_84 = 0;
      local_82 = 0x1000101;
      local_70 = 0;
      uStack_6c = 0;
      uStack_68 = 0;
      uStack_63 = 0;
      local_60 = 0;
      uStack_5b = 0;
      local_90 = CONCAT44(param_2,param_2);
      local_86 = FUN_029454c8(*param_1,param_4);
      local_88 = (undefined2)(iVar5 << bVar1);
      local_7c = 0x125;
      local_78 = param_2;
      local_74 = FUN_0107bb74(param_1[9]);
      local_7a = 0x102;
      local_74 = local_74 & 0xffff;
      FUN_0293dcd0(param_1,&local_90);
      plVar7 = (long *)(**(code **)plVar6[5])(plVar6 + 5);
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0)) {
        uVar8 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)PTR_DAT_047d3f08) {
          uVar8 = FUN_01480644(plVar6);
          cVar2 = FUN_021f3cfc(uVar8,param_3);
          if (cVar2 == '\x02') {
            local_90 = 0;
            local_88 = 0;
            FUN_0189372c((long)&local_82 + 2);
            local_70 = 0;
            uStack_6c = 1;
            uStack_68 = 0;
            uStack_63 = 0;
            local_60 = 0;
            uStack_5b = 0;
            uStack_58 = 0;
            local_53 = 0;
            uStack_4c = 0;
            uStack_4b = 0;
            local_90 = CONCAT44(param_2,param_2);
            local_88 = 6;
            FUN_029465c0(param_1,6,plVar6,(long)&local_82 + 2);
            FUN_01a042b0(param_1,&local_90);
          }
          break;
        }
      }
      lVar9 = *(long *)(*(long *)(param_1[7] + 0x78) + 0x288);
      if (((lVar9 != 0) && (*(byte *)(lVar9 + 10) < 2)) &&
         (*(undefined4 *)(lVar9 + 0xc) = 1, *(byte *)(lVar9 + 10) == 1)) {
        *(undefined1 *)(lVar9 + 10) = 2;
      }
      *(undefined4 *)(param_1[9] + 0x48) = 1;
    }
  }
  return;
}


