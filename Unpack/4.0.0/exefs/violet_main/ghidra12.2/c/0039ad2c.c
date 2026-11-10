/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039ad2c; name: FUN_0039ad2c
 */


void FUN_0039ad2c(long *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *__s1;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong __n;
  ulong uVar6;
  void *__dest;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    __s1 = param_2 + 1;
    if (bVar1 < 10) {
      uVar6 = (ulong)(bVar1 >> 1);
      goto LAB_0039ad6c;
    }
LAB_0039ad74:
    uVar6 = 5;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    if (4 < uVar6) goto LAB_0039ad74;
LAB_0039ad6c:
    if (uVar6 == 0) goto LAB_0039adac;
  }
  iVar2 = memcmp(__s1,"libc:",uVar6);
  if ((uVar6 < 5) || (iVar2 != 0)) {
LAB_0039adac:
    plVar3 = (long *)FUN_0049e770(PTR_FUN_047cba38,0xa8);
    if (plVar3 != (long *)0x0) {
      plVar3[10] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
      plVar3[7] = 0;
      plVar3[0xc] = 0;
      plVar3[0xb] = 0;
      plVar3[0xe] = 0;
      plVar3[0xd] = 0;
      plVar3[0x10] = 0;
      plVar3[0xf] = 0;
      plVar3[0x12] = 0;
      plVar3[0x11] = 0;
      *plVar3 = (long)(PTR_DAT_047cd058 + 0x10);
      plVar3[0x10] = 0;
      plVar3[2] = 0;
      plVar3[1] = 0;
      plVar3[4] = 0;
      plVar3[3] = 0;
      plVar3[6] = 0;
      plVar3[5] = 0;
      plVar3[0x13] = 0;
      plVar3[0x14] = 0;
      plVar3[9] = 0;
      plVar3[8] = 0;
      plVar3[0xb] = 0;
      plVar3[10] = 0;
      plVar3[0xd] = 0;
      plVar3[0xc] = 0;
      plVar3[0xf] = 0;
      plVar3[0xe] = 0;
    }
                    /* try { // try from 0039ae0c to 0039ae17 has its CatchHandler @ 0039af54 */
    uVar6 = FUN_0039d020(plVar3,param_2);
    plVar5 = plVar3;
    if ((uVar6 & 1) == 0) {
      plVar5 = (long *)0x0;
    }
    if ((uVar6 & 1) == 0 && plVar3 != (long *)0x0) {
      (**(code **)*plVar3)(plVar3);
      FUN_0049e790(PTR_LAB_047cba48,plVar3);
      plVar5 = (long *)0x0;
    }
    *param_1 = (long)plVar5;
    return;
  }
  if ((bVar1 & 1) == 0) {
    if (bVar1 < 10) {
LAB_0039af28:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_out_of_range();
    }
    uVar6 = (ulong)(bVar1 >> 1);
    param_2 = param_2 + 1;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 8);
    if (uVar6 < 5) goto LAB_0039af28;
    param_2 = *(byte **)(param_2 + 0x10);
  }
  __n = uVar6 - 5;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (__n == 0) goto LAB_0039aed0;
  }
  else {
    uVar6 = uVar6 + 0xb & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_48 = uVar6 | 1;
    local_40 = __n;
    local_38 = __dest;
  }
  memcpy(__dest,param_2 + 5,__n);
LAB_0039aed0:
  *(undefined1 *)((long)__dest + __n) = 0;
  lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x10);
  if (lVar4 != 0) {
                    /* try { // try from 0039aeec to 0039aef7 has its CatchHandler @ 0039af38 */
    FUN_0039fb40(lVar4,&local_48);
  }
  *param_1 = lVar4;
  if ((local_48 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_38);
  return;
}


