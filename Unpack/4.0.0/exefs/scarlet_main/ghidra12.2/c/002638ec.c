/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002638ec; name: FUN_002638ec
 */


void FUN_002638ec(ulong *param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *__dest;
  long lVar6;
  ulong __n;
  ulong uVar7;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    lVar6 = FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (lVar6 != 0) {
                    /* try { // try from 0026395c to 00263967 has its CatchHandler @ 00263a28 */
      FUN_00267c98(lVar6,0);
    }
    *param_2 = lVar6;
    iVar3 = *(int *)(lVar6 + 0x1c);
    if (iVar3 == 8) goto LAB_00263910;
LAB_00263978:
    pbVar5 = PTR_DAT_047cba80;
    if ((*PTR_DAT_047cba80 & 1) != 0) goto LAB_0026391c;
LAB_00263988:
    pbVar5 = pbVar5 + 1;
    if (iVar3 != 8) goto LAB_00263928;
LAB_00263994:
    pbVar4 = *(byte **)(lVar6 + 0x10);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_00263938;
LAB_002639a0:
    __n = (ulong)(bVar1 >> 1);
  }
  else {
    iVar3 = *(int *)(lVar6 + 0x1c);
    if (iVar3 != 8) goto LAB_00263978;
LAB_00263910:
    pbVar5 = *(byte **)(lVar6 + 0x10);
    if ((*pbVar5 & 1) == 0) goto LAB_00263988;
LAB_0026391c:
    pbVar5 = *(byte **)(pbVar5 + 0x10);
    if (iVar3 == 8) goto LAB_00263994;
LAB_00263928:
    bVar1 = *PTR_DAT_047cba80;
    pbVar4 = PTR_DAT_047cba80;
    if ((bVar1 & 1) == 0) goto LAB_002639a0;
LAB_00263938:
    __n = *(ulong *)(pbVar4 + 8);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00263a1c to 00263a23 has its CatchHandler @ 00263a24 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined1 *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00263a08;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined1 *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar7,1);
    param_1[1] = __n;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar7 | 1;
  }
  memcpy(__dest,pbVar5,__n);
LAB_00263a08:
  __dest[__n] = 0;
  return;
}


