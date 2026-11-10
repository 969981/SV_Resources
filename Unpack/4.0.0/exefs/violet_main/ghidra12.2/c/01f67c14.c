/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f67c14; name: FUN_01f67c14
 */


uint FUN_01f67c14(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long alStack_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long *local_50;
  undefined1 local_44 [4];
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  
  if ((*(int *)(param_1 + 0xc0) < 5) ||
     ((*(long *)(param_1 + 0x60) != 0 && (uVar7 = FUN_01df4590(), (uVar7 & 1) != 0)))) {
    uVar6 = 0;
  }
  else {
    local_24[0] = *(undefined2 *)(param_1 + 0xaa);
    local_28[0] = *(undefined2 *)(param_1 + 0xac);
    local_44[0] = *(undefined1 *)(param_1 + 0xa8);
    FUN_01f67f40(&local_50,*(undefined8 *)(param_1 + 8),local_24,local_28,local_44,param_1 + 0xb0,
                 param_1 + 0xb8);
    local_170 = *(undefined1 **)(param_1 + 8);
    FUN_01f68010(&local_f0,local_170,&local_170);
    puVar10 = local_f0;
    local_f0 = (undefined1 *)0x0;
    lVar9 = *(long *)(param_1 + 0x60);
    *(undefined1 **)(param_1 + 0x60) = puVar10;
    if (lVar9 == 0) {
      *(undefined1 **)(param_1 + 0x70) = local_e0;
      *(undefined1 **)(param_1 + 0x78) = local_d8;
      *(code **)(param_1 + 0x68) = local_e8;
    }
    else {
      FUN_01f671f8(param_1 + 0x68);
      *(undefined1 **)(param_1 + 0x70) = local_e0;
      *(undefined1 **)(param_1 + 0x78) = local_d8;
      *(code **)(param_1 + 0x68) = local_e8;
      puVar10 = *(undefined1 **)(param_1 + 0x60);
    }
    local_f0 = (undefined1 *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_00d8e6c4(&local_68,param_1 + 0x48);
    local_58 = *(long *)(param_1 + 0x58);
    if (local_58 != 0) {
      lVar9 = *(long *)(local_58 + 0x30);
      if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01f67f20;
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01f67ed4;
    }
    local_70 = local_50;
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[6];
      if (*(long *)(lVar9 + 0x10) == 0) {
LAB_01f67f20:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar9 + 0x1a);
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
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
        *(undefined8 *)(lVar9 + 8) = uVar8;
        *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_01f67ed4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_f0 = &LAB_01f69750;
    local_e8 = FUN_00b69a1c;
    local_e0 = &LAB_00b69a20;
    local_d8 = &LAB_00b69a2c;
    local_170 = &LAB_00b69a38;
    local_168 = FUN_00b69a48;
    local_160 = &LAB_00b69a4c;
    local_158 = &LAB_00b69a58;
    alStack_150[0] = param_1;
    alStack_d0[0] = param_1;
    uVar6 = FUN_01f68124(puVar10,&local_68,&local_70,&local_f0,&local_170);
    pcVar5 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar5)(alStack_150);
    }
    pcVar5 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (undefined1 *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (undefined1 *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar5)(alStack_d0);
    }
    FUN_01f682f0(&local_70);
    FUN_00d8e444(&local_68);
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_50 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return uVar6 & 1;
}


