/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0030d680; name: FUN_0030d680
 */


void FUN_0030d680(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong *puVar10;
  long local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = *(long **)(param_2 + 0xd0);
  if (plVar5 != (long *)0x0) {
    plVar1 = (long *)(param_2 + 0xe0);
    plVar2 = (long *)(param_1 + 8);
    do {
      if (*(int *)(param_2 + 0xd8) == (int)plVar5[1]) {
        lVar7 = *(long *)(param_2 + 0x100);
        if (*(long *)(param_2 + 0x108) < lVar7) {
          plVar5 = *(long **)(param_1 + 0x1160);
          if (plVar5 == (long *)0x0) {
            plVar5 = (long *)FUN_0038c780(0x18);
          }
          else {
            *(long *)(param_1 + 0x1160) = plVar5[2];
          }
          *plVar5 = lVar7;
          plVar5[1] = *(long *)(param_2 + 0x138);
          *(undefined8 *)(param_2 + 0x138) = 0;
          bVar4 = (*(uint *)(*(long *)(param_2 + 0xd0) + 0xc) & 4) != 0;
          plVar1 = (long *)(param_2 + 0xa98);
          if (bVar4) {
            plVar1 = (long *)(param_2 + 0xaa0);
          }
          plVar5[2] = *plVar1;
          lVar7 = 0xa98;
          if (bVar4) {
            lVar7 = 0xaa0;
          }
          *(long **)(param_2 + lVar7) = plVar5;
        }
        else {
          puVar10 = *(ulong **)(param_2 + 0x138);
          *(undefined8 *)(param_2 + 0x138) = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar6 = *puVar10 - 0x10000;
            *puVar10 = uVar6;
            if (PTR_DAT_047ccac0[0x10] != '\0') {
              FUN_00352270(0);
              uVar6 = *puVar10;
            }
            if (uVar6 >> 0x10 == 0) {
              if (((uVar6 & 1) == 0) || (*(int *)(param_1 + 0x38) == 0)) {
                FUN_0035351c(&local_80,puVar10,puVar10[3]);
              }
              else {
                *puVar10 = 0;
                if (*(long *)(param_1 + 0x11d0) == 0) {
                  puVar8 = (undefined8 *)(param_1 + 0x11d0);
                }
                else {
                  puVar8 = *(undefined8 **)(param_1 + 0x11d8);
                }
                *puVar8 = puVar10;
                *(ulong **)(param_1 + 0x11d8) = puVar10;
              }
            }
          }
        }
        puVar8 = *(undefined8 **)(param_2 + 0xd0);
        *(undefined8 *)(param_2 + 0xd0) = 0;
        if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 0030d8f4 to 0030d8f7 has its CatchHandler @ 0030d95c */
          (**(code **)*puVar8)();
        }
        return;
      }
      *(undefined1 **)(param_2 + 0x120) = &LAB_0030d970;
      *(long *)(param_2 + 0x128) = param_2;
      *(undefined8 *)(param_2 + 0x130) = 0;
      uVar6 = (**(code **)(*plVar5 + 0x18))(plVar5,0xffffffff,param_2 + 0x118);
      if ((uVar6 & 1) != 0) {
        lVar7 = (**(code **)(**(long **)(param_2 + 0xd0) + 0x20))(*(long **)(param_2 + 0xd0),plVar1)
        ;
        if (lVar7 == 0) {
          if (*plVar1 == 0) {
            uVar9 = (uint)*(byte *)(param_2 + 0xe8);
          }
          else {
            uVar9 = (uint)*(undefined8 *)(param_2 + 0xe8);
          }
          *(uint *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + uVar9;
          uStack_78 = *(undefined8 *)(param_2 + 0xe8);
          local_80 = *plVar1;
          uStack_68 = *(undefined8 *)(param_2 + 0xf8);
          uStack_70 = *(undefined8 *)(param_2 + 0xf0);
          FUN_003686e0(param_2 + 0x970,&local_80);
          if ((*(int *)(param_2 + 0xa0) != 0) &&
             ((*(char *)(param_2 + 0x1b4) == '\0' ||
              ((ulong)*(uint *)(param_1 + 0xd78) < *(ulong *)(param_2 + 0x990))))) {
            if ((*(long *)(param_1 + 0x40) == 0) &&
               (uVar6 = FUN_003191f0(param_1,param_2), (uVar6 & 1) != 0)) {
              plVar5 = *(long **)(param_2 + 0x10);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
                if (bVar4) {
                  *plVar5 = *plVar5 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            if (*(int *)(param_1 + 0x38) == 1) {
              *(undefined4 *)(param_1 + 0x38) = 2;
            }
            else if (*(int *)(param_1 + 0x38) == 0) {
              *(undefined4 *)(param_1 + 0x38) = 1;
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar4) {
                  *plVar2 = *plVar2 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              *(undefined1 **)(param_1 + 0xd0) = &LAB_003080d0;
              *(long *)(param_1 + 0xd8) = param_1;
              *(undefined8 *)(param_1 + 0xe0) = 0;
              thunk_FUN_00350da0(*(undefined8 *)(param_1 + 0x28),param_1 + 200,0);
            }
          }
        }
        else {
          puVar8 = *(undefined8 **)(param_2 + 0xd0);
          *(undefined8 *)(param_2 + 0xd0) = 0;
          if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 0030d750 to 0030d753 has its CatchHandler @ 0030d960 */
            (**(code **)*puVar8)();
          }
          FUN_00308f80(param_1,param_2,lVar7);
        }
      }
      plVar5 = *(long **)(param_2 + 0xd0);
    } while (plVar5 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


