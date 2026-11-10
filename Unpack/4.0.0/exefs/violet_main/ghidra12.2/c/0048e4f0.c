/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048e4f0; name: FUN_0048e4f0
 */


undefined8 FUN_0048e4f0(undefined8 *param_1,long param_2,long param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar2 = FUN_0048ec90(param_2,param_3,param_4);
  if (-1 < iVar2) {
    uVar3 = FUN_0048e2d0(param_1,param_2,iVar2);
    return uVar3;
  }
  puVar4 = (undefined4 *)FUN_003e49a0(PTR_DAT_047cd5f8);
  if (puVar4 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar4 = 1;
  plVar5 = (long *)FUN_003e49a0(PTR_DAT_047cd600);
  *(long **)(puVar4 + 2) = plVar5;
  if (plVar5 != (long *)0x0) {
    if (*plVar5 == 0) {
      lVar6 = FUN_003e5060();
      **(long **)(puVar4 + 2) = lVar6;
      if (lVar6 == 0) goto LAB_0048e728;
      lVar6 = *(long *)(*(long *)(puVar4 + 2) + 8);
    }
    else {
      lVar6 = plVar5[1];
    }
    if (lVar6 == 0) {
      lVar6 = FUN_003e5060();
      *(long *)(*(long *)(puVar4 + 2) + 8) = lVar6;
      if (lVar6 == 0) goto LAB_0048e728;
    }
    uVar7 = param_4 & (int)param_4 >> 0x1f;
    uVar9 = param_4;
    do {
      uVar8 = uVar9;
      if ((int)uVar8 < 1) {
        bVar1 = false;
        uVar8 = uVar7;
        goto LAB_0048e5f4;
      }
      uVar9 = uVar8 - 1;
    } while (*(char *)(param_2 + (ulong)(uVar8 - 1)) == '\0');
    bVar1 = true;
LAB_0048e5f4:
    iVar2 = thunk_FUN_003df070(**(undefined8 **)(puVar4 + 2),param_2,uVar8);
    if (iVar2 != 0) {
      *(ulong *)(**(long **)(puVar4 + 2) + 0x10) =
           *(ulong *)(**(long **)(puVar4 + 2) + 0x10) & 0xfffffffffffffff8;
      *(ulong *)(**(long **)(puVar4 + 2) + 0x10) = *(ulong *)(**(long **)(puVar4 + 2) + 0x10) | 8;
      if (bVar1) {
        lVar6 = -8;
        do {
          iVar2 = (int)lVar6;
          lVar6 = lVar6 + 1;
        } while (((uint)*(byte *)(param_2 + (ulong)(uVar8 - 1)) << (ulong)(iVar2 + 9U & 0x1f) & 0xff
                 ) != 0);
        *(ulong *)(**(long **)(puVar4 + 2) + 0x10) =
             *(ulong *)(**(long **)(puVar4 + 2) + 0x10) | -lVar6;
      }
      do {
        uVar9 = param_4;
        if ((int)uVar9 < 1) {
          bVar1 = false;
          goto LAB_0048e69c;
        }
        param_4 = uVar9 - 1;
      } while (*(char *)(param_3 + (ulong)(uVar9 - 1)) == -1);
      bVar1 = true;
      uVar7 = uVar9;
LAB_0048e69c:
      iVar2 = thunk_FUN_003df070(*(undefined8 *)(*(long *)(puVar4 + 2) + 8),param_3,uVar7);
      if (iVar2 != 0) {
        *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) =
             *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) & 0xfffffffffffffff8;
        *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) =
             *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) | 8;
        if (bVar1) {
          lVar6 = -8;
          do {
            iVar2 = (int)lVar6;
            lVar6 = lVar6 + 1;
          } while ((~(uint)*(byte *)(param_3 + (ulong)(uVar7 - 1)) << (ulong)(iVar2 + 9U & 0x1f) &
                   0xff) != 0);
          *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) =
               *(ulong *)(*(long *)(*(long *)(puVar4 + 2) + 8) + 0x10) | -lVar6;
        }
        *param_1 = puVar4;
        return 1;
      }
    }
  }
LAB_0048e728:
  FUN_003e4550(puVar4,PTR_DAT_047cd5f8);
  return 0;
}


