/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a3be4; name: FUN_004a3be4
 */


undefined8 FUN_004a3be4(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__src;
  size_t __n;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  uVar8 = *(ulong *)(param_2 + 0x50);
  iVar3 = *(int *)(param_2 + 0x44);
  plVar9 = (long *)(param_1 + 0x188);
  plVar11 = *(long **)(param_1 + 0x188);
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    do {
      while( true ) {
        plVar12 = plVar11;
        if ((ulong)plVar11[4] <= uVar8) break;
LAB_004a3c1c:
        if ((long *)*plVar11 == (long *)0x0) {
          lVar6 = *plVar11;
          goto joined_r0x004a3c68;
        }
        plVar9 = plVar11;
        plVar11 = (long *)*plVar11;
      }
      if (uVar8 <= (ulong)plVar11[4]) {
        if (iVar3 < (int)plVar11[5]) goto LAB_004a3c1c;
        if (iVar3 <= (int)plVar11[5]) goto LAB_004a3c64;
      }
      plVar9 = plVar11 + 1;
      if ((long *)*plVar9 == (long *)0x0) goto LAB_004a3c64;
      plVar11 = (long *)*plVar9;
    } while( true );
  }
  plVar12 = plVar9;
LAB_004a3c64:
  lVar6 = *plVar9;
  plVar11 = plVar9;
joined_r0x004a3c68:
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    puVar4[4] = uVar8;
    *(int *)(puVar4 + 5) = iVar3;
    puVar4[6] = param_2;
    puVar4[2] = plVar12;
    *puVar4 = 0;
    puVar4[1] = 0;
    *plVar11 = (long)puVar4;
    if (**(long **)(param_1 + 0x180) != 0) {
      *(long *)(param_1 + 0x180) = **(long **)(param_1 + 0x180);
      puVar4 = (undefined8 *)*plVar11;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x188),puVar4);
    *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
    puVar2 = *(ulong **)(param_1 + 0x1e8);
    if (puVar2 == *(ulong **)(param_1 + 0x1f0)) {
      lVar6 = *(long *)(param_1 + 0x1e0);
      lVar10 = (long)puVar2 - lVar6 >> 4;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar6 = (long)*(ulong **)(param_1 + 0x1f0) - lVar6;
      uVar7 = lVar6 >> 3;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
        uVar1 = 0xfffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
      }
      puVar2 = (ulong *)(lVar6 + lVar10 * 0x10);
      *puVar2 = uVar8;
      *(int *)(puVar2 + 1) = iVar3;
      __src = *(void **)(param_1 + 0x1e0);
      __n = *(long *)(param_1 + 0x1e8) - (long)__src;
      if (0 < (long)__n) {
        memcpy((void *)((long)puVar2 - __n),__src,__n);
        __src = *(void **)(param_1 + 0x1e0);
      }
      *(void **)(param_1 + 0x1e0) = (void *)((long)puVar2 - __n);
      *(ulong **)(param_1 + 0x1e8) = puVar2 + 2;
      *(ulong *)(param_1 + 0x1f0) = lVar6 + uVar1 * 0x10;
      if (__src != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
      uVar5 = 1;
    }
    else {
      *puVar2 = uVar8;
      uVar5 = 1;
      *(int *)(puVar2 + 1) = iVar3;
      *(ulong **)(param_1 + 0x1e8) = puVar2 + 2;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


