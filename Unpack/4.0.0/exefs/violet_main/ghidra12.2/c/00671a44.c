/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00671a44; name: FUN_00671a44
 */


void FUN_00671a44(undefined8 *param_1,byte *param_2)

{
  size_t __n;
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  void *__dest;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_60;
  size_t local_58;
  void *local_50;
  long *plStack_48;
  
  bVar2 = *param_2;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_00671a7c:
      if ((param_2[0x20] & 1) == 0) {
        if (param_2[0x20] >> 1 == 0) {
LAB_00671b90:
          uVar5 = FUN_01cf7e20();
          param_1[2] = 0;
          param_1[3] = uVar5;
          *param_1 = 0;
          param_1[1] = 0;
          return;
        }
      }
      else if (*(long *)(param_2 + 0x28) == 0) goto LAB_00671b90;
    }
  }
  else if (*(long *)(param_2 + 8) == 0) goto LAB_00671a7c;
  pbVar1 = *(byte **)(param_2 + 0x10);
  plStack_48 = *(long **)(param_2 + 0x18);
  local_50 = (void *)0x0;
  bVar3 = (bVar2 & 1) != 0;
  local_60 = 0;
  local_58 = 0;
  __n = (ulong)(bVar2 >> 1);
  if (bVar3) {
    __n = *(size_t *)(param_2 + 8);
  }
  if (!bVar3) {
    pbVar1 = param_2 + 1;
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* try { // try from 00671bb4 to 00671bbb has its CatchHandler @ 00671bc0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n + 1 < 0x17) {
    local_60 = (ulong)(byte)((int)__n << 1);
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_00671b14;
  }
  else {
    uVar6 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plStack_48 + 0x10))(plStack_48,uVar6,1);
    local_60 = uVar6 | 1;
    local_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,pbVar1,__n);
LAB_00671b14:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 00671b18 to 00671b2b has its CatchHandler @ 00671bc0 */
  FUN_0020f8d0(&local_60,&DAT_03bdfb3b,1);
  uVar6 = (ulong)(param_2[0x20] >> 1);
  pbVar1 = param_2 + 0x21;
  if ((param_2[0x20] & 1) != 0) {
    uVar6 = *(ulong *)(param_2 + 0x28);
    pbVar1 = *(byte **)(param_2 + 0x30);
  }
                    /* try { // try from 00671b48 to 00671b4f has its CatchHandler @ 00671bbc */
  puVar4 = (undefined8 *)FUN_0020f8d0(&local_60,pbVar1,uVar6);
  uVar5 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  param_1[1] = puVar4[1];
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))(plStack_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  return;
}


