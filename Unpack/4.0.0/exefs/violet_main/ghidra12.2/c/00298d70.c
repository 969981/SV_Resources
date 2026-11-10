/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298d70; name: FUN_00298d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00298d70(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  long lVar9;
  void *__dest;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  lVar10 = *param_1;
  uVar12 = param_1[1];
  lVar13 = param_1[2];
  plVar2 = (long *)FUN_0038ad50(PTR_PTR_047cc680);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
    iVar1 = _DAT_00000008;
  }
  else {
    uVar6 = uVar12 & 0xff;
    if (lVar10 == 0) {
      lVar13 = (long)param_1 + 9;
    }
    else {
      uVar6 = uVar12;
    }
    uVar12 = FUN_00385610(lVar13,uVar6,plVar2,PTR_PTR_047cc680,param_2);
    if ((uVar12 & 1) == 0) {
      plVar2 = (long *)0x0;
    }
    iVar1 = (int)plVar2[1];
  }
  if (iVar1 == 1) {
    lVar13 = *plVar2;
    if (lVar13 != 0) {
      *param_3 = 0;
      plVar2 = *(long **)(lVar13 + 0x10);
      if (plVar2 == (long *)0x0) {
        return 1;
      }
      *(long *)(param_3 + 2) = *plVar2 * 1000 + (long)((int)plVar2[1] / 1000000);
      return 1;
    }
  }
  else {
    if (iVar1 == 3) {
      *param_3 = 2;
      return 1;
    }
    if ((iVar1 == 2) && ((long *)*plVar2 != (long *)0x0)) {
      puVar7 = *(ulong **)*plVar2;
      if ((puVar7 != (ulong *)0x0) && (uVar12 = puVar7[1], uVar12 != 0)) {
        uVar6 = *puVar7;
        lVar13 = *(long *)(param_3 + 4);
        if ((ulong)((*(long *)(param_3 + 8) - lVar13 >> 2) * -0x79435e50d79435e5) < uVar12) {
          lVar9 = *(long *)(param_3 + 6);
          lVar10 = FUN_0049e770(PTR_FUN_047cba38,uVar12 * 0x4c);
          pvVar4 = *(void **)(param_3 + 4);
          lVar13 = lVar10 + (lVar9 - lVar13);
          sVar5 = *(long *)(param_3 + 6) - (long)pvVar4;
          __dest = (void *)(lVar13 - sVar5);
          if (0 < (long)sVar5) {
            memcpy(__dest,pvVar4,sVar5);
            pvVar4 = *(void **)(param_3 + 4);
          }
          *(void **)(param_3 + 4) = __dest;
          *(long *)(param_3 + 6) = lVar13;
          *(ulong *)(param_3 + 8) = lVar10 + uVar12 * 0x4c;
          if (pvVar4 != (void *)0x0) {
            FUN_0049e790(PTR_LAB_047cba48);
          }
        }
        uVar11 = 0;
        uVar6 = uVar6 & 0xfffffffffffffff8;
        do {
          puVar3 = (undefined4 *)FUN_00298fb0(param_3 + 4,*(undefined8 *)(param_3 + 6));
          puVar8 = *(undefined4 **)(uVar6 + uVar11 * 8);
          sVar5 = *(size_t *)(puVar8 + 4);
          if (sVar5 - 1 < 0x10) {
            pvVar4 = *(void **)(puVar8 + 2);
            *puVar3 = (int)sVar5;
            memcpy(puVar3 + 1,pvVar4,sVar5);
            puVar8 = *(undefined4 **)(uVar6 + uVar11 * 8);
          }
          puVar3[5] = *puVar8;
          if (*(size_t *)(puVar8 + 8) - 1 < 0x32) {
            memcpy(puVar3 + 6,*(void **)(puVar8 + 6),*(size_t *)(puVar8 + 8));
            puVar8 = *(undefined4 **)(uVar6 + uVar11 * 8);
          }
          uVar11 = uVar11 + 1;
          *(undefined1 *)((long)puVar3 + 0x4a) = *(undefined1 *)(puVar8 + 1);
        } while (uVar11 < uVar12);
      }
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}


