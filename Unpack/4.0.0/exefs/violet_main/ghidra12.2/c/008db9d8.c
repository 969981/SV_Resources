/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008db9d8; name: FUN_008db9d8
 */


undefined8 FUN_008db9d8(long param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  size_t __n;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  
  if (param_3 != -1) {
    lVar9 = *(long *)(param_1 + 0xa8);
    if ((lVar9 != 0) && (plVar11 = *(long **)(param_1 + 0xb0), plVar11 != (long *)0x0)) {
LAB_008dba18:
      if (*plVar11 != param_3) goto code_r0x008dba24;
      lVar10 = *(long *)(lVar9 + 0x38);
      plVar8 = plVar11 + 2;
      sVar5 = strlen((char *)plVar8);
      uVar4 = (ulong)*(ushort *)(lVar10 + 0xc);
      puVar12 = (uint *)((int *)(lVar10 + 8) + uVar4 * 4);
      iVar7 = *(int *)(lVar10 + 8);
      while (uVar2 = *puVar12, iVar7 < (int)uVar2) {
        uVar6 = (long)((ulong)uVar2 << 0x20) >> 0x23;
        if (uVar6 < sVar5) {
          uVar6 = (ulong)(*(byte *)((long)plVar11 + sVar5 + ~uVar6 + 0x10) >> ((ulong)uVar2 & 7)) &
                  1;
        }
        else {
          uVar6 = 0;
        }
        piVar1 = (int *)(lVar10 + 8 + uVar4 * 0x10);
        uVar4 = (ulong)*(ushort *)((long)piVar1 + uVar6 * 2 + 4);
        puVar12 = (uint *)(lVar10 + 8 + uVar4 * 0x10);
        iVar7 = *piVar1;
      }
      uVar4 = (ulong)**(ushort **)(puVar12 + 2);
      __n = sVar5;
      if (uVar4 <= sVar5) {
        __n = uVar4;
      }
      if (__n == 0) {
        if (uVar4 <= sVar5) goto LAB_008dbb58;
      }
      else {
        iVar3 = memcmp(*(ushort **)(puVar12 + 2) + 1,plVar8,__n);
        iVar7 = iVar3;
        if (iVar3 == 0) {
          iVar7 = 1;
        }
        if (sVar5 < uVar4 || iVar3 != 0) {
          if (iVar7 != 0) goto LAB_008dba3c;
        }
        else {
LAB_008dbb58:
          if (uVar4 < sVar5) goto LAB_008dba3c;
        }
        uVar4 = (long)puVar12 + (-0x18 - lVar10);
        if ((~uVar4 & 0xffffffff0) != 0) {
          *param_2 = *(undefined8 *)
                      (*(long *)(*(long *)(lVar9 + 0x28) + (long)(int)(uVar4 >> 4) * 8) + 0x90);
          return 1;
        }
      }
      goto LAB_008dba3c;
    }
LAB_008dba38:
    plVar8 = (long *)0x0;
LAB_008dba3c:
    if (*(long *)(param_1 + 0x4a8) == 0) {
      return 0;
    }
    uVar4 = FUN_008db9d8(*(long *)(param_1 + 0x4a8),param_2,param_3);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    FUN_008d4680("Appointed Texture is not found from Resident Resource.\n");
    if (plVar8 != (long *)0x0) {
      FUN_008d4680("The Texture which was not found is %s.\n",plVar8);
    }
  }
  return 0;
code_r0x008dba24:
  puVar12 = (uint *)(plVar11 + 1);
  plVar8 = (long *)((long)plVar11 + (ulong)*puVar12);
  plVar11 = (long *)0x0;
  if (*puVar12 != 0) {
    plVar11 = plVar8;
  }
  if (plVar11 == (long *)0x0) goto LAB_008dba38;
  goto LAB_008dba18;
}


