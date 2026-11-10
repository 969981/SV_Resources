/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00506b60; name: FUN_00506b60
 */


void FUN_00506b60(ulong *param_1,ulong *param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  undefined1 *__dest;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulong local_50;
  void *local_48;
  
  if ((*param_2 & 1) == 0) {
    uVar6 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar6;
    *param_1 = uVar4;
    if (*(char *)((long)param_3 + 0x43) == '\0') goto LAB_00506c4c;
LAB_00506ba0:
                    /* try { // try from 00506ba0 to 00506beb has its CatchHandler @ 00506ddc */
    FUN_0021d540(param_1,&DAT_03c75324,1);
    pbVar3 = (byte *)param_3[1];
    uVar4 = *(ulong *)(pbVar3 + 8);
    pbVar1 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar1 = pbVar3 + 1;
      uVar4 = (ulong)(*pbVar3 >> 1);
    }
    FUN_0021d540(param_1,pbVar1,uVar4);
    FUN_0021d540(param_1,&DAT_03c8f4f1,1);
  }
  else {
    uVar4 = param_2[1];
    pvVar5 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      param_1[1] = uVar4;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar6 | 1;
    }
    memcpy(__dest,pvVar5,uVar4 + 1);
    if (*(char *)((long)param_3 + 0x43) != '\0') goto LAB_00506ba0;
LAB_00506c4c:
    pbVar3 = (byte *)*param_3;
    uVar4 = *(ulong *)(pbVar3 + 8);
    pbVar1 = *(byte **)(pbVar3 + 0x10);
    if ((*pbVar3 & 1) == 0) {
      pbVar1 = pbVar3 + 1;
      uVar4 = (ulong)(*pbVar3 >> 1);
    }
                    /* try { // try from 00506c68 to 00506c8b has its CatchHandler @ 00506ddc */
    FUN_0021d540(param_1,pbVar1,uVar4);
  }
  if (param_4 == -1) goto LAB_00506d64;
  FUN_0021d540(param_1,&DAT_03be62d9,1);
                    /* try { // try from 00506c98 to 00506ca3 has its CatchHandler @ 00506da0 */
  lVar2 = FUN_00533400(param_4,auStack_78);
  uVar4 = lVar2 - (long)auStack_78;
  if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00506d90 to 00506d97 has its CatchHandler @ 00506da0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar4 < 0x17) {
    local_58 = CONCAT71(local_58._1_7_,(char)((int)uVar4 << 1));
    pvVar5 = (void *)((ulong)&local_58 | 1);
    if (uVar4 != 0) goto LAB_00506d04;
  }
  else {
    uVar6 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_58 = uVar6 | 1;
    local_50 = uVar4;
    local_48 = pvVar5;
LAB_00506d04:
    memcpy(pvVar5,auStack_78,uVar4);
  }
  *(undefined1 *)((long)pvVar5 + uVar4) = 0;
  if ((local_58 & 1) == 0) {
    uVar4 = local_58 >> 1 & 0x7f;
    pvVar5 = (void *)((long)&local_58 + 1);
  }
  else {
    uVar4 = local_50;
    pvVar5 = local_48;
  }
                    /* try { // try from 00506d30 to 00506d37 has its CatchHandler @ 00506da4 */
  FUN_0021d540(param_1,pvVar5,uVar4);
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
                    /* try { // try from 00506d50 to 00506d77 has its CatchHandler @ 00506ddc */
  FUN_0021d540(param_1,&DAT_03c246fd,1);
LAB_00506d64:
  FUN_0021d540(param_1,&DAT_03bdface,1);
  return;
}


