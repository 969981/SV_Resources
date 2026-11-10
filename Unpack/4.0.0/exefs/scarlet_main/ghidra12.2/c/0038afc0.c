/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038afc0; name: FUN_0038afc0
 */


undefined8 FUN_0038afc0(long *param_1,void *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  void *__dest;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  size_t __n;
  ulong uVar8;
  ulong uVar9;
  
  puVar7 = (ulong *)*param_1;
  if (puVar7 == (ulong *)0x0) {
    puVar7 = *(ulong **)(param_4 + 8);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar7) < 0x20) {
      puVar7 = (ulong *)FUN_0038bad0(param_4,0x20);
    }
    else {
      *(ulong **)(param_4 + 8) = puVar7 + 4;
    }
    if (puVar7 != (ulong *)0x0) {
      *puVar7 = (ulong)(byte)(&DAT_03cdb73a)[param_3 & 0xffffffff];
      puVar7[1] = 0;
      puVar7[2] = 0;
      *param_1 = (long)puVar7;
    }
  }
  if (puVar7 == (ulong *)0x0) {
LAB_0038b124:
    uVar6 = 0;
  }
  else {
    uVar2 = puVar7[1];
    uVar4 = puVar7[2];
    uVar1 = uVar2 + 1;
    if (uVar4 < uVar1) {
      uVar8 = *puVar7;
      uVar9 = uVar4;
      if (uVar4 < 5) {
        uVar9 = 4;
      }
      do {
        uVar5 = uVar9;
        uVar9 = uVar5 << 1;
      } while (uVar5 < uVar1);
      uVar9 = uVar8 & 7;
      __n = uVar4 << uVar9;
      uVar4 = (uVar5 << uVar9) + 0xf & 0xfffffffffffffff0;
      __dest = *(void **)(param_4 + 8);
      if ((ulong)(*(long *)(param_4 + 0x10) - (long)__dest) < uVar4) {
        __dest = (void *)FUN_0038bad0(param_4);
        if (__n != 0) goto LAB_0038b088;
LAB_0038b0e8:
        if (__dest == (void *)0x0) goto LAB_0038b124;
      }
      else {
        *(ulong *)(param_4 + 8) = (long)__dest + uVar4;
        if (__n == 0) goto LAB_0038b0e8;
LAB_0038b088:
        if (__dest == (void *)0x0) goto LAB_0038b0e8;
        memcpy(__dest,(void *)(uVar8 & 0xfffffffffffffff8),__n);
      }
      uVar9 = uVar9 | (ulong)__dest;
      *puVar7 = uVar9;
      puVar7[2] = uVar5;
    }
    else {
      uVar9 = *puVar7;
    }
    bVar3 = (&DAT_03cdb73a)[param_3 & 0xffffffff];
    uVar6 = 1;
    puVar7[1] = uVar1;
    memcpy((void *)((uVar9 & 0xfffffffffffffff8) + (uVar2 << ((ulong)bVar3 & 0x3f))),param_2,
           (long)(1 << (ulong)(bVar3 & 0x1f)));
  }
  return uVar6;
}


