/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00310700; name: FUN_00310700
 */


void FUN_00310700(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *__s;
  void *__ptr;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1[3] <= param_2) {
    param_2 = param_1[3];
  }
  if (param_2 == *param_1) {
    return;
  }
  uVar3 = param_1[5];
  if (param_2 < uVar3) {
    uVar5 = param_1[4];
    do {
      uVar5 = uVar5 + 1;
      if (uVar5 == 0) {
        param_1[4] = 0;
        goto LAB_003108e4;
      }
      uVar4 = param_1[2];
      uVar6 = 0;
      if (uVar4 != 0) {
        uVar6 = uVar5 / uVar4;
      }
      uVar6 = (uint)*(ushort *)(*(long *)(param_1 + 8) + (ulong)(uVar5 - uVar6 * uVar4) * 2);
      if ((uVar3 < uVar6) || (param_1[6] == 0)) {
        param_1[4] = uVar5;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar3 = uVar3 - uVar6 & 0xffff;
      param_1[5] = uVar3;
      param_1[6] = param_1[6] - 1;
    } while (param_2 < uVar3);
    param_1[4] = uVar5;
  }
  else {
    uVar4 = param_1[2];
  }
  uVar3 = param_2 + 0x1f >> 5;
  *param_1 = param_2;
  param_1[1] = uVar3;
  if (uVar4 < uVar3) {
    if (uVar3 <= uVar4 * 2) {
      uVar3 = uVar4 * 2;
    }
    __s = (void *)FUN_0038c780((ulong)uVar3 << 1);
    memset(__s,0,(ulong)uVar3 << 1);
    uVar4 = param_1[6];
    if (uVar3 < uVar4) {
LAB_003108e4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar4 == 0) {
      __ptr = *(void **)(param_1 + 8);
      param_1[2] = uVar3;
    }
    else {
      uVar5 = param_1[4];
      __ptr = *(void **)(param_1 + 8);
      uVar6 = param_1[2];
      do {
        uVar5 = uVar5 + 1;
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar4 = uVar4 - 1;
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar5 / uVar3;
        }
        *(undefined2 *)((long)__s + (ulong)(uVar5 - uVar2 * uVar3) * 2) =
             *(undefined2 *)((long)__ptr + (ulong)(uVar5 - uVar1 * uVar6) * 2);
      } while (uVar4 != 0);
      param_1[2] = uVar3;
    }
  }
  else {
    if (uVar4 / 3 <= uVar3) goto LAB_003108c0;
    if (uVar3 < 0x11) {
      uVar3 = 0x10;
    }
    if (uVar3 == uVar4) goto LAB_003108c0;
    __s = (void *)FUN_0038c780((ulong)(uVar3 << 1));
    memset(__s,0,(ulong)(uVar3 << 1));
    uVar4 = param_1[6];
    if (uVar3 < uVar4) goto LAB_003108e4;
    if (uVar4 == 0) {
      __ptr = *(void **)(param_1 + 8);
    }
    else {
      uVar5 = param_1[4];
      __ptr = *(void **)(param_1 + 8);
      uVar6 = param_1[2];
      do {
        uVar5 = uVar5 + 1;
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar5 / uVar6;
        }
        uVar4 = uVar4 - 1;
        uVar2 = 0;
        if (uVar3 != 0) {
          uVar2 = uVar5 / uVar3;
        }
        *(undefined2 *)((long)__s + (ulong)(uVar5 - uVar2 * uVar3) * 2) =
             *(undefined2 *)((long)__ptr + (ulong)(uVar5 - uVar1 * uVar6) * 2);
      } while (uVar4 != 0);
    }
    param_1[2] = uVar3;
  }
  free(__ptr);
  *(void **)(param_1 + 8) = __s;
LAB_003108c0:
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}


