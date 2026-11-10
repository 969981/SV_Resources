/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02788d90; name: FUN_02788d90
 */


undefined8 FUN_02788d90(byte param_1,byte param_2)

{
  undefined8 *puVar1;
  long lVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long *local_38;
  undefined4 local_14;
  
  nn::nifm::Initialize();
  DAT_0485e950 = '\x01';
  nn::nifm::SetLocalNetworkMode((bool)(param_1 & 1));
  if (((DAT_0485e950 != '\x01') || (uVar7 = nn::nifm::IsNetworkAvailable(), (uVar7 & 1) == 0)) &&
     ((DAT_0485e940 == 0 || ((*(byte *)(DAT_0485e940 + 0x24a) & 1) != 0)))) {
    local_14 = 0x4000;
    FUN_02788f04(&local_38,DAT_0485e948,&local_14);
    FUN_014eddf8(&DAT_0485e940,&local_38);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[6];
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar6) {
          *psVar3 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    lVar9 = DAT_0485e940;
    pcVar8 = *(code **)(DAT_0485e940 + 0x368);
    if (pcVar8 != (code *)0x0) {
      puVar1 = (undefined8 *)(DAT_0485e940 + 0x360);
      lVar2 = DAT_0485e940 + 0x380;
      *(undefined8 *)(DAT_0485e940 + 0x370) = 0;
      *(undefined8 *)(lVar9 + 0x378) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar9 + 0x368) = 0;
      (*pcVar8)(lVar2);
    }
    lVar2 = DAT_0485e940;
    *(code **)(lVar9 + 0x360) = FUN_0278910c;
    *(byte *)(lVar9 + 0x380) = param_2 & 1;
    *(undefined1 **)(lVar9 + 0x368) = &LAB_02bdb6bc;
    *(undefined1 **)(lVar9 + 0x370) = &LAB_02bdb6c0;
    *(undefined1 **)(lVar9 + 0x378) = &LAB_02bdb6cc;
    FUN_012e43f8(lVar2,"SubmitNetworkUseRequest",0xffffffff,0x10);
  }
  return 1;
}


