/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e2cbc; name: FUN_031e2cbc
 */


void FUN_031e2cbc(undefined8 *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong local_38;
  ulong local_18;
  
  puVar3 = *(ulong **)*param_1;
  if (puVar3 == (ulong *)0x0) {
    uVar2 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
    iVar4 = 0xb;
    if (uVar2 < 0xc) {
      iVar4 = uVar2 - 1;
    }
    if ((int)param_2[0x12] != 0) {
      iVar4 = 0xb;
    }
    iVar1 = iVar4 + 1;
    if ((int)uVar2 <= iVar4) {
      FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar1);
    }
    if ((int)param_2[1] <= iVar4 || iVar1 < (int)param_2[1]) {
      *(int *)(param_2 + 1) = iVar1;
    }
    *(undefined1 *)(*param_2 + (long)iVar4) = 0;
    memcpy((void *)*param_2,"(null Decl)",(long)(int)param_2[1] - 1);
    return;
  }
  do {
    uVar2 = (uint)*puVar3;
    if ((uVar2 >> 0x12 & 1) != 0) {
      uVar5 = CONCAT44(uVar2,uVar2) & 0x3ffff0003ffff;
      local_18 = puVar3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8)) +
                                     POPCOUNT((char)(uVar5 >> 0x10))) + 2];
      goto LAB_031e2dac;
    }
    if ((*puVar3 & 1) != 0) {
      local_18 = 0;
      goto LAB_031e2dac;
    }
    puVar3 = (ulong *)puVar3[1];
  } while (puVar3 != (ulong *)0x0);
  local_18 = 0;
LAB_031e2dac:
  puVar3 = *(ulong **)*param_1;
  local_38 = 0;
  if (puVar3 != (ulong *)0x0) {
    do {
      uVar2 = (uint)*puVar3;
      if ((uVar2 >> 0x10 & 1) != 0) {
        uVar5 = CONCAT44(uVar2,uVar2) & 0xffff0000ffff;
        local_38 = puVar3[(ulong)(byte)(POPCOUNT((char)uVar5) + POPCOUNT((char)(uVar5 >> 8))) + 2];
        goto LAB_031e2df8;
      }
      if ((*puVar3 & 1) != 0) {
        local_38 = 0;
        goto LAB_031e2df8;
      }
      puVar3 = (ulong *)puVar3[1];
    } while (puVar3 != (ulong *)0x0);
    local_38 = 0;
  }
LAB_031e2df8:
  FUN_031c8978(param_2,"{}::{}",PTR_DAT_047e5c30,&local_18,&local_38);
  return;
}


