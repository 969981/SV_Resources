/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0b384; name: FUN_00b0b384
 */


void FUN_00b0b384(undefined8 *param_1)

{
  short *psVar1;
  GattAttributeUuid *pGVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = &PTR_FUN_04552928;
  param_1[4] = &PTR_LAB_04552968;
  pGVar2 = (GattAttributeUuid *)(param_1 + 0x1601);
  param_1[5] = &PTR_LAB_04552988;
  if (0 < *(int *)pGVar2) {
    uVar8 = nn::bluetooth::UnregisterGattOperationNotification(pGVar2);
    if ((uVar8 & 0x3fffff) == 0x871) goto LAB_00b0b458;
    *(undefined4 *)(param_1 + 0x1603) = 0;
    *(undefined8 *)pGVar2 = 0;
    param_1[0x1602] = 0;
  }
  if (*(int *)((long)param_1 + 0xadf4) == -1) {
    if (*(char *)(param_1 + 0x15be) == '\0') {
      uVar8 = FUN_00b0a7c8(param_1 + 0x162d);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)((long)param_1 + 0xae01) = 0;
      }
    }
    else {
      uVar6 = nn::bluetooth::StopBleScanSmartDevice();
      if ((uVar6 == 0) || (((uVar6 & 0x3ffe00) == 0x32400 && ((uVar6 & 0x1ff) == 0x71)))) {
        *(char *)(param_1 + 0x15be) = '\0';
      }
    }
  }
LAB_00b0b458:
  if (((*PTR_DAT_047d8cc8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar9 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar9;
  if (lVar9 != 0) {
    FUN_01e9418c(lVar9,param_1 + 5);
  }
  if (param_1[0x1687] != 0) {
    nn::os::UnlinkAllMultiWaitHolder((MultiWaitType *)(param_1 + 0x1650));
    nn::os::FinalizeMultiWait((MultiWaitType *)(param_1 + 0x1650));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x1656));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x165e));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x1666));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x166e));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x1676));
    nn::os::FinalizeMultiWaitHolder((MultiWaitHolderType *)(param_1 + 0x167e));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x162d));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1633));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1639));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x163f));
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x1645));
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x164b));
    param_1[0x1687] = 0;
  }
  plVar10 = (long *)param_1[0x1686];
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x1222));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x11dc));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x1196));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x1150));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x110a));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x10c4));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x107e));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x1038));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xff2));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xfac));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xf66));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xf20));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xeda));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xe94));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xe4e));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xe08));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xdc2));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xd7c));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xd36));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xcf0));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xcaa));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xc64));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xc1e));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xbd8));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xb92));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xb4c));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xb06));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xac0));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xa7a));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0xa34));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x9ee));
  nn::bluetooth::GattDescriptor::~GattDescriptor((GattDescriptor *)(param_1 + 0x9a8));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x960));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x919));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x8d2));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x88b));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x844));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x7fd));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x7b6));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x76f));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x728));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x6e1));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x69a));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x653));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x60c));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x5c5));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x57e));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x537));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x4f0));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x4a9));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x462));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x41b));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x3d4));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x38d));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x346));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x2ff));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x2b8));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x271));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x22a));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x1e3));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x19c));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x155));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 0x10e));
  nn::bluetooth::GattCharacteristic::~GattCharacteristic((GattCharacteristic *)(param_1 + 199));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xc0));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xba));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xb4));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xae));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xa8));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xa2));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x9c));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x96));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x90));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x8a));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x84));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x7e));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x78));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x72));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x6c));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x66));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x60));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x5a));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x54));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x4e));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x48));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x42));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x3c));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x36));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x30));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x2a));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x24));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x1e));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x18));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0x12));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 0xc));
  nn::bluetooth::GattService::~GattService((GattService *)(param_1 + 6));
  return;
}


