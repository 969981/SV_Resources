/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00616de8; name: FUN_00616de8
 */


void FUN_00616de8(long *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  byte *__src;
  size_t __n;
  
  pbVar5 = (byte *)(**(code **)(*param_1 + 0x70))();
  if (param_2 < (undefined1 *)*param_3) {
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) goto LAB_00616e28;
LAB_00616e48:
    __n = *(size_t *)(pbVar5 + 8);
    if ((long)__n < 0x80) goto LAB_00616e54;
  }
  else {
    param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) != 0) goto LAB_00616e48;
LAB_00616e28:
    __n = (size_t)(bVar2 >> 1);
LAB_00616e54:
    if ((long)__n <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)__n;
      __src = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        __src = pbVar5 + 1;
      }
      memcpy(param_2 + 2,__src,__n);
      puVar7 = param_2 + 2 + __n;
      goto LAB_00616e98;
    }
  }
  puVar7 = (undefined1 *)FUN_0052cbdc(param_3,1,pbVar5,param_2);
LAB_00616e98:
  lVar6 = (**(code **)(*param_1 + 0x78))(param_1);
  if ((undefined1 *)*param_3 <= puVar7) {
    puVar7 = (undefined1 *)FUN_0052c6d8(param_3,puVar7);
  }
  *puVar7 = 0x12;
  uVar1 = *(uint *)(lVar6 + 0x1c);
  if (uVar1 < 0x80) {
    puVar7[1] = (byte)uVar1;
    puVar7 = puVar7 + 2;
  }
  else {
    puVar7[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe == 0) {
      puVar7[2] = (char)(uVar1 >> 7);
      puVar7 = puVar7 + 3;
    }
    else {
      puVar7 = puVar7 + 3;
      uVar1 = uVar1 >> 7;
      do {
        puVar8 = puVar7;
        uVar3 = uVar1 >> 7;
        puVar8[-1] = (byte)uVar1 | 0x80;
        puVar7 = puVar8 + 1;
        uVar4 = uVar1 >> 0xe;
        uVar1 = uVar3;
      } while (uVar4 != 0);
      *puVar8 = (char)uVar3;
    }
  }
  FUN_004eb338(lVar6,puVar7,param_3);
  return;
}


