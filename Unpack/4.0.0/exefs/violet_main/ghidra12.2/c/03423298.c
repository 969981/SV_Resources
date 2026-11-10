/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03423298; name: FUN_03423298
 */


ulong * FUN_03423298(long *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *__src;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar1 = uVar5 + (uVar7 >> 1);
      uVar8 = *(ulong *)(*param_1 + (long)iVar1 * 0x90);
      if (uVar8 == param_2) {
        *param_3 = 1;
        return (ulong *)(*param_1 + (long)iVar1 * 0x90);
      }
      if (uVar8 < param_2) {
        uVar5 = iVar1 + 1;
      }
      uVar7 = uVar7 - (uVar8 < param_2) >> 1;
    } while (uVar7 != 0);
    uVar8 = (ulong)uVar5;
  }
  *param_3 = 0;
  uVar5 = *(uint *)(param_1 + 1);
  uVar7 = *(uint *)((long)param_1 + 0xc);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if (uVar7 <= uVar5) {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,0,(ulong)uVar7 * 0x90);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    else {
      lVar4 = 0;
    }
    if (uVar7 <= uVar5) {
      return (ulong *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    puVar3 = (ulong *)(lVar4 + (ulong)uVar7 * 0x90);
    if (lVar4 != 0) {
      lVar4 = lVar4 + (ulong)uVar7 * 0x90;
      *(undefined4 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x84) = 0x7f7fffff;
      *puVar3 = 0;
      goto LAB_03423484;
    }
  }
  else {
    if (uVar7 <= uVar5) {
      iVar1 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar1 = 1;
      }
      uVar7 = iVar1 + uVar7;
      lVar4 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(9,lVar4,(ulong)uVar7 * 0x90);
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar7;
    }
    if (uVar7 <= uVar5) {
      return (ulong *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    puVar2 = (undefined8 *)(lVar4 + (ulong)uVar7 * 0x90);
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)((long)puVar2 + 0x84) = 0x7f7fffff;
    *puVar2 = 0;
    lVar4 = *param_1;
    if ((undefined8 *)(lVar4 + uVar8 * 0x90) < puVar2) {
      do {
        __src = puVar2 + -0x12;
        memcpy(puVar2,__src,0x8c);
        lVar4 = *param_1;
        puVar2 = __src;
      } while ((undefined8 *)(lVar4 + uVar8 * 0x90) < __src);
    }
    lVar6 = 0;
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 0x90);
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)((long)puVar2 + 0x84) = 0x7f7fffff;
      *puVar2 = 0;
      lVar6 = *param_1;
    }
    puVar3 = (ulong *)(lVar6 + uVar8 * 0x90);
  }
  if (puVar3 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
LAB_03423484:
  *puVar3 = param_2;
  return puVar3;
}


