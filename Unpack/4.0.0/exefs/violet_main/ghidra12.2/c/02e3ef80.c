/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e3ef80; name: FUN_02e3ef80
 */


undefined8 FUN_02e3ef80(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  char cVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    cVar8 = '\0';
    bVar3 = 0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x30);
    plVar7 = plVar5 + 8;
    uVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
    cVar8 = 0x158 < uVar1;
    if (!(bool)cVar8) {
      (**(code **)plVar5[8])(plVar7,param_2 + 1);
      uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
      *param_2 = uVar2;
    }
    bVar3 = *(byte *)(param_1 + 0x60);
    if (1 < bVar3) {
      plVar5 = *(long **)(param_1 + 0x38);
      plVar7 = plVar5 + 8;
      uVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
      if (uVar1 < 0x159) {
        (**(code **)plVar5[8])(plVar7,param_2 + 0x2d);
        uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
        param_2[0x2c] = uVar2;
      }
      else {
        cVar8 = cVar8 + '\x01';
      }
      bVar3 = *(byte *)(param_1 + 0x60);
      if (2 < bVar3) {
        plVar5 = *(long **)(param_1 + 0x40);
        plVar7 = plVar5 + 8;
        uVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
        if (uVar1 < 0x159) {
          (**(code **)plVar5[8])(plVar7,param_2 + 0x59);
          uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
          param_2[0x58] = uVar2;
        }
        else {
          cVar8 = cVar8 + '\x01';
        }
        bVar3 = *(byte *)(param_1 + 0x60);
        if (3 < bVar3) {
          puVar6 = param_2 + 0x85;
          lVar9 = 9;
          do {
            if (lVar9 - 6U < 6) {
              plVar5 = *(long **)(param_1 + lVar9 * 8);
            }
            else {
              plVar5 = (long *)0x0;
            }
            plVar7 = plVar5 + 8;
            uVar1 = (**(code **)(*plVar7 + 0x10))(plVar7);
            if (uVar1 < 0x159) {
              (**(code **)plVar5[8])(plVar7,puVar6);
              uVar2 = (**(code **)(*plVar5 + 0x68))(plVar5);
              puVar6[-1] = uVar2;
            }
            else {
              cVar8 = cVar8 + '\x01';
            }
            bVar3 = *(byte *)(param_1 + 0x60);
            uVar4 = lVar9 - 5;
            lVar9 = lVar9 + 1;
            puVar6 = puVar6 + 0x2c;
          } while (uVar4 < bVar3);
        }
      }
    }
  }
  *(byte *)(param_2 + 0x108) = bVar3 - cVar8;
  *(undefined4 *)((long)param_2 + 0x844) = 0;
  *(undefined4 *)((long)param_2 + 0x841) = 0;
  return 0x848;
}


