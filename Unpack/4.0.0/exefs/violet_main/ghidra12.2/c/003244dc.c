/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003244dc; name: FUN_003244dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003244dc(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  
  lVar12 = *(long *)(param_1 + 8);
  lVar15 = *(long *)(lVar12 + 0x10);
  lVar7 = FUN_0033a31c(*(undefined8 *)(param_1 + 0x10));
  *(long *)(lVar7 + 0x530) = *(long *)(lVar7 + 0x530) + 1;
  if ((*(byte *)(lVar7 + 0x568) & 1) == 0) {
    if (((param_2 == 0) && (*(long *)(lVar7 + 0x3d8) != 0)) ||
       (uVar10 = (uint)*(char *)(lVar7 + 0x538), *(char *)(lVar7 + 0x538) < '\0')) {
      if ((*(byte *)(lVar15 + 0x240) >> 4 & 1) == 0) {
        *(byte *)(lVar15 + 0x240) = *(byte *)(lVar15 + 0x240) | 0x10;
        if ((*(byte *)(lVar7 + 0x538) >> 1 & 1) != 0) {
          FUN_00377160(lVar15 + 0x2c0);
        }
        if (*(long *)(lVar7 + 0x520) != 0) {
          uVar17 = 0;
          do {
            lVar12 = lVar15 + 0x3c0;
            if ((*(byte *)(lVar15 + 0x3b8) & 1) != 0) {
              lVar12 = *(long *)(lVar15 + 0x3c0);
            }
            FUN_00374ce4(*(undefined8 *)(lVar12 + uVar17 * 8));
            uVar17 = uVar17 + 1;
          } while (uVar17 < *(ulong *)(lVar7 + 0x520));
        }
        if ((*(byte *)(lVar7 + 0x538) >> 3 & 1) != 0) {
          FUN_00377160(lVar15 + 1000);
        }
      }
      if (*(undefined8 **)(lVar15 + 0x108) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar15 + 0x108))();
        plVar16 = *(long **)(lVar15 + 0x110);
        *(undefined8 *)(lVar15 + 0x108) = 0;
        *(undefined8 *)(lVar15 + 0x110) = 0;
        if (plVar16 != (long *)0x0) {
          plVar13 = plVar16 + 1;
          do {
            lVar12 = *plVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x10);
      lVar12 = *(long *)(lVar7 + 0x1e0);
      if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
        lVar12 = *(long *)(lVar7 + 0x1f0);
        if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
           (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
          lVar12 = *(long *)(lVar7 + 0x200);
          if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
             (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
            lVar12 = *(long *)(lVar7 + 0x210);
            if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
               (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
              lVar12 = *(long *)(lVar7 + 0x220);
              if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
                 (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
                lVar12 = *(long *)(lVar7 + 0x230);
                if (((lVar12 == 0) || ((*(byte *)(lVar12 + 0x10) >> 4 & 1) == 0)) ||
                   (*(long *)(*(long *)(lVar12 + 8) + 0x68) == 0)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                plVar16 = (long *)(lVar7 + 0x230);
              }
              else {
                plVar16 = (long *)(lVar7 + 0x220);
              }
            }
            else {
              plVar16 = (long *)(lVar7 + 0x210);
            }
          }
          else {
            plVar16 = (long *)(lVar7 + 0x200);
          }
        }
        else {
          plVar16 = (long *)(lVar7 + 0x1f0);
        }
      }
      else {
        plVar16 = (long *)(lVar7 + 0x1e0);
      }
      lVar12 = FUN_0033a31c(*(undefined8 *)(param_1 + 0x10));
      plVar13 = *(long **)(*(long *)(*plVar16 + 8) + 0x60);
      lVar15 = *(long *)(lVar12 + 0x3d8);
      *(undefined8 *)(lVar12 + 0x3d8) = 0;
      puVar8 = (undefined8 *)*plVar13;
      *plVar13 = lVar15;
      if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 00324798 to 0032479b has its CatchHandler @ 00324870 */
        (**(code **)*puVar8)();
      }
      plVar13 = (long *)*plVar16;
      lVar12 = plVar13[1];
      lVar15 = *(long *)(lVar12 + 0x68);
      *(undefined8 *)(lVar12 + 0x68) = 0;
      if (((*plVar13 == 0) &&
          ((bVar1 = *(byte *)(plVar13 + 2), (bVar1 >> 3 & 1) == 0 || (*(long *)(lVar12 + 0x48) == 0)
           ))) && (((bVar1 >> 5 & 1) == 0 || (*(long *)(lVar12 + 0x80) == 0)))) {
        bVar2 = *(byte *)(lVar7 + 0x240);
        if ((bVar2 >> 3 & 1) != 0) {
          if ((bVar1 & 1) != 0) {
            bVar2 = bVar2 & 0xfe;
            *(byte *)(lVar7 + 0x240) = bVar2;
            bVar1 = *(byte *)(plVar13 + 2);
          }
          if ((bVar1 >> 2 & 1) != 0) {
            bVar2 = bVar2 & 0xfd;
            *(byte *)(lVar7 + 0x240) = bVar2;
            bVar1 = *(byte *)(plVar13 + 2);
          }
          if ((bVar1 >> 1 & 1) != 0) {
            *(byte *)(lVar7 + 0x240) = bVar2 & 0xfb;
          }
        }
        *plVar16 = 0;
      }
      FUN_00323eb8(param_1);
      if (4 < param_2) {
        param_2 = FUN_00350fb0(param_2);
      }
      if (lVar15 != 0) {
        (**(code **)(lVar15 + 8))(*(undefined8 *)(lVar15 + 0x10),param_2);
      }
      if (param_2 < 5) {
        return;
      }
      FUN_00350fd0(param_2);
      return;
    }
    *(long *)(lVar7 + 0x550) = param_1;
    if (4 < param_2) {
      param_2 = FUN_00350fb0(param_2);
      uVar10 = (uint)*(byte *)(lVar7 + 0x538);
    }
    *(ulong *)(lVar7 + 0x558) = param_2;
    if ((uVar10 >> 6 & 1) == 0) {
      lVar5 = FUN_0033a31c(*(undefined8 *)(lVar15 + 0x120));
      lVar6 = FUN_0032354c(lVar12,2,0);
      lVar7 = _UNK_03cab728;
      lVar12 = _DAT_03cab720;
      *(byte *)(lVar5 + 0x538) = *(byte *)(lVar5 + 0x538) | 0x40;
      *(byte *)(lVar6 + 0x28) = *(byte *)(lVar6 + 0x28) | 0x20;
      FUN_00377130(lVar5 + lVar12);
      lVar11 = *(long *)(lVar6 + 0x20);
      *(long *)(lVar11 + 0x78) = lVar5 + lVar7;
      *(long *)(lVar11 + 0x70) = lVar5 + lVar12;
      *(undefined1 **)(lVar5 + 0x500) = &LAB_00324874;
      *(long *)(lVar5 + 0x508) = lVar6;
      *(undefined8 *)(lVar5 + 0x510) = 0;
      lVar12 = *(long *)(lVar6 + 0x20);
      *(long *)(lVar12 + 0x80) = lVar5 + 0x4f8;
      if (*(long *)(lVar15 + 0x170) != 0) {
        uVar14 = *(undefined8 *)(lVar12 + 0x70);
        *(code **)(lVar15 + 0x1b8) = FUN_0032234c;
        *(long *)(lVar15 + 0x1c0) = lVar15;
        *(undefined8 *)(lVar15 + 0x1a8) = uVar14;
        *(undefined8 *)(lVar15 + 0x1c8) = 0;
        *(long *)(lVar15 + 0x1d0) = lVar5 + 0x4f8;
        *(long *)(*(long *)(lVar6 + 0x20) + 0x80) = lVar15 + 0x1b0;
      }
      *(long *)(lVar5 + 0x560) = lVar6;
      FUN_0033a268(*(undefined8 *)(lVar15 + 0x120),lVar6 + 0x18);
      return;
    }
    pcVar9 = "recv_message_ready null";
  }
  else {
    pcVar9 = "recv_message_ready after retry dispatched";
  }
  FUN_003504e0(*(undefined8 *)(lVar15 + 0xd0),pcVar9);
  return;
}


