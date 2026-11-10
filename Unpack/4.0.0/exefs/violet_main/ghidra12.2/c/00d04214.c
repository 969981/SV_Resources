/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d04214; name: FUN_00d04214
 */


void FUN_00d04214(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_68;
  
  lVar11 = 0;
  plVar12 = param_1 + 0x3d;
  do {
    plVar9 = (long *)*plVar12;
    plVar2 = (long *)plVar12[1];
    if (plVar9 != plVar2) {
      do {
        uVar4 = param_1[0xe];
        lVar1 = param_1[7];
        plVar6 = (long *)(lVar1 + (uVar4 >> 6 & 0x3fffffffffffff8));
        if (param_1[8] == lVar1) {
          uVar4 = param_1[0xf] + uVar4;
          plVar7 = (long *)0x0;
          plVar5 = (long *)0x0;
          plVar10 = (long *)(lVar1 + (uVar4 >> 6 & 0x3fffffffffffff8));
        }
        else {
          plVar7 = (long *)(*plVar6 + (uVar4 & 0x1ff) * 8);
          uVar4 = param_1[0xf] + uVar4;
          plVar10 = (long *)(lVar1 + (uVar4 >> 6 & 0x3fffffffffffff8));
          plVar5 = (long *)(*plVar10 + (uVar4 & 0x1ff) * 8);
        }
        while ((plVar7 != plVar5 && (*plVar7 != *plVar9))) {
          plVar7 = plVar7 + 1;
          if ((long)plVar7 - *plVar6 == 0x1000) {
            plVar6 = plVar6 + 1;
            plVar7 = (long *)*plVar6;
          }
        }
        if (param_1[8] == lVar1) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = (long *)(*plVar10 + (uVar4 & 0x1ff) * 8);
        }
        if (plVar7 != plVar10) {
          lVar8 = *plVar7;
          lVar1 = 0;
          if (*(ulong *)(lVar8 + 8) <= (ulong)param_1[0x7d]) {
            lVar1 = param_1[0x7d] - *(ulong *)(lVar8 + 8);
          }
          param_1[0x7d] = lVar1;
          local_68 = *(undefined8 *)(lVar8 + 0x20);
          FUN_00d044f4(param_1 + 0x14,&local_68);
          lVar1 = *(long *)(lVar8 + 0x10) * 8 + 0x50;
          FUN_00d0441c(lVar8);
          plVar10 = (long *)*param_1;
          uVar4 = (**(code **)(*plVar10 + 0xf8))(plVar10);
          if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar10 + 0x18))(plVar10,lVar8,lVar1,8);
          }
          else {
            FUN_00c48fe8(plVar10,lVar8,lVar1,8);
          }
          FUN_00d03778(param_1 + 6,plVar6,plVar7);
          lVar11 = lVar11 + 1;
          if (lVar11 == param_2) {
            return;
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar2);
      plVar9 = (long *)*plVar12;
    }
    plVar12[1] = (long)plVar9;
    plVar12 = plVar12 + 7;
    if (plVar12 == param_1 + 0x59) {
      return;
    }
  } while( true );
}


