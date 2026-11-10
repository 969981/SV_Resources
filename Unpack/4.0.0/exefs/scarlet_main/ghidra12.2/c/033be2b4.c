/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033be2b4; name: FUN_033be2b4
 */


int FUN_033be2b4(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  void *__dest;
  int local_78;
  undefined4 local_74;
  float local_70 [4];
  int local_44;
  
  iVar9 = 1;
  if (((*(byte *)(param_1 + 0x20) >> 1 & 1) != 0) && (*PTR_DAT_047e6980 == '\0')) {
    plVar13 = *(long **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar9 = (**(code **)(*plVar13 + 0x58))(plVar13,local_70);
    if (iVar9 - 0x2dU < 2) {
      uVar2 = (int)local_70[0] + iVar3;
      uVar10 = (**(code **)(*plVar13 + 0x60))(plVar13);
      if (uVar2 < uVar10) {
        iVar9 = 0x3f;
        goto LAB_033be354;
      }
    }
    else if (iVar9 != 0x11) goto LAB_033be354;
    iVar9 = 1;
  }
LAB_033be354:
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar13 = *(long **)(param_1 + 0x58);
    iVar3 = *(int *)(param_1 + 0x68);
    iVar11 = (**(code **)(*plVar13 + 0x58))(plVar13,&local_44);
    local_78 = 0;
    if (iVar11 == 2) {
      local_74 = 2;
    }
    else {
      (**(code **)(*plVar13 + 0x28))(plVar13,local_70);
      uVar2 = local_44 + iVar3;
      local_78 = (int)((float)uVar2 / local_70[0]);
      local_74 = 0x11;
      if (iVar11 != 0x11) {
        uVar10 = (**(code **)(*plVar13 + 0x60))(plVar13);
        local_74 = 0x11;
        if (uVar2 < uVar10) {
          local_74 = 1;
        }
      }
    }
    FUN_034b49fc(*(undefined8 *)PTR_DAT_047e6988,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x228),
                 param_1,&local_78);
  }
  puVar8 = PTR_DAT_047e2fd0;
  if (iVar9 == 1) {
    lVar12 = *(long *)(param_1 + 0x90);
    if ((lVar12 == 0) || (*(int *)(lVar12 + 0x3c) != 0)) {
      iVar9 = 1;
    }
    else if (*(int *)(lVar12 + 0x28) == *(int *)(lVar12 + 0x24)) {
      iVar9 = 0x3f;
    }
    else {
      bVar6 = false;
      do {
        iVar9 = FUN_033bdc00(param_1);
        if (iVar9 != 0x2d) {
          if ((iVar9 == 0x11) || (iVar9 == 0x2e)) {
            iVar9 = 0x3f;
            if (!bVar6) {
              return 0x3f;
            }
          }
          else {
            iVar9 = 2;
            if (!bVar6) {
              return 2;
            }
          }
          goto LAB_033be574;
        }
        uVar10 = *(uint *)(param_1 + 0xb4);
        lVar12 = *(long *)(param_1 + 0x90);
        uVar2 = uVar10;
        if (*(uint *)(param_1 + 0x98) <= uVar10) {
          uVar2 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0xb4) = uVar10 - uVar2;
        __dest = (void *)(*(long *)(lVar12 + 0x18) + (ulong)*(ushort *)(lVar12 + 0x20) * 0x5f0);
        uVar10 = *(uint *)(param_1 + 0xe0);
        uVar4 = *(undefined1 *)(param_1 + 0xb8);
        memcpy(__dest,*(void **)(param_1 + 0xd8),(ulong)uVar10);
        *(uint *)((long)__dest + 0x5e4) = uVar10;
        *(uint *)((long)__dest + 0x5e8) = uVar2;
        *(undefined1 *)((long)__dest + 0x5ec) = uVar4;
        uVar10 = *(uint *)(lVar12 + 0x28);
        uVar2 = *(ushort *)(lVar12 + 0x20) + 1;
        sVar7 = 0;
        if (uVar10 != 0) {
          sVar7 = (short)(uVar2 / uVar10);
        }
        *(short *)(lVar12 + 0x20) = (short)uVar2 - sVar7 * (short)uVar10;
        piVar1 = (int *)(lVar12 + 0x24);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(undefined1 *)(param_1 + 0xb8) = 0;
        if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
          (**(code **)(puVar8 + 0x30))(5);
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        bVar6 = true;
      } while (*(int *)(*(long *)(param_1 + 0x90) + 0x28) !=
               *(int *)(*(long *)(param_1 + 0x90) + 0x24));
      iVar9 = 0x3f;
LAB_033be574:
      nn::os::SignalEvent((EventType *)(PTR_DAT_047e6970 + 0xa38));
    }
  }
  return iVar9;
}


