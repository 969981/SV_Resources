/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034d050; name: FUN_0034d050
 */


int FUN_0034d050(int param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 == 2) {
    bVar3 = true;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 0) {
        return 0;
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar7 = 0;
        do {
          puVar1 = (undefined8 *)(*(long *)(param_2 + 8) + uVar7 * 0x20);
          if (((undefined8 *)*puVar1 != (undefined8 *)0x0) &&
             (plVar6 = *(long **)*puVar1, plVar6 != (long *)0x0)) {
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *plVar6 = *plVar6 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          uStack_38 = puVar1[1];
          local_40 = *puVar1;
          FUN_003686e0(param_3,&local_40);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulong *)(param_2 + 0x10));
      }
      return 1;
    }
    bVar3 = false;
  }
  uVar7 = *(ulong *)(param_3 + 0x10);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  uStack_78 = 0;
  local_80 = 0;
  local_70 = &LAB_0034d380;
  puStack_68 = &LAB_0034d390;
  uVar5 = 0xf;
  if (bVar3) {
    uVar5 = 0x1f;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  iVar4 = FUN_0037fff0(&local_b0,uVar5,"1.2.11.f-NINTENDO-SDK-v1",0x70);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar4 = FUN_0034d3a0(&local_b0,param_2,param_3,PTR_FUN_047ccdb8);
  if (iVar4 == 0) {
    if (uVar7 < *(ulong *)(param_3 + 0x10)) {
      lVar9 = uVar7 << 5;
      uVar10 = uVar7;
      do {
        FUN_0034d5b0(*(long *)(param_3 + 8) + lVar9);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0x20;
      } while (uVar10 < *(ulong *)(param_3 + 0x10));
    }
    *(ulong *)(param_3 + 0x10) = uVar7;
    *(undefined8 *)(param_3 + 0x20) = uVar8;
  }
  FUN_003822f0(&local_b0);
  return iVar4;
}


