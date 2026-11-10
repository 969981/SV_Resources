/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005efae0; name: FUN_005efae0
 */


long * FUN_005efae0(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  void *__s2;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)(param_1 + 8);
  plVar7 = (long *)*plVar6;
  if (plVar7 == (long *)0x0) {
    *param_2 = plVar6;
    return plVar6;
  }
  uVar5 = (ulong)(*param_3 >> 1);
  __s1 = *(byte **)(param_3 + 0x10);
  plVar6 = (long *)(param_1 + 8);
  if ((*param_3 & 1) == 0) {
    __s1 = param_3 + 1;
  }
  else {
    uVar5 = *(ulong *)(param_3 + 8);
  }
  do {
    bVar2 = *(byte *)(plVar7 + 4);
    uVar1 = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      uVar1 = plVar7[5];
    }
    __n = uVar1;
    if (uVar5 <= uVar1) {
      __n = uVar5;
    }
    if (__n == 0) {
      if (uVar5 < uVar1) goto LAB_005efb9c;
LAB_005efb24:
      if (uVar5 <= uVar1) {
LAB_005efbc4:
        *param_2 = plVar7;
        return plVar6;
      }
LAB_005efb2c:
      plVar6 = plVar7 + 1;
      plVar4 = (long *)*plVar6;
      if (plVar4 == (long *)0x0) goto LAB_005efbc4;
    }
    else {
      __s2 = (void *)plVar7[6];
      if ((bVar2 & 1) == 0) {
        __s2 = (void *)((long)plVar7 + 0x21);
      }
      iVar3 = memcmp(__s1,__s2,__n);
      if (iVar3 == 0) {
        if (uVar1 <= uVar5) goto LAB_005efbac;
      }
      else if (-1 < iVar3) {
LAB_005efbac:
        iVar3 = memcmp(__s2,__s1,__n);
        if (iVar3 == 0) goto LAB_005efb24;
        if (iVar3 < 0) goto LAB_005efb2c;
        goto LAB_005efbc4;
      }
LAB_005efb9c:
      plVar4 = (long *)*plVar7;
      if (plVar4 == (long *)0x0) {
        *param_2 = plVar7;
        return plVar7;
      }
      plVar6 = plVar7;
    }
    plVar7 = plVar4;
  } while( true );
}


