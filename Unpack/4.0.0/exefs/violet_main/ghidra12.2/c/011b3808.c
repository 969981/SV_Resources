/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b3808; name: FUN_011b3808
 */


undefined8 *
FUN_011b3808(undefined8 param_1,long *param_2,undefined8 *param_3,undefined4 *param_4,ulong *param_5
            ,undefined4 *param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long local_78;
  undefined4 local_70;
  undefined8 local_6c;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,8);
  if (puVar6 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  uVar1 = *param_4;
  uVar12 = *param_5;
  uVar2 = *param_6;
  uVar3 = *param_7;
  uVar10 = *param_8;
  FUN_00cf38a8(puVar6,*param_3);
  *puVar6 = &PTR_LAB_045d7ca8;
  puVar6[4] = &PTR_LAB_045d7ce8;
  puVar6[0x12] = 0;
  plVar11 = puVar6 + 0x11;
  *plVar11 = 0;
  FUN_011b3a18(puVar6 + 0x13);
  lVar7 = puVar6[0x12];
  lVar8 = *plVar11;
  uVar9 = lVar7 - lVar8 >> 6;
  if (uVar9 < uVar12) {
    FUN_00edaf4c(plVar11,uVar12 - uVar9);
    lVar8 = puVar6[0x11];
    lVar7 = puVar6[0x12];
  }
  else if (uVar12 < uVar9) {
    lVar7 = lVar8 + uVar12 * 0x40;
    puVar6[0x12] = lVar7;
  }
  local_78 = uVar12 << 6;
  local_6c = 0;
  puVar6[0x10] = lVar7 - lVar8 >> 6;
  local_70 = uVar2;
  FUN_00d560a0(puVar6,&local_78,uVar1,uVar3,uVar10);
  *(undefined4 *)(puVar6 + 3) = 0x800c0;
  puVar6[1] = param_2;
  puVar6[2] = puVar6;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  return puVar6;
}


