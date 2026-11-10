/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011d1028; name: FUN_011d1028
 */


void FUN_011d1028(long param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  short sVar9;
  undefined8 uVar10;
  char *__src;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long *local_170;
  undefined4 local_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined4 local_138;
  char acStack_130 [100];
  char acStack_cc [12];
  ulong local_c0 [8];
  char local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(uint *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = param_3;
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x4c) = param_4;
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar5 + 0x30) = DAT_04859430;
  }
  local_78 = *(undefined8 *)(lVar5 + 0x30);
  local_70 = *(undefined8 *)(lVar5 + 0x38);
  *(undefined8 *)(lVar5 + 0x30) = uVar10;
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  *(undefined2 *)(lVar5 + 0x38) = 1;
  snprintf(local_80,8,"%04d",(ulong)param_2);
  uVar12 = 0;
  do {
    __src = (&PTR_s_world_data_pokemon_pokemon_conta_045468b0)[uVar12 * 3];
    local_c0[6] = 0;
    local_c0[7] = 0;
    local_c0[2] = 0;
    local_c0[3] = 0;
    local_c0[4] = 0;
    local_c0[5] = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    strcat((char *)local_c0,__src);
    strcat((char *)local_c0,local_80);
    if (((*PTR_DAT_047d91f8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d91f8), iVar6 != 0)) {
      FUN_00100190(&LAB_00aa89a4,PTR_DAT_047d9200,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d91f8);
    }
    lVar8 = *(long *)PTR_DAT_047d9200;
    *(long *)PTR_DAT_047d9208 = lVar8;
    if ((((*(long *)(lVar8 + 0x40) != 0) && (*(short *)(*(long *)(lVar8 + 0x40) + 0x1a) != 0)) &&
        (lVar8 = *(long *)(lVar8 + 0x40), lVar8 != 0)) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar9 = *(short *)(lVar8 + 0x1a);
LAB_011d14b0:
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_011d14d4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_011d14d4:
        bVar4 = false;
      }
      if (!bVar4) break;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        plVar11 = (long *)(lVar8 + -0x28);
        switch(uVar12 & 0xffffffff) {
        case 0:
          uVar10 = 7;
          break;
        case 1:
          uVar10 = 9;
          break;
        case 2:
          uVar10 = 10;
          break;
        case 3:
          uVar10 = 3;
          break;
        case 4:
          uVar10 = 2;
          break;
        case 5:
          uVar10 = 4;
          break;
        case 6:
          uVar10 = 1;
          break;
        case 7:
          uVar10 = 5;
          break;
        case 8:
          uVar10 = 6;
          break;
        case 9:
          uVar10 = 8;
          break;
        default:
          goto switchD_011d1514_default;
        }
        FUN_01acb7ec(plVar11,param_2,param_3,param_4,uVar10,acStack_cc);
        local_c0[0] = local_c0[0] & 0xffffffffffffff00;
        strcat((char *)local_c0,__src);
        strcat((char *)local_c0,acStack_cc);
switchD_011d1514_default:
        lVar8 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar9 == 0) goto LAB_011d1650;
      }
    }
LAB_011d1174:
    snprintf(acStack_130,100,"%s%s",local_c0,".bfbs");
    FUN_011d170c(&local_160,acStack_130);
    lVar8 = param_1 + uVar12 * 0x40;
    uVar7 = FUN_00dc5c18(lVar8 + 0x50,1,&local_160,0,0);
    if (((uVar7 & 1) != 0) && (plVar11 = *(long **)(lVar8 + 0x70), plVar11 != (long *)0x0)) {
      lVar13 = plVar11[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_011d1698;
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar10;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar9 == -1) goto LAB_011d16b8;
      lVar13 = plVar11[6];
      psVar1 = (short *)(lVar13 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar13 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) goto LAB_011d1650;
    }
    snprintf(acStack_130,100,"%s%s",local_c0,&DAT_03c202d3);
    FUN_011d170c(&local_190,acStack_130);
    plVar11 = local_160;
    local_160 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    plVar11 = local_140;
    local_160 = local_190;
    local_190 = (long *)0x0;
    uStack_158 = uStack_188;
    local_140 = (long *)0x0;
    local_150 = local_180;
    uStack_148 = uStack_178;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    local_140 = local_170;
    local_138 = local_168;
    uVar7 = FUN_00dc5c18(lVar8 + 0x2d0,1,&local_160,0,0);
    if (((uVar7 & 1) != 0) && (plVar11 = *(long **)(lVar8 + 0x2f0), plVar11 != (long *)0x0)) {
      lVar8 = plVar11[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_011d1698:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar10;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar9 == -1) {
LAB_011d16b8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      lVar8 = plVar11[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar9 == 0) {
LAB_011d1650:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    *(undefined1 *)(param_1 + uVar12 * 0xa0 + 0x5e8) = 0;
    if (local_140 != (long *)0x0) {
      (**(code **)(*local_140 + 0x20))();
    }
    if (local_160 != (long *)0x0) {
      (**(code **)(*local_160 + 0x20))();
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == 10) {
      *(undefined8 *)(lVar5 + 0x30) = local_78;
      *(undefined2 *)(lVar5 + 0x38) = (undefined2)local_70;
      return;
    }
  } while( true );
  sVar9 = sVar2;
  if (sVar2 == 0) goto LAB_011d1174;
  goto LAB_011d14b0;
}


