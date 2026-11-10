/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0334bf30; name: FUN_0334bf30
 */


void FUN_0334bf30(undefined8 *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  long *plVar8;
  ulong *puVar9;
  ulong *local_50;
  ulong *puStack_48;
  ulong *local_40;
  ulong *local_38;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar9 = (ulong *)param_1[1];
  if (puVar9 != (ulong *)0x0) {
    plVar8 = (long *)*param_1;
    if (puVar9 == (ulong *)PTR_DAT_047e6760) {
LAB_0334c010:
      uVar2 = 0;
      do {
        uVar3 = (uint)*puVar9;
        if ((uVar3 >> 0x15 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT44(uVar3,uVar3) & 0x1fffff001fffff;
          uVar6 = puVar9[(ulong)(byte)(POPCOUNT((char)uVar6) + POPCOUNT((char)(uVar6 >> 8)) +
                                      POPCOUNT((char)(uVar6 >> 0x10))) + 2];
        }
        uVar2 = uVar6 | uVar2;
      } while (((*puVar9 & 1) == 0) && (puVar9 = (ulong *)puVar9[1], puVar9 != (ulong *)0x0));
      if ((plVar8 != (long *)0x0) && (((uint)uVar2 >> 3 & 1) == 0)) {
        local_40 = (ulong *)*plVar8;
        local_38 = (ulong *)plVar8[1];
        if (local_40 == local_38) {
          local_40 = (ulong *)&DAT_03c0e84c;
          local_38 = (ulong *)&DAT_03c0e851;
        }
        if (*plVar8 == plVar8[1]) {
          local_14 = 0xffffffff;
        }
        else {
          local_14 = (undefined4)plVar8[4];
        }
        local_50 = (ulong *)plVar8[2];
        puStack_48 = (ulong *)plVar8[3];
        if (local_50 == puStack_48) {
          local_50 = (ulong *)0x3be5a81;
          puStack_48 = (ulong *)0x3be5a89;
          local_18 = 0xffffffff;
        }
        else {
          local_18 = *(undefined4 *)((long)plVar8 + 0x24);
        }
        FUN_031c8b2c(param_2,"PatchInfo{{ From={}/{} To={}/{} }}",PTR_DAT_047e6748,&local_40,
                     &local_14,&local_50,&local_18);
        return;
      }
    }
    else {
      local_40 = puVar9;
      while( true ) {
        uVar3 = (uint)*local_40;
        if ((uVar3 >> 0xd & 1) != 0) break;
        if (((*local_40 & 1) != 0) || (local_40 = (ulong *)local_40[1], local_40 == (ulong *)0x0))
        goto LAB_0334bfac;
      }
      if (local_40 != (ulong *)0x0) {
        uVar2 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
        local_40 = local_40 +
                   (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2;
        goto LAB_0334bfb4;
      }
LAB_0334bfac:
      local_40 = (ulong *)0x0;
LAB_0334bfb4:
      puVar4 = (ulong *)PTR_DAT_047e6760;
      while( true ) {
        uVar3 = (uint)*puVar4;
        if ((uVar3 >> 0xd & 1) != 0) break;
        if (((*puVar4 & 1) != 0) || (puVar4 = (ulong *)puVar4[1], puVar4 == (ulong *)0x0))
        goto LAB_0334c070;
      }
      if (puVar4 != (ulong *)0x0) {
        uVar2 = CONCAT44(uVar3,uVar3) & 0x1fff00001fff;
        local_50 = puVar4 + (ulong)(byte)(POPCOUNT((char)uVar2) + POPCOUNT((char)(uVar2 >> 8))) + 2;
        if (local_40 == (ulong *)0x0) goto LAB_0334c074;
        uVar2 = FUN_031dd354(&local_40,&local_50);
        if ((uVar2 & 1) == 0) goto LAB_0334c0a0;
        goto LAB_0334c010;
      }
LAB_0334c070:
      local_50 = (ulong *)0x0;
LAB_0334c074:
      puVar4 = (ulong *)PTR_DAT_047e6760;
      do {
        if ((*puVar4 & 1) != 0) break;
        puVar4 = (ulong *)puVar4[1];
      } while (puVar4 != (ulong *)0x0);
      puVar5 = puVar9;
      do {
        if (puVar5 == puVar4) goto LAB_0334c010;
        puVar5 = (ulong *)puVar5[1];
      } while (puVar5 != (ulong *)0x0);
    }
  }
LAB_0334c0a0:
  uVar3 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar7 = 0x13;
  if (uVar3 < 0x14) {
    iVar7 = uVar3 - 1;
  }
  if ((int)param_2[0x12] != 0) {
    iVar7 = 0x13;
  }
  iVar1 = iVar7 + 1;
  if ((int)uVar3 <= iVar7) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,iVar1);
  }
  if ((int)param_2[1] <= iVar7 || iVar1 < (int)param_2[1]) {
    *(int *)(param_2 + 1) = iVar1;
  }
  *(undefined1 *)(*param_2 + (long)iVar7) = 0;
  memcpy((void *)*param_2,"<Invalid PatchInfo>",(long)(int)param_2[1] - 1);
  return;
}


