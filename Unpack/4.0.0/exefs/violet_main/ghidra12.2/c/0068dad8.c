/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068dad8; name: FUN_0068dad8
 */


undefined1 * FUN_0068dad8(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *__src_00;
  size_t sVar10;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto joined_r0x0068dd94;
    FUN_00532960(pbVar8 + 1,bVar2 >> 1);
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_0068db48;
LAB_0068db1c:
    sVar10 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar10 < 0x80) goto LAB_0068db4c;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x0068dd94;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_0068db1c;
LAB_0068db48:
    sVar10 = (size_t)(bVar2 >> 1);
LAB_0068db4c:
    if ((long)sVar10 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)sVar10;
      __src_00 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        __src_00 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar10);
      param_2 = param_2 + 2 + sVar10;
      goto joined_r0x0068dd94;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
joined_r0x0068dd94:
  if (param_1 != PTR_DAT_047cf618) {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar5 = *(long *)(param_1 + 0x18);
      }
      *param_2 = 0x12;
      uVar1 = *(uint *)(lVar5 + 0x28);
      if (uVar1 < 0x80) {
        param_2[1] = (byte)uVar1;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          param_2[2] = (char)(uVar1 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar1 = uVar1 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar1 >> 7;
            puVar6[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_0026a5b8(lVar5,param_2,param_3);
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar5 = *(long *)(param_1 + 0x20);
      }
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar5 + 0x1c);
      if (uVar1 < 0x80) {
        param_2[1] = (byte)uVar1;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          param_2[2] = (char)(uVar1 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar1 = uVar1 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar1 >> 7;
            puVar6[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_00513f18(lVar5,param_2,param_3);
    }
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar5 = *(long *)(param_1 + 0x28);
      }
      *param_2 = 0x22;
      uVar1 = *(uint *)(lVar5 + 0x1c);
      if (uVar1 < 0x80) {
        param_2[1] = (byte)uVar1;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar1 | 0x80;
        if (uVar1 >> 0xe == 0) {
          param_2[2] = (char)(uVar1 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar1 = uVar1 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar1 >> 7;
            puVar6[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_00513f18(lVar5,param_2,param_3);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar10 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar10) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar10);
    param_2 = param_2 + sVar10;
  }
  return param_2;
}


