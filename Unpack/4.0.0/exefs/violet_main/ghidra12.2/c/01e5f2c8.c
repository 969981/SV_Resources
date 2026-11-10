/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5f2c8; name: FUN_01e5f2c8
 */


undefined8
FUN_01e5f2c8(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 param_4,
            undefined4 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long *local_28;
  
  if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0x24a) & 1) != 0)) {
    FUN_0278c758(param_1);
    lVar6 = FUN_0278c9b4();
    param_1[0xe] = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    iVar5 = FUN_0278ca04(lVar6,0x2712,param_2);
    if (((((((iVar5 == 0) && (iVar5 = FUN_0278ca04(param_1[0xe],0x34,1), iVar5 == 0)) &&
           (iVar5 = FUN_0278ca04(param_1[0xe],0xb5,2), iVar5 == 0)) &&
          ((iVar5 = FUN_0278ca04(param_1[0xe],0x4e,0xf), iVar5 == 0 &&
           (iVar5 = FUN_0278ca04(param_1[0xe],0xd,param_5), iVar5 == 0)))) &&
         ((iVar5 = FUN_0278ca04(param_1[0xe],0x4e2b,&LAB_02bdda20), iVar5 == 0 &&
          ((iVar5 = FUN_0278ca04(param_1[0xe],0x54,1), iVar5 == 0 &&
           (iVar5 = FUN_0278ca04(param_1[0xe],0x2711,param_1 + 0x14), iVar5 == 0)))))) &&
        ((param_3 == 0 || (uVar7 = FUN_0278ca7c(param_1,param_3,param_4), (uVar7 & 1) != 0)))) &&
       (uVar7 = FUN_0278cc34(param_1,param_2), (uVar7 & 1) != 0)) {
      FUN_01f7ba08(&local_28,*param_1,&DAT_03d6890c);
      FUN_014eddf8(param_1 + 1,&local_28);
      if (local_28 != (long *)0x0) {
        lVar6 = local_28[6];
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*local_28 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      lVar6 = param_1[1];
      if (lVar6 != 0) {
        pcVar8 = *(code **)(lVar6 + 0x368);
        if (pcVar8 != (code *)0x0) {
          *(undefined8 *)(lVar6 + 0x370) = 0;
          *(undefined8 *)(lVar6 + 0x378) = 0;
          *(undefined8 *)(lVar6 + 0x360) = 0;
          *(undefined8 *)(lVar6 + 0x368) = 0;
          (*pcVar8)(lVar6 + 0x380);
        }
        *(code **)(lVar6 + 0x360) = FUN_0278cfb8;
        *(undefined1 **)(lVar6 + 0x368) = &LAB_02bddb14;
        *(undefined8 **)(lVar6 + 0x380) = param_1;
        *(undefined1 **)(lVar6 + 0x370) = &LAB_02bddb18;
        *(undefined1 **)(lVar6 + 0x378) = &LAB_02bddb24;
        FUN_012e43f8(param_1[1],"HttpThread",0xffffffff,0x10);
        return 1;
      }
      FUN_0278c964(param_1[0xe]);
      FUN_0278c970(param_1);
    }
    else {
      FUN_0278c964(param_1[0xe]);
    }
  }
  return 0;
}


