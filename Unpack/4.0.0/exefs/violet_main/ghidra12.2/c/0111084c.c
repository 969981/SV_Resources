/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111084c; name: FUN_0111084c
 */


undefined8 FUN_0111084c(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  ulong uVar10;
  undefined8 local_b0;
  ulong uStack_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_70;
  ulong uStack_68;
  long local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined8 local_30;
  ulong uStack_28;
  
  FUN_00c9e664(&local_a0,param_1 + 0xe8);
  lVar5 = (**(code **)(*(long *)local_98[9] + 0x68))();
  uVar10 = *(ulong *)(lVar5 + 0x38);
  local_b0 = *(undefined8 *)(lVar5 + 0x30);
  if (local_98 != (long *)0x0) {
    plVar1 = local_98 + 5;
    do {
      lVar5 = *plVar1;
      iVar4 = (int)lVar5 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x60))();
  }
  uStack_a8 = uVar10 & 0xffffffff;
  lVar5 = 1L << (param_2 & 0x3f);
  local_30 = local_b0;
  uStack_28 = uStack_a8;
  memset(&local_a0,0,0x4c);
  local_48 = 0;
  uStack_34 = 0;
  local_40 = 0;
  local_3c = 4;
  uStack_3a = 0;
  uStack_38 = 0;
  local_70 = local_b0;
  uStack_68 = uStack_a8;
  local_50 = lVar5;
  if (((*PTR_DAT_047d9210 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  lVar5 = *(long *)PTR_DAT_047d9218;
  *(long *)PTR_DAT_047d9220 = lVar5;
  lVar5 = *(long *)(lVar5 + 0x30);
  if (lVar5 != 0) {
    lVar5 = *(long *)(lVar5 + 0x30);
    uVar7 = 0;
    if (lVar5 == 0) goto LAB_011109a0;
    uVar6 = FUN_01110a40(lVar5,&local_30,&local_a0);
    if ((((uVar6 & 1) != 0) &&
        ((float)((ulong)local_30 >> 0x20) < (float)((ulong)local_b0 >> 0x20) + 0.5)) &&
       (fVar8 = (float)local_30 - (float)local_b0, fVar9 = (float)uStack_28 - (float)uVar10,
       fVar8 * fVar8 + fVar9 * fVar9 < 4.0)) {
      uVar7 = 1;
      uStack_a8 = uStack_28;
      local_b0 = local_30;
      goto LAB_011109a0;
    }
  }
  uVar7 = 0;
LAB_011109a0:
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = uStack_a8;
    *param_3 = local_b0;
  }
  return uVar7;
}


