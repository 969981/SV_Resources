/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d6c00; name: FUN_031d6c00
 */


undefined4 FUN_031d6c00(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  long local_48;
  ulong *local_40;
  ulong local_38;
  
  iVar6 = FUN_031d6af0();
  if (iVar6 < 0) {
    uVar7 = 0x80040200;
    if (*param_1 != 0) {
      FUN_031e1bb4(&local_48,param_1[1],PTR_DAT_047e5b68);
      lVar5 = local_48;
      if ((local_38 & 1) != 0) {
        plVar8 = (long *)(local_38 & 0xfffffffffffffffe);
        plVar1 = plVar8 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      if (lVar5 != 0) {
        FUN_031d462c(&local_48,lVar5,param_2);
        if (local_48 == 0) {
          if ((local_38 & 1) != 0) {
            plVar8 = (long *)(local_38 & 0xfffffffffffffffe);
            plVar1 = plVar8 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
        else {
          uVar7 = FUN_031e7578(param_1,&local_48);
          puVar9 = local_40;
          while (uVar11 = *puVar9, ((uint)uVar11 >> 8 & 1) == 0) {
            if (((uVar11 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
            goto LAB_031d6d60;
          }
          if ((puVar9 != (ulong *)0x0) &&
             ((code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2] != (code *)0x0)) {
            (*(code *)puVar9[(ulong)(byte)POPCOUNT((char)uVar11) + 2])(local_48,local_40,1);
          }
LAB_031d6d60:
          uVar10 = (uint)*local_40;
          puVar9 = local_40;
          if ((uVar10 >> 0x13 & 1) == 0) {
            do {
              puVar9 = (ulong *)puVar9[1];
              uVar10 = (uint)*puVar9;
            } while ((uVar10 >> 0x13 & 1) == 0);
          }
          uVar11 = CONCAT44(uVar10,uVar10) & 0x7ffff0007ffff;
          (**(code **)(*(long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                     POPCOUNT((char)(uVar11 >> 8)) +
                                                    POPCOUNT((char)(uVar11 >> 0x10))) + 2] + 0x20))
                    ((long *)puVar9[(ulong)(byte)(POPCOUNT((char)uVar11) +
                                                  POPCOUNT((char)(uVar11 >> 8)) +
                                                 POPCOUNT((char)(uVar11 >> 0x10))) + 2],local_48,
                     local_40);
          uVar11 = local_38;
          local_48 = 0;
          local_40 = (ulong *)0x0;
          local_38 = 0;
          if ((uVar11 & 1) != 0) {
            plVar8 = (long *)(uVar11 & 0xfffffffffffffffe);
            plVar1 = plVar8 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          if ((local_38 & 1) != 0) {
            plVar8 = (long *)(local_38 & 0xfffffffffffffffe);
            plVar1 = plVar8 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = (int)lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


