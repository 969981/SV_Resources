/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01360220; name: FUN_01360220
 */


void FUN_01360220(long param_1)

{
  short *psVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  short sVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined1 *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_18;
  
  lVar9 = *(long *)(param_1 + 0x50);
  if (lVar9 != 0) {
    if (((*(byte *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
       (sVar5 = FUN_00cf44f4(), sVar5 != 0)) {
      puVar4 = PTR_DAT_047d90c0;
      if (*(long *)PTR_DAT_047d90c0 != 0) {
        uVar6 = FUN_00cf4cfc(*(undefined8 *)(lVar9 + 0x70));
        lVar7 = *(long *)puVar4;
        if (((uVar6 & 1) == 0) &&
           ((*(ushort *)(*(long *)(*(long *)(lVar9 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
          FUN_014c0fb4(lVar7,0,lVar9);
        }
        else if (lVar7 != 0) {
          FUN_01360bf4(lVar7,0,0);
        }
      }
      local_18 = *(long **)(param_1 + 0x30);
      if (local_18 != (long *)0x0) {
        lVar9 = local_18[6];
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar5 == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
          *(undefined8 *)(lVar9 + 8) = uVar8;
          *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
        }
        else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      local_50 = 0xb5deafa3310aaa52;
      pcStack_48 = "T_poke_name_00";
      local_40 = 0xe;
      local_38 = (long *)0x0;
      local_70 = &DAT_e6b50e272d8cd992;
      puStack_68 = &DAT_03c3b7e8;
      local_60 = 3;
      local_58 = (long *)0x0;
      local_90 = 0xf3a3439af010602;
      pcStack_88 = "msg_ui_box_pokename";
      local_80 = 0x13;
      local_78 = (long *)0x0;
      FUN_0136049c(&local_18,&local_50,&local_70,&local_90);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_58 != (long *)0x0) {
        (**(code **)(*local_58 + 0x20))();
      }
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if (local_18 != (long *)0x0) {
        lVar9 = local_18[6];
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar5 = *psVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar3) {
            *psVar1 = sVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (sVar5 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_18 + 0x50))();
        }
        else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}


