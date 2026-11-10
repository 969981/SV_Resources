/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b1a0; name: FUN_0278b1a0
 */


undefined8 FUN_0278b1a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  short *psVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_24;
  
  pcVar8 = DAT_0485eab8;
  if ((DAT_0485eb58 == 0) || ((DAT_0485eaa0 != 0 && ((*(byte *)(DAT_0485eaa0 + 0x24a) & 1) == 0))))
  {
    uVar7 = 0;
  }
  else {
    if (DAT_0485eab8 != (code *)0x0) {
      DAT_0485eac0 = 0;
      DAT_0485eac8 = 0;
      DAT_0485eab0 = 0;
      DAT_0485eab8 = (code *)0x0;
      (*pcVar8)(&DAT_0485ead0);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,&DAT_0485ead0);
      DAT_0485eac8 = param_2[3];
      DAT_0485eab8 = (code *)param_2[1];
      DAT_0485eab0 = *param_2;
      DAT_0485eac0 = param_2[2];
    }
    local_24 = 0x4000;
    FUN_02788f04(&local_58,DAT_0485eb58,&local_24);
    FUN_014eddf8(&DAT_0485eaa0,&local_58);
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[6];
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
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
    lVar9 = DAT_0485eaa0;
    local_58 = (long *)*param_1;
    local_50 = param_1[1];
    local_48 = param_1[2];
    pcVar8 = *(code **)(DAT_0485eaa0 + 0x368);
    if (pcVar8 != (code *)0x0) {
      puVar1 = (undefined8 *)(DAT_0485eaa0 + 0x360);
      lVar2 = DAT_0485eaa0 + 0x380;
      *(undefined8 *)(DAT_0485eaa0 + 0x370) = 0;
      *(undefined8 *)(lVar9 + 0x378) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar9 + 0x368) = 0;
      (*pcVar8)(lVar2);
    }
    lVar2 = DAT_0485eaa0;
    *(code **)(lVar9 + 0x360) = FUN_0278b660;
    *(undefined1 **)(lVar9 + 0x368) = &LAB_02bdcd14;
    *(undefined8 *)(lVar9 + 0x390) = local_48;
    *(long **)(lVar9 + 0x380) = local_58;
    *(undefined8 *)(lVar9 + 0x388) = local_50;
    *(undefined1 **)(lVar9 + 0x370) = &LAB_02bdcd18;
    *(undefined1 **)(lVar9 + 0x378) = &LAB_02bdcd2c;
    FUN_012e43f8(lVar2,"NSOLicenseDialogThread",0xffffffff,0x10);
    uVar7 = 1;
  }
  return uVar7;
}


