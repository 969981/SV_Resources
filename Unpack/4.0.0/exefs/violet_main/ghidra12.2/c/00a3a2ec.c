/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a3a2ec; name: FUN_00a3a2ec
 */


void FUN_00a3a2ec(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR_DAT_047d8520;
  if ((((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) ||
      (uVar3 = FUN_02bb6e1c(), (uVar3 & 1) == 0)) || (*(long *)(lVar9 + 0x30) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ScreenCapture::IsCompressedBuffer()","AddLocalNetworkSharePictureData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/ui_utility/network_share_picture_data.cpp"
               ,0xef,"CompressedBuffer Faild");
  }
  iVar1 = *(int *)PTR_DAT_047d8e18;
  iVar2 = *(int *)PTR_DAT_047d8e10;
  uVar3 = (ulong)(uint)(iVar2 * iVar1 * 3) / 6;
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar3,8);
  uVar5 = FUN_00a3c3f8();
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (uVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), (int)uVar5 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    uVar5 = __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar9 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar9;
  if ((lVar9 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
  }
  FUN_00a3a080(uVar5,uVar7,uVar4,iVar2,iVar1);
  plVar8 = *(long **)(param_1 + 8);
  uVar6 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar6 & 1) != 0) {
    lVar9 = FUN_00c4e600();
    if (0 < *(int *)(lVar9 + 0x12c8)) {
      FUN_00c48fe8(plVar8,uVar4,uVar3,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00a3a414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,uVar3,8);
  return;
}


