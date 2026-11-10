/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b10a04; name: FUN_00b10a04
 */


void FUN_00b10a04(long param_1,long param_2,long *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined8 local_58;
  int local_38;
  undefined4 local_34;
  
  cVar6 = *(char *)(param_2 + 0xb68);
  bVar8 = FUN_02adbf5c();
  lVar10 = *param_3;
  if (lVar10 != 0) {
    bVar8 = cVar6 != '\0' & bVar8;
    lVar9 = FUN_0111b030(bVar8);
    if ((ulong)(*(long *)(lVar10 + 0x18) + lVar9) <= *(ulong *)(lVar10 + 0x10)) {
      *(byte *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18)) = bVar8;
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
    }
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x48) + 0x10), lVar10 == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = FUN_00ea2b08(lVar10 + -0x28);
  }
  lVar10 = *param_3;
  bVar8 = bVar8 & 1;
  if (lVar10 != 0) {
    lVar9 = FUN_0111b030(bVar8);
    if ((ulong)(*(long *)(lVar10 + 0x18) + lVar9) <= *(ulong *)(lVar10 + 0x10)) {
      *(byte *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18)) = bVar8;
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
    }
  }
  if (bVar8 != 0) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(param_2 + 0xb3c);
      lVar9 = FUN_0111b030(uVar7);
      if ((ulong)(*(long *)(lVar10 + 0x18) + lVar9) <= *(ulong *)(lVar10 + 0x10)) {
        *(undefined1 *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18)) = uVar7;
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
      }
      lVar10 = *param_3;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x18) + 0xeU <= *(ulong *)(lVar10 + 0x10))) {
        uVar2 = *(undefined4 *)(param_2 + 0xb58);
        uVar3 = *(undefined4 *)(param_2 + 0xb5c);
        uVar4 = *(undefined4 *)(param_2 + 0xb60);
        *(undefined1 *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18)) = 0xbc;
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
        local_58 = 0xc;
        FUN_0111b0ac(&local_38,&local_58,lVar10 + 8);
        if (local_38 == 0) {
          puVar1 = (undefined4 *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18));
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 0xc;
        }
        else {
          local_38 = 0;
        }
        lVar10 = *param_3;
      }
    }
    if (lVar10 != 0) {
      if (*(ulong *)(lVar10 + 0x10) < *(long *)(lVar10 + 0x18) + 0x12U) {
        local_38 = *(int *)(param_2 + 0xb40);
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0xb44);
        uVar3 = *(undefined4 *)(param_2 + 0xb48);
        uVar4 = *(undefined4 *)(param_2 + 0xb4c);
        uVar5 = *(undefined4 *)(param_2 + 0xb50);
        *(undefined1 *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18)) = 0xbc;
        *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
        local_58 = 0x10;
        FUN_0111b0ac(&local_38,&local_58,lVar10 + 8);
        if (local_38 == 0) {
          puVar1 = (undefined4 *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x18));
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 0x10;
        }
        lVar10 = *param_3;
        local_38 = *(int *)(param_2 + 0xb40);
        if (lVar10 == 0) {
          return;
        }
      }
      FUN_01e62d14(&local_58,&local_38,lVar10 + 8);
      local_34 = *(undefined4 *)(param_2 + 0xb64);
      if (*param_3 != 0) {
        FUN_01e62d14(&local_58,&local_34,*param_3 + 8);
      }
    }
  }
  return;
}


