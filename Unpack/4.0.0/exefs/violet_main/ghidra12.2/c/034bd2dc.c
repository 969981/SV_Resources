/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bd2dc; name: FUN_034bd2dc
 */


undefined8 * FUN_034bd2dc(long *param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (uVar6 >> 1);
      bVar2 = *(byte *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return (undefined8 *)(*param_1 + (long)iVar1 * 0x28);
      }
      if (bVar2 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar6 = uVar6 - (bVar2 < param_2) >> 1;
    } while (uVar6 != 0);
  }
  *param_3 = 0;
  if (*param_1 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    uVar7 = *(uint *)((long)param_1 + 0xc);
    if (uVar6 < uVar7) {
LAB_034bd39c:
      if (uVar6 < uVar7) {
        uVar6 = *(uint *)(param_1 + 1);
        lVar8 = *param_1;
        *(uint *)(param_1 + 1) = uVar6 + 1;
        puVar3 = (undefined8 *)(lVar8 + (ulong)uVar6 * 0x28);
        if (lVar8 == 0) goto LAB_034bd350;
        lVar8 = lVar8 + (ulong)uVar6 * 0x28;
        *(undefined4 *)(lVar8 + 8) = 0;
        *(undefined1 *)(lVar8 + 0xc) = 0;
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *puVar3 = &PTR_LAB_047c4568;
        goto LAB_034bd354;
      }
    }
    else {
      iVar5 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar5 = 1;
      }
      uVar4 = FUN_034bd560(param_1,iVar5);
      if ((uVar4 & 1) != 0) {
        uVar7 = *(uint *)((long)param_1 + 0xc);
        goto LAB_034bd39c;
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_034bd3f8(param_1,iVar5);
LAB_034bd350:
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_034bd354:
    *(byte *)(puVar3 + 4) = param_2;
  }
  return puVar3;
}


