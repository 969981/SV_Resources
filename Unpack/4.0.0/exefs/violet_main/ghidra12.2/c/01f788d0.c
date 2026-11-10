/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f788d0; name: FUN_01f788d0
 */


void FUN_01f788d0(ulong *param_1,long *param_2,char *param_3)

{
  size_t sVar1;
  long *plVar2;
  byte *pbVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar6 = *param_2;
  if (lVar6 == 0) goto LAB_01f789c4;
  sVar1 = strlen(param_3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 01f78a7c to 01f78a83 has its CatchHandler @ 01f78a90 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar1 << 1));
    pvVar4 = (void *)((ulong)&local_78 | 1);
    if (sVar1 != 0) goto LAB_01f78950;
  }
  else {
    uVar5 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    local_78 = uVar5 | 1;
    local_70 = sVar1;
    local_68 = pvVar4;
LAB_01f78950:
    memcpy(pvVar4,param_3,sVar1);
  }
  *(undefined1 *)((long)pvVar4 + sVar1) = 0;
  local_38 = &local_78;
                    /* try { // try from 01f78970 to 01f7897f has its CatchHandler @ 01f78a98 */
  FUN_0025998c(local_60,*(undefined8 *)(lVar6 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  if (local_60[0] == 0) {
LAB_01f789c4:
    uVar5 = FUN_01cf7e20();
    param_1[2] = 0;
    param_1[3] = uVar5;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(int *)(*(long *)(local_60[0] + 8) + 0x34) == 7) {
    pbVar3 = *(byte **)(*(long *)(local_60[0] + 8) + 0x28);
    if ((*pbVar3 & 1) != 0) goto LAB_01f789bc;
LAB_01f789e4:
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = PTR_DAT_047cba80;
    if ((*PTR_DAT_047cba80 & 1) == 0) goto LAB_01f789e4;
LAB_01f789bc:
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  sVar1 = strlen((char *)pbVar3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 01f78a84 to 01f78a8b has its CatchHandler @ 01f78a8c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar1 << 1);
    if (sVar1 == 0) goto LAB_01f78a60;
  }
  else {
    uVar5 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    param_1[1] = sVar1;
    param_1[2] = (ulong)pvVar4;
    *param_1 = uVar5 | 1;
  }
  memcpy(pvVar4,pbVar3,sVar1);
LAB_01f78a60:
  *(undefined1 *)((long)pvVar4 + sVar1) = 0;
  return;
}


