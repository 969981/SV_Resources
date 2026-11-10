/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e2bd50; name: FUN_02e2bd50
 */


undefined8 FUN_02e2bd50(long param_1,long *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  ushort local_78;
  undefined1 local_76;
  undefined1 uStack_75;
  undefined2 local_74;
  undefined1 uStack_72;
  undefined5 uStack_71;
  undefined3 local_6c;
  undefined5 uStack_69;
  undefined3 local_64;
  undefined5 uStack_61;
  undefined3 local_5c;
  undefined5 uStack_59;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  uVar6 = (**(code **)(*param_2 + 0x90))(param_2,0x3fd,1);
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x98))(param_2);
    uStack_79 = 0;
    local_78 = 0;
    local_76 = 0;
    local_74 = 0;
    uStack_72 = 0;
    uStack_71 = 0;
    local_6c = 0;
    uStack_69 = 0;
    local_64 = 0;
    uStack_61 = 0;
    local_5c = 0;
    uStack_59 = 0;
    local_54 = 0;
    uStack_7c = 2;
    uStack_7a = 1;
    local_80 = (int)uVar6;
    FUN_019079dc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xc20),auStack_48,&local_80);
    FUN_01248470(*(undefined8 *)(param_1 + 0x20),param_2,0x17);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_019bca0c(uVar8,uVar2);
    lVar9 = *(long *)(param_1 + 0x20);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0129aff0(*(undefined8 *)(lVar9 + 0x18),0xbc,uVar2);
    lVar9 = param_2[9];
    puVar10 = (undefined8 *)(lVar9 + 0x28);
    plVar7 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_047dcd50 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar5 != 0)) {
      uVar8 = FUN_01af5520();
      *(undefined8 *)PTR_DAT_047dcd58 = uVar8;
      __cxa_guard_release(PTR_DAT_047dcd50);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047dcd58) {
        lVar9 = *(long *)(lVar9 + 0x48);
        if (lVar9 != 0) {
          local_74 = 0;
          uStack_7c = 0;
          uStack_7a = 0;
          uStack_79 = 0;
          local_78 = 0;
          local_76 = 0;
          uStack_75 = 0;
          uStack_72 = 1;
          uStack_71 = 0;
          local_6c = 0;
          uStack_69 = 0;
          local_64 = 0;
          uStack_61 = 0;
          local_5c = 0;
          uStack_59 = 0;
          local_54 = 0;
          uStack_50 = 0;
          local_80 = (int)uVar6;
          uVar1 = FUN_0113b8a0(*(undefined8 *)(lVar9 + 0x70));
          if (0x136 < uVar1) {
            uVar2 = FUN_00cf44f4(*(undefined8 *)(lVar9 + 0x70));
            uVar3 = FUN_00cf41a8(*(undefined8 *)(lVar9 + 0x70));
            uVar4 = FUN_00e99784(lVar9);
            uVar1 = FUN_0143b78c(uVar2,uVar3,uVar4);
          }
          local_78 = uVar1;
          uStack_7c = (undefined2)uVar6;
          uStack_7a = (undefined1)(uVar6 >> 0x10);
          uStack_79 = (undefined1)(uVar6 >> 0x18);
          local_76 = 6;
          uStack_72 = 0;
          FUN_0293ff0c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0xa60),auStack_48,&local_80);
        }
        break;
      }
    }
    FUN_02e0d16c(*(undefined8 *)(param_1 + 0x38),param_2);
    FUN_029849dc(param_1,0x17,uVar6 & 0xffffffff);
    uVar8 = 1;
  }
  return uVar8;
}


