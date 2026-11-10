/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029fdd80; name: FUN_029fdd80
 */


void FUN_029fdd80(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined2 local_244;
  undefined *local_240;
  ulong uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_220 [264];
  undefined8 local_118;
  undefined1 auStack_108 [96];
  undefined8 local_a8;
  undefined **ppuStack_a0;
  
  nn::os::LockMutex((MutexType *)(param_3 + 0x130));
  puVar9 = (undefined8 *)**(long **)(param_3 + 0x20);
  puVar1 = (undefined8 *)(*(long **)(param_3 + 0x20))[1];
  if (puVar9 != puVar1) {
    iVar10 = -1;
    iVar3 = -1;
    do {
      if ((iVar10 == -1) && (iVar2 = FUN_029fe008(param_1._0_8_,*puVar9), iVar2 != -1)) {
        if (iVar3 != -1) break;
LAB_029fde24:
        iVar3 = FUN_029fe008(param_2._0_8_,*puVar9);
        if (iVar3 == -1) {
          iVar3 = -1;
          iVar10 = iVar2;
        }
        else {
          iVar10 = -1;
          if (iVar2 != -1) break;
        }
      }
      else {
        iVar2 = iVar10;
        if (iVar3 == -1) goto LAB_029fde24;
      }
      puVar9 = puVar9 + 1;
      iVar2 = iVar10;
    } while (puVar1 != puVar9);
    if ((iVar3 != -1) && (iVar2 != -1)) {
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 8) + 0x130) + 0x38);
      lVar6 = *(long *)(lVar8 + (long)iVar2 * 0x100 + 0x10);
      lVar8 = *(long *)(lVar8 + (long)iVar3 * 0x100 + 0x10);
      if (lVar6 != 0 && lVar8 != 0) {
        uStack_238 = param_1._8_8_ & 0xffffffff;
        local_240 = param_1._0_8_;
        uVar4 = FUN_029fe094(*(undefined8 *)(lVar6 + 0x20),&local_240);
        uStack_238 = param_2._8_8_ & 0xffffffff;
        local_240 = param_2._0_8_;
        uVar5 = FUN_029fe094(*(undefined8 *)(lVar8 + 0x20),&local_240);
        FUN_029fe118(auStack_108);
        FUN_029fe164(auStack_108,uVar4);
        FUN_029fe1f8(auStack_108,uVar5);
        uStack_238 = 0xffffffff;
        uStack_230 = 1;
        memset(auStack_220,0xff,0x104);
        local_118 = 0;
        local_240 = PTR_DAT_047e3310 + 0x10;
        FUN_01e21c18(&local_240,1,0xffffffff);
        FUN_01e21c48(&local_240,1,param_5);
        local_260 = 0;
        local_258 = -0x8000000000000000;
        local_250 = 0xffffffff00000000;
        local_248 = 0x7f7fffee;
        local_244 = 0;
        local_118 = param_6;
        local_a8 = param_6;
        ppuStack_a0 = &local_240;
        FUN_029fe250(*(undefined8 *)(*(long *)(param_3 + 8) + 0x130),auStack_108,&local_260,0);
        FUN_029fed74(param_4,1,&local_260,*(undefined8 *)(param_3 + 8));
        lVar6 = local_258;
        uVar7 = (ulong)local_258._4_4_;
        local_258 = (ulong)local_258._4_4_ << 0x20;
        if ((-1 < lVar6) && (local_260 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_260,uVar7 << 2);
        }
        FUN_029feefc(auStack_108);
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_3 + 0x130));
  return;
}


