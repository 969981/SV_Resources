/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00226100; name: FUN_00226100
 */


void FUN_00226100(long param_1,byte param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 local_89;
  long *local_80;
  undefined7 local_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined6 local_68;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined6 uStack_60;
  undefined1 uStack_5a;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  byte local_50;
  undefined5 local_4f;
  undefined2 uStack_4a;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined8 local_40;
  byte local_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  byte local_14 [4];
  
  local_14[0] = param_2 & 1;
  local_80 = *(long **)(param_1 + 0x38);
  uVar6 = (**(code **)(*local_80 + 0x10))(local_80,&local_80,local_14);
  if ((uVar6 & 1) != 0) {
    if (local_80 != *(long **)(param_1 + 0x38)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar8 = *(undefined8 *)(param_1 + 0x49);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    plVar3 = *(long **)(param_1 + 0x28);
    local_58 = *(undefined4 *)(param_1 + 0x40);
    local_50 = *(byte *)(param_1 + 0x48);
    local_89 = (undefined1)((ulong)uVar8 >> 0x38);
    local_40 = *(undefined8 *)(param_1 + 0x58);
    local_38 = *(byte *)(param_1 + 0x60);
    uStack_98 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x68) >> 8);
    local_99 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x61) >> 0x38);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    local_28 = *(undefined8 *)(param_1 + 0x70);
    uStack_54 = 0;
    uStack_52 = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x4a) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x62) = 0;
    uStack_60 = (undefined6)((ulong)uVar9 >> 8);
    uStack_5a = (undefined1)((ulong)uVar9 >> 0x38);
    local_4f = (undefined5)uVar8;
    uStack_4a = (undefined2)((ulong)uVar8 >> 0x28);
    uVar8 = CONCAT17(uStack_5a,CONCAT61(uStack_60,local_89));
    uStack_60 = 0;
    uStack_5a = 0;
    local_68 = 0;
    uStack_62 = 0;
    uStack_61 = 0;
    uStack_48 = local_89;
    uStack_47 = (undefined7)((ulong)uVar8 >> 8);
    local_78 = 0;
    uStack_71 = 0;
    uStack_70 = 0;
    local_37 = (undefined7)*(undefined8 *)(param_1 + 0x61);
    uStack_30 = local_99;
    uStack_2f = uStack_98;
    (**(code **)*puVar2)(puVar2,&local_58);
    if ((local_38 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_28);
    }
    if ((local_50 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_40);
    }
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0x120))
              (*(long **)PTR_DAT_047cbb08,*(undefined8 *)(param_1 + 0x18));
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        lVar7 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}


