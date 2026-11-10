/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01981974; name: FUN_01981974
 */


void FUN_01981974(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined1 local_38;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_04556288;
  param_1[4] = (long)&PTR_LAB_04556368;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *plVar10 = (long)&PTR_LAB_045563b8;
  param_1[0x17] = (long)&PTR_LAB_04556410;
  *(undefined4 *)(param_1 + 0x18) = 0;
  lVar7 = *param_2;
  param_1[0x19] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  *(undefined4 *)((long)param_1 + 0xb4) = 1;
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar7 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar7;
  if (lVar7 != 0) {
    FUN_00b53ecc(auStack_50,param_1);
    FUN_00c43ef0(lVar7 + 0xf0,auStack_50);
    *(undefined1 *)(lVar7 + 0x108) = local_38;
    *(undefined8 *)(lVar7 + 0x100) = local_40;
    FUN_01f50700(auStack_50);
  }
  return;
}


