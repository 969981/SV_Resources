/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015712b8; name: FUN_015712b8
 */


void FUN_015712b8(long *param_1,void *param_2)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  size_t __nmemb;
  __compar_fn_t __compar;
  ulong uVar6;
  ulong uVar7;
  void *__base;
  
  bVar3 = *(byte *)(param_1 + 1);
  uVar6 = (ulong)bVar3;
  puVar1 = (ulong *)(*param_1 + uVar6 * -3);
  if (uVar6 < 4) {
    if (1 < bVar3) {
      __base = (void *)((long)puVar1 - (ulong)(ushort)*puVar1);
      uVar6 = (ulong)*(ushort *)((long)puVar1 + uVar6);
      goto LAB_015712f8;
    }
    uVar7 = (ulong)(byte)*puVar1;
  }
  else {
    if (bVar3 < 8) {
      __base = (void *)((long)puVar1 - (ulong)(uint)*puVar1);
      uVar6 = (ulong)*(uint *)((long)puVar1 + uVar6);
      goto LAB_015712f8;
    }
    uVar7 = *puVar1;
  }
  uVar6 = (ulong)*(byte *)((long)puVar1 + uVar6);
  __base = (void *)((long)puVar1 - uVar7);
LAB_015712f8:
  uVar2 = (uint)uVar6 & 0xff;
  lVar4 = -(uVar6 & 0xff);
  uVar7 = uVar6 & 0xff;
  if (uVar2 < 4) {
    if (uVar2 < 2) {
      __nmemb = (size_t)*(byte *)((long)__base + lVar4);
    }
    else {
      __nmemb = (size_t)*(ushort *)((long)__base + lVar4);
    }
  }
  else if (uVar2 < 8) {
    __nmemb = (size_t)*(uint *)((long)__base + lVar4);
  }
  else {
    __nmemb = *(size_t *)((long)__base + lVar4);
  }
  uVar2 = (uint)uVar6 - 1;
  if ((uVar2 & 0xff) < 8) {
    __compar = (__compar_fn_t)(&PTR_LAB_045e7f38)[(char)uVar2];
  }
  else {
    __compar = (__compar_fn_t)0x0;
  }
  pvVar5 = bsearch(param_2,__base,__nmemb,uVar7,__compar);
  if (pvVar5 != (void *)0x0) {
    lVar4 = 0;
    if (uVar7 != 0) {
      lVar4 = ((long)pvVar5 - (long)__base) / (long)uVar7;
    }
    FUN_01573894(param_1,lVar4);
  }
  return;
}


