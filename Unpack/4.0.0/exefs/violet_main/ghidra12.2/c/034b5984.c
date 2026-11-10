/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b5984; name: FUN_034b5984
 */


void FUN_034b5984(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  
  puVar4 = PTR_DAT_047e2fd0;
  if (*(int *)(param_2 + 0x58) == 0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x50);
    bVar7 = false;
    do {
      uVar1 = *(uint *)(param_1 + 1);
      if (uVar1 != 0) {
        uVar2 = *(uint *)(lVar6 + 4);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (*puVar5 == uVar2) {
            FUN_034b74e8(puVar5,param_2);
            bVar7 = true;
            break;
          }
        }
      }
      if (*(long *)(lVar6 + 8) != 0) {
        (**(code **)(puVar4 + 0x30))(0);
        *(undefined8 *)(lVar6 + 8) = 0;
      }
      *(undefined8 *)(lVar6 + 0x10) = 0;
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x20);
    *(undefined4 *)(param_2 + 0x58) = 0;
    if (bVar7) goto LAB_034b5aac;
  }
  if ((int)param_1[1] != 0) {
    lVar6 = *(long *)*param_1;
    if (lVar6 == 0) {
      uVar8 = 0;
      do {
        if ((int)param_1[1] - 1 == uVar8) goto LAB_034b5aac;
        uVar8 = uVar8 + 1;
        lVar6 = ((long *)*param_1)[uVar8 & 0xffffffff];
      } while (lVar6 == 0);
    }
    else {
      uVar8 = 0;
    }
    do {
      do {
        FUN_034b74e8(lVar6,param_2);
        lVar6 = *(long *)(lVar6 + 8);
      } while (lVar6 != 0);
      do {
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1) goto LAB_034b5aac;
        lVar6 = *(long *)(*param_1 + (ulong)uVar1 * 8);
      } while (lVar6 == 0);
    } while( true );
  }
LAB_034b5aac:
  FUN_03498580(*(undefined8 *)PTR_DAT_047e7048,param_2,0);
  return;
}


