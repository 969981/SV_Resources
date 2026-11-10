/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b0aa7c; name: FUN_00b0aa7c
 */


long * FUN_00b0aa7c(undefined8 param_1,long *param_2)

{
  MultiWaitHolderType *pMVar1;
  MultiWaitHolderType *pMVar2;
  MultiWaitHolderType *pMVar3;
  MultiWaitHolderType *pMVar4;
  MultiWaitHolderType *pMVar5;
  MultiWaitHolderType *pMVar6;
  MultiWaitType *pMVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb448,8);
  puVar8 = PTR_DAT_047d66f8;
  if (plVar11 == (long *)0x0) {
    (**(code **)(*param_2 + 0xe8))(param_2);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  plVar11[2] = 0;
  *(undefined4 *)(plVar11 + 3) = 0;
  *plVar11 = (long)(puVar8 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar12 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar12 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar13 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *plVar11 = (long)&PTR_LAB_045529a8;
  plVar11[1] = lVar13;
  plVar11[4] = (long)&PTR_LAB_045529d8;
  if (((DAT_04839380 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04839380), iVar9 != 0)) {
    FUN_00100190(&LAB_00b0a8ac,&DAT_04839370,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839380);
  }
  DAT_04839378 = 1;
  plVar11[5] = (long)&PTR_LAB_04552988;
  *plVar11 = (long)&PTR_FUN_04552928;
  plVar11[4] = (long)&PTR_LAB_04552968;
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 6));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xc));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x12));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x18));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x1e));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x24));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x2a));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x30));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x36));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x3c));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x42));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x48));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x4e));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x54));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x5a));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x60));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x66));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x6c));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x72));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x78));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x7e));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x84));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x8a));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x90));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x96));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0x9c));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xa2));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xa8));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xae));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xb4));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xba));
  nn::bluetooth::GattService::GattService((GattService *)(plVar11 + 0xc0));
  *(undefined2 *)(plVar11 + 0xc6) = 0;
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 199));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x10e));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x155));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x19c));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x1e3));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x22a));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x271));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x2b8));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x2ff));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x346));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x38d));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x3d4));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x41b));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x462));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x4a9));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x4f0));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x537));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x57e));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x5c5));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x60c));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x653));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x69a));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x6e1));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x728));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x76f));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x7b6));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x7fd));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x844));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x88b));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x8d2));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x919));
  nn::bluetooth::GattCharacteristic::GattCharacteristic((GattCharacteristic *)(plVar11 + 0x960));
  *(undefined2 *)(plVar11 + 0x9a7) = 0;
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x9a8));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x9ee));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xa34));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xa7a));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xac0));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xb06));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xb4c));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xb92));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xbd8));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xc1e));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xc64));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xcaa));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xcf0));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xd36));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xd7c));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xdc2));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xe08));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xe4e));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xe94));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xeda));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xf20));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xf66));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xfac));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0xff2));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x1038));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x107e));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x10c4));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x110a));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x1150));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x1196));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x11dc));
  nn::bluetooth::GattDescriptor::GattDescriptor((GattDescriptor *)(plVar11 + 0x1222));
  *(undefined2 *)(plVar11 + 0x1268) = 0;
  *(undefined4 *)(plVar11 + 0x1603) = 0;
  plVar11[0x1601] = 0;
  plVar11[0x1602] = 0;
  *(undefined1 *)(plVar11 + 0x1688) = 0;
  plVar11[0x1686] = 0;
  plVar11[0x1687] = 0;
  memset(plVar11 + 0x1269,0,0x102);
  memset((void *)((long)plVar11 + 0x944c),0,0x19a6);
  *(undefined8 *)((long)plVar11 + 0xadf4) = 0;
  *(undefined2 *)((long)plVar11 + 0xadfc) = 0;
  memset(plVar11 + 0x15c0,0,0x206);
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar12 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar12;
  if (lVar12 != 0) {
    FUN_01793e80(lVar12,plVar11 + 5);
  }
  nn::bluetooth::InitializeBle();
  memset((void *)((long)plVar11 + 0xb01c),0,0x148);
  if (plVar11[0x1687] == 0) {
    plVar11[0x1687] = (long)plVar11;
    nn::bluetooth::AcquireBleScanEvent((SystemEventType *)(plVar11 + 0x162d));
    nn::bluetooth::AcquireBleConnectionStateChangedEvent((SystemEventType *)(plVar11 + 0x1633));
    nn::bluetooth::AcquireBleServiceDiscoveryEvent((SystemEventType *)(plVar11 + 0x1639));
    nn::bluetooth::AcquireBleMtuConfigEvent((SystemEventType *)(plVar11 + 0x163f));
    nn::bluetooth::AcquireBleGattOperationEvent((SystemEventType *)(plVar11 + 0x1645));
    nn::os::InitializeEvent((EventType *)(plVar11 + 0x164b),1,0);
    pMVar1 = (MultiWaitHolderType *)(plVar11 + 0x1656);
    nn::os::InitializeMultiWaitHolder(pMVar1,(SystemEventType *)(plVar11 + 0x162d));
    nn::os::SetMultiWaitHolderUserData(pMVar1,0x3d5b748);
    pMVar2 = (MultiWaitHolderType *)(plVar11 + 0x165e);
    nn::os::InitializeMultiWaitHolder(pMVar2,(SystemEventType *)(plVar11 + 0x1633));
    nn::os::SetMultiWaitHolderUserData(pMVar2,0x3d5b74c);
    pMVar3 = (MultiWaitHolderType *)(plVar11 + 0x1666);
    nn::os::InitializeMultiWaitHolder(pMVar3,(SystemEventType *)(plVar11 + 0x1639));
    nn::os::SetMultiWaitHolderUserData(pMVar3,0x3d5b750);
    pMVar4 = (MultiWaitHolderType *)(plVar11 + 0x166e);
    nn::os::InitializeMultiWaitHolder(pMVar4,(SystemEventType *)(plVar11 + 0x163f));
    nn::os::SetMultiWaitHolderUserData(pMVar4,0x3d5b754);
    pMVar5 = (MultiWaitHolderType *)(plVar11 + 0x1676);
    nn::os::InitializeMultiWaitHolder(pMVar5,(SystemEventType *)(plVar11 + 0x1645));
    nn::os::SetMultiWaitHolderUserData(pMVar5,0x3d5b758);
    pMVar6 = (MultiWaitHolderType *)(plVar11 + 0x167e);
    nn::os::InitializeMultiWaitHolder(pMVar6,(EventType *)(plVar11 + 0x164b));
    nn::os::SetMultiWaitHolderUserData(pMVar6,0x3d5b75c);
    pMVar7 = (MultiWaitType *)(plVar11 + 0x1650);
    nn::os::InitializeMultiWait(pMVar7);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar1);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar2);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar3);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar4);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar5);
    nn::os::LinkMultiWaitHolder(pMVar7,pMVar6);
  }
  *(undefined4 *)(plVar11 + 3) = 0x8b448;
  plVar11[1] = (long)param_2;
  plVar11[2] = (long)plVar11;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  return plVar11;
}


