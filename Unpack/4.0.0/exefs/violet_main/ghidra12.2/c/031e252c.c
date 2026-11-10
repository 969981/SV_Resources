/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e252c; name: FUN_031e252c
 */


void FUN_031e252c(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong *puVar8;
  ulong *local_38;
  ulong *local_18;
  
  puVar8 = (ulong *)param_1[1];
  if (puVar8 != (ulong *)0x0) {
    param_1 = (undefined8 *)*param_1;
    if (puVar8 == (ulong *)PTR_DAT_047e5c28) {
LAB_031e2604:
      uVar2 = 0;
      do {
        uVar4 = (uint)*puVar8;
        if ((uVar4 >> 0x15 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT44(uVar4,uVar4) & 0x1fffff001fffff;
          uVar6 = puVar8[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                      POPCOUNT((char)(uVar6 >> 0x10))) + 2];
        }
        uVar2 = uVar6 | uVar2;
      } while (((*puVar8 & 1) == 0) && (puVar8 = (ulong *)puVar8[1], puVar8 != (ulong *)0x0));
      if ((param_1 != (undefined8 *)0x0) && (((uint)uVar2 >> 3 & 1) == 0)) {
        if ((*(uint *)((long)param_2 + 0xc) & 0x7fffffff) == 0) {
          FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,1);
        }
        if ((int)param_2[1] != 1) {
          *(undefined4 *)(param_2 + 1) = 1;
        }
        *(undefined1 *)*param_2 = 0;
        FUN_031e20f0(*param_1,param_1[1],param_2);
        return;
      }
    }
    else {
      local_18 = puVar8;
      do {
        uVar4 = (uint)*local_18;
        if ((uVar4 >> 0xd & 1) != 0) {
          uVar2 = CONCAT44(uVar4,uVar4) & 0x1fff00001fff;
          local_18 = local_18 +
                     (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2;
          goto LAB_031e25a8;
        }
      } while (((*local_18 & 1) == 0) && (local_18 = (ulong *)local_18[1], local_18 != (ulong *)0x0)
              );
      local_18 = (ulong *)0x0;
LAB_031e25a8:
      local_38 = (ulong *)PTR_DAT_047e5c28;
      while( true ) {
        uVar4 = (uint)*local_38;
        if ((uVar4 >> 0xd & 1) != 0) break;
        if (((*local_38 & 1) != 0) || (local_38 = (ulong *)local_38[1], local_38 == (ulong *)0x0))
        goto LAB_031e26a0;
      }
      if (local_38 != (ulong *)0x0) {
        uVar2 = CONCAT44(uVar4,uVar4) & 0x1fff00001fff;
        local_38 = local_38 +
                   (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2;
        if (local_18 == (ulong *)0x0) goto LAB_031e26a4;
        uVar2 = FUN_031dd354(&local_18,&local_38);
        if ((uVar2 & 1) == 0) goto LAB_031e26d0;
        goto LAB_031e2604;
      }
LAB_031e26a0:
      local_38 = (ulong *)0x0;
LAB_031e26a4:
      puVar3 = (ulong *)PTR_DAT_047e5c28;
      do {
        if ((*puVar3 & 1) != 0) break;
        puVar3 = (ulong *)puVar3[1];
      } while (puVar3 != (ulong *)0x0);
      puVar5 = puVar8;
      do {
        if (puVar5 == puVar3) goto LAB_031e2604;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
    }
  }
LAB_031e26d0:
  uVar4 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar7 = 0xe;
  if (uVar4 < 0xf) {
    iVar7 = uVar4 - 1;
  }
  if ((int)param_2[0x12] != 0) {
    iVar7 = 0xe;
  }
  iVar1 = iVar7 + 1;
  if ((int)uVar4 <= iVar7) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar1);
  }
  if ((int)param_2[1] <= iVar7 || iVar1 < (int)param_2[1]) {
    *(int *)(param_2 + 1) = iVar1;
  }
  *(undefined1 *)(*param_2 + (long)iVar7) = 0;
  memcpy((void *)*param_2,"<No Type Name>",(long)(int)param_2[1] - 1);
  return;
}


